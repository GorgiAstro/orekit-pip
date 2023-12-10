#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *ModifiedLambdaMethod::class$ = NULL;
          jmethodID *ModifiedLambdaMethod::mids$ = NULL;
          bool ModifiedLambdaMethod::live$ = false;

          jclass ModifiedLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_sign_dcbc7ce2902fa136] = env->getMethodID(cls, "sign", "(D)D");
              mids$[mid_ltdlDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0fa09c18fee449d5] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_0fa09c18fee449d5] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_inverseDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "inverseDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedLambdaMethod::ModifiedLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifiedLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_ModifiedLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedLambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedLambdaMethod)[] = {
            { Py_tp_methods, t_ModifiedLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_ModifiedLambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(ModifiedLambdaMethod, t_ModifiedLambdaMethod, ModifiedLambdaMethod);

          void t_ModifiedLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedLambdaMethod), &PY_TYPE_DEF(ModifiedLambdaMethod), module, "ModifiedLambdaMethod", 0);
          }

          void t_ModifiedLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "class_", make_descriptor(ModifiedLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "wrapfn_", make_descriptor(t_ModifiedLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_ModifiedLambdaMethod::wrap_Object(ModifiedLambdaMethod(((t_ModifiedLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            ModifiedLambdaMethod object((jobject) NULL);

            INT_CALL(object = ModifiedLambdaMethod());
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
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IgnoreDEMAlgorithm::class$ = NULL;
        jmethodID *IgnoreDEMAlgorithm::mids$ = NULL;
        bool IgnoreDEMAlgorithm::live$ = false;

        jclass IgnoreDEMAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IgnoreDEMAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_86ffecc08a63eff0] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_943aab8456e3784b] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_860353a3ab3d03aa] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IgnoreDEMAlgorithm::IgnoreDEMAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::rugged::api::AlgorithmId IgnoreDEMAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
        }

        jdouble IgnoreDEMAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_86ffecc08a63eff0], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_943aab8456e3784b], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_860353a3ab3d03aa], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self);
        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data);
        static PyGetSetDef t_IgnoreDEMAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IgnoreDEMAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IgnoreDEMAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IgnoreDEMAlgorithm)[] = {
          { Py_tp_methods, t_IgnoreDEMAlgorithm__methods_ },
          { Py_tp_init, (void *) t_IgnoreDEMAlgorithm_init_ },
          { Py_tp_getset, t_IgnoreDEMAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IgnoreDEMAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IgnoreDEMAlgorithm, t_IgnoreDEMAlgorithm, IgnoreDEMAlgorithm);

        void t_IgnoreDEMAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IgnoreDEMAlgorithm), &PY_TYPE_DEF(IgnoreDEMAlgorithm), module, "IgnoreDEMAlgorithm", 0);
        }

        void t_IgnoreDEMAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "class_", make_descriptor(IgnoreDEMAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "wrapfn_", make_descriptor(t_IgnoreDEMAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IgnoreDEMAlgorithm::wrap_Object(IgnoreDEMAlgorithm(((t_IgnoreDEMAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          IgnoreDEMAlgorithm object((jobject) NULL);

          INT_CALL(object = IgnoreDEMAlgorithm());
          self->object = object;

          return 0;
        }

        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianOrbit::class$ = NULL;
      jmethodID *KeplerianOrbit::mids$ = NULL;
      bool KeplerianOrbit::live$ = false;

      jclass KeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7753eee512deef45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_17efd10b0f16bc37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_e66c4b38c78e70c5] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6d75b48985bb90e6] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAnomaly_2152aeb78bde0282] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAnomalyDot_2152aeb78bde0282] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEccentricAnomaly_dff5885c2c873297] = env->getMethodID(cls, "getEccentricAnomaly", "()D");
          mids$[mid_getEccentricAnomalyDot_dff5885c2c873297] = env->getMethodID(cls, "getEccentricAnomalyDot", "()D");
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
          mids$[mid_getMeanAnomaly_dff5885c2c873297] = env->getMethodID(cls, "getMeanAnomaly", "()D");
          mids$[mid_getMeanAnomalyDot_dff5885c2c873297] = env->getMethodID(cls, "getMeanAnomalyDot", "()D");
          mids$[mid_getPerigeeArgument_dff5885c2c873297] = env->getMethodID(cls, "getPerigeeArgument", "()D");
          mids$[mid_getPerigeeArgumentDot_dff5885c2c873297] = env->getMethodID(cls, "getPerigeeArgumentDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_dff5885c2c873297] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getTrueAnomaly_dff5885c2c873297] = env->getMethodID(cls, "getTrueAnomaly", "()D");
          mids$[mid_getTrueAnomalyDot_dff5885c2c873297] = env->getMethodID(cls, "getTrueAnomalyDot", "()D");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_3b8c2ada972e4fd7] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_shiftedBy_dfc12e553ee01b99] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/KeplerianOrbit;");
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

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7753eee512deef45, a0.this$, a1.this$, a2)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17efd10b0f16bc37, a0.this$, a1.this$, a2.this$, a3)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e66c4b38c78e70c5, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6d75b48985bb90e6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void KeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2365c7dd61a1cda], a0.this$, a1, a2.this$);
      }

      jdouble KeplerianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomaly_2152aeb78bde0282], a0.this$);
      }

      jdouble KeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomalyDot_2152aeb78bde0282], a0.this$);
      }

      ::org::orekit::orbits::PositionAngleType KeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      jdouble KeplerianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEccentricAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomaly_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEccentricAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomalyDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getMeanAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getMeanAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getPerigeeArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getPerigeeArgumentDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgumentDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getTrueAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomaly_dff5885c2c873297]);
      }

      jdouble KeplerianOrbit::getTrueAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomalyDot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::OrbitType KeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean KeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      KeplerianOrbit KeplerianOrbit::removeRates() const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_3b8c2ada972e4fd7]));
      }

      KeplerianOrbit KeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_dfc12e553ee01b99], a0));
      }

      ::java::lang::String KeplerianOrbit::toString() const
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
      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data);
      static PyGetSetDef t_KeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_KeplerianOrbit, a),
        DECLARE_GET_FIELD(t_KeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_KeplerianOrbit, e),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, i),
        DECLARE_GET_FIELD(t_KeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_KeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianOrbit)[] = {
        { Py_tp_methods, t_KeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_KeplerianOrbit_init_ },
        { Py_tp_getset, t_KeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(KeplerianOrbit, t_KeplerianOrbit, KeplerianOrbit);

      void t_KeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianOrbit), &PY_TYPE_DEF(KeplerianOrbit), module, "KeplerianOrbit", 0);
      }

      void t_KeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "class_", make_descriptor(KeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "wrapfn_", make_descriptor(t_KeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_KeplerianOrbit::wrap_Object(KeplerianOrbit(((t_KeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = KeplerianOrbit(a0));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args)
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

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self)
      {
        KeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_KeplerianOrbit::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble a0;
        KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AltCovarianceType::class$ = NULL;
            jmethodID *AltCovarianceType::mids$ = NULL;
            bool AltCovarianceType::live$ = false;
            AltCovarianceType *AltCovarianceType::CSIG3EIGVEC3 = NULL;
            AltCovarianceType *AltCovarianceType::XYZ = NULL;

            jclass AltCovarianceType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AltCovarianceType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_902f1dc2de4091ab] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_values_dbd550971d8c697f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CSIG3EIGVEC3 = new AltCovarianceType(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                XYZ = new AltCovarianceType(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AltCovarianceType AltCovarianceType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AltCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_902f1dc2de4091ab], a0.this$));
            }

            JArray< AltCovarianceType > AltCovarianceType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AltCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_dbd550971d8c697f]));
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
            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args);
            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AltCovarianceType_values(PyTypeObject *type);
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data);
            static PyGetSetDef t_AltCovarianceType__fields_[] = {
              DECLARE_GET_FIELD(t_AltCovarianceType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AltCovarianceType__methods_[] = {
              DECLARE_METHOD(t_AltCovarianceType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AltCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AltCovarianceType)[] = {
              { Py_tp_methods, t_AltCovarianceType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AltCovarianceType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AltCovarianceType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AltCovarianceType, t_AltCovarianceType, AltCovarianceType);
            PyObject *t_AltCovarianceType::wrap_Object(const AltCovarianceType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AltCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AltCovarianceType::install(PyObject *module)
            {
              installType(&PY_TYPE(AltCovarianceType), &PY_TYPE_DEF(AltCovarianceType), module, "AltCovarianceType", 0);
            }

            void t_AltCovarianceType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "class_", make_descriptor(AltCovarianceType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "wrapfn_", make_descriptor(t_AltCovarianceType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AltCovarianceType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "CSIG3EIGVEC3", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::CSIG3EIGVEC3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "XYZ", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::XYZ)));
            }

            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AltCovarianceType::initializeClass, 1)))
                return NULL;
              return t_AltCovarianceType::wrap_Object(AltCovarianceType(((t_AltCovarianceType *) arg)->object.this$));
            }
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AltCovarianceType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AltCovarianceType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::valueOf(a0));
                return t_AltCovarianceType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AltCovarianceType_values(PyTypeObject *type)
            {
              JArray< AltCovarianceType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::values());
              return JArray<jobject>(result.this$).wrap(t_AltCovarianceType::wrap_jobject);
            }
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SsrVtecIonosphericModel::class$ = NULL;
          jmethodID *SsrVtecIonosphericModel::mids$ = NULL;
          bool SsrVtecIonosphericModel::live$ = false;

          jclass SsrVtecIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1c15ac86389b1fb5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SsrVtecIonosphericModel::SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c15ac86389b1fb5, a0.this$)) {}

          ::java::util::List SsrVtecIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self);
          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args);
          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data);
          static PyGetSetDef t_SsrVtecIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_SsrVtecIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SsrVtecIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_SsrVtecIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SsrVtecIonosphericModel)[] = {
            { Py_tp_methods, t_SsrVtecIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_SsrVtecIonosphericModel_init_ },
            { Py_tp_getset, t_SsrVtecIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SsrVtecIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SsrVtecIonosphericModel, t_SsrVtecIonosphericModel, SsrVtecIonosphericModel);

          void t_SsrVtecIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SsrVtecIonosphericModel), &PY_TYPE_DEF(SsrVtecIonosphericModel), module, "SsrVtecIonosphericModel", 0);
          }

          void t_SsrVtecIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "class_", make_descriptor(SsrVtecIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "wrapfn_", make_descriptor(t_SsrVtecIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SsrVtecIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_SsrVtecIonosphericModel::wrap_Object(SsrVtecIonosphericModel(((t_SsrVtecIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SsrVtecIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 a0((jobject) NULL);
            PyTypeObject **p0;
            SsrVtecIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201::initializeClass, &a0, &p0, ::org::orekit::gnss::metric::messages::ssr::subtype::t_SsrIm201::parameters_))
            {
              INT_CALL(object = SsrVtecIonosphericModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data)
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
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTrackingCoordinates::class$ = NULL;
      jmethodID *FieldTrackingCoordinates::mids$ = NULL;
      bool FieldTrackingCoordinates::live$ = false;

      jclass FieldTrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82fa7e789a6ae1f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getAzimuth_eba8e72a22c984ac] = env->getMethodID(cls, "getAzimuth", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_eba8e72a22c984ac] = env->getMethodID(cls, "getElevation", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_eba8e72a22c984ac] = env->getMethodID(cls, "getRange", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTrackingCoordinates::FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82fa7e789a6ae1f6, a0.this$, a1.this$, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getAzimuth() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getElevation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getRange() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_eba8e72a22c984ac]));
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
      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args);
      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data);
      static PyGetSetDef t_FieldTrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, range),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldTrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTrackingCoordinates)[] = {
        { Py_tp_methods, t_FieldTrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldTrackingCoordinates_init_ },
        { Py_tp_getset, t_FieldTrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTrackingCoordinates, t_FieldTrackingCoordinates, FieldTrackingCoordinates);
      PyObject *t_FieldTrackingCoordinates::wrap_Object(const FieldTrackingCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTrackingCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTrackingCoordinates), &PY_TYPE_DEF(FieldTrackingCoordinates), module, "FieldTrackingCoordinates", 0);
      }

      void t_FieldTrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "class_", make_descriptor(FieldTrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "wrapfn_", make_descriptor(t_FieldTrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldTrackingCoordinates::wrap_Object(FieldTrackingCoordinates(((t_FieldTrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldTrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAzimuth());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRange());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAzimuth());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRange());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation::class$ = NULL;
      jmethodID *HelmertTransformation::mids$ = NULL;
      bool HelmertTransformation::live$ = false;

      jclass HelmertTransformation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8555f4eafee7cf0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDD)V");
          mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HelmertTransformation::HelmertTransformation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8555f4eafee7cf0a, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)) {}

      ::org::orekit::time::AbsoluteDate HelmertTransformation::getEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
      }

      ::org::orekit::frames::StaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      ::org::orekit::frames::Transform HelmertTransformation::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform HelmertTransformation::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self);
      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data);
      static PyGetSetDef t_HelmertTransformation__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation, epoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, getEpoch, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation)[] = {
        { Py_tp_methods, t_HelmertTransformation__methods_ },
        { Py_tp_init, (void *) t_HelmertTransformation_init_ },
        { Py_tp_getset, t_HelmertTransformation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation, t_HelmertTransformation, HelmertTransformation);

      void t_HelmertTransformation::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation), &PY_TYPE_DEF(HelmertTransformation), module, "HelmertTransformation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "Predefined", make_descriptor(&PY_TYPE_DEF(HelmertTransformation$Predefined)));
      }

      void t_HelmertTransformation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "class_", make_descriptor(HelmertTransformation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "wrapfn_", make_descriptor(t_HelmertTransformation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation::wrap_Object(HelmertTransformation(((t_HelmertTransformation *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        HelmertTransformation object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
        {
          INT_CALL(object = HelmertTransformation(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args)
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

      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args)
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

      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap$Iterator::mids$ = NULL;
      bool OpenIntToFieldHashMap$Iterator::live$ = false;

      jclass OpenIntToFieldHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_0fa09c18fee449d5] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_b108b35ef48e27bd] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_570ce0828f81a2c1] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_99097cb60cf2d774] = env->getMethodID(cls, "value", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToFieldHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_0fa09c18fee449d5]);
      }

      jboolean OpenIntToFieldHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_b108b35ef48e27bd]);
      }

      jint OpenIntToFieldHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_570ce0828f81a2c1]);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap$Iterator::value() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_value_99097cb60cf2d774]));
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
      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap$Iterator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OpenIntToFieldHashMap$Iterator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap$Iterator, t_OpenIntToFieldHashMap$Iterator, OpenIntToFieldHashMap$Iterator);
      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_Object(const OpenIntToFieldHashMap$Iterator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap$Iterator), &PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator), module, "OpenIntToFieldHashMap$Iterator", 0);
      }

      void t_OpenIntToFieldHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "class_", make_descriptor(OpenIntToFieldHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap$Iterator::wrap_Object(OpenIntToFieldHashMap$Iterator(((t_OpenIntToFieldHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.value());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AccurateFormatter.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AccurateFormatter::class$ = NULL;
      jmethodID *AccurateFormatter::mids$ = NULL;
      bool AccurateFormatter::live$ = false;
      ::java::util::Locale *AccurateFormatter::STANDARDIZED_LOCALE = NULL;

      jclass AccurateFormatter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AccurateFormatter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_e8f51f84167aafbd] = env->getStaticMethodID(cls, "format", "(D)Ljava/lang/String;");
          mids$[mid_format_b3e3531a0f06efb9] = env->getStaticMethodID(cls, "format", "(IIIIID)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STANDARDIZED_LOCALE = new ::java::util::Locale(env->getStaticObjectField(cls, "STANDARDIZED_LOCALE", "Ljava/util/Locale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String AccurateFormatter::format(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_e8f51f84167aafbd], a0));
      }

      ::java::lang::String AccurateFormatter::format(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_b3e3531a0f06efb9], a0, a1, a2, a3, a4, a5));
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
      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_AccurateFormatter__methods_[] = {
        DECLARE_METHOD(t_AccurateFormatter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, format, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AccurateFormatter)[] = {
        { Py_tp_methods, t_AccurateFormatter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AccurateFormatter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AccurateFormatter, t_AccurateFormatter, AccurateFormatter);

      void t_AccurateFormatter::install(PyObject *module)
      {
        installType(&PY_TYPE(AccurateFormatter), &PY_TYPE_DEF(AccurateFormatter), module, "AccurateFormatter", 0);
      }

      void t_AccurateFormatter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "class_", make_descriptor(AccurateFormatter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "wrapfn_", make_descriptor(t_AccurateFormatter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AccurateFormatter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "STANDARDIZED_LOCALE", make_descriptor(::java::util::t_Locale::wrap_Object(*AccurateFormatter::STANDARDIZED_LOCALE)));
      }

      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AccurateFormatter::initializeClass, 1)))
          return NULL;
        return t_AccurateFormatter::wrap_Object(AccurateFormatter(((t_AccurateFormatter *) arg)->object.this$));
      }
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AccurateFormatter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0));
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
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0, a1, a2, a3, a4, a5));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "format", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateMatrixFunction::class$ = NULL;
      jmethodID *MultivariateMatrixFunction::mids$ = NULL;
      bool MultivariateMatrixFunction::live$ = false;

      jclass MultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_49e7a3c5d62c95c4] = env->getMethodID(cls, "value", "([D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > MultivariateMatrixFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_49e7a3c5d62c95c4], a0.this$));
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
      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_MultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateMatrixFunction, t_MultivariateMatrixFunction, MultivariateMatrixFunction);

      void t_MultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateMatrixFunction), &PY_TYPE_DEF(MultivariateMatrixFunction), module, "MultivariateMatrixFunction", 0);
      }

      void t_MultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "class_", make_descriptor(MultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "wrapfn_", make_descriptor(t_MultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateMatrixFunction::wrap_Object(MultivariateMatrixFunction(((t_MultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile::class$ = NULL;
        jmethodID *EphemerisFile::mids$ = NULL;
        bool EphemerisFile::live$ = false;

        jclass EphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map EphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args);
        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self);
        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data);
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data);
        static PyGetSetDef t_EphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile, satellites),
          DECLARE_GET_FIELD(t_EphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile)[] = {
          { Py_tp_methods, t_EphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile, t_EphemerisFile, EphemerisFile);
        PyObject *t_EphemerisFile::wrap_Object(const EphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile), &PY_TYPE_DEF(EphemerisFile), module, "EphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "EphemerisSegment", make_descriptor(&PY_TYPE_DEF(EphemerisFile$EphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "SatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris)));
        }

        void t_EphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "class_", make_descriptor(EphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "wrapfn_", make_descriptor(t_EphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile::wrap_Object(EphemerisFile(((t_EphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionProvider::class$ = NULL;
          jmethodID *ThrustDirectionProvider::mids$ = NULL;
          bool ThrustDirectionProvider::live$ = false;

          jclass ThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeThrustDirection_35628cd92ea82231] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_35628cd92ea82231], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionProvider, t_ThrustDirectionProvider, ThrustDirectionProvider);

          void t_ThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionProvider), &PY_TYPE_DEF(ThrustDirectionProvider), module, "ThrustDirectionProvider", 0);
          }

          void t_ThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "class_", make_descriptor(ThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "wrapfn_", make_descriptor(t_ThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionProvider::wrap_Object(ThrustDirectionProvider(((t_ThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *NamedParameterJacobianProvider::class$ = NULL;
      jmethodID *NamedParameterJacobianProvider::mids$ = NULL;
      bool NamedParameterJacobianProvider::live$ = false;

      jclass NamedParameterJacobianProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/NamedParameterJacobianProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeParameterJacobian_471a10a7837f0228] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > NamedParameterJacobianProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_471a10a7837f0228], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args);

      static PyMethodDef t_NamedParameterJacobianProvider__methods_[] = {
        DECLARE_METHOD(t_NamedParameterJacobianProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, computeParameterJacobian, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NamedParameterJacobianProvider)[] = {
        { Py_tp_methods, t_NamedParameterJacobianProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NamedParameterJacobianProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(NamedParameterJacobianProvider, t_NamedParameterJacobianProvider, NamedParameterJacobianProvider);

      void t_NamedParameterJacobianProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(NamedParameterJacobianProvider), &PY_TYPE_DEF(NamedParameterJacobianProvider), module, "NamedParameterJacobianProvider", 0);
      }

      void t_NamedParameterJacobianProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "class_", make_descriptor(NamedParameterJacobianProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "wrapfn_", make_descriptor(t_NamedParameterJacobianProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NamedParameterJacobianProvider::initializeClass, 1)))
          return NULL;
        return t_NamedParameterJacobianProvider::wrap_Object(NamedParameterJacobianProvider(((t_NamedParameterJacobianProvider *) arg)->object.this$));
      }
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NamedParameterJacobianProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSModel::class$ = NULL;
        jmethodID *BatchLSModel::mids$ = NULL;
        bool BatchLSModel::live$ = false;

        jclass BatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_013b9b75e2d29096] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_e80966db3f120c01] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_e5faaf40266e83a3] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSModel::BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_013b9b75e2d29096, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BatchLSModel__methods_[] = {
          DECLARE_METHOD(t_BatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSModel)[] = {
          { Py_tp_methods, t_BatchLSModel__methods_ },
          { Py_tp_init, (void *) t_BatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(BatchLSModel, t_BatchLSModel, BatchLSModel);

        void t_BatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSModel), &PY_TYPE_DEF(BatchLSModel), module, "BatchLSModel", 0);
        }

        void t_BatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "class_", make_descriptor(BatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "wrapfn_", make_descriptor(t_BatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSModel::initializeClass, 1)))
            return NULL;
          return t_BatchLSModel::wrap_Object(BatchLSModel(((t_BatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          BatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = BatchLSModel(a0, a1, a2, a3));
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
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeSystem::class$ = NULL;
          jmethodID *TimeSystem::mids$ = NULL;
          bool TimeSystem::live$ = false;
          TimeSystem *TimeSystem::GMST = NULL;
          TimeSystem *TimeSystem::GPS = NULL;
          TimeSystem *TimeSystem::MET = NULL;
          TimeSystem *TimeSystem::MRT = NULL;
          TimeSystem *TimeSystem::SCLK = NULL;
          TimeSystem *TimeSystem::TAI = NULL;
          TimeSystem *TimeSystem::TCB = NULL;
          TimeSystem *TimeSystem::TCG = NULL;
          TimeSystem *TimeSystem::TDB = NULL;
          TimeSystem *TimeSystem::TT = NULL;
          TimeSystem *TimeSystem::UT1 = NULL;
          TimeSystem *TimeSystem::UTC = NULL;

          jclass TimeSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConverter_c0a4b546f02e626a] = env->getMethodID(cls, "getConverter", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)Lorg/orekit/files/ccsds/definitions/TimeConverter;");
              mids$[mid_parse_3b5c9a494294b166] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_valueOf_3b5c9a494294b166] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_values_445c43fc22b34242] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/TimeSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GMST = new TimeSystem(env->getStaticObjectField(cls, "GMST", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MET = new TimeSystem(env->getStaticObjectField(cls, "MET", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MRT = new TimeSystem(env->getStaticObjectField(cls, "MRT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              SCLK = new TimeSystem(env->getStaticObjectField(cls, "SCLK", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCB = new TimeSystem(env->getStaticObjectField(cls, "TCB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCG = new TimeSystem(env->getStaticObjectField(cls, "TCG", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TDB = new TimeSystem(env->getStaticObjectField(cls, "TDB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TT = new TimeSystem(env->getStaticObjectField(cls, "TT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UT1 = new TimeSystem(env->getStaticObjectField(cls, "UT1", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeConverter TimeSystem::getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
          {
            return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getConverter_c0a4b546f02e626a], a0.this$));
          }

          TimeSystem TimeSystem::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_3b5c9a494294b166], a0.this$));
          }

          TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3b5c9a494294b166], a0.this$));
          }

          JArray< TimeSystem > TimeSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_445c43fc22b34242]));
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
          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg);
          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TimeSystem_values(PyTypeObject *type);
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
          static PyGetSetDef t_TimeSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystem__methods_[] = {
            DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TimeSystem, getConverter, METH_O),
            DECLARE_METHOD(t_TimeSystem, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
            { Py_tp_methods, t_TimeSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TimeSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
          PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TimeSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
          }

          void t_TimeSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMST", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MET", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MRT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MRT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SCLK", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SCLK)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCG", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TDB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TDB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UT1", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UT1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
          }

          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
              return NULL;
            return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
          }
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getConverter(a0));
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConverter", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::parse(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::valueOf(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TimeSystem_values(PyTypeObject *type)
          {
            JArray< TimeSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
          }
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeFieldIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeFieldIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeFieldIntegrator::live$ = false;

        jclass AdaptiveStepsizeFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c1322d04e543be8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_4cfe509c2e9280c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_dff5885c2c873297] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_dff5885c2c873297] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_73f4b2cdb3dce988] = env->getMethodID(cls, "initializeStep", "(ZI[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)D");
            mids$[mid_setInitialStepSize_17db3a65980d3441] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_36e977212374ff6b] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_b0a935b68e41d65a] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_sanityChecks_e269d011240a2d04] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getStepSizeHelper_22d091974ce7dd9a] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_resetInternalState_0fa09c18fee449d5] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7c1322d04e543be8, a0.this$, a1.this$, a2, a3, a4.this$, a5.this$)) {}

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4cfe509c2e9280c2, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        jdouble AdaptiveStepsizeFieldIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_dff5885c2c873297]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_dff5885c2c873297]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::initializeStep(jboolean a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a3, const ::org::hipparchus::ode::FieldEquationsMapper & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_73f4b2cdb3dce988], a0, a1, a2.this$, a3.this$, a4.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_17db3a65980d3441], a0);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_36e977212374ff6b], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_b0a935b68e41d65a], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeFieldIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeFieldIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, minStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeFieldIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeFieldIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeFieldIntegrator, t_AdaptiveStepsizeFieldIntegrator, AdaptiveStepsizeFieldIntegrator);
        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_Object(const AdaptiveStepsizeFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdaptiveStepsizeFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeFieldIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator), module, "AdaptiveStepsizeFieldIntegrator", 0);
        }

        void t_AdaptiveStepsizeFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "class_", make_descriptor(AdaptiveStepsizeFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeFieldIntegrator::wrap_Object(AdaptiveStepsizeFieldIntegrator(((t_AdaptiveStepsizeFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::ode::FieldEquationsMapper a4((jobject) NULL);
          PyTypeObject **p4;
          jdouble result;

          if (!parseArgs(args, "ZI[KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldEquationsMapper::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a4, &p4, ::org::hipparchus::ode::t_FieldEquationsMapper::parameters_))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *HermiteRuleFactory::class$ = NULL;
          jmethodID *HermiteRuleFactory::mids$ = NULL;
          bool HermiteRuleFactory::live$ = false;

          jclass HermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/HermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HermiteRuleFactory::HermiteRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_HermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_HermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HermiteRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HermiteRuleFactory)[] = {
            { Py_tp_methods, t_HermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_HermiteRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(HermiteRuleFactory, t_HermiteRuleFactory, HermiteRuleFactory);

          void t_HermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(HermiteRuleFactory), &PY_TYPE_DEF(HermiteRuleFactory), module, "HermiteRuleFactory", 0);
          }

          void t_HermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "class_", make_descriptor(HermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "wrapfn_", make_descriptor(t_HermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_HermiteRuleFactory::wrap_Object(HermiteRuleFactory(((t_HermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            HermiteRuleFactory object((jobject) NULL);

            INT_CALL(object = HermiteRuleFactory());
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
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLE::class$ = NULL;
          jmethodID *FieldTLE::mids$ = NULL;
          bool FieldTLE::live$ = false;
          ::java::lang::String *FieldTLE::B_STAR = NULL;
          jint FieldTLE::DEFAULT = (jint) 0;
          jint FieldTLE::SDP4 = (jint) 0;
          jint FieldTLE::SDP8 = (jint) 0;
          jint FieldTLE::SGP = (jint) 0;
          jint FieldTLE::SGP4 = (jint) 0;
          jint FieldTLE::SGP8 = (jint) 0;

          jclass FieldTLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_964fa3751c176051] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_f6ecc8aad0bdcb24] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_5a5a5ec4c232c23e] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ID)V");
              mids$[mid_init$_9047e07f6401a189] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;IDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_dff5885c2c873297] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getClassification_7818f5b58320cd1f] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
              mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getElementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_570ce0828f81a2c1] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getLaunchNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_11b109bd155ca898] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_11b109bd155ca898] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_11b109bd155ca898] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionFirstDerivative_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionSecondDerivative_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_eba8e72a22c984ac] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRaan_eba8e72a22c984ac] = env->getMethodID(cls, "getRaan", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_9365555b1308b94c] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_1e78a1437043d7f8] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTLE_e993eceec98c738b] = env->getMethodID(cls, "toTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_964fa3751c176051, a0.this$, a1.this$, a2.this$)) {}

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6ecc8aad0bdcb24, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a5a5ec4c232c23e, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9047e07f6401a189, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17, a18.this$)) {}

          jboolean FieldTLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jdouble FieldTLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_dff5885c2c873297]);
          }

          jchar FieldTLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_7818f5b58320cd1f]);
          }

          ::org::orekit::time::FieldAbsoluteDate FieldTLE::getDate() const
          {
            return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getE() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
          }

          jint FieldTLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_570ce0828f81a2c1]);
          }

          jint FieldTLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_570ce0828f81a2c1]);
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getI() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
          }

          jint FieldTLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_570ce0828f81a2c1]);
          }

          ::java::lang::String FieldTLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_11b109bd155ca898]));
          }

          jint FieldTLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_570ce0828f81a2c1]);
          }

          ::java::lang::String FieldTLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_11b109bd155ca898]));
          }

          ::java::lang::String FieldTLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_11b109bd155ca898]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanAnomaly() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotion() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionFirstDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionFirstDerivative_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionSecondDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionSecondDerivative_eba8e72a22c984ac]));
          }

          ::java::util::List FieldTLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getPerigeeArgument() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getRaan() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRaan_eba8e72a22c984ac]));
          }

          jint FieldTLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1]);
          }

          jint FieldTLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_570ce0828f81a2c1]);
          }

          jint FieldTLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean FieldTLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_9365555b1308b94c], a0.this$, a1.this$);
          }

          FieldTLE FieldTLE::stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState & a0, const FieldTLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_1e78a1437043d7f8], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String FieldTLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::org::orekit::propagation::analytical::tle::TLE FieldTLE::toTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_toTLE_e993eceec98c738b]));
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
          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args);
          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getI(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data);
          static PyGetSetDef t_FieldTLE__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLE, bStar),
            DECLARE_GET_FIELD(t_FieldTLE, classification),
            DECLARE_GET_FIELD(t_FieldTLE, date),
            DECLARE_GET_FIELD(t_FieldTLE, e),
            DECLARE_GET_FIELD(t_FieldTLE, elementNumber),
            DECLARE_GET_FIELD(t_FieldTLE, ephemerisType),
            DECLARE_GET_FIELD(t_FieldTLE, i),
            DECLARE_GET_FIELD(t_FieldTLE, launchNumber),
            DECLARE_GET_FIELD(t_FieldTLE, launchPiece),
            DECLARE_GET_FIELD(t_FieldTLE, launchYear),
            DECLARE_GET_FIELD(t_FieldTLE, line1),
            DECLARE_GET_FIELD(t_FieldTLE, line2),
            DECLARE_GET_FIELD(t_FieldTLE, meanAnomaly),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotion),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLE, perigeeArgument),
            DECLARE_GET_FIELD(t_FieldTLE, raan),
            DECLARE_GET_FIELD(t_FieldTLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_FieldTLE, satelliteNumber),
            DECLARE_GET_FIELD(t_FieldTLE, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLE__methods_[] = {
            DECLARE_METHOD(t_FieldTLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, getBStar, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, toTLE, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLE)[] = {
            { Py_tp_methods, t_FieldTLE__methods_ },
            { Py_tp_init, (void *) t_FieldTLE_init_ },
            { Py_tp_getset, t_FieldTLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTLE, t_FieldTLE, FieldTLE);
          PyObject *t_FieldTLE::wrap_Object(const FieldTLE& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLE::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLE::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLE), &PY_TYPE_DEF(FieldTLE), module, "FieldTLE", 0);
          }

          void t_FieldTLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "class_", make_descriptor(FieldTLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "wrapfn_", make_descriptor(t_FieldTLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(FieldTLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "B_STAR", make_descriptor(j2p(*FieldTLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "DEFAULT", make_descriptor(FieldTLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP4", make_descriptor(FieldTLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP8", make_descriptor(FieldTLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP", make_descriptor(FieldTLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP4", make_descriptor(FieldTLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP8", make_descriptor(FieldTLE::SGP8));
          }

          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLE::initializeClass, 1)))
              return NULL;
            return t_FieldTLE::wrap_Object(FieldTLE(((t_FieldTLE *) arg)->object.this$));
          }
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kss", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kssk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKID", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKIDk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17, &a18))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBStar());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self)
          {
            ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLE_getE(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getE());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getI(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getI());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotion());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getRaan());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTLE a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            FieldTLE result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, FieldTLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, t_FieldTLE::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::stateToTLE(a0, a1, a2));
              return t_FieldTLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.toTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data)
          {
            ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getE());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getI());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotion());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getRaan());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FirstOrderConverter::class$ = NULL;
      jmethodID *FirstOrderConverter::mids$ = NULL;
      bool FirstOrderConverter::live$ = false;

      jclass FirstOrderConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FirstOrderConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_991476c50b830526] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/SecondOrderODE;)V");
          mids$[mid_computeDerivatives_125ce48de7dbfde5] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FirstOrderConverter::FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_991476c50b830526, a0.this$)) {}

      JArray< jdouble > FirstOrderConverter::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_125ce48de7dbfde5], a0, a1.this$));
      }

      jint FirstOrderConverter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
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
      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args);
      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self);
      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data);
      static PyGetSetDef t_FirstOrderConverter__fields_[] = {
        DECLARE_GET_FIELD(t_FirstOrderConverter, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FirstOrderConverter__methods_[] = {
        DECLARE_METHOD(t_FirstOrderConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FirstOrderConverter, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FirstOrderConverter)[] = {
        { Py_tp_methods, t_FirstOrderConverter__methods_ },
        { Py_tp_init, (void *) t_FirstOrderConverter_init_ },
        { Py_tp_getset, t_FirstOrderConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FirstOrderConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FirstOrderConverter, t_FirstOrderConverter, FirstOrderConverter);

      void t_FirstOrderConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(FirstOrderConverter), &PY_TYPE_DEF(FirstOrderConverter), module, "FirstOrderConverter", 0);
      }

      void t_FirstOrderConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "class_", make_descriptor(FirstOrderConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "wrapfn_", make_descriptor(t_FirstOrderConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FirstOrderConverter::initializeClass, 1)))
          return NULL;
        return t_FirstOrderConverter::wrap_Object(FirstOrderConverter(((t_FirstOrderConverter *) arg)->object.this$));
      }
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FirstOrderConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::SecondOrderODE a0((jobject) NULL);
        FirstOrderConverter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::SecondOrderODE::initializeClass, &a0))
        {
          INT_CALL(object = FirstOrderConverter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args)
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

      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadata::class$ = NULL;
              jmethodID *OcmMetadata::mids$ = NULL;
              bool OcmMetadata::live$ = false;
              jdouble OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH = (jdouble) 0;
              jdouble OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC = (jdouble) 0;

              jclass OcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_47d99c12e4a42886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_217e0239a9af5a4c] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getAdmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getAdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getAlternateNames_2afa36052df4765d] = env->getMethodID(cls, "getAlternateNames", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_11b109bd155ca898] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getCdmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getCdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getCelestialSource_11b109bd155ca898] = env->getMethodID(cls, "getCelestialSource", "()Ljava/lang/String;");
                  mids$[mid_getConstellation_11b109bd155ca898] = env->getMethodID(cls, "getConstellation", "()Ljava/lang/String;");
                  mids$[mid_getCountry_11b109bd155ca898] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
                  mids$[mid_getEopSource_11b109bd155ca898] = env->getMethodID(cls, "getEopSource", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_85703d13e302437e] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_11b109bd155ca898] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getInterpMethodEOP_11b109bd155ca898] = env->getMethodID(cls, "getInterpMethodEOP", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_85703d13e302437e] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_dff5885c2c873297] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getNextMessageEpoch_85703d13e302437e] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextMessageID_11b109bd155ca898] = env->getMethodID(cls, "getNextMessageID", "()Ljava/lang/String;");
                  mids$[mid_getObjectDesignator_11b109bd155ca898] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getObjectType_1e10bdb6e1d917a7] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_getOcmDataElements_2afa36052df4765d] = env->getMethodID(cls, "getOcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getOperator_11b109bd155ca898] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
                  mids$[mid_getOpsStatus_c1db7201a141079e] = env->getMethodID(cls, "getOpsStatus", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_getOrbitCategory_d0e32e55c78093d0] = env->getMethodID(cls, "getOrbitCategory", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_getOriginatorAddress_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getOwner_11b109bd155ca898] = env->getMethodID(cls, "getOwner", "()Ljava/lang/String;");
                  mids$[mid_getPreviousMessageEpoch_85703d13e302437e] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getPreviousMessageID_11b109bd155ca898] = env->getMethodID(cls, "getPreviousMessageID", "()Ljava/lang/String;");
                  mids$[mid_getPrmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getPrmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getRdmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getRdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getSclkOffsetAtEpoch_dff5885c2c873297] = env->getMethodID(cls, "getSclkOffsetAtEpoch", "()D");
                  mids$[mid_getSclkSecPerSISec_dff5885c2c873297] = env->getMethodID(cls, "getSclkSecPerSISec", "()D");
                  mids$[mid_getStartTime_85703d13e302437e] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_85703d13e302437e] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_dff5885c2c873297] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_getTdmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getTdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getTechAddress_11b109bd155ca898] = env->getMethodID(cls, "getTechAddress", "()Ljava/lang/String;");
                  mids$[mid_getTechEmail_11b109bd155ca898] = env->getMethodID(cls, "getTechEmail", "()Ljava/lang/String;");
                  mids$[mid_getTechOrg_11b109bd155ca898] = env->getMethodID(cls, "getTechOrg", "()Ljava/lang/String;");
                  mids$[mid_getTechPOC_11b109bd155ca898] = env->getMethodID(cls, "getTechPOC", "()Ljava/lang/String;");
                  mids$[mid_getTechPhone_11b109bd155ca898] = env->getMethodID(cls, "getTechPhone", "()Ljava/lang/String;");
                  mids$[mid_getTechPosition_11b109bd155ca898] = env->getMethodID(cls, "getTechPosition", "()Ljava/lang/String;");
                  mids$[mid_getTimeSpan_dff5885c2c873297] = env->getMethodID(cls, "getTimeSpan", "()D");
                  mids$[mid_getUt1mutcT0_dff5885c2c873297] = env->getMethodID(cls, "getUt1mutcT0", "()D");
                  mids$[mid_setAdmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setAlternateNames_de3e021e7266b71e] = env->getMethodID(cls, "setAlternateNames", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setCdmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setCelestialSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCelestialSource", "(Ljava/lang/String;)V");
                  mids$[mid_setConstellation_d0bc48d5b00dc40c] = env->getMethodID(cls, "setConstellation", "(Ljava/lang/String;)V");
                  mids$[mid_setCountry_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCountry", "(Ljava/lang/String;)V");
                  mids$[mid_setEopSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setEopSource", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_600a2a61652bc473] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setInterpMethodEOP_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInterpMethodEOP", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_600a2a61652bc473] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_17db3a65980d3441] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setNextMessageEpoch_600a2a61652bc473] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextMessageID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setNextMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectDesignator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectType_22d7655927343c9d] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                  mids$[mid_setOcmDataElements_de3e021e7266b71e] = env->getMethodID(cls, "setOcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setOperator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOperator", "(Ljava/lang/String;)V");
                  mids$[mid_setOpsStatus_2e77015f49b91e48] = env->getMethodID(cls, "setOpsStatus", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;)V");
                  mids$[mid_setOrbitCategory_8f1d8b178b6a2ef7] = env->getMethodID(cls, "setOrbitCategory", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;)V");
                  mids$[mid_setOriginatorAddress_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setOwner_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOwner", "(Ljava/lang/String;)V");
                  mids$[mid_setPreviousMessageEpoch_600a2a61652bc473] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setPreviousMessageID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPreviousMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setPrmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPrmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setRdmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setRdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setSclkOffsetAtEpoch_17db3a65980d3441] = env->getMethodID(cls, "setSclkOffsetAtEpoch", "(D)V");
                  mids$[mid_setSclkSecPerSISec_17db3a65980d3441] = env->getMethodID(cls, "setSclkSecPerSISec", "(D)V");
                  mids$[mid_setStartTime_600a2a61652bc473] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_600a2a61652bc473] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_17db3a65980d3441] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_setTdmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setTechAddress_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setTechEmail_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setTechOrg_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechOrg", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPOC_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPhone_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPosition_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTechPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setTimeSpan_17db3a65980d3441] = env->getMethodID(cls, "setTimeSpan", "(D)V");
                  mids$[mid_setUt1mutcT0_17db3a65980d3441] = env->getMethodID(cls, "setUt1mutcT0", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCLK_OFFSET_AT_EPOCH = env->getStaticDoubleField(cls, "DEFAULT_SCLK_OFFSET_AT_EPOCH");
                  DEFAULT_SCLK_SEC_PER_SI_SEC = env->getStaticDoubleField(cls, "DEFAULT_SCLK_SEC_PER_SI_SEC");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmMetadata::OcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_47d99c12e4a42886, a0.this$)) {}

              OcmMetadata OcmMetadata::copy(jdouble a0) const
              {
                return OcmMetadata(env->callObjectMethod(this$, mids$[mid_copy_217e0239a9af5a4c], a0));
              }

              ::java::lang::String OcmMetadata::getAdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMessageLink_11b109bd155ca898]));
              }

              ::java::util::List OcmMetadata::getAlternateNames() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlternateNames_2afa36052df4765d]));
              }

              ::java::lang::String OcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getCdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCdmMessageLink_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getCelestialSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCelestialSource_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getConstellation() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConstellation_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getCountry() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getEopSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEopSource_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_85703d13e302437e]));
              }

              ::java::lang::String OcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getInterpMethodEOP() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodEOP_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_85703d13e302437e]));
              }

              jdouble OcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_85703d13e302437e]));
              }

              ::java::lang::String OcmMetadata::getNextMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNextMessageID_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType OcmMetadata::getObjectType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_1e10bdb6e1d917a7]));
              }

              ::java::util::List OcmMetadata::getOcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOcmDataElements_2afa36052df4765d]));
              }

              ::java::lang::String OcmMetadata::getOperator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus OcmMetadata::getOpsStatus() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus(env->callObjectMethod(this$, mids$[mid_getOpsStatus_c1db7201a141079e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory OcmMetadata::getOrbitCategory() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory(env->callObjectMethod(this$, mids$[mid_getOrbitCategory_d0e32e55c78093d0]));
              }

              ::java::lang::String OcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getOwner() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOwner_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getPreviousMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_85703d13e302437e]));
              }

              ::java::lang::String OcmMetadata::getPreviousMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageID_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getPrmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrmMessageLink_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getRdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRdmMessageLink_11b109bd155ca898]));
              }

              jdouble OcmMetadata::getSclkOffsetAtEpoch() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkOffsetAtEpoch_dff5885c2c873297]);
              }

              jdouble OcmMetadata::getSclkSecPerSISec() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkSecPerSISec_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_85703d13e302437e]));
              }

              jdouble OcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_dff5885c2c873297]);
              }

              ::java::lang::String OcmMetadata::getTdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTdmMessageLink_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechAddress_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechEmail_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechOrg() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechOrg_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPOC_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPhone_11b109bd155ca898]));
              }

              ::java::lang::String OcmMetadata::getTechPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPosition_11b109bd155ca898]));
              }

              jdouble OcmMetadata::getTimeSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSpan_dff5885c2c873297]);
              }

              jdouble OcmMetadata::getUt1mutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getUt1mutcT0_dff5885c2c873297]);
              }

              void OcmMetadata::setAdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAdmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setAlternateNames(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlternateNames_de3e021e7266b71e], a0.this$);
              }

              void OcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setCdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCdmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setCelestialSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCelestialSource_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setConstellation(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConstellation_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setCountry(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCountry_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setEopSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEopSource_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setInterpMethodEOP(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodEOP_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_17db3a65980d3441], a0);
              }

              void OcmMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setNextMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageID_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectType_22d7655927343c9d], a0.this$);
              }

              void OcmMetadata::setOcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOcmDataElements_de3e021e7266b71e], a0.this$);
              }

              void OcmMetadata::setOperator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOperator_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOpsStatus_2e77015f49b91e48], a0.this$);
              }

              void OcmMetadata::setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCategory_8f1d8b178b6a2ef7], a0.this$);
              }

              void OcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setOwner(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOwner_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setPreviousMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageID_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setPrmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setRdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRdmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setSclkOffsetAtEpoch(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkOffsetAtEpoch_17db3a65980d3441], a0);
              }

              void OcmMetadata::setSclkSecPerSISec(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkSecPerSISec_17db3a65980d3441], a0);
              }

              void OcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_600a2a61652bc473], a0.this$);
              }

              void OcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_17db3a65980d3441], a0);
              }

              void OcmMetadata::setTdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTdmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechAddress_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechEmail_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechOrg(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechOrg_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPOC_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPhone_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTechPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPosition_d0bc48d5b00dc40c], a0.this$);
              }

              void OcmMetadata::setTimeSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSpan_17db3a65980d3441], a0);
              }

              void OcmMetadata::setUt1mutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUt1mutcT0_17db3a65980d3441], a0);
              }

              void OcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args);
              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OcmMetadata, admMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, alternateNames),
                DECLARE_GETSET_FIELD(t_OcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_OcmMetadata, cdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, celestialSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, constellation),
                DECLARE_GETSET_FIELD(t_OcmMetadata, country),
                DECLARE_GETSET_FIELD(t_OcmMetadata, eopSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, interpMethodEOP),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectType),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ocmDataElements),
                DECLARE_GETSET_FIELD(t_OcmMetadata, operator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, opsStatus),
                DECLARE_GETSET_FIELD(t_OcmMetadata, orbitCategory),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, owner),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, prmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, rdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkOffsetAtEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkSecPerSISec),
                DECLARE_GETSET_FIELD(t_OcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, taimutcT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, tdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techOrg),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, timeSpan),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ut1mutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadata__methods_[] = {
                DECLARE_METHOD(t_OcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, copy, METH_O),
                DECLARE_METHOD(t_OcmMetadata, getAdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getAlternateNames, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCelestialSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getConstellation, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCountry, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEopSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInterpMethodEOP, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectType, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOperator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOpsStatus, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOrbitCategory, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOwner, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPrmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getRdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkOffsetAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkSecPerSISec, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechOrg, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTimeSpan, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getUt1mutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, setAdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setAlternateNames, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCelestialSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setConstellation, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCountry, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEopSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInterpMethodEOP, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectType, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOcmDataElements, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOperator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOpsStatus, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOrbitCategory, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOwner, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPrmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setRdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkOffsetAtEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkSecPerSISec, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechOrg, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTimeSpan, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setUt1mutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadata)[] = {
                { Py_tp_methods, t_OcmMetadata__methods_ },
                { Py_tp_init, (void *) t_OcmMetadata_init_ },
                { Py_tp_getset, t_OcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
                NULL
              };

              DEFINE_TYPE(OcmMetadata, t_OcmMetadata, OcmMetadata);

              void t_OcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadata), &PY_TYPE_DEF(OcmMetadata), module, "OcmMetadata", 0);
              }

              void t_OcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "class_", make_descriptor(OcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "wrapfn_", make_descriptor(t_OcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_OFFSET_AT_EPOCH", make_descriptor(OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_SEC_PER_SI_SEC", make_descriptor(OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC));
              }

              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadata::wrap_Object(OcmMetadata(((t_OcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                OcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = OcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;
                OcmMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_OcmMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getConstellation());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCountry());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getEopSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodEOP());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmElements));
              }

              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOperator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus result((jobject) NULL);
                OBJ_CALL(result = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOwner());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getRdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechOrg());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAlternateNames(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlternateNames", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCelestialSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCelestialSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setConstellation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConstellation", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCountry(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCountry", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setEopSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEopSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInternationalDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInternationalDesignator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodEOP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodEOP", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextLeapEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNextLeapTaimutc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapTaimutc", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setNextMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setOcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOperator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOperator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::parameters_))
                {
                  OBJ_CALL(self->object.setOpsStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOpsStatus", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::parameters_))
                {
                  OBJ_CALL(self->object.setOrbitCategory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCategory", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorAddress", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorEmail", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPOC", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPhone", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPosition", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOwner(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOwner", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setRdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkOffsetAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkOffsetAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkSecPerSISec(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkSecPerSISec", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTaimutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTaimutcT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechAddress", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechEmail", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechOrg(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechOrg", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPOC", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPhone", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPosition", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSpan", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setUt1mutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUt1mutcT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "admMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAlternateNames(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "alternateNames", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCelestialSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCelestialSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "celestialSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getConstellation());
                return j2p(value);
              }
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setConstellation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "constellation", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCountry());
                return j2p(value);
              }
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCountry(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "country", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getEopSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setEopSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eopSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochT0", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInternationalDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "internationalDesignator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodEOP());
                return j2p(value);
              }
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodEOP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodEOP", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextLeapEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNextLeapTaimutc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapTaimutc", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setNextMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
              }
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ocmDataElements", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOperator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOperator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "operator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                OBJ_CALL(value = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(value);
              }
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOpsStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "opsStatus", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(value);
              }
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCategory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCategory", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorAddress", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorEmail", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPOC", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPhone", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPosition", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOwner());
                return j2p(value);
              }
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOwner(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "owner", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setPreviousMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPreviousMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getRdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setRdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkOffsetAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkOffsetAtEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkSecPerSISec(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkSecPerSISec", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTaimutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "taimutcT0", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techAddress", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techEmail", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechOrg());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechOrg(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techOrg", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPOC", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPhone", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPosition", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSpan", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setUt1mutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ut1mutcT0", arg);
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
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Edge::class$ = NULL;
          jmethodID *Edge::mids$ = NULL;
          bool Edge::live$ = false;

          jclass Edge::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Edge");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCircle_32f0886c61f7154f] = env->getMethodID(cls, "getCircle", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getEnd_22d742b608089bec] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");
              mids$[mid_getLength_dff5885c2c873297] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getPointAt_9137bba253a33d9c] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getStart_22d742b608089bec] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Circle Edge::getCircle() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Circle(env->callObjectMethod(this$, mids$[mid_getCircle_32f0886c61f7154f]));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getEnd() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getEnd_22d742b608089bec]));
          }

          jdouble Edge::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Edge::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_9137bba253a33d9c], a0));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getStart() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getStart_22d742b608089bec]));
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
          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_getCircle(t_Edge *self);
          static PyObject *t_Edge_getEnd(t_Edge *self);
          static PyObject *t_Edge_getLength(t_Edge *self);
          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg);
          static PyObject *t_Edge_getStart(t_Edge *self);
          static PyObject *t_Edge_get__circle(t_Edge *self, void *data);
          static PyObject *t_Edge_get__end(t_Edge *self, void *data);
          static PyObject *t_Edge_get__length(t_Edge *self, void *data);
          static PyObject *t_Edge_get__start(t_Edge *self, void *data);
          static PyGetSetDef t_Edge__fields_[] = {
            DECLARE_GET_FIELD(t_Edge, circle),
            DECLARE_GET_FIELD(t_Edge, end),
            DECLARE_GET_FIELD(t_Edge, length),
            DECLARE_GET_FIELD(t_Edge, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Edge__methods_[] = {
            DECLARE_METHOD(t_Edge, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, getCircle, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getPointAt, METH_O),
            DECLARE_METHOD(t_Edge, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Edge)[] = {
            { Py_tp_methods, t_Edge__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Edge__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Edge)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Edge, t_Edge, Edge);

          void t_Edge::install(PyObject *module)
          {
            installType(&PY_TYPE(Edge), &PY_TYPE_DEF(Edge), module, "Edge", 0);
          }

          void t_Edge::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "class_", make_descriptor(Edge::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "wrapfn_", make_descriptor(t_Edge::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Edge::initializeClass, 1)))
              return NULL;
            return t_Edge::wrap_Object(Edge(((t_Edge *) arg)->object.this$));
          }
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Edge::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Edge_getCircle(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(result);
          }

          static PyObject *t_Edge_getEnd(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_getLength(t_Edge *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg)
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

          static PyObject *t_Edge_getStart(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_get__circle(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(value);
          }

          static PyObject *t_Edge_get__end(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }

          static PyObject *t_Edge_get__length(t_Edge *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Edge_get__start(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
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

          ::java::lang::Class *ShapiroOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSPhaseModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSPhaseModifier::live$ = false;

          jclass ShapiroOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSPhaseModifier::ShapiroOneWayGNSSPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSPhaseModifier, t_ShapiroOneWayGNSSPhaseModifier, ShapiroOneWayGNSSPhaseModifier);

          void t_ShapiroOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSPhaseModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSPhaseModifier), module, "ShapiroOneWayGNSSPhaseModifier", 0);
          }

          void t_ShapiroOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "class_", make_descriptor(ShapiroOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSPhaseModifier::wrap_Object(ShapiroOneWayGNSSPhaseModifier(((t_ShapiroOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCnmSnmReader::class$ = NULL;
          jmethodID *FESCnmSnmReader::mids$ = NULL;
          bool FESCnmSnmReader::live$ = false;

          jclass FESCnmSnmReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCnmSnmReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1b3f5cad10162d50] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCnmSnmReader::FESCnmSnmReader(const ::java::lang::String & a0, jdouble a1) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_1b3f5cad10162d50, a0.this$, a1)) {}

          void FESCnmSnmReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args);

          static PyMethodDef t_FESCnmSnmReader__methods_[] = {
            DECLARE_METHOD(t_FESCnmSnmReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCnmSnmReader)[] = {
            { Py_tp_methods, t_FESCnmSnmReader__methods_ },
            { Py_tp_init, (void *) t_FESCnmSnmReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCnmSnmReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCnmSnmReader, t_FESCnmSnmReader, FESCnmSnmReader);

          void t_FESCnmSnmReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCnmSnmReader), &PY_TYPE_DEF(FESCnmSnmReader), module, "FESCnmSnmReader", 0);
          }

          void t_FESCnmSnmReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "class_", make_descriptor(FESCnmSnmReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "wrapfn_", make_descriptor(t_FESCnmSnmReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCnmSnmReader::initializeClass, 1)))
              return NULL;
            return t_FESCnmSnmReader::wrap_Object(FESCnmSnmReader(((t_FESCnmSnmReader *) arg)->object.this$));
          }
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCnmSnmReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            FESCnmSnmReader object((jobject) NULL);

            if (!parseArgs(args, "sD", &a0, &a1))
            {
              INT_CALL(object = FESCnmSnmReader(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCnmSnmReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearEvolution::class$ = NULL;
          jmethodID *NonLinearEvolution::mids$ = NULL;
          bool NonLinearEvolution::live$ = false;

          jclass NonLinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9c28922119d61604] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentState_aab4fbf77867daa8] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_dff5885c2c873297] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_688b496048ff947b] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NonLinearEvolution::NonLinearEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c28922119d61604, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector NonLinearEvolution::getCurrentState() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCurrentState_aab4fbf77867daa8]));
          }

          jdouble NonLinearEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_dff5885c2c873297]);
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getStateTransitionMatrix() const
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
        namespace extended {
          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data);
          static PyGetSetDef t_NonLinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentState),
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentTime),
            DECLARE_GET_FIELD(t_NonLinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_NonLinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_NonLinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearEvolution__methods_[] = {
            DECLARE_METHOD(t_NonLinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentState, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearEvolution)[] = {
            { Py_tp_methods, t_NonLinearEvolution__methods_ },
            { Py_tp_init, (void *) t_NonLinearEvolution_init_ },
            { Py_tp_getset, t_NonLinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearEvolution, t_NonLinearEvolution, NonLinearEvolution);

          void t_NonLinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearEvolution), &PY_TYPE_DEF(NonLinearEvolution), module, "NonLinearEvolution", 0);
          }

          void t_NonLinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "class_", make_descriptor(NonLinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "wrapfn_", make_descriptor(t_NonLinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearEvolution::initializeClass, 1)))
              return NULL;
            return t_NonLinearEvolution::wrap_Object(NonLinearEvolution(((t_NonLinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            NonLinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "Dkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = NonLinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data)
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
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_dragAcceleration_6cbf0b5d7046f26b] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_fc130a15f669db38] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDragParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDragSensitive::PythonDragSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonDragSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonDragSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonDragSensitive::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace drag {
        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self);
        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
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
            { "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonDragSensitive_dragAcceleration0 },
            { "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonDragSensitive_dragAcceleration1 },
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonAbstractAnalyticalPropagator::live$ = false;

        jclass PythonAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3cff7c75ea06698c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalPropagator::PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3cff7c75ea06698c, a0.this$)) {}

        void PythonAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args);
        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalPropagator, t_PythonAbstractAnalyticalPropagator, PythonAbstractAnalyticalPropagator);

        void t_PythonAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonAbstractAnalyticalPropagator), module, "PythonAbstractAnalyticalPropagator", 1);
        }

        void t_PythonAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "class_", make_descriptor(PythonAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractAnalyticalPropagator_getMass0 },
            { "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractAnalyticalPropagator_propagateOrbit1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalPropagator_pythonDecRef2 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V", (void *) t_PythonAbstractAnalyticalPropagator_resetIntermediateState3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalPropagator::wrap_Object(PythonAbstractAnalyticalPropagator(((t_PythonAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          PythonAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractAnalyticalPropagator(a0));
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

        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
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

        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmParser::class$ = NULL;
            jmethodID *OdmParser::mids$ = NULL;
            bool OdmParser::live$ = false;

            jclass OdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSelectedMu_dff5885c2c873297] = env->getMethodID(cls, "getSelectedMu", "()D");
                mids$[mid_getMuSet_dff5885c2c873297] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_setMuParsed_17db3a65980d3441] = env->getMethodID(cls, "setMuParsed", "(D)V");
                mids$[mid_setMuCreated_17db3a65980d3441] = env->getMethodID(cls, "setMuCreated", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate OdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_85703d13e302437e]));
            }

            jdouble OdmParser::getSelectedMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSelectedMu_dff5885c2c873297]);
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
            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args);
            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self);
            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self);
            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data);
            static PyGetSetDef t_OdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_OdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_OdmParser, selectedMu),
              DECLARE_GET_FIELD(t_OdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmParser__methods_[] = {
              DECLARE_METHOD(t_OdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_OdmParser, getSelectedMu, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmParser)[] = {
              { Py_tp_methods, t_OdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(OdmParser, t_OdmParser, OdmParser);
            PyObject *t_OdmParser::wrap_Object(const OdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_OdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_OdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmParser), &PY_TYPE_DEF(OdmParser), module, "OdmParser", 0);
            }

            void t_OdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "class_", make_descriptor(OdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "wrapfn_", make_descriptor(t_OdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmParser::initializeClass, 1)))
                return NULL;
              return t_OdmParser::wrap_Object(OdmParser(((t_OdmParser *) arg)->object.this$));
            }
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) result);
            }
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSelectedMu());
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *GaussNewtonOptimizer::class$ = NULL;
            jmethodID *GaussNewtonOptimizer::mids$ = NULL;
            bool GaussNewtonOptimizer::live$ = false;

            jclass GaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_f08bee1caa1a9d92] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Z)V");
                mids$[mid_getDecomposer_43a2c3cb3afc9b3b] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_isFormNormalEquations_b108b35ef48e27bd] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_3488934cadbbcc09] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withDecomposer_d1e87854600a5967] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_2596334709b9d39b] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GaussNewtonOptimizer::GaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            GaussNewtonOptimizer::GaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f08bee1caa1a9d92, a0.this$, a1)) {}

            ::org::hipparchus::linear::MatrixDecomposer GaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_43a2c3cb3afc9b3b]));
            }

            jboolean GaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_b108b35ef48e27bd]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum GaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_3488934cadbbcc09], a0.this$));
            }

            ::java::lang::String GaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_d1e87854600a5967], a0.this$));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_2596334709b9d39b], a0));
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
            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data);
            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_GaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, formNormalEquations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_GaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_GaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_GaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_GaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GaussNewtonOptimizer, t_GaussNewtonOptimizer, GaussNewtonOptimizer);

            void t_GaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(GaussNewtonOptimizer), &PY_TYPE_DEF(GaussNewtonOptimizer), module, "GaussNewtonOptimizer", 0);
            }

            void t_GaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "class_", make_descriptor(GaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "wrapfn_", make_descriptor(t_GaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_GaussNewtonOptimizer::wrap_Object(GaussNewtonOptimizer(((t_GaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  GaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = GaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 2:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  GaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZ", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = GaussNewtonOptimizer(a0, a1));
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

            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(GaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectors::class$ = NULL;
          jmethodID *CycleSlipDetectors::mids$ = NULL;
          bool CycleSlipDetectors::live$ = false;

          jclass CycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_667c8a8776700e01] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List CycleSlipDetectors::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_667c8a8776700e01], a0.this$));
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
          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg);

          static PyMethodDef t_CycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectors)[] = {
            { Py_tp_methods, t_CycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectors, t_CycleSlipDetectors, CycleSlipDetectors);

          void t_CycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectors), &PY_TYPE_DEF(CycleSlipDetectors), module, "CycleSlipDetectors", 0);
          }

          void t_CycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "class_", make_descriptor(CycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "wrapfn_", make_descriptor(t_CycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectors::wrap_Object(CycleSlipDetectors(((t_CycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
