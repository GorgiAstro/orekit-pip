#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *MultivariateJacobianFunction::class$ = NULL;
            jmethodID *MultivariateJacobianFunction::mids$ = NULL;
            bool MultivariateJacobianFunction::live$ = false;

            jclass MultivariateJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_value_f8e49be09d1e1247] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::util::Pair MultivariateJacobianFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f8e49be09d1e1247], a0.this$));
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
            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_MultivariateJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_MultivariateJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultivariateJacobianFunction)[] = {
              { Py_tp_methods, t_MultivariateJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultivariateJacobianFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MultivariateJacobianFunction, t_MultivariateJacobianFunction, MultivariateJacobianFunction);

            void t_MultivariateJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(MultivariateJacobianFunction), &PY_TYPE_DEF(MultivariateJacobianFunction), module, "MultivariateJacobianFunction", 0);
            }

            void t_MultivariateJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "class_", make_descriptor(MultivariateJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "wrapfn_", make_descriptor(t_MultivariateJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultivariateJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_MultivariateJacobianFunction::wrap_Object(MultivariateJacobianFunction(((t_MultivariateJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultivariateJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::util::Pair result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
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
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/StateJacobian.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
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
          mids$[mid_differentiate_aff50b44ae151b3f] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/ParameterFunction;ID)Lorg/orekit/utils/ParameterFunction;");
          mids$[mid_differentiate_c9fdb532e730ab3d] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/StateFunction;ILorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DI)Lorg/orekit/utils/StateJacobian;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ParameterFunction Differentiation::differentiate(const ::org::orekit::utils::ParameterFunction & a0, jint a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::ParameterFunction(env->callStaticObjectMethod(cls, mids$[mid_differentiate_aff50b44ae151b3f], a0.this$, a1, a2));
      }

      ::org::orekit::utils::StateJacobian Differentiation::differentiate(const ::org::orekit::utils::StateFunction & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4, jdouble a5, jint a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::StateJacobian(env->callStaticObjectMethod(cls, mids$[mid_differentiate_c9fdb532e730ab3d], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5, a6));
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
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ConstantPVCoordinatesProvider::class$ = NULL;
      jmethodID *ConstantPVCoordinatesProvider::mids$ = NULL;
      bool ConstantPVCoordinatesProvider::live$ = false;

      jclass ConstantPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ConstantPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30037ff50b846ddc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_464cb214412d37c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b286378e8b3b0b08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_5343d34e5fbffcdd] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30037ff50b846ddc, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_464cb214412d37c4, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b286378e8b3b0b08, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates ConstantPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5343d34e5fbffcdd], a0.this$, a1.this$));
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
      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_ConstantPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConstantPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ConstantPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_ConstantPVCoordinatesProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConstantPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConstantPVCoordinatesProvider, t_ConstantPVCoordinatesProvider, ConstantPVCoordinatesProvider);

      void t_ConstantPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ConstantPVCoordinatesProvider), &PY_TYPE_DEF(ConstantPVCoordinatesProvider), module, "ConstantPVCoordinatesProvider", 0);
      }

      void t_ConstantPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "class_", make_descriptor(ConstantPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ConstantPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ConstantPVCoordinatesProvider::wrap_Object(ConstantPVCoordinatesProvider(((t_ConstantPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ObjectType::class$ = NULL;
              jmethodID *ObjectType::mids$ = NULL;
              bool ObjectType::live$ = false;
              ObjectType *ObjectType::DEBRIS = NULL;
              ObjectType *ObjectType::OTHER = NULL;
              ObjectType *ObjectType::PAYLOAD = NULL;
              ObjectType *ObjectType::ROCKET_BODY = NULL;
              ObjectType *ObjectType::UNKNOWN = NULL;

              jclass ObjectType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ObjectType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_faedc7b285fd3e9a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_values_fee39d5675e6ebc4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEBRIS = new ObjectType(env->getStaticObjectField(cls, "DEBRIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  OTHER = new ObjectType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  PAYLOAD = new ObjectType(env->getStaticObjectField(cls, "PAYLOAD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  ROCKET_BODY = new ObjectType(env->getStaticObjectField(cls, "ROCKET_BODY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  UNKNOWN = new ObjectType(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ObjectType ObjectType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ObjectType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_faedc7b285fd3e9a], a0.this$));
              }

              JArray< ObjectType > ObjectType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ObjectType >(env->callStaticObjectMethod(cls, mids$[mid_values_fee39d5675e6ebc4]));
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
              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args);
              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ObjectType_values(PyTypeObject *type);
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data);
              static PyGetSetDef t_ObjectType__fields_[] = {
                DECLARE_GET_FIELD(t_ObjectType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ObjectType__methods_[] = {
                DECLARE_METHOD(t_ObjectType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ObjectType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ObjectType)[] = {
                { Py_tp_methods, t_ObjectType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ObjectType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ObjectType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ObjectType, t_ObjectType, ObjectType);
              PyObject *t_ObjectType::wrap_Object(const ObjectType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ObjectType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ObjectType::install(PyObject *module)
              {
                installType(&PY_TYPE(ObjectType), &PY_TYPE_DEF(ObjectType), module, "ObjectType", 0);
              }

              void t_ObjectType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "class_", make_descriptor(ObjectType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "wrapfn_", make_descriptor(t_ObjectType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ObjectType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "DEBRIS", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::DEBRIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "OTHER", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "PAYLOAD", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::PAYLOAD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "ROCKET_BODY", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::ROCKET_BODY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "UNKNOWN", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::UNKNOWN)));
              }

              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ObjectType::initializeClass, 1)))
                  return NULL;
                return t_ObjectType::wrap_Object(ObjectType(((t_ObjectType *) arg)->object.this$));
              }
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ObjectType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ObjectType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::valueOf(a0));
                  return t_ObjectType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ObjectType_values(PyTypeObject *type)
              {
                JArray< ObjectType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::values());
                return JArray<jobject>(result.this$).wrap(t_ObjectType::wrap_jobject);
              }
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data)
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
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *ZipfDistribution::class$ = NULL;
        jmethodID *ZipfDistribution::mids$ = NULL;
        bool ZipfDistribution::live$ = false;

        jclass ZipfDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/ZipfDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getExponent_456d9a2f64d6b28d] = env->getMethodID(cls, "getExponent", "()D");
            mids$[mid_getNumberOfElements_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfElements", "()I");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_calculateNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateNumericalMean", "()D");
            mids$[mid_calculateNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateNumericalVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ZipfDistribution::ZipfDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

        jdouble ZipfDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jdouble ZipfDistribution::getExponent() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getExponent_456d9a2f64d6b28d]);
        }

        jint ZipfDistribution::getNumberOfElements() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfElements_f2f64475e4580546]);
        }

        jdouble ZipfDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble ZipfDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jint ZipfDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint ZipfDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean ZipfDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble ZipfDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble ZipfDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data);
        static PyGetSetDef t_ZipfDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ZipfDistribution, exponent),
          DECLARE_GET_FIELD(t_ZipfDistribution, numberOfElements),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ZipfDistribution__methods_[] = {
          DECLARE_METHOD(t_ZipfDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumberOfElements, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ZipfDistribution)[] = {
          { Py_tp_methods, t_ZipfDistribution__methods_ },
          { Py_tp_init, (void *) t_ZipfDistribution_init_ },
          { Py_tp_getset, t_ZipfDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ZipfDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(ZipfDistribution, t_ZipfDistribution, ZipfDistribution);

        void t_ZipfDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ZipfDistribution), &PY_TYPE_DEF(ZipfDistribution), module, "ZipfDistribution", 0);
        }

        void t_ZipfDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "class_", make_descriptor(ZipfDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "wrapfn_", make_descriptor(t_ZipfDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ZipfDistribution::initializeClass, 1)))
            return NULL;
          return t_ZipfDistribution::wrap_Object(ZipfDistribution(((t_ZipfDistribution *) arg)->object.this$));
        }
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ZipfDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          ZipfDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = ZipfDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getExponent());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfElements());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getExponent());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfElements());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data)
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
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$EphemerisType::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$EphemerisType::mids$ = NULL;
      bool JPLEphemeridesLoader$EphemerisType::live$ = false;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH_MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::JUPITER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MARS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MERCURY = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::NEPTUNE = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::PLUTO = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SATURN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SUN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::URANUS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::VENUS = NULL;

      jclass JPLEphemeridesLoader$EphemerisType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$EphemerisType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_1542733145ccab2d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");
          mids$[mid_values_a157249db2aaf61a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          EARTH_MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          JUPITER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MARS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MERCURY = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          NEPTUNE = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          PLUTO = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SATURN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SOLAR_SYSTEM_BARYCENTER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SUN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          URANUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          VENUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader$EphemerisType JPLEphemeridesLoader$EphemerisType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JPLEphemeridesLoader$EphemerisType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1542733145ccab2d], a0.this$));
      }

      JArray< JPLEphemeridesLoader$EphemerisType > JPLEphemeridesLoader$EphemerisType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JPLEphemeridesLoader$EphemerisType >(env->callStaticObjectMethod(cls, mids$[mid_values_a157249db2aaf61a]));
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
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader$EphemerisType__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader$EphemerisType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader$EphemerisType__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, of_, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$EphemerisType)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$EphemerisType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_JPLEphemeridesLoader$EphemerisType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$EphemerisType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$EphemerisType, t_JPLEphemeridesLoader$EphemerisType, JPLEphemeridesLoader$EphemerisType);
      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_Object(const JPLEphemeridesLoader$EphemerisType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_JPLEphemeridesLoader$EphemerisType::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$EphemerisType), &PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType), module, "JPLEphemeridesLoader$EphemerisType", 0);
      }

      void t_JPLEphemeridesLoader$EphemerisType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "class_", make_descriptor(JPLEphemeridesLoader$EphemerisType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader$EphemerisType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH_MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "JUPITER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MARS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MERCURY", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "NEPTUNE", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "PLUTO", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SATURN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SUN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "URANUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "VENUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::VENUS)));
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(JPLEphemeridesLoader$EphemerisType(((t_JPLEphemeridesLoader$EphemerisType *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JPLEphemeridesLoader$EphemerisType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::valueOf(a0));
          return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type)
      {
        JArray< JPLEphemeridesLoader$EphemerisType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::values());
        return JArray<jobject>(result.this$).wrap(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject);
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044Data::class$ = NULL;
              jmethodID *Rtcm1044Data::mids$ = NULL;
              bool Rtcm1044Data::live$ = false;

              jclass Rtcm1044Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getQzssCodeOnL2_f2f64475e4580546] = env->getMethodID(cls, "getQzssCodeOnL2", "()I");
                  mids$[mid_getQzssFitInterval_f2f64475e4580546] = env->getMethodID(cls, "getQzssFitInterval", "()I");
                  mids$[mid_getQzssNavigationMessage_71cc6e0d8b6b7d6c] = env->getMethodID(cls, "getQzssNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssNavigationMessage_73041cd6a5a71992] = env->getMethodID(cls, "getQzssNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getQzssToc", "()D");
                  mids$[mid_setQzssCodeOnL2_0a2a1ac2721c0336] = env->getMethodID(cls, "setQzssCodeOnL2", "(I)V");
                  mids$[mid_setQzssFitInterval_0a2a1ac2721c0336] = env->getMethodID(cls, "setQzssFitInterval", "(I)V");
                  mids$[mid_setQzssNavigationMessage_c40499bedaddc366] = env->getMethodID(cls, "setQzssNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
                  mids$[mid_setQzssToc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setQzssToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044Data::Rtcm1044Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint Rtcm1044Data::getQzssCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssCodeOnL2_f2f64475e4580546]);
              }

              jint Rtcm1044Data::getQzssFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssFitInterval_f2f64475e4580546]);
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_71cc6e0d8b6b7d6c]));
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_73041cd6a5a71992], a0.this$));
              }

              jdouble Rtcm1044Data::getQzssToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getQzssToc_456d9a2f64d6b28d]);
              }

              void Rtcm1044Data::setQzssCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssCodeOnL2_0a2a1ac2721c0336], a0);
              }

              void Rtcm1044Data::setQzssFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssFitInterval_0a2a1ac2721c0336], a0);
              }

              void Rtcm1044Data::setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssNavigationMessage_c40499bedaddc366], a0.this$);
              }

              void Rtcm1044Data::setQzssToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssToc_77e0f9a1f260e2e5], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args);
              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1044Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044Data)[] = {
                { Py_tp_methods, t_Rtcm1044Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044Data_init_ },
                { Py_tp_getset, t_Rtcm1044Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1044Data, t_Rtcm1044Data, Rtcm1044Data);

              void t_Rtcm1044Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044Data), &PY_TYPE_DEF(Rtcm1044Data), module, "Rtcm1044Data", 0);
              }

              void t_Rtcm1044Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "class_", make_descriptor(Rtcm1044Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "wrapfn_", make_descriptor(t_Rtcm1044Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044Data::wrap_Object(Rtcm1044Data(((t_Rtcm1044Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1044Data object((jobject) NULL);

                INT_CALL(object = Rtcm1044Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getQzssNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getQzssNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getQzssNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getQzssToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setQzssNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setQzssToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getQzssNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setQzssNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getQzssToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setQzssToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssToc", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *JacobiPolynomials::class$ = NULL;
            jmethodID *JacobiPolynomials::mids$ = NULL;
            bool JacobiPolynomials::live$ = false;

            jclass JacobiPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_11e8972092d7fa54] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
                mids$[mid_getValue_4825fe076bdd9170] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
                mids$[mid_getValueAndDerivative_91b20719764404cd] = env->getStaticMethodID(cls, "getValueAndDerivative", "(IIID)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::analysis::differentiation::FieldGradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::FieldGradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_11e8972092d7fa54], a0, a1, a2, a3.this$));
            }

            ::org::hipparchus::analysis::differentiation::Gradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::Gradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::Gradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_4825fe076bdd9170], a0, a1, a2, a3.this$));
            }

            JArray< jdouble > JacobiPolynomials::getValueAndDerivative(jint a0, jint a1, jint a2, jdouble a3)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_getValueAndDerivative_91b20719764404cd], a0, a1, a2, a3));
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
            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args);
            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_JacobiPolynomials__methods_[] = {
              DECLARE_METHOD(t_JacobiPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValue, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValueAndDerivative, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JacobiPolynomials)[] = {
              { Py_tp_methods, t_JacobiPolynomials__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JacobiPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JacobiPolynomials, t_JacobiPolynomials, JacobiPolynomials);

            void t_JacobiPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(JacobiPolynomials), &PY_TYPE_DEF(JacobiPolynomials), module, "JacobiPolynomials", 0);
            }

            void t_JacobiPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "class_", make_descriptor(JacobiPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "wrapfn_", make_descriptor(t_JacobiPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JacobiPolynomials::initializeClass, 1)))
                return NULL;
              return t_JacobiPolynomials::wrap_Object(JacobiPolynomials(((t_JacobiPolynomials *) arg)->object.this$));
            }
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JacobiPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::FieldGradient a3((jobject) NULL);
                  PyTypeObject **p3;
                  ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIK", ::org::hipparchus::analysis::differentiation::FieldGradient::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::analysis::differentiation::t_FieldGradient::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result);
                  }
                }
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::Gradient a3((jobject) NULL);
                  ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getValue", args);
              return NULL;
            }

            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "IIID", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValueAndDerivative(a0, a1, a2, a3));
                return result.wrap();
              }

              PyErr_SetArgsError(type, "getValueAndDerivative", args);
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
                mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCsig3eigvec3_7cdc325af0834901] = env->getMethodID(cls, "getCsig3eigvec3", "()[D");
                mids$[mid_isAltCovFlagSet_e470b6d9e0d979db] = env->getMethodID(cls, "isAltCovFlagSet", "()Z");
                mids$[mid_setCsig3eigvec3_ebc26dcaf4761286] = env->getMethodID(cls, "setCsig3eigvec3", "([D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SigmaEigenvectorsCovariance::SigmaEigenvectorsCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

            JArray< jdouble > SigmaEigenvectorsCovariance::getCsig3eigvec3() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCsig3eigvec3_7cdc325af0834901]));
            }

            jboolean SigmaEigenvectorsCovariance::isAltCovFlagSet() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isAltCovFlagSet_e470b6d9e0d979db]);
            }

            void SigmaEigenvectorsCovariance::setCsig3eigvec3(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsig3eigvec3_ebc26dcaf4761286], a0.this$);
            }

            void SigmaEigenvectorsCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative::class$ = NULL;
        jmethodID *UnivariateDerivative::mids$ = NULL;
        bool UnivariateDerivative::live$ = false;

        jclass UnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_b772323fc98b7293] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_29ffeeddaa7151a9] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative::UnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble UnivariateDerivative::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_b772323fc98b7293], a0);
        }

        jint UnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jdouble UnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_29ffeeddaa7151a9], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a]));
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
        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args);
        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data);
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data);
        static PyGetSetDef t_UnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_UnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative)[] = {
          { Py_tp_methods, t_UnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative_init_ },
          { Py_tp_getset, t_UnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative, t_UnivariateDerivative, UnivariateDerivative);
        PyObject *t_UnivariateDerivative::wrap_Object(const UnivariateDerivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative), &PY_TYPE_DEF(UnivariateDerivative), module, "UnivariateDerivative", 0);
        }

        void t_UnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "class_", make_descriptor(UnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "wrapfn_", make_descriptor(t_UnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative::wrap_Object(UnivariateDerivative(((t_UnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          UnivariateDerivative object((jobject) NULL);

          INT_CALL(object = UnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/String.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *OrphanFrame::class$ = NULL;
      jmethodID *OrphanFrame::mids$ = NULL;
      bool OrphanFrame::live$ = false;

      jclass OrphanFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/OrphanFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_addChild_c5d94383981965f9] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_addChild_703b4c4a4f2c49c2] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_attachTo_b2f70a458edb5ee8] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_attachTo_22e551ec162d32ec] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_getChildren_a6156df500549a58] = env->getMethodID(cls, "getChildren", "()Ljava/util/List;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrphanFrame::OrphanFrame(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_c5d94383981965f9], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_703b4c4a4f2c49c2], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_b2f70a458edb5ee8], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_22e551ec162d32ec], a0.this$, a1.this$, a2);
      }

      ::java::util::List OrphanFrame::getChildren() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getChildren_a6156df500549a58]));
      }

      ::org::orekit::frames::Frame OrphanFrame::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::java::lang::String OrphanFrame::toString() const
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
  namespace orekit {
    namespace frames {
      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data);
      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data);
      static PyGetSetDef t_OrphanFrame__fields_[] = {
        DECLARE_GET_FIELD(t_OrphanFrame, children),
        DECLARE_GET_FIELD(t_OrphanFrame, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrphanFrame__methods_[] = {
        DECLARE_METHOD(t_OrphanFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, addChild, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, attachTo, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, getChildren, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrphanFrame)[] = {
        { Py_tp_methods, t_OrphanFrame__methods_ },
        { Py_tp_init, (void *) t_OrphanFrame_init_ },
        { Py_tp_getset, t_OrphanFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrphanFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrphanFrame, t_OrphanFrame, OrphanFrame);

      void t_OrphanFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(OrphanFrame), &PY_TYPE_DEF(OrphanFrame), module, "OrphanFrame", 0);
      }

      void t_OrphanFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "class_", make_descriptor(OrphanFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "wrapfn_", make_descriptor(t_OrphanFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrphanFrame::initializeClass, 1)))
          return NULL;
        return t_OrphanFrame::wrap_Object(OrphanFrame(((t_OrphanFrame *) arg)->object.this$));
      }
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrphanFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        OrphanFrame object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = OrphanFrame(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addChild", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "attachTo", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(OrphanFrame));
      }

      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrphanFrame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Rint::class$ = NULL;
        jmethodID *Rint::mids$ = NULL;
        bool Rint::live$ = false;

        jclass Rint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Rint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Rint::Rint() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Rint::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Rint::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Rint_value(t_Rint *self, PyObject *args);

        static PyMethodDef t_Rint__methods_[] = {
          DECLARE_METHOD(t_Rint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rint)[] = {
          { Py_tp_methods, t_Rint__methods_ },
          { Py_tp_init, (void *) t_Rint_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rint, t_Rint, Rint);

        void t_Rint::install(PyObject *module)
        {
          installType(&PY_TYPE(Rint), &PY_TYPE_DEF(Rint), module, "Rint", 0);
        }

        void t_Rint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "class_", make_descriptor(Rint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "wrapfn_", make_descriptor(t_Rint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rint::initializeClass, 1)))
            return NULL;
          return t_Rint::wrap_Object(Rint(((t_Rint *) arg)->object.this$));
        }
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds)
        {
          Rint object((jobject) NULL);

          INT_CALL(object = Rint());
          self->object = object;

          return 0;
        }

        static PyObject *t_Rint_value(t_Rint *self, PyObject *args)
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
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *WeibullDistribution::class$ = NULL;
        jmethodID *WeibullDistribution::mids$ = NULL;
        bool WeibullDistribution::live$ = false;

        jclass WeibullDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/WeibullDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_456d9a2f64d6b28d] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WeibullDistribution::WeibullDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble WeibullDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble WeibullDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble WeibullDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble WeibullDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean WeibullDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble WeibullDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data);
        static PyGetSetDef t_WeibullDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalMean),
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_WeibullDistribution, scale),
          DECLARE_GET_FIELD(t_WeibullDistribution, shape),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportConnected),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WeibullDistribution__methods_[] = {
          DECLARE_METHOD(t_WeibullDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeibullDistribution)[] = {
          { Py_tp_methods, t_WeibullDistribution__methods_ },
          { Py_tp_init, (void *) t_WeibullDistribution_init_ },
          { Py_tp_getset, t_WeibullDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeibullDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(WeibullDistribution, t_WeibullDistribution, WeibullDistribution);

        void t_WeibullDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(WeibullDistribution), &PY_TYPE_DEF(WeibullDistribution), module, "WeibullDistribution", 0);
        }

        void t_WeibullDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "class_", make_descriptor(WeibullDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "wrapfn_", make_descriptor(t_WeibullDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeibullDistribution::initializeClass, 1)))
            return NULL;
          return t_WeibullDistribution::wrap_Object(WeibullDistribution(((t_WeibullDistribution *) arg)->object.this$));
        }
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeibullDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          WeibullDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = WeibullDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data)
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
#include "org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_60d6ef6da0933f47] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_cf963d44d06e3222] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_a6c4b93bfc4f4626] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_60d6ef6da0933f47, a0, a1.this$)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_cf963d44d06e3222, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
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
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinatesHermiteInterpolator, t_TimeStampedPVCoordinatesHermiteInterpolator, TimeStampedPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedPVCoordinatesHermiteInterpolator), module, "TimeStampedPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedPVCoordinatesHermiteInterpolator(((t_TimeStampedPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
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

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
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
            mids$[mid_init$_e3f3e7754a5968a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_65bc834f2dce0071] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_fee8ba5a875e46f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_a3a1c2f8eec725a0] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_e3f3e7754a5968a8, a0.this$, a1.this$, a2.this$, a3)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_65bc834f2dce0071, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::orbits::OrbitType & a9, const ::org::orekit::orbits::PositionAngleType & a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_fee8ba5a875e46f1, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8, a9.this$, a10.this$, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EcksteinHechlerPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EcksteinHechlerPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_d397e255f9fb16e6], a0.this$));
        }

        EcksteinHechlerPropagatorBuilder EcksteinHechlerPropagatorBuilder::copy() const
        {
          return EcksteinHechlerPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_a3a1c2f8eec725a0]));
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
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *NewtonianAttraction::class$ = NULL;
        jmethodID *NewtonianAttraction::mids$ = NULL;
        bool NewtonianAttraction::live$ = false;
        ::java::lang::String *NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

        jclass NewtonianAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/NewtonianAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addContribution_3ae28f2cc7cbb00b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_170c8a5902f676b2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_e912d21057defe63] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMu_3c5960f880427fef] = env->getMethodID(cls, "getMu", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonianAttraction::NewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_3ae28f2cc7cbb00b], a0.this$, a1.this$);
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_170c8a5902f676b2], a0.this$, a1.this$);
        }

        jboolean NewtonianAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        jdouble NewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_e912d21057defe63], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement NewtonianAttraction::getMu(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_3c5960f880427fef], a0.this$, a1.this$));
        }

        ::java::util::List NewtonianAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data);
        static PyGetSetDef t_NewtonianAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonianAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonianAttraction__methods_[] = {
          DECLARE_METHOD(t_NewtonianAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getMu, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonianAttraction)[] = {
          { Py_tp_methods, t_NewtonianAttraction__methods_ },
          { Py_tp_init, (void *) t_NewtonianAttraction_init_ },
          { Py_tp_getset, t_NewtonianAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonianAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NewtonianAttraction, t_NewtonianAttraction, NewtonianAttraction);

        void t_NewtonianAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonianAttraction), &PY_TYPE_DEF(NewtonianAttraction), module, "NewtonianAttraction", 0);
        }

        void t_NewtonianAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "class_", make_descriptor(NewtonianAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "wrapfn_", make_descriptor(t_NewtonianAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(NewtonianAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
        }

        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonianAttraction::initializeClass, 1)))
            return NULL;
          return t_NewtonianAttraction::wrap_Object(NewtonianAttraction(((t_NewtonianAttraction *) arg)->object.this$));
        }
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonianAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          NewtonianAttraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = NewtonianAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args)
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

        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getMu(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data)
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
#include "org/orekit/propagation/events/NegateDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NegateDetector::class$ = NULL;
        jmethodID *NegateDetector::mids$ = NULL;
        bool NegateDetector::live$ = false;

        jclass NegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ef30a2ad40caceb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getOriginal_27b528e7858202ed] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_74218385cc515fe3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NegateDetector::NegateDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8ef30a2ad40caceb, a0.this$)) {}

        jdouble NegateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector NegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_27b528e7858202ed]));
        }

        void NegateDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args);
        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self);
        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data);
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data);
        static PyGetSetDef t_NegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NegateDetector, original),
          DECLARE_GET_FIELD(t_NegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NegateDetector__methods_[] = {
          DECLARE_METHOD(t_NegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_NegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NegateDetector)[] = {
          { Py_tp_methods, t_NegateDetector__methods_ },
          { Py_tp_init, (void *) t_NegateDetector_init_ },
          { Py_tp_getset, t_NegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NegateDetector, t_NegateDetector, NegateDetector);
        PyObject *t_NegateDetector::wrap_Object(const NegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NegateDetector), &PY_TYPE_DEF(NegateDetector), module, "NegateDetector", 0);
        }

        void t_NegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "class_", make_descriptor(NegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "wrapfn_", make_descriptor(t_NegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NegateDetector::initializeClass, 1)))
            return NULL;
          return t_NegateDetector::wrap_Object(NegateDetector(((t_NegateDetector *) arg)->object.this$));
        }
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          NegateDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = NegateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NegateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Laas2015::class$ = NULL;
              jmethodID *Laas2015::mids$ = NULL;
              bool Laas2015::live$ = false;
              jdouble Laas2015::DEFAULT_SCALING_THRESHOLD = (jdouble) 0;

              jclass Laas2015::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCALING_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_SCALING_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Laas2015::Laas2015() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              Laas2015::Laas2015(jdouble a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Laas2015::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Laas2015::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Laas2015::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
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
              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data);
              static PyGetSetDef t_Laas2015__fields_[] = {
                DECLARE_GET_FIELD(t_Laas2015, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Laas2015__methods_[] = {
                DECLARE_METHOD(t_Laas2015, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, compute, METH_VARARGS),
                DECLARE_METHOD(t_Laas2015, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Laas2015)[] = {
                { Py_tp_methods, t_Laas2015__methods_ },
                { Py_tp_init, (void *) t_Laas2015_init_ },
                { Py_tp_getset, t_Laas2015__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Laas2015)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Laas2015, t_Laas2015, Laas2015);

              void t_Laas2015::install(PyObject *module)
              {
                installType(&PY_TYPE(Laas2015), &PY_TYPE_DEF(Laas2015), module, "Laas2015", 0);
              }

              void t_Laas2015::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "class_", make_descriptor(Laas2015::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "wrapfn_", make_descriptor(t_Laas2015::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "boxfn_", make_descriptor(boxObject));
                env->getClass(Laas2015::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "DEFAULT_SCALING_THRESHOLD", make_descriptor(Laas2015::DEFAULT_SCALING_THRESHOLD));
              }

              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Laas2015::initializeClass, 1)))
                  return NULL;
                return t_Laas2015::wrap_Object(Laas2015(((t_Laas2015 *) arg)->object.this$));
              }
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Laas2015::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Laas2015 object((jobject) NULL);

                    INT_CALL(object = Laas2015());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    jdouble a0;
                    jint a1;
                    Laas2015 object((jobject) NULL);

                    if (!parseArgs(args, "DI", &a0, &a1))
                    {
                      INT_CALL(object = Laas2015(a0, a1));
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

              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
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
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data)
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
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *DiscreteTroposphericModel::class$ = NULL;
          jmethodID *DiscreteTroposphericModel::mids$ = NULL;
          bool DiscreteTroposphericModel::live$ = false;

          jclass DiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/DiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement DiscreteTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble DiscreteTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args);

          static PyMethodDef t_DiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_DiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_DiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(DiscreteTroposphericModel, t_DiscreteTroposphericModel, DiscreteTroposphericModel);

          void t_DiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(DiscreteTroposphericModel), &PY_TYPE_DEF(DiscreteTroposphericModel), module, "DiscreteTroposphericModel", 0);
          }

          void t_DiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "class_", make_descriptor(DiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "wrapfn_", make_descriptor(t_DiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_DiscreteTroposphericModel::wrap_Object(DiscreteTroposphericModel(((t_DiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesRangeModifier::RelativisticClockInterSatellitesRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesRangeModifier, t_RelativisticClockInterSatellitesRangeModifier, RelativisticClockInterSatellitesRangeModifier);

          void t_RelativisticClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier), module, "RelativisticClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesRangeModifier::wrap_Object(RelativisticClockInterSatellitesRangeModifier(((t_RelativisticClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages::class$ = NULL;
        jmethodID *RuggedMessages::mids$ = NULL;
        bool RuggedMessages::live$ = false;
        RuggedMessages *RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::CANNOT_PARSE_LINE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_NOT_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = NULL;
        RuggedMessages *RuggedMessages::DUPLICATED_PARAMETER_NAME = NULL;
        RuggedMessages *RuggedMessages::EMPTY_TILE = NULL;
        RuggedMessages *RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = NULL;
        RuggedMessages *RuggedMessages::INTERNAL_ERROR = NULL;
        RuggedMessages *RuggedMessages::INVALID_RANGE_FOR_LINES = NULL;
        RuggedMessages *RuggedMessages::INVALID_RUGGED_NAME = NULL;
        RuggedMessages *RuggedMessages::INVALID_STEP = NULL;
        RuggedMessages *RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = NULL;
        RuggedMessages *RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_DEM_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_LAYER_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_PARAMETERS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::NO_REFERENCE_MAPPINGS = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_ANGLES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_INDICES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TIME_RANGE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = NULL;
        RuggedMessages *RuggedMessages::TILE_ALREADY_DEFINED = NULL;
        RuggedMessages *RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::UNINITIALIZED_CONTEXT = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_SENSOR = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_TILE = NULL;
        RuggedMessages *RuggedMessages::UNSUPPORTED_REFINING_CONTEXT = NULL;

        jclass RuggedMessages::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
            mids$[mid_valueOf_f64d3eb28b165176] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/errors/RuggedMessages;");
            mids$[mid_values_09671380335c3a24] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/errors/RuggedMessages;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            ATMOSPHERIC_REFRACTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ATMOSPHERIC_REFRACTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            CANNOT_PARSE_LINE = new RuggedMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ACTIVATION_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ACTIVATION_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ALREADY_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ALREADY_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_NOT_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_NOT_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = new RuggedMessages(env->getStaticObjectField(cls, "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DUPLICATED_PARAMETER_NAME = new RuggedMessages(env->getStaticObjectField(cls, "DUPLICATED_PARAMETER_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            EMPTY_TILE = new RuggedMessages(env->getStaticObjectField(cls, "EMPTY_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = new RuggedMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INTERNAL_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RANGE_FOR_LINES = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RANGE_FOR_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RUGGED_NAME = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RUGGED_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_STEP = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_STEP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LIGHT_TIME_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "LIGHT_TIME_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NOT_INTERPOLATOR_DUMP_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NOT_INTERPOLATOR_DUMP_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_DEM_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_DEM_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_LAYER_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_LAYER_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_PARAMETERS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "NO_PARAMETERS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_REFERENCE_MAPPINGS = new RuggedMessages(env->getStaticObjectField(cls, "NO_REFERENCE_MAPPINGS", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_ANGLES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_ANGLES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_INDICES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_INDICES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TIME_RANGE = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TIME_RANGE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_ALREADY_DEFINED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_ALREADY_DEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNINITIALIZED_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNINITIALIZED_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_SENSOR = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_SENSOR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_TILE = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNSUPPORTED_REFINING_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNSUPPORTED_REFINING_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String RuggedMessages::getLocalizedString(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
        }

        ::java::lang::String RuggedMessages::getSourceString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
        }

        RuggedMessages RuggedMessages::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return RuggedMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f64d3eb28b165176], a0.this$));
        }

        JArray< RuggedMessages > RuggedMessages::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< RuggedMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_09671380335c3a24]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args);
        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg);
        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self);
        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_RuggedMessages_values(PyTypeObject *type);
        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data);
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data);
        static PyGetSetDef t_RuggedMessages__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages, sourceString),
          DECLARE_GET_FIELD(t_RuggedMessages, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages, getLocalizedString, METH_O),
          DECLARE_METHOD(t_RuggedMessages, getSourceString, METH_NOARGS),
          DECLARE_METHOD(t_RuggedMessages, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages)[] = {
          { Py_tp_methods, t_RuggedMessages__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RuggedMessages__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(RuggedMessages, t_RuggedMessages, RuggedMessages);
        PyObject *t_RuggedMessages::wrap_Object(const RuggedMessages& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages), &PY_TYPE_DEF(RuggedMessages), module, "RuggedMessages", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(RuggedMessages$UTF8Control)));
        }

        void t_RuggedMessages::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "class_", make_descriptor(RuggedMessages::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "wrapfn_", make_descriptor(t_RuggedMessages::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "boxfn_", make_descriptor(boxObject));
          env->getClass(RuggedMessages::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ATMOSPHERIC_REFRACTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "CANNOT_PARSE_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::CANNOT_PARSE_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ACTIVATION_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ALREADY_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_NOT_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_NOT_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DUPLICATED_PARAMETER_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DUPLICATED_PARAMETER_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "EMPTY_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::EMPTY_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INTERNAL_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INTERNAL_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RANGE_FOR_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RANGE_FOR_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RUGGED_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RUGGED_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_STEP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_STEP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LIGHT_TIME_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NOT_INTERPOLATOR_DUMP_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_DEM_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_DEM_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_LAYER_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_LAYER_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_PARAMETERS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_PARAMETERS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_REFERENCE_MAPPINGS", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_REFERENCE_MAPPINGS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_ANGLES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_ANGLES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_INDICES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_INDICES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TIME_RANGE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TIME_RANGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_ALREADY_DEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_ALREADY_DEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNINITIALIZED_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNINITIALIZED_CONTEXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_SENSOR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_SENSOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNSUPPORTED_REFINING_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNSUPPORTED_REFINING_CONTEXT)));
        }

        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages::wrap_Object(RuggedMessages(((t_RuggedMessages *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg)
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLocalizedString(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
          return NULL;
        }

        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceString());
          return j2p(result);
        }

        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          RuggedMessages result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::valueOf(a0));
            return t_RuggedMessages::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_RuggedMessages_values(PyTypeObject *type)
        {
          JArray< RuggedMessages > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::values());
          return JArray<jobject>(result.this$).wrap(t_RuggedMessages::wrap_jobject);
        }
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceString());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/util/Binary64.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64Field::class$ = NULL;
      jmethodID *Binary64Field::mids$ = NULL;
      bool Binary64Field::live$ = false;

      jclass Binary64Field::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64Field");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_8494a3ac3be399fe] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/Binary64Field;");
          mids$[mid_getOne_cd1f6a49ec3a1b51] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_cd1f6a49ec3a1b51] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Binary64Field::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      Binary64Field Binary64Field::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return Binary64Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_8494a3ac3be399fe]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getOne() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getOne_cd1f6a49ec3a1b51]));
      }

      ::java::lang::Class Binary64Field::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getZero() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getZero_cd1f6a49ec3a1b51]));
      }

      jint Binary64Field::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type);
      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self);
      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data);
      static PyGetSetDef t_Binary64Field__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64Field, instance),
        DECLARE_GET_FIELD(t_Binary64Field, one),
        DECLARE_GET_FIELD(t_Binary64Field, runtimeClass),
        DECLARE_GET_FIELD(t_Binary64Field, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64Field__methods_[] = {
        DECLARE_METHOD(t_Binary64Field, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64Field, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64Field)[] = {
        { Py_tp_methods, t_Binary64Field__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Binary64Field__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64Field)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Binary64Field, t_Binary64Field, Binary64Field);

      void t_Binary64Field::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64Field), &PY_TYPE_DEF(Binary64Field), module, "Binary64Field", 0);
      }

      void t_Binary64Field::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "class_", make_descriptor(Binary64Field::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "wrapfn_", make_descriptor(t_Binary64Field::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64Field::initializeClass, 1)))
          return NULL;
        return t_Binary64Field::wrap_Object(Binary64Field(((t_Binary64Field *) arg)->object.this$));
      }
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64Field::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type)
      {
        Binary64Field result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::Binary64Field::getInstance());
        return t_Binary64Field::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data)
      {
        Binary64Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_Binary64Field::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonLexicalAnalyzer::class$ = NULL;
            jmethodID *PythonLexicalAnalyzer::mids$ = NULL;
            bool PythonLexicalAnalyzer::live$ = false;

            jclass PythonLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_accept_b8fbb626a8a68048] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonLexicalAnalyzer::PythonLexicalAnalyzer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonLexicalAnalyzer::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonLexicalAnalyzer::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonLexicalAnalyzer::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self);
            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args);
            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data);
            static PyGetSetDef t_PythonLexicalAnalyzer__fields_[] = {
              DECLARE_GET_FIELD(t_PythonLexicalAnalyzer, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_PythonLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonLexicalAnalyzer)[] = {
              { Py_tp_methods, t_PythonLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_PythonLexicalAnalyzer_init_ },
              { Py_tp_getset, t_PythonLexicalAnalyzer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonLexicalAnalyzer, t_PythonLexicalAnalyzer, PythonLexicalAnalyzer);

            void t_PythonLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonLexicalAnalyzer), &PY_TYPE_DEF(PythonLexicalAnalyzer), module, "PythonLexicalAnalyzer", 1);
            }

            void t_PythonLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "class_", make_descriptor(PythonLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "wrapfn_", make_descriptor(t_PythonLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonLexicalAnalyzer::initializeClass);
              JNINativeMethod methods[] = {
                { "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;", (void *) t_PythonLexicalAnalyzer_accept0 },
                { "pythonDecRef", "()V", (void *) t_PythonLexicalAnalyzer_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_PythonLexicalAnalyzer::wrap_Object(PythonLexicalAnalyzer(((t_PythonLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              PythonLexicalAnalyzer object((jobject) NULL);

              INT_CALL(object = PythonLexicalAnalyzer());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args)
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

            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::wrap_Object(::org::orekit::files::ccsds::utils::lexical::MessageParser(a0));
              PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("accept", result);
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

            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data)
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
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asinh::class$ = NULL;
        jmethodID *Asinh::mids$ = NULL;
        bool Asinh::live$ = false;

        jclass Asinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asinh::Asinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Asinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args);

        static PyMethodDef t_Asinh__methods_[] = {
          DECLARE_METHOD(t_Asinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asinh)[] = {
          { Py_tp_methods, t_Asinh__methods_ },
          { Py_tp_init, (void *) t_Asinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asinh, t_Asinh, Asinh);

        void t_Asinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Asinh), &PY_TYPE_DEF(Asinh), module, "Asinh", 0);
        }

        void t_Asinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "class_", make_descriptor(Asinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "wrapfn_", make_descriptor(t_Asinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asinh::initializeClass, 1)))
            return NULL;
          return t_Asinh::wrap_Object(Asinh(((t_Asinh *) arg)->object.this$));
        }
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds)
        {
          Asinh object((jobject) NULL);

          INT_CALL(object = Asinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args)
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
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaturalRanking::class$ = NULL;
        jmethodID *NaturalRanking::mids$ = NULL;
        bool NaturalRanking::live$ = false;
        ::org::hipparchus::stat::ranking::NaNStrategy *NaturalRanking::DEFAULT_NAN_STRATEGY = NULL;
        ::org::hipparchus::stat::ranking::TiesStrategy *NaturalRanking::DEFAULT_TIES_STRATEGY = NULL;

        jclass NaturalRanking::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaturalRanking");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_4008cb414d826f2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)V");
            mids$[mid_init$_7b414007e8f069d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_30686433a7523e33] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_babe6b585b24086b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getNanStrategy_9a708dd74e04e9b8] = env->getMethodID(cls, "getNanStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_getTiesStrategy_93734faba96ed8f2] = env->getMethodID(cls, "getTiesStrategy", "()Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_rank_4b742fe429c22ba8] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_NAN_STRATEGY = new ::org::hipparchus::stat::ranking::NaNStrategy(env->getStaticObjectField(cls, "DEFAULT_NAN_STRATEGY", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            DEFAULT_TIES_STRATEGY = new ::org::hipparchus::stat::ranking::TiesStrategy(env->getStaticObjectField(cls, "DEFAULT_TIES_STRATEGY", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaturalRanking::NaturalRanking() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4008cb414d826f2c, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b414007e8f069d9, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30686433a7523e33, a0.this$, a1.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_babe6b585b24086b, a0.this$, a1.this$)) {}

        ::org::hipparchus::stat::ranking::NaNStrategy NaturalRanking::getNanStrategy() const
        {
          return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNanStrategy_9a708dd74e04e9b8]));
        }

        ::org::hipparchus::stat::ranking::TiesStrategy NaturalRanking::getTiesStrategy() const
        {
          return ::org::hipparchus::stat::ranking::TiesStrategy(env->callObjectMethod(this$, mids$[mid_getTiesStrategy_93734faba96ed8f2]));
        }

        JArray< jdouble > NaturalRanking::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_4b742fe429c22ba8], a0.this$));
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
        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg);
        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data);
        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data);
        static PyGetSetDef t_NaturalRanking__fields_[] = {
          DECLARE_GET_FIELD(t_NaturalRanking, nanStrategy),
          DECLARE_GET_FIELD(t_NaturalRanking, tiesStrategy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaturalRanking__methods_[] = {
          DECLARE_METHOD(t_NaturalRanking, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, getNanStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, getTiesStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaturalRanking)[] = {
          { Py_tp_methods, t_NaturalRanking__methods_ },
          { Py_tp_init, (void *) t_NaturalRanking_init_ },
          { Py_tp_getset, t_NaturalRanking__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaturalRanking)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NaturalRanking, t_NaturalRanking, NaturalRanking);

        void t_NaturalRanking::install(PyObject *module)
        {
          installType(&PY_TYPE(NaturalRanking), &PY_TYPE_DEF(NaturalRanking), module, "NaturalRanking", 0);
        }

        void t_NaturalRanking::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "class_", make_descriptor(NaturalRanking::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "wrapfn_", make_descriptor(t_NaturalRanking::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaturalRanking::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_NAN_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(*NaturalRanking::DEFAULT_NAN_STRATEGY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_TIES_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(*NaturalRanking::DEFAULT_TIES_STRATEGY)));
        }

        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaturalRanking::initializeClass, 1)))
            return NULL;
          return t_NaturalRanking::wrap_Object(NaturalRanking(((t_NaturalRanking *) arg)->object.this$));
        }
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaturalRanking::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NaturalRanking object((jobject) NULL);

              INT_CALL(object = NaturalRanking());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::TiesStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
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

        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg)
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

        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
        }

        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader::class$ = NULL;
      jmethodID *EopHistoryLoader::mids$ = NULL;
      bool EopHistoryLoader::live$ = false;

      jclass EopHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fillHistory_28ed459287c4a62f] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void EopHistoryLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_fillHistory_28ed459287c4a62f], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, fillHistory, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader)[] = {
        { Py_tp_methods, t_EopHistoryLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader, t_EopHistoryLoader, EopHistoryLoader);

      void t_EopHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader), &PY_TYPE_DEF(EopHistoryLoader), module, "EopHistoryLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "Parser", make_descriptor(&PY_TYPE_DEF(EopHistoryLoader$Parser)));
      }

      void t_EopHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "class_", make_descriptor(EopHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "wrapfn_", make_descriptor(t_EopHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader::wrap_Object(EopHistoryLoader(((t_EopHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::SortedSet a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
        {
          OBJ_CALL(self->object.fillHistory(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OutlierFilter::class$ = NULL;
          jmethodID *OutlierFilter::mids$ = NULL;
          bool OutlierFilter::live$ = false;

          jclass OutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_getWarmup_f2f64475e4580546] = env->getMethodID(cls, "getWarmup", "()I");
              mids$[mid_getMaxSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxSigma", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlierFilter::OutlierFilter(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

          ::java::util::List OutlierFilter::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OutlierFilter::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args);
          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self);
          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg);
          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data);
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data);
          static PyGetSetDef t_OutlierFilter__fields_[] = {
            DECLARE_GET_FIELD(t_OutlierFilter, parametersDrivers),
            DECLARE_GET_FIELD(t_OutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OutlierFilter__methods_[] = {
            DECLARE_METHOD(t_OutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_OutlierFilter, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OutlierFilter, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlierFilter)[] = {
            { Py_tp_methods, t_OutlierFilter__methods_ },
            { Py_tp_init, (void *) t_OutlierFilter_init_ },
            { Py_tp_getset, t_OutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlierFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlierFilter, t_OutlierFilter, OutlierFilter);
          PyObject *t_OutlierFilter::wrap_Object(const OutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlierFilter), &PY_TYPE_DEF(OutlierFilter), module, "OutlierFilter", 0);
          }

          void t_OutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "class_", make_descriptor(OutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "wrapfn_", make_descriptor(t_OutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlierFilter::initializeClass, 1)))
              return NULL;
            return t_OutlierFilter::wrap_Object(OutlierFilter(((t_OutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg)
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
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonMeasurementBuilder::class$ = NULL;
          jmethodID *PythonMeasurementBuilder::mids$ = NULL;
          bool PythonMeasurementBuilder::live$ = false;

          jclass PythonMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_d02e2fca157afe5d] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_ff20f279f9ba9f9e] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementBuilder::PythonMeasurementBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args);
          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self);
          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args);
          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data);
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementBuilder, t_PythonMeasurementBuilder, PythonMeasurementBuilder);
          PyObject *t_PythonMeasurementBuilder::wrap_Object(const PythonMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementBuilder), &PY_TYPE_DEF(PythonMeasurementBuilder), module, "PythonMeasurementBuilder", 1);
          }

          void t_PythonMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "class_", make_descriptor(PythonMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonMeasurementBuilder_addModifier0 },
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonMeasurementBuilder_build1 },
              { "getModifiers", "()Ljava/util/List;", (void *) t_PythonMeasurementBuilder_getModifiers2 },
              { "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;", (void *) t_PythonMeasurementBuilder_getSatellites3 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMeasurementBuilder_init4 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementBuilder_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementBuilder::wrap_Object(PythonMeasurementBuilder(((t_PythonMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementBuilder object((jobject) NULL);

            INT_CALL(object = PythonMeasurementBuilder());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
            PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getModifiers", result);
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

          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &value))
            {
              throwTypeError("getSatellites", result);
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

          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data)
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
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/util/TimeZone.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/util/Date.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbsoluteDate::class$ = NULL;
      jmethodID *AbsoluteDate::mids$ = NULL;
      bool AbsoluteDate::live$ = false;
      AbsoluteDate *AbsoluteDate::ARBITRARY_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::BEIDOU_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::CCSDS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FIFTIES_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FUTURE_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::GALILEO_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GLONASS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GPS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::IRNSS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::J2000_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JAVA_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::MODIFIED_JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::PAST_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::QZSS_EPOCH = NULL;

      jclass AbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_076f09dda44638d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_9123fba9cf5e8ba5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_fab39d5927cb35c4] = env->getMethodID(cls, "<init>", "(Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2a3169c92f0851be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_ac094fa893132101] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_0816dbbf23396d63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2180a6d950d9f334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_22c5ff0d241c4818] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_8dd82a0d5a588591] = env->getMethodID(cls, "<init>", "(IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_042210679bb44b45] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_ee5b56e093499c83] = env->getMethodID(cls, "<init>", "(IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_982c9f163875e1c9] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5] = env->getStaticMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJDDate_23f6e153fbbaa3e3] = env->getStaticMethodID(cls, "createJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5] = env->getStaticMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createMJDDate_23f6e153fbbaa3e3] = env->getStaticMethodID(cls, "createMJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_durationFrom_e912d21057defe63] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getComponents_35b9f69c73993da4] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_9f0387d3e8c4d9e9] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_cc66809e3a6a3d13] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_2c20491308df7588] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bf941b87708f3b2b] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_11db2450649d8b27] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_11db2450649d8b27] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBefore_11db2450649d8b27] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_11db2450649d8b27] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetween_2a7c66554721f167] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_2a7c66554721f167] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isCloseTo_e2b5c9891f8d97aa] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/TimeStamped;D)Z");
          mids$[mid_isEqualTo_11db2450649d8b27] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_offsetFrom_8be30d4a50bd5048] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_e10e3e8eda31bd08] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_9e2750f6a79aa951] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_9ef4a5d891ffe5be] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_b7500d59046226f1] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_fbf88d9a1537638e] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_20277daed1c39013] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_a76f1ca2cc1b76e5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_timeScalesOffset_566ccd446b995a48] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_toDate_f64dbfcfe4c641a8] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_498d3d20a2b4a836] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_90cbcc0b7a5ddae9] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_44577b71ebe5fefb] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_57a8fe1fee44b5a2] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_6c05df8a55d4fe6c] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_44577b71ebe5fefb] = env->getMethodID(cls, "toStringRfc3339", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_5370e8d211a8715a] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(Lorg/orekit/time/TimeScale;I)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARBITRARY_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "ARBITRARY_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          BEIDOU_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          CCSDS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FIFTIES_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FUTURE_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "FUTURE_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          GALILEO_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GLONASS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GPS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          IRNSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          J2000_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JAVA_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          MODIFIED_JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          PAST_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "PAST_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          QZSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsoluteDate::AbsoluteDate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_076f09dda44638d8, a0.this$, a1)) {}

      AbsoluteDate::AbsoluteDate(const ::java::lang::String & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9123fba9cf5e8ba5, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::java::util::Date & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fab39d5927cb35c4, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a3169c92f0851be, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateTimeComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac094fa893132101, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0816dbbf23396d63, a0.this$, a1.this$, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2180a6d950d9f334, a0.this$, a1, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22c5ff0d241c4818, a0, a1.this$, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dd82a0d5a588591, a0, a1, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_042210679bb44b45, a0, a1.this$, a2, a3, a4, a5, a6.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee5b56e093499c83, a0, a1, a2, a3, a4, a5, a6.this$)) {}

      jint AbsoluteDate::compareTo(const AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_982c9f163875e1c9], a0.this$);
      }

      AbsoluteDate AbsoluteDate::createBesselianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5], a0));
      }

      AbsoluteDate AbsoluteDate::createJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_23f6e153fbbaa3e3], a0, a1, a2.this$));
      }

      AbsoluteDate AbsoluteDate::createJulianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5], a0));
      }

      AbsoluteDate AbsoluteDate::createMJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_23f6e153fbbaa3e3], a0, a1, a2.this$));
      }

      jdouble AbsoluteDate::durationFrom(const AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_e912d21057defe63], a0.this$);
      }

      jboolean AbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_35b9f69c73993da4], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_9f0387d3e8c4d9e9], a0));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_cc66809e3a6a3d13], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_2c20491308df7588], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bf941b87708f3b2b], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::getDate() const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jint AbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean AbsoluteDate::isAfter(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_11db2450649d8b27], a0.this$);
      }

      jboolean AbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_11db2450649d8b27], a0.this$);
      }

      jboolean AbsoluteDate::isBefore(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_11db2450649d8b27], a0.this$);
      }

      jboolean AbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_11db2450649d8b27], a0.this$);
      }

      jboolean AbsoluteDate::isBetween(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_2a7c66554721f167], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_2a7c66554721f167], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isCloseTo(const ::org::orekit::time::TimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_e2b5c9891f8d97aa], a0.this$, a1);
      }

      jboolean AbsoluteDate::isEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_11db2450649d8b27], a0.this$);
      }

      jdouble AbsoluteDate::offsetFrom(const AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_8be30d4a50bd5048], a0.this$, a1.this$);
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_e10e3e8eda31bd08], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_9e2750f6a79aa951], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_9ef4a5d891ffe5be], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2, const ::org::orekit::time::TimeScale & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_b7500d59046226f1], a0, a1.this$, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_fbf88d9a1537638e], a0, a1, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3, const AbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_20277daed1c39013], a0, a1, a2.this$, a3.this$, a4.this$));
      }

      AbsoluteDate AbsoluteDate::shiftedBy(jdouble a0) const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_a76f1ca2cc1b76e5], a0));
      }

      jdouble AbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_timeScalesOffset_566ccd446b995a48], a0.this$, a1.this$);
      }

      ::java::util::Date AbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_f64dbfcfe4c641a8], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_498d3d20a2b4a836], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_90cbcc0b7a5ddae9], a0));
      }

      ::java::lang::String AbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_44577b71ebe5fefb], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_57a8fe1fee44b5a2], a0.this$, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_6c05df8a55d4fe6c], a0, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toStringRfc3339(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_44577b71ebe5fefb], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale & a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_5370e8d211a8715a], a0.this$, a1));
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
      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self);
      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data);
      static PyGetSetDef t_AbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_AbsoluteDate, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_AbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, createBesselianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, durationFrom, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_AbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, shiftedBy, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toStringRfc3339, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsoluteDate)[] = {
        { Py_tp_methods, t_AbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_AbsoluteDate_init_ },
        { Py_tp_getset, t_AbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbsoluteDate, t_AbsoluteDate, AbsoluteDate);

      void t_AbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsoluteDate), &PY_TYPE_DEF(AbsoluteDate), module, "AbsoluteDate", 0);
      }

      void t_AbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "class_", make_descriptor(AbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "wrapfn_", make_descriptor(t_AbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbsoluteDate::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "ARBITRARY_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::ARBITRARY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "BEIDOU_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "CCSDS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FIFTIES_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FUTURE_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FUTURE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GALILEO_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GLONASS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GPS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "IRNSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "J2000_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JAVA_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "PAST_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::PAST_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "QZSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::QZSS_EPOCH)));
      }

      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_AbsoluteDate::wrap_Object(AbsoluteDate(((t_AbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AbsoluteDate object((jobject) NULL);

            INT_CALL(object = AbsoluteDate());
            self->object = object;
            break;
          }
         case 2:
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kD", AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Date a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kDk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIIIDk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIIIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createBesselianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJulianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createMJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self)
      {
        AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args)
      {
        AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bk", AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate a4((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bkk", AbsoluteDate::initializeClass, AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toStringRfc3339(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringRfc3339", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        jint a1;
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data)
      {
        AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
