#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipse.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipse::class$ = NULL;
      jmethodID *Ellipse::mids$ = NULL;
      bool Ellipse::live$ = false;

      jclass Ellipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ce5a6e6d64bae5a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/frames/Frame;)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_456d9a2f64d6b28d] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getCenter_17a952530a808943] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCenterOfCurvature_91634fa69e69124f] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_17a952530a808943] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getV_17a952530a808943] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAt_5f993a721a1d8c59] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_projectToEllipse_95abb8abb7f5aee0] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToEllipse_91634fa69e69124f] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toPlane_e74bef55b3143874] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toSpace_8c454111e739388f] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipse::Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ce5a6e6d64bae5a, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

      jdouble Ellipse::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble Ellipse::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_91634fa69e69124f], a0.this$));
      }

      ::org::orekit::frames::Frame Ellipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::pointAt(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_5f993a721a1d8c59], a0));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Ellipse::projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_95abb8abb7f5aee0], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_91634fa69e69124f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toPlane_e74bef55b3143874], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_8c454111e739388f], a0.this$));
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
      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipse_getA(t_Ellipse *self);
      static PyObject *t_Ellipse_getB(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenter(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_getFrame(t_Ellipse *self);
      static PyObject *t_Ellipse_getU(t_Ellipse *self);
      static PyObject *t_Ellipse_getV(t_Ellipse *self);
      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args);
      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data);
      static PyGetSetDef t_Ellipse__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipse, a),
        DECLARE_GET_FIELD(t_Ellipse, b),
        DECLARE_GET_FIELD(t_Ellipse, center),
        DECLARE_GET_FIELD(t_Ellipse, frame),
        DECLARE_GET_FIELD(t_Ellipse, u),
        DECLARE_GET_FIELD(t_Ellipse, v),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipse__methods_[] = {
        DECLARE_METHOD(t_Ellipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_Ellipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, pointAt, METH_O),
        DECLARE_METHOD(t_Ellipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_Ellipse, toPlane, METH_O),
        DECLARE_METHOD(t_Ellipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipse)[] = {
        { Py_tp_methods, t_Ellipse__methods_ },
        { Py_tp_init, (void *) t_Ellipse_init_ },
        { Py_tp_getset, t_Ellipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipse, t_Ellipse, Ellipse);

      void t_Ellipse::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipse), &PY_TYPE_DEF(Ellipse), module, "Ellipse", 0);
      }

      void t_Ellipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "class_", make_descriptor(Ellipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "wrapfn_", make_descriptor(t_Ellipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipse::initializeClass, 1)))
          return NULL;
        return t_Ellipse::wrap_Object(Ellipse(((t_Ellipse *) arg)->object.this$));
      }
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        Ellipse object((jobject) NULL);

        if (!parseArgs(args, "kkkDDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = Ellipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipse_getA(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getB(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getCenter(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_getFrame(t_Ellipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getU(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getV(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RegionCode::class$ = NULL;
          jmethodID *RegionCode::mids$ = NULL;
          bool RegionCode::live$ = false;
          RegionCode *RegionCode::JAPAN = NULL;
          RegionCode *RegionCode::WIDE_AREA = NULL;

          jclass RegionCode::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RegionCode");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_3b0ba20996c46b68] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_values_b41a95cecf263574] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/RegionCode;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              JAPAN = new RegionCode(env->getStaticObjectField(cls, "JAPAN", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              WIDE_AREA = new RegionCode(env->getStaticObjectField(cls, "WIDE_AREA", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RegionCode RegionCode::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RegionCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3b0ba20996c46b68], a0.this$));
          }

          JArray< RegionCode > RegionCode::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RegionCode >(env->callStaticObjectMethod(cls, mids$[mid_values_b41a95cecf263574]));
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
          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args);
          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RegionCode_values(PyTypeObject *type);
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data);
          static PyGetSetDef t_RegionCode__fields_[] = {
            DECLARE_GET_FIELD(t_RegionCode, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RegionCode__methods_[] = {
            DECLARE_METHOD(t_RegionCode, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, of_, METH_VARARGS),
            DECLARE_METHOD(t_RegionCode, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RegionCode)[] = {
            { Py_tp_methods, t_RegionCode__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RegionCode__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RegionCode)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RegionCode, t_RegionCode, RegionCode);
          PyObject *t_RegionCode::wrap_Object(const RegionCode& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RegionCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RegionCode::install(PyObject *module)
          {
            installType(&PY_TYPE(RegionCode), &PY_TYPE_DEF(RegionCode), module, "RegionCode", 0);
          }

          void t_RegionCode::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "class_", make_descriptor(RegionCode::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "wrapfn_", make_descriptor(t_RegionCode::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "boxfn_", make_descriptor(boxObject));
            env->getClass(RegionCode::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "JAPAN", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::JAPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "WIDE_AREA", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::WIDE_AREA)));
          }

          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RegionCode::initializeClass, 1)))
              return NULL;
            return t_RegionCode::wrap_Object(RegionCode(((t_RegionCode *) arg)->object.this$));
          }
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RegionCode::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RegionCode result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::valueOf(a0));
              return t_RegionCode::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RegionCode_values(PyTypeObject *type)
          {
            JArray< RegionCode > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::values());
            return JArray<jobject>(result.this$).wrap(t_RegionCode::wrap_jobject);
          }
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data)
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
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *ByteArrayEncodedMessage::class$ = NULL;
          jmethodID *ByteArrayEncodedMessage::mids$ = NULL;
          bool ByteArrayEncodedMessage::live$ = false;

          jclass ByteArrayEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/ByteArrayEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9c4b35f0a6dc87f3] = env->getMethodID(cls, "<init>", "([B)V");
              mids$[mid_start_7ae3461a92a43152] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ByteArrayEncodedMessage::ByteArrayEncodedMessage(const JArray< jbyte > & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_9c4b35f0a6dc87f3, a0.this$)) {}

          void ByteArrayEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_7ae3461a92a43152]);
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
        namespace parser {
          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args);

          static PyMethodDef t_ByteArrayEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_ByteArrayEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ByteArrayEncodedMessage)[] = {
            { Py_tp_methods, t_ByteArrayEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_ByteArrayEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ByteArrayEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(ByteArrayEncodedMessage, t_ByteArrayEncodedMessage, ByteArrayEncodedMessage);

          void t_ByteArrayEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ByteArrayEncodedMessage), &PY_TYPE_DEF(ByteArrayEncodedMessage), module, "ByteArrayEncodedMessage", 0);
          }

          void t_ByteArrayEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "class_", make_descriptor(ByteArrayEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "wrapfn_", make_descriptor(t_ByteArrayEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ByteArrayEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_ByteArrayEncodedMessage::wrap_Object(ByteArrayEncodedMessage(((t_ByteArrayEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ByteArrayEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            ByteArrayEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              INT_CALL(object = ByteArrayEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ByteArrayEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventShifter::class$ = NULL;
        jmethodID *EventShifter::mids$ = NULL;
        bool EventShifter::live$ = false;

        jclass EventShifter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventShifter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ea7e9d30b96a7240] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;ZDD)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDecreasingTimeShift_456d9a2f64d6b28d] = env->getMethodID(cls, "getDecreasingTimeShift", "()D");
            mids$[mid_getDetector_27b528e7858202ed] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getIncreasingTimeShift_456d9a2f64d6b28d] = env->getMethodID(cls, "getIncreasingTimeShift", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_e0e8c1fb7008da06] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventShifter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventShifter::EventShifter(const ::org::orekit::propagation::events::EventDetector & a0, jboolean a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ea7e9d30b96a7240, a0.this$, a1, a2, a3)) {}

        jdouble EventShifter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble EventShifter::getDecreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDecreasingTimeShift_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::events::EventDetector EventShifter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_27b528e7858202ed]));
        }

        jdouble EventShifter::getIncreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIncreasingTimeShift_456d9a2f64d6b28d]);
        }

        void EventShifter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args);
        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_getDetector(t_EventShifter *self);
        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data);
        static PyGetSetDef t_EventShifter__fields_[] = {
          DECLARE_GET_FIELD(t_EventShifter, decreasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, detector),
          DECLARE_GET_FIELD(t_EventShifter, increasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventShifter__methods_[] = {
          DECLARE_METHOD(t_EventShifter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, getDecreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getIncreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventShifter)[] = {
          { Py_tp_methods, t_EventShifter__methods_ },
          { Py_tp_init, (void *) t_EventShifter_init_ },
          { Py_tp_getset, t_EventShifter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventShifter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventShifter, t_EventShifter, EventShifter);
        PyObject *t_EventShifter::wrap_Object(const EventShifter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventShifter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventShifter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventShifter), &PY_TYPE_DEF(EventShifter), module, "EventShifter", 0);
        }

        void t_EventShifter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "class_", make_descriptor(EventShifter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "wrapfn_", make_descriptor(t_EventShifter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventShifter::initializeClass, 1)))
            return NULL;
          return t_EventShifter::wrap_Object(EventShifter(((t_EventShifter *) arg)->object.this$));
        }
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventShifter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          jboolean a1;
          jdouble a2;
          jdouble a3;
          EventShifter object((jobject) NULL);

          if (!parseArgs(args, "kZDD", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = EventShifter(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventShifter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_getDetector(t_EventShifter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldLegendrePolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldLegendrePolynomials::class$ = NULL;
      jmethodID *FieldLegendrePolynomials::mids$ = NULL;
      bool FieldLegendrePolynomials::live$ = false;

      jclass FieldLegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldLegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10a231dfce53a545] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getPnm_3e44951e1cc3e6e3] = env->getMethodID(cls, "getPnm", "(II)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLegendrePolynomials::FieldLegendrePolynomials(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10a231dfce53a545, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldLegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPnm_3e44951e1cc3e6e3], a0, a1));
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
      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args);
      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args);
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data);
      static PyGetSetDef t_FieldLegendrePolynomials__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLegendrePolynomials, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_FieldLegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLegendrePolynomials)[] = {
        { Py_tp_methods, t_FieldLegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_FieldLegendrePolynomials_init_ },
        { Py_tp_getset, t_FieldLegendrePolynomials__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLegendrePolynomials, t_FieldLegendrePolynomials, FieldLegendrePolynomials);
      PyObject *t_FieldLegendrePolynomials::wrap_Object(const FieldLegendrePolynomials& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLegendrePolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLegendrePolynomials), &PY_TYPE_DEF(FieldLegendrePolynomials), module, "FieldLegendrePolynomials", 0);
      }

      void t_FieldLegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "class_", make_descriptor(FieldLegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "wrapfn_", make_descriptor(t_FieldLegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_FieldLegendrePolynomials::wrap_Object(FieldLegendrePolynomials(((t_FieldLegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldLegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldLegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractKalmanEstimator::class$ = NULL;
        jmethodID *PythonAbstractKalmanEstimator::mids$ = NULL;
        bool PythonAbstractKalmanEstimator::live$ = false;

        jclass PythonAbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractKalmanEstimator::PythonAbstractKalmanEstimator(const ::java::util::List & a0) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

        void PythonAbstractKalmanEstimator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractKalmanEstimator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractKalmanEstimator::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self);
        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_PythonAbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractKalmanEstimator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_PythonAbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractKalmanEstimator_init_ },
          { Py_tp_getset, t_PythonAbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractKalmanEstimator, t_PythonAbstractKalmanEstimator, PythonAbstractKalmanEstimator);

        void t_PythonAbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractKalmanEstimator), &PY_TYPE_DEF(PythonAbstractKalmanEstimator), module, "PythonAbstractKalmanEstimator", 1);
        }

        void t_PythonAbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "class_", make_descriptor(PythonAbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "wrapfn_", make_descriptor(t_PythonAbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractKalmanEstimator::initializeClass);
          JNINativeMethod methods[] = {
            { "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;", (void *) t_PythonAbstractKalmanEstimator_getKalmanEstimation0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractKalmanEstimator_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractKalmanEstimator::wrap_Object(PythonAbstractKalmanEstimator(((t_PythonAbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          PythonAbstractKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractKalmanEstimator(a0));
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

        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanEstimation value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getKalmanEstimation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &value))
          {
            throwTypeError("getKalmanEstimation", result);
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

        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LeastSquaresConverter::class$ = NULL;
          jmethodID *LeastSquaresConverter::mids$ = NULL;
          bool LeastSquaresConverter::live$ = false;

          jclass LeastSquaresConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3b892730ec2c8e73] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D)V");
              mids$[mid_init$_9caca5407249770b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D[D)V");
              mids$[mid_init$_1235920111986d28] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[DLorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_value_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b892730ec2c8e73, a0.this$, a1.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9caca5407249770b, a0.this$, a1.this$, a2.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1235920111986d28, a0.this$, a1.this$, a2.this$)) {}

          jdouble LeastSquaresConverter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_f05cb8c6dfd5e0b9], a0.this$);
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
        namespace scalar {
          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg);

          static PyMethodDef t_LeastSquaresConverter__methods_[] = {
            DECLARE_METHOD(t_LeastSquaresConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LeastSquaresConverter)[] = {
            { Py_tp_methods, t_LeastSquaresConverter__methods_ },
            { Py_tp_init, (void *) t_LeastSquaresConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LeastSquaresConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LeastSquaresConverter, t_LeastSquaresConverter, LeastSquaresConverter);

          void t_LeastSquaresConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(LeastSquaresConverter), &PY_TYPE_DEF(LeastSquaresConverter), module, "LeastSquaresConverter", 0);
          }

          void t_LeastSquaresConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "class_", make_descriptor(LeastSquaresConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "wrapfn_", make_descriptor(t_LeastSquaresConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LeastSquaresConverter::initializeClass, 1)))
              return NULL;
            return t_LeastSquaresConverter::wrap_Object(LeastSquaresConverter(((t_LeastSquaresConverter *) arg)->object.this$));
          }
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LeastSquaresConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
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

          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Galileo::class$ = NULL;
        jmethodID *Galileo::mids$ = NULL;
        bool Galileo::live$ = false;
        jdouble Galileo::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Galileo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Galileo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3bb01d9fe1b183b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Galileo::Galileo(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c3bb01d9fe1b183b, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Galileo__methods_[] = {
          DECLARE_METHOD(t_Galileo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Galileo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Galileo)[] = {
          { Py_tp_methods, t_Galileo__methods_ },
          { Py_tp_init, (void *) t_Galileo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Galileo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Galileo, t_Galileo, Galileo);

        void t_Galileo::install(PyObject *module)
        {
          installType(&PY_TYPE(Galileo), &PY_TYPE_DEF(Galileo), module, "Galileo", 0);
        }

        void t_Galileo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "class_", make_descriptor(Galileo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "wrapfn_", make_descriptor(t_Galileo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "boxfn_", make_descriptor(boxObject));
          env->getClass(Galileo::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "DEFAULT_YAW_RATE", make_descriptor(Galileo::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Galileo::initializeClass, 1)))
            return NULL;
          return t_Galileo::wrap_Object(Galileo(((t_Galileo *) arg)->object.this$));
        }
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Galileo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Galileo object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Galileo(a0, a1, a2, a3, a4));
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
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *PythonAbstractSolarActivityData::class$ = NULL;
            jmethodID *PythonAbstractSolarActivityData::mids$ = NULL;
            bool PythonAbstractSolarActivityData::live$ = false;

            jclass PythonAbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_769d57bfd89eb385] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_get24HoursKp_e912d21057defe63] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_e586dea4c0bad69b] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_e912d21057defe63] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_e912d21057defe63] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_e912d21057defe63] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_e912d21057defe63] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_e912d21057defe63] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractSolarActivityData::PythonAbstractSolarActivityData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_769d57bfd89eb385, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            void PythonAbstractSolarActivityData::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractSolarActivityData::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractSolarActivityData::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self);
            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data);
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_PythonAbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, self),
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSolarActivityData)[] = {
              { Py_tp_methods, t_PythonAbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractSolarActivityData_init_ },
              { Py_tp_getset, t_PythonAbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(PythonAbstractSolarActivityData, t_PythonAbstractSolarActivityData, PythonAbstractSolarActivityData);
            PyObject *t_PythonAbstractSolarActivityData::wrap_Object(const PythonAbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractSolarActivityData), &PY_TYPE_DEF(PythonAbstractSolarActivityData), module, "PythonAbstractSolarActivityData", 1);
            }

            void t_PythonAbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "class_", make_descriptor(PythonAbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "wrapfn_", make_descriptor(t_PythonAbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractSolarActivityData::initializeClass);
              JNINativeMethod methods[] = {
                { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_get24HoursKp0 },
                { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonAbstractSolarActivityData_getAp1 },
                { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getAverageFlux2 },
                { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getDailyFlux3 },
                { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getInstantFlux4 },
                { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getMeanFlux5 },
                { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getThreeHourlyKP6 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractSolarActivityData_pythonDecRef7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractSolarActivityData::wrap_Object(PythonAbstractSolarActivityData(((t_PythonAbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              jint a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              PythonAbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = PythonAbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6, a7));
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

            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
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

            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getAp", result);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAverageFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getDailyFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
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

            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data)
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
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data)
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
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldTuple::class$ = NULL;
      jmethodID *FieldTuple::mids$ = NULL;
      bool FieldTuple::live$ = false;

      jclass FieldTuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldTuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4c337e4c1ec6f647] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_4a6695c32050ea61] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acos_4a6695c32050ea61] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acosh_4a6695c32050ea61] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_51810153224653b2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_1240ad28c30a567e] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asin_4a6695c32050ea61] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asinh_4a6695c32050ea61] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan_4a6695c32050ea61] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan2_51810153224653b2] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atanh_4a6695c32050ea61] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cbrt_4a6695c32050ea61] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ceil_4a6695c32050ea61] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_51810153224653b2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_1240ad28c30a567e] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cos_4a6695c32050ea61] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cosh_4a6695c32050ea61] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_51810153224653b2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_1240ad28c30a567e] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_4a6695c32050ea61] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_expm1_4a6695c32050ea61] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_floor_4a6695c32050ea61] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getComponent_d0960d09d84b1c1d] = env->getMethodID(cls, "getComponent", "(I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getComponents_01c7d10e96d5cf94] = env->getMethodID(cls, "getComponents", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_4a6695c32050ea61] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_51810153224653b2] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_7391b9072e246abe] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_8fcad4b648777d8b] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/FieldTuple;[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_8b1ef4e9c28189e6] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_bed0745cdabefae5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_991c9c7c774e57d2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_d55f826f3bd0f9b7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_f333b5cc2e287f27] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_8b532b582b02c069] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log_4a6695c32050ea61] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log10_4a6695c32050ea61] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log1p_4a6695c32050ea61] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_51810153224653b2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_1240ad28c30a567e] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_bfceb19fe1e84919] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_negate_4a6695c32050ea61] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_newInstance_1240ad28c30a567e] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_51810153224653b2] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_1240ad28c30a567e] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_bfceb19fe1e84919] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_reciprocal_4a6695c32050ea61] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_51810153224653b2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_1240ad28c30a567e] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rint_4a6695c32050ea61] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rootN_bfceb19fe1e84919] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_scalb_bfceb19fe1e84919] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sign_4a6695c32050ea61] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sin_4a6695c32050ea61] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_4a6695c32050ea61] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_4a6695c32050ea61] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_51810153224653b2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_1240ad28c30a567e] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tan_4a6695c32050ea61] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tanh_4a6695c32050ea61] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toDegrees_4a6695c32050ea61] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toRadians_4a6695c32050ea61] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ulp_4a6695c32050ea61] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/FieldTuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTuple::FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c337e4c1ec6f647, a0.this$)) {}

      FieldTuple FieldTuple::abs() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_abs_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::acos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acos_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::acosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acosh_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::add(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::add(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::asin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asin_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::asinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asinh_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::atan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::atan2(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan2_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::atanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atanh_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::cbrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cbrt_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::ceil() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ceil_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::copySign(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::copySign(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::cos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cos_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::cosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cosh_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::divide(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::divide(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_1240ad28c30a567e], a0));
      }

      jboolean FieldTuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      FieldTuple FieldTuple::exp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_exp_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::expm1() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_expm1_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::floor() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_floor_4a6695c32050ea61]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTuple::getComponent(jint a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getComponent_d0960d09d84b1c1d], a0));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldTuple::getComponents() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getComponents_01c7d10e96d5cf94]));
      }

      jint FieldTuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::Field FieldTuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      FieldTuple FieldTuple::getPi() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_getPi_4a6695c32050ea61]));
      }

      jdouble FieldTuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      jint FieldTuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      FieldTuple FieldTuple::hypot(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_hypot_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< jdouble > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_7391b9072e246abe], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< FieldTuple > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_8fcad4b648777d8b], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_8b1ef4e9c28189e6], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_bed0745cdabefae5], a0, a1.this$, a2, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_991c9c7c774e57d2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_d55f826f3bd0f9b7], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5, const FieldTuple & a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_f333b5cc2e287f27], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5, jdouble a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_8b532b582b02c069], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldTuple FieldTuple::log() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::log10() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log10_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::log1p() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log1p_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::multiply(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::multiply(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::multiply(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_bfceb19fe1e84919], a0));
      }

      FieldTuple FieldTuple::negate() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_negate_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::newInstance(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_newInstance_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::pow(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::pow(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::pow(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_bfceb19fe1e84919], a0));
      }

      FieldTuple FieldTuple::reciprocal() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_reciprocal_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::remainder(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::remainder(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::rint() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rint_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::rootN(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rootN_bfceb19fe1e84919], a0));
      }

      FieldTuple FieldTuple::scalb(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_scalb_bfceb19fe1e84919], a0));
      }

      FieldTuple FieldTuple::sign() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sign_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::sin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sin_4a6695c32050ea61]));
      }

      ::org::hipparchus::util::FieldSinCos FieldTuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      FieldTuple FieldTuple::sinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sinh_4a6695c32050ea61]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldTuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      FieldTuple FieldTuple::sqrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sqrt_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::subtract(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_51810153224653b2], a0.this$));
      }

      FieldTuple FieldTuple::subtract(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_1240ad28c30a567e], a0));
      }

      FieldTuple FieldTuple::tan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tan_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::tanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tanh_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::toDegrees() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toDegrees_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::toRadians() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toRadians_4a6695c32050ea61]));
      }

      FieldTuple FieldTuple::ulp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ulp_4a6695c32050ea61]));
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
      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args);
      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTuple_abs(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_asin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self);
      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_cos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_exp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self);
      static PyObject *t_FieldTuple_floor(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getField(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_log(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log10(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self);
      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_negate(t_FieldTuple *self);
      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_rint(t_FieldTuple *self);
      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_sign(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_tan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data);
      static PyGetSetDef t_FieldTuple__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTuple, components),
        DECLARE_GET_FIELD(t_FieldTuple, dimension),
        DECLARE_GET_FIELD(t_FieldTuple, field),
        DECLARE_GET_FIELD(t_FieldTuple, pi),
        DECLARE_GET_FIELD(t_FieldTuple, real),
        DECLARE_GET_FIELD(t_FieldTuple, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTuple__methods_[] = {
        DECLARE_METHOD(t_FieldTuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan2, METH_O),
        DECLARE_METHOD(t_FieldTuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getComponent, METH_O),
        DECLARE_METHOD(t_FieldTuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, hypot, METH_O),
        DECLARE_METHOD(t_FieldTuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, newInstance, METH_O),
        DECLARE_METHOD(t_FieldTuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, rootN, METH_O),
        DECLARE_METHOD(t_FieldTuple, scalb, METH_O),
        DECLARE_METHOD(t_FieldTuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTuple)[] = {
        { Py_tp_methods, t_FieldTuple__methods_ },
        { Py_tp_init, (void *) t_FieldTuple_init_ },
        { Py_tp_getset, t_FieldTuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTuple, t_FieldTuple, FieldTuple);
      PyObject *t_FieldTuple::wrap_Object(const FieldTuple& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTuple::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTuple::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTuple), &PY_TYPE_DEF(FieldTuple), module, "FieldTuple", 0);
      }

      void t_FieldTuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "class_", make_descriptor(FieldTuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "wrapfn_", make_descriptor(t_FieldTuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTuple::initializeClass, 1)))
          return NULL;
        return t_FieldTuple::wrap_Object(FieldTuple(((t_FieldTuple *) arg)->object.this$));
      }
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple object((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTuple_abs(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_asin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_cos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldTuple_exp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_floor(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTuple_getField(t_FieldTuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldTuple > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple a6((jobject) NULL);
            PyTypeObject **p6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_, &a6, &p6, t_FieldTuple::parameters_, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_, &a6, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_log(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log10(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_negate(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg)
      {
        jdouble a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_rint(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_sign(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_tan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data)
      {
        FieldTuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldTuple::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *FieldDSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool FieldDSSTJ2SquaredClosedFormContext::live$ = false;

            jclass FieldDSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d126146c2145a9d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_e6d4d3215c30992a] = env->getMethodID(cls, "getA4", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha4_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_e6d4d3215c30992a] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEta_e6d4d3215c30992a] = env->getMethodID(cls, "getEta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getS2_e6d4d3215c30992a] = env->getMethodID(cls, "getS2", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTJ2SquaredClosedFormContext::FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_d126146c2145a9d2, a0.this$, a1.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getA4() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA4_e6d4d3215c30992a]));
            }

            jdouble FieldDSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getEta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEta_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getS2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getS2_e6d4d3215c30992a]));
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
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args);
            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_FieldDSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, s2),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_FieldDSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_FieldDSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTJ2SquaredClosedFormContext, t_FieldDSSTJ2SquaredClosedFormContext, FieldDSSTJ2SquaredClosedFormContext);
            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(const FieldDSSTJ2SquaredClosedFormContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext), module, "FieldDSSTJ2SquaredClosedFormContext", 0);
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "class_", make_descriptor(FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(FieldDSSTJ2SquaredClosedFormContext(((t_FieldDSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldDSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1))
              {
                INT_CALL(object = FieldDSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA4());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getS2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA4());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getS2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStream::class$ = NULL;
    jmethodID *InputStream::mids$ = NULL;
    bool InputStream::live$ = false;

    jclass InputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_available_f2f64475e4580546] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_0a2a1ac2721c0336] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_e470b6d9e0d979db] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullInputStream_eafcb03912e8859c] = env->getStaticMethodID(cls, "nullInputStream", "()Ljava/io/InputStream;");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_11d417f25cf33664] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_4e993e185759f10d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readAllBytes_89bfc9a589d9cd37] = env->getMethodID(cls, "readAllBytes", "()[B");
        mids$[mid_readNBytes_9c355bc6c14d28b2] = env->getMethodID(cls, "readNBytes", "(I)[B");
        mids$[mid_readNBytes_4e993e185759f10d] = env->getMethodID(cls, "readNBytes", "([BII)I");
        mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_a1eddf469bd9ecf5] = env->getMethodID(cls, "transferTo", "(Ljava/io/OutputStream;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStream::InputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    jint InputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_f2f64475e4580546]);
    }

    void InputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void InputStream::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_0a2a1ac2721c0336], a0);
    }

    jboolean InputStream::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_e470b6d9e0d979db]);
    }

    InputStream InputStream::nullInputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return InputStream(env->callStaticObjectMethod(cls, mids$[mid_nullInputStream_eafcb03912e8859c]));
    }

    jint InputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint InputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_11d417f25cf33664], a0.this$);
    }

    jint InputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_4e993e185759f10d], a0.this$, a1, a2);
    }

    JArray< jbyte > InputStream::readAllBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readAllBytes_89bfc9a589d9cd37]));
    }

    JArray< jbyte > InputStream::readNBytes(jint a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readNBytes_9c355bc6c14d28b2], a0));
    }

    jint InputStream::readNBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_readNBytes_4e993e185759f10d], a0.this$, a1, a2);
    }

    void InputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
    }

    jlong InputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }

    jlong InputStream::transferTo(const ::java::io::OutputStream & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_a1eddf469bd9ecf5], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStream_available(t_InputStream *self);
    static PyObject *t_InputStream_close(t_InputStream *self);
    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_markSupported(t_InputStream *self);
    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type);
    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_readAllBytes(t_InputStream *self);
    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_reset(t_InputStream *self);
    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg);

    static PyMethodDef t_InputStream__methods_[] = {
      DECLARE_METHOD(t_InputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, available, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, mark, METH_O),
      DECLARE_METHOD(t_InputStream, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, nullInputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_InputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, readAllBytes, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, readNBytes, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, skip, METH_O),
      DECLARE_METHOD(t_InputStream, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStream)[] = {
      { Py_tp_methods, t_InputStream__methods_ },
      { Py_tp_init, (void *) t_InputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(InputStream, t_InputStream, InputStream);

    void t_InputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStream), &PY_TYPE_DEF(InputStream), module, "InputStream", 0);
    }

    void t_InputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "class_", make_descriptor(InputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "wrapfn_", make_descriptor(t_InputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStream::initializeClass, 1)))
        return NULL;
      return t_InputStream::wrap_Object(InputStream(((t_InputStream *) arg)->object.this$));
    }
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds)
    {
      InputStream object((jobject) NULL);

      INT_CALL(object = InputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_InputStream_available(t_InputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_InputStream_close(t_InputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_InputStream_markSupported(t_InputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type)
    {
      InputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::InputStream::nullInputStream());
      return t_InputStream::wrap_Object(result);
    }

    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_InputStream_readAllBytes(t_InputStream *self)
    {
      JArray< jbyte > result((jobject) NULL);
      OBJ_CALL(result = self->object.readAllBytes());
      return result.wrap();
    }

    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.readNBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.readNBytes(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readNBytes", args);
      return NULL;
    }

    static PyObject *t_InputStream_reset(t_InputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PoleCorrection::class$ = NULL;
      jmethodID *PoleCorrection::mids$ = NULL;
      bool PoleCorrection::live$ = false;
      PoleCorrection *PoleCorrection::NULL_CORRECTION = NULL;

      jclass PoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_getXp_456d9a2f64d6b28d] = env->getMethodID(cls, "getXp", "()D");
          mids$[mid_getYp_456d9a2f64d6b28d] = env->getMethodID(cls, "getYp", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NULL_CORRECTION = new PoleCorrection(env->getStaticObjectField(cls, "NULL_CORRECTION", "Lorg/orekit/frames/PoleCorrection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoleCorrection::PoleCorrection(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      jdouble PoleCorrection::getXp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXp_456d9a2f64d6b28d]);
      }

      jdouble PoleCorrection::getYp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYp_456d9a2f64d6b28d]);
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
      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data);
      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data);
      static PyGetSetDef t_PoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_PoleCorrection, xp),
        DECLARE_GET_FIELD(t_PoleCorrection, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoleCorrection__methods_[] = {
        DECLARE_METHOD(t_PoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_PoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoleCorrection)[] = {
        { Py_tp_methods, t_PoleCorrection__methods_ },
        { Py_tp_init, (void *) t_PoleCorrection_init_ },
        { Py_tp_getset, t_PoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoleCorrection, t_PoleCorrection, PoleCorrection);

      void t_PoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(PoleCorrection), &PY_TYPE_DEF(PoleCorrection), module, "PoleCorrection", 0);
      }

      void t_PoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "class_", make_descriptor(PoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "wrapfn_", make_descriptor(t_PoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "boxfn_", make_descriptor(boxObject));
        env->getClass(PoleCorrection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "NULL_CORRECTION", make_descriptor(t_PoleCorrection::wrap_Object(*PoleCorrection::NULL_CORRECTION)));
      }

      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoleCorrection::initializeClass, 1)))
          return NULL;
        return t_PoleCorrection::wrap_Object(PoleCorrection(((t_PoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        PoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = PoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXp());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYp());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldCjSjCoefficient::class$ = NULL;
            jmethodID *FieldCjSjCoefficient::mids$ = NULL;
            bool FieldCjSjCoefficient::live$ = false;

            jclass FieldCjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c6235e862473c6d0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getCj_d0960d09d84b1c1d] = env->getMethodID(cls, "getCj", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDh_d0960d09d84b1c1d] = env->getMethodID(cls, "getDcjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDk_d0960d09d84b1c1d] = env->getMethodID(cls, "getDcjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDh_d0960d09d84b1c1d] = env->getMethodID(cls, "getDsjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDk_d0960d09d84b1c1d] = env->getMethodID(cls, "getDsjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getSj_d0960d09d84b1c1d] = env->getMethodID(cls, "getSj", "(I)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldCjSjCoefficient::FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6235e862473c6d0, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getCj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCj_d0960d09d84b1c1d], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDh_d0960d09d84b1c1d], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDk_d0960d09d84b1c1d], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDh_d0960d09d84b1c1d], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDk_d0960d09d84b1c1d], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getSj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSj_d0960d09d84b1c1d], a0));
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
            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args);
            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data);
            static PyGetSetDef t_FieldCjSjCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldCjSjCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldCjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldCjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldCjSjCoefficient)[] = {
              { Py_tp_methods, t_FieldCjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldCjSjCoefficient_init_ },
              { Py_tp_getset, t_FieldCjSjCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldCjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldCjSjCoefficient, t_FieldCjSjCoefficient, FieldCjSjCoefficient);
            PyObject *t_FieldCjSjCoefficient::wrap_Object(const FieldCjSjCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldCjSjCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldCjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldCjSjCoefficient), &PY_TYPE_DEF(FieldCjSjCoefficient), module, "FieldCjSjCoefficient", 0);
            }

            void t_FieldCjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "class_", make_descriptor(FieldCjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "wrapfn_", make_descriptor(t_FieldCjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldCjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldCjSjCoefficient::wrap_Object(FieldCjSjCoefficient(((t_FieldCjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldCjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::Field a2((jobject) NULL);
              PyTypeObject **p2;
              FieldCjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldCjSjCoefficient(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
              return NULL;
            }
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PVBuilder::class$ = NULL;
          jmethodID *PVBuilder::mids$ = NULL;
          bool PVBuilder::live$ = false;

          jclass PVBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PVBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_03d9523f54e814fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_5d6e44fd7bbe731b] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/PV;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PVBuilder::PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_03d9523f54e814fe, a0.this$, a1, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::PV PVBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::PV(env->callObjectMethod(this$, mids$[mid_build_5d6e44fd7bbe731b], a0.this$, a1.this$));
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
          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args);
          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args);
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data);
          static PyGetSetDef t_PVBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PVBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PVBuilder__methods_[] = {
            DECLARE_METHOD(t_PVBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PVBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PVBuilder)[] = {
            { Py_tp_methods, t_PVBuilder__methods_ },
            { Py_tp_init, (void *) t_PVBuilder_init_ },
            { Py_tp_getset, t_PVBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PVBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PVBuilder, t_PVBuilder, PVBuilder);
          PyObject *t_PVBuilder::wrap_Object(const PVBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PVBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PVBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PVBuilder), &PY_TYPE_DEF(PVBuilder), module, "PVBuilder", 0);
          }

          void t_PVBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "class_", make_descriptor(PVBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "wrapfn_", make_descriptor(t_PVBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PVBuilder::initializeClass, 1)))
              return NULL;
            return t_PVBuilder::wrap_Object(PVBuilder(((t_PVBuilder *) arg)->object.this$));
          }
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PVBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            PVBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = PVBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::PV result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_PV::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PVBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data)
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
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileWriter::class$ = NULL;
        jmethodID *EphemerisFileWriter::mids$ = NULL;
        bool EphemerisFileWriter::live$ = false;

        jclass EphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_4e618201ea15a8cc] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_e65e411976c35f1d] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_4e618201ea15a8cc], a0.this$, a1.this$);
        }

        void EphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_e65e411976c35f1d], a0.this$, a1.this$);
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
        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_EphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileWriter)[] = {
          { Py_tp_methods, t_EphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileWriter, t_EphemerisFileWriter, EphemerisFileWriter);

        void t_EphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileWriter), &PY_TYPE_DEF(EphemerisFileWriter), module, "EphemerisFileWriter", 0);
        }

        void t_EphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "class_", make_descriptor(EphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "wrapfn_", make_descriptor(t_EphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileWriter::wrap_Object(EphemerisFileWriter(((t_EphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
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
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *Relativity::class$ = NULL;
        jmethodID *Relativity::mids$ = NULL;
        bool Relativity::live$ = false;

        jclass Relativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/Relativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relativity::Relativity(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Relativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Relativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean Relativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List Relativity::getParametersDrivers() const
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
        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args);
        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self);
        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self);
        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data);
        static PyGetSetDef t_Relativity__fields_[] = {
          DECLARE_GET_FIELD(t_Relativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relativity__methods_[] = {
          DECLARE_METHOD(t_Relativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Relativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Relativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relativity)[] = {
          { Py_tp_methods, t_Relativity__methods_ },
          { Py_tp_init, (void *) t_Relativity_init_ },
          { Py_tp_getset, t_Relativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Relativity, t_Relativity, Relativity);

        void t_Relativity::install(PyObject *module)
        {
          installType(&PY_TYPE(Relativity), &PY_TYPE_DEF(Relativity), module, "Relativity", 0);
        }

        void t_Relativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "class_", make_descriptor(Relativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "wrapfn_", make_descriptor(t_Relativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relativity::initializeClass, 1)))
            return NULL;
          return t_Relativity::wrap_Object(Relativity(((t_Relativity *) arg)->object.this$));
        }
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Relativity object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Relativity(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data)
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
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LyapunovOrbit::class$ = NULL;
      jmethodID *LyapunovOrbit::mids$ = NULL;
      bool LyapunovOrbit::live$ = false;

      jclass LyapunovOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LyapunovOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_85e8de9c99d957d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;D)V");
          mids$[mid_init$_76483bf6754c478b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_b7336fc2717b0a2c] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_85e8de9c99d957d2, a0.this$, a1)) {}

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_76483bf6754c478b, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LyapunovOrbit__methods_[] = {
        DECLARE_METHOD(t_LyapunovOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LyapunovOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LyapunovOrbit)[] = {
        { Py_tp_methods, t_LyapunovOrbit__methods_ },
        { Py_tp_init, (void *) t_LyapunovOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LyapunovOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(LyapunovOrbit, t_LyapunovOrbit, LyapunovOrbit);

      void t_LyapunovOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LyapunovOrbit), &PY_TYPE_DEF(LyapunovOrbit), module, "LyapunovOrbit", 0);
      }

      void t_LyapunovOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "class_", make_descriptor(LyapunovOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "wrapfn_", make_descriptor(t_LyapunovOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LyapunovOrbit::initializeClass, 1)))
          return NULL;
        return t_LyapunovOrbit::wrap_Object(LyapunovOrbit(((t_LyapunovOrbit *) arg)->object.this$));
      }
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LyapunovOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::RichardsonExpansion::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1, a2));
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
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustDirectionProvider::class$ = NULL;
          jmethodID *PythonThrustDirectionProvider::mids$ = NULL;
          bool PythonThrustDirectionProvider::live$ = false;

          jclass PythonThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeThrustDirection_00b397d023000862] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustDirectionProvider::PythonThrustDirectionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonThrustDirectionProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonThrustDirectionProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonThrustDirectionProvider::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self);
          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args);
          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data);
          static PyGetSetDef t_PythonThrustDirectionProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustDirectionProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_PythonThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustDirectionProvider)[] = {
            { Py_tp_methods, t_PythonThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_PythonThrustDirectionProvider_init_ },
            { Py_tp_getset, t_PythonThrustDirectionProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustDirectionProvider, t_PythonThrustDirectionProvider, PythonThrustDirectionProvider);

          void t_PythonThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustDirectionProvider), &PY_TYPE_DEF(PythonThrustDirectionProvider), module, "PythonThrustDirectionProvider", 1);
          }

          void t_PythonThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "class_", make_descriptor(PythonThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "wrapfn_", make_descriptor(t_PythonThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustDirectionProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustDirectionProvider_computeThrustDirection0 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustDirectionProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_PythonThrustDirectionProvider::wrap_Object(PythonThrustDirectionProvider(((t_PythonThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustDirectionProvider object((jobject) NULL);

            INT_CALL(object = PythonThrustDirectionProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "computeThrustDirection", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("computeThrustDirection", result);
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

          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data)
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
#include "org/orekit/time/GLONASSDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_74b53bb4dd72a089] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_78e41e7b5124a628] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_f2d461027d284506] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDayNumber_f2f64475e4580546] = env->getMethodID(cls, "getDayNumber", "()I");
          mids$[mid_getGMST_456d9a2f64d6b28d] = env->getMethodID(cls, "getGMST", "()D");
          mids$[mid_getIntervalNumber_f2f64475e4580546] = env->getMethodID(cls, "getIntervalNumber", "()I");
          mids$[mid_getJD0_456d9a2f64d6b28d] = env->getMethodID(cls, "getJD0", "()D");
          mids$[mid_getSecInDay_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecInDay", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74b53bb4dd72a089, a0.this$, a1.this$)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78e41e7b5124a628, a0, a1, a2)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2d461027d284506, a0, a1, a2, a3.this$)) {}

      ::org::orekit::time::AbsoluteDate GLONASSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jint GLONASSDate::getDayNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayNumber_f2f64475e4580546]);
      }

      jdouble GLONASSDate::getGMST() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGMST_456d9a2f64d6b28d]);
      }

      jint GLONASSDate::getIntervalNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getIntervalNumber_f2f64475e4580546]);
      }

      jdouble GLONASSDate::getJD0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getJD0_456d9a2f64d6b28d]);
      }

      jdouble GLONASSDate::getSecInDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecInDay_456d9a2f64d6b28d]);
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
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableVectorFunction::mids$ = NULL;
        bool MultivariateDifferentiableVectorFunction::live$ = false;

        jclass MultivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_2d2b2e0a03dbe908] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > MultivariateDifferentiableVectorFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure >(env->callObjectMethod(this$, mids$[mid_value_2d2b2e0a03dbe908], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableVectorFunction, t_MultivariateDifferentiableVectorFunction, MultivariateDifferentiableVectorFunction);

        void t_MultivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableVectorFunction), &PY_TYPE_DEF(MultivariateDifferentiableVectorFunction), module, "MultivariateDifferentiableVectorFunction", 0);
        }

        void t_MultivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "class_", make_descriptor(MultivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableVectorFunction::wrap_Object(MultivariateDifferentiableVectorFunction(((t_MultivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_jobject);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *Theta::class$ = NULL;
          jmethodID *Theta::mids$ = NULL;
          bool Theta::live$ = false;

          jclass Theta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/Theta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_8278e96d3787b980] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta2_8278e96d3787b980] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta3_8278e96d3787b980] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta4_8278e96d3787b980] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/complex/Complex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex Theta::theta1() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta1_8278e96d3787b980]));
          }

          ::org::hipparchus::complex::Complex Theta::theta2() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta2_8278e96d3787b980]));
          }

          ::org::hipparchus::complex::Complex Theta::theta3() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta3_8278e96d3787b980]));
          }

          ::org::hipparchus::complex::Complex Theta::theta4() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta4_8278e96d3787b980]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_theta1(t_Theta *self);
          static PyObject *t_Theta_theta2(t_Theta *self);
          static PyObject *t_Theta_theta3(t_Theta *self);
          static PyObject *t_Theta_theta4(t_Theta *self);

          static PyMethodDef t_Theta__methods_[] = {
            DECLARE_METHOD(t_Theta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Theta)[] = {
            { Py_tp_methods, t_Theta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Theta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Theta, t_Theta, Theta);

          void t_Theta::install(PyObject *module)
          {
            installType(&PY_TYPE(Theta), &PY_TYPE_DEF(Theta), module, "Theta", 0);
          }

          void t_Theta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "class_", make_descriptor(Theta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "wrapfn_", make_descriptor(t_Theta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Theta::initializeClass, 1)))
              return NULL;
            return t_Theta::wrap_Object(Theta(((t_Theta *) arg)->object.this$));
          }
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Theta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Theta_theta1(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta2(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta3(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta4(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *NiellMappingFunctionModel::class$ = NULL;
          jmethodID *NiellMappingFunctionModel::mids$ = NULL;
          bool NiellMappingFunctionModel::live$ = false;

          jclass NiellMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/NiellMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NiellMappingFunctionModel::NiellMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          NiellMappingFunctionModel::NiellMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > NiellMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > NiellMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
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
          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_NiellMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_NiellMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NiellMappingFunctionModel)[] = {
            { Py_tp_methods, t_NiellMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_NiellMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NiellMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NiellMappingFunctionModel, t_NiellMappingFunctionModel, NiellMappingFunctionModel);

          void t_NiellMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NiellMappingFunctionModel), &PY_TYPE_DEF(NiellMappingFunctionModel), module, "NiellMappingFunctionModel", 0);
          }

          void t_NiellMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "class_", make_descriptor(NiellMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "wrapfn_", make_descriptor(t_NiellMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NiellMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_NiellMappingFunctionModel::wrap_Object(NiellMappingFunctionModel(((t_NiellMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NiellMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                NiellMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = NiellMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                NiellMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = NiellMappingFunctionModel(a0));
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

          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *ComplexOrdinaryDifferentialEquation::mids$ = NULL;
      bool ComplexOrdinaryDifferentialEquation::live$ = false;

      jclass ComplexOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_4f956c68d111b80a] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_60e113532e66e181] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexOrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_4f956c68d111b80a], a0, a1.this$));
      }

      jint ComplexOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void ComplexOrdinaryDifferentialEquation::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_60e113532e66e181], a0, a1.this$, a2);
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
      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_ComplexOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexOrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_ComplexOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexOrdinaryDifferentialEquation, t_ComplexOrdinaryDifferentialEquation, ComplexOrdinaryDifferentialEquation);

      void t_ComplexOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexOrdinaryDifferentialEquation), &PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation), module, "ComplexOrdinaryDifferentialEquation", 0);
      }

      void t_ComplexOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "class_", make_descriptor(ComplexOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_ComplexOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_ComplexOrdinaryDifferentialEquation::wrap_Object(ComplexOrdinaryDifferentialEquation(((t_ComplexOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[kD", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4E::class$ = NULL;
          jmethodID *SubFrame4E::mids$ = NULL;
          bool SubFrame4E::live$ = false;
          jint SubFrame4E::NB_AS = (jint) 0;
          jint SubFrame4E::NB_SVH = (jint) 0;

          jclass SubFrame4E::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4E");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAntiSpoofing_38565d58479aa24a] = env->getMethodID(cls, "getAntiSpoofing", "(I)I");
              mids$[mid_getReserved10_f2f64475e4580546] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReserved8_f2f64475e4580546] = env->getMethodID(cls, "getReserved8", "()I");
              mids$[mid_getSvHealth_38565d58479aa24a] = env->getMethodID(cls, "getSvHealth", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_AS = env->getStaticIntField(cls, "NB_AS");
              NB_SVH = env->getStaticIntField(cls, "NB_SVH");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4E::getAntiSpoofing(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_38565d58479aa24a], a0);
          }

          jint SubFrame4E::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_f2f64475e4580546]);
          }

          jint SubFrame4E::getReserved8() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved8_f2f64475e4580546]);
          }

          jint SubFrame4E::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_38565d58479aa24a], a0);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args);
          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg);
          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data);
          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data);
          static PyGetSetDef t_SubFrame4E__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4E, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4E, reserved8),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4E__methods_[] = {
            DECLARE_METHOD(t_SubFrame4E, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, getAntiSpoofing, METH_VARARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved8, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getSvHealth, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4E)[] = {
            { Py_tp_methods, t_SubFrame4E__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4E__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4E)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4E, t_SubFrame4E, SubFrame4E);

          void t_SubFrame4E::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4E), &PY_TYPE_DEF(SubFrame4E), module, "SubFrame4E", 0);
          }

          void t_SubFrame4E::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "class_", make_descriptor(SubFrame4E::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "wrapfn_", make_descriptor(t_SubFrame4E::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4E::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_AS", make_descriptor(SubFrame4E::NB_AS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_SVH", make_descriptor(SubFrame4E::NB_SVH));
          }

          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4E::initializeClass, 1)))
              return NULL;
            return t_SubFrame4E::wrap_Object(SubFrame4E(((t_SubFrame4E *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4E::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getAntiSpoofing(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SubFrame4E), (PyObject *) self, "getAntiSpoofing", args, 2);
          }

          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved8());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved8());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Number.h"
#include "java/text/ParsePosition.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/text/FieldPosition.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormat::class$ = NULL;
    jmethodID *DecimalFormat::mids$ = NULL;
    bool DecimalFormat::live$ = false;

    jclass DecimalFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_f8e664ad7cff48d3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_applyLocalizedPattern_e939c6558ae8d313] = env->getMethodID(cls, "applyLocalizedPattern", "(Ljava/lang/String;)V");
        mids$[mid_applyPattern_e939c6558ae8d313] = env->getMethodID(cls, "applyPattern", "(Ljava/lang/String;)V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_c6faa545a7a768dc] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_ad0b55b296497605] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_dfeef7e12027ce3a] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_getCurrency_6c7b9765863c0754] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getDecimalFormatSymbols_176868871448551c] = env->getMethodID(cls, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getGroupingSize_f2f64475e4580546] = env->getMethodID(cls, "getGroupingSize", "()I");
        mids$[mid_getMaximumFractionDigits_f2f64475e4580546] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_f2f64475e4580546] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_f2f64475e4580546] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_f2f64475e4580546] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getMultiplier_f2f64475e4580546] = env->getMethodID(cls, "getMultiplier", "()I");
        mids$[mid_getNegativePrefix_0090f7797e403f43] = env->getMethodID(cls, "getNegativePrefix", "()Ljava/lang/String;");
        mids$[mid_getNegativeSuffix_0090f7797e403f43] = env->getMethodID(cls, "getNegativeSuffix", "()Ljava/lang/String;");
        mids$[mid_getPositivePrefix_0090f7797e403f43] = env->getMethodID(cls, "getPositivePrefix", "()Ljava/lang/String;");
        mids$[mid_getPositiveSuffix_0090f7797e403f43] = env->getMethodID(cls, "getPositiveSuffix", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isDecimalSeparatorAlwaysShown_e470b6d9e0d979db] = env->getMethodID(cls, "isDecimalSeparatorAlwaysShown", "()Z");
        mids$[mid_isParseBigDecimal_e470b6d9e0d979db] = env->getMethodID(cls, "isParseBigDecimal", "()Z");
        mids$[mid_parse_3cf9d8b930b756db] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_setCurrency_4f90b9143eba41de] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setDecimalFormatSymbols_a0d7dc0ff29f3a07] = env->getMethodID(cls, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_setDecimalSeparatorAlwaysShown_50a2e0b139e80a58] = env->getMethodID(cls, "setDecimalSeparatorAlwaysShown", "(Z)V");
        mids$[mid_setGroupingSize_0a2a1ac2721c0336] = env->getMethodID(cls, "setGroupingSize", "(I)V");
        mids$[mid_setGroupingUsed_50a2e0b139e80a58] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setMultiplier_0a2a1ac2721c0336] = env->getMethodID(cls, "setMultiplier", "(I)V");
        mids$[mid_setNegativePrefix_e939c6558ae8d313] = env->getMethodID(cls, "setNegativePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setNegativeSuffix_e939c6558ae8d313] = env->getMethodID(cls, "setNegativeSuffix", "(Ljava/lang/String;)V");
        mids$[mid_setParseBigDecimal_50a2e0b139e80a58] = env->getMethodID(cls, "setParseBigDecimal", "(Z)V");
        mids$[mid_setPositivePrefix_e939c6558ae8d313] = env->getMethodID(cls, "setPositivePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setPositiveSuffix_e939c6558ae8d313] = env->getMethodID(cls, "setPositiveSuffix", "(Ljava/lang/String;)V");
        mids$[mid_toLocalizedPattern_0090f7797e403f43] = env->getMethodID(cls, "toLocalizedPattern", "()Ljava/lang/String;");
        mids$[mid_toPattern_0090f7797e403f43] = env->getMethodID(cls, "toPattern", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormat::DecimalFormat() : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0, const ::java::text::DecimalFormatSymbols & a1) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_f8e664ad7cff48d3, a0.this$, a1.this$)) {}

    void DecimalFormat::applyLocalizedPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyLocalizedPattern_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormat::applyPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyPattern_e939c6558ae8d313], a0.this$);
    }

    ::java::lang::Object DecimalFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean DecimalFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::StringBuffer DecimalFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c6faa545a7a768dc], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_ad0b55b296497605], a0, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator DecimalFormat::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_dfeef7e12027ce3a], a0.this$));
    }

    ::java::util::Currency DecimalFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_6c7b9765863c0754]));
    }

    ::java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
    {
      return ::java::text::DecimalFormatSymbols(env->callObjectMethod(this$, mids$[mid_getDecimalFormatSymbols_176868871448551c]));
    }

    jint DecimalFormat::getGroupingSize() const
    {
      return env->callIntMethod(this$, mids$[mid_getGroupingSize_f2f64475e4580546]);
    }

    jint DecimalFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_f2f64475e4580546]);
    }

    jint DecimalFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_f2f64475e4580546]);
    }

    jint DecimalFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_f2f64475e4580546]);
    }

    jint DecimalFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_f2f64475e4580546]);
    }

    jint DecimalFormat::getMultiplier() const
    {
      return env->callIntMethod(this$, mids$[mid_getMultiplier_f2f64475e4580546]);
    }

    ::java::lang::String DecimalFormat::getNegativePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativePrefix_0090f7797e403f43]));
    }

    ::java::lang::String DecimalFormat::getNegativeSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativeSuffix_0090f7797e403f43]));
    }

    ::java::lang::String DecimalFormat::getPositivePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositivePrefix_0090f7797e403f43]));
    }

    ::java::lang::String DecimalFormat::getPositiveSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositiveSuffix_0090f7797e403f43]));
    }

    jint DecimalFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDecimalSeparatorAlwaysShown_e470b6d9e0d979db]);
    }

    jboolean DecimalFormat::isParseBigDecimal() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseBigDecimal_e470b6d9e0d979db]);
    }

    ::java::lang::Number DecimalFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_3cf9d8b930b756db], a0.this$, a1.this$));
    }

    void DecimalFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4f90b9143eba41de], a0.this$);
    }

    void DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalFormatSymbols_a0d7dc0ff29f3a07], a0.this$);
    }

    void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparatorAlwaysShown_50a2e0b139e80a58], a0);
    }

    void DecimalFormat::setGroupingSize(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSize_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_50a2e0b139e80a58], a0);
    }

    void DecimalFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setMultiplier(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMultiplier_0a2a1ac2721c0336], a0);
    }

    void DecimalFormat::setNegativePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativePrefix_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormat::setNegativeSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativeSuffix_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormat::setParseBigDecimal(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseBigDecimal_50a2e0b139e80a58], a0);
    }

    void DecimalFormat::setPositivePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositivePrefix_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormat::setPositiveSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositiveSuffix_e939c6558ae8d313], a0.this$);
    }

    ::java::lang::String DecimalFormat::toLocalizedPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocalizedPattern_0090f7797e403f43]));
    }

    ::java::lang::String DecimalFormat::toPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toPattern_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data);
    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormat__fields_[] = {
      DECLARE_GETSET_FIELD(t_DecimalFormat, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalFormatSymbols),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalSeparatorAlwaysShown),
      DECLARE_GETSET_FIELD(t_DecimalFormat, groupingSize),
      DECLARE_SET_FIELD(t_DecimalFormat, groupingUsed),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, multiplier),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativeSuffix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, parseBigDecimal),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positivePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positiveSuffix),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormat__methods_[] = {
      DECLARE_METHOD(t_DecimalFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, applyLocalizedPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, applyPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, formatToCharacterIterator, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getDecimalFormatSymbols, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getGroupingSize, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMultiplier, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativeSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositivePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositiveSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, isDecimalSeparatorAlwaysShown, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, isParseBigDecimal, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setDecimalFormatSymbols, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setDecimalSeparatorAlwaysShown, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingSize, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingUsed, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMultiplier, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativeSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setParseBigDecimal, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositivePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositiveSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, toLocalizedPattern, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, toPattern, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormat)[] = {
      { Py_tp_methods, t_DecimalFormat__methods_ },
      { Py_tp_init, (void *) t_DecimalFormat_init_ },
      { Py_tp_getset, t_DecimalFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormat)[] = {
      &PY_TYPE_DEF(::java::text::NumberFormat),
      NULL
    };

    DEFINE_TYPE(DecimalFormat, t_DecimalFormat, DecimalFormat);

    void t_DecimalFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormat), &PY_TYPE_DEF(DecimalFormat), module, "DecimalFormat", 0);
    }

    void t_DecimalFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "class_", make_descriptor(DecimalFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "wrapfn_", make_descriptor(t_DecimalFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormat::initializeClass, 1)))
        return NULL;
      return t_DecimalFormat::wrap_Object(DecimalFormat(((t_DecimalFormat *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormat object((jobject) NULL);

          INT_CALL(object = DecimalFormat());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DecimalFormat(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::DecimalFormatSymbols a1((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::DecimalFormatSymbols::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DecimalFormat(a0, a1));
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

    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyLocalizedPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyLocalizedPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "formatToCharacterIterator", args, 2);
    }

    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCurrency());
        return ::java::util::t_Currency::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self)
    {
      ::java::text::DecimalFormatSymbols result((jobject) NULL);
      OBJ_CALL(result = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(result);
    }

    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getGroupingSize());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMultiplier());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativeSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositivePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositiveSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Number result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parse(a0, a1));
        return ::java::lang::t_Number::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "parse", args, 2);
    }

    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::text::DecimalFormatSymbols a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setDecimalFormatSymbols(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalFormatSymbols", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparatorAlwaysShown(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparatorAlwaysShown", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setGroupingSize(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSize", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args)
    {
      jboolean a0;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setGroupingUsed", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMultiplier(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMultiplier", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativeSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativeSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseBigDecimal(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseBigDecimal", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositivePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositivePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositiveSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositiveSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocalizedPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data)
    {
      ::java::text::DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(value);
    }
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::text::DecimalFormatSymbols value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &value))
        {
          INT_CALL(self->object.setDecimalFormatSymbols(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalFormatSymbols", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDecimalSeparatorAlwaysShown(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparatorAlwaysShown", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getGroupingSize());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setGroupingSize(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSize", arg);
      return -1;
    }

    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMultiplier());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMultiplier(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "multiplier", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativeSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativeSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativeSuffix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseBigDecimal(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseBigDecimal", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositivePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositivePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positivePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositiveSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositiveSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positiveSuffix", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
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
            mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_getConstraints_cfcfd130f9013e3e] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");
            mids$[mid_isRestrictedToNonNegative_e470b6d9e0d979db] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");
            mids$[mid_getFunction_00f5d364ee1debe7] = env->getMethodID(cls, "getFunction", "()Lorg/hipparchus/optim/linear/LinearObjectiveFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::PointValuePair LinearOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "java/lang/Class.h"
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
            mids$[mid_eventOccurred_4f8716abc8a04e85] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/events/FieldODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_40264cbcd5168a05] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_resetState_0d6cf14d32e2a046] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldODEEventHandler::eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_4f8716abc8a04e85], a0.this$, a1.this$, a2));
        }

        void FieldODEEventHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::ode::events::FieldODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_40264cbcd5168a05], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEEventHandler::resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_0d6cf14d32e2a046], a0.this$, a1.this$));
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
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonMeasurementFilter::class$ = NULL;
          jmethodID *PythonMeasurementFilter::mids$ = NULL;
          bool PythonMeasurementFilter::live$ = false;

          jclass PythonMeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonMeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_filter_00f3b288ddb27bce] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementFilter::PythonMeasurementFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMeasurementFilter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMeasurementFilter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMeasurementFilter::pythonExtension(jlong a0) const
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
        namespace filtering {
          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args);
          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self);
          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args);
          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data);
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data);
          static PyGetSetDef t_PythonMeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, self),
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementFilter)[] = {
            { Py_tp_methods, t_PythonMeasurementFilter__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementFilter_init_ },
            { Py_tp_getset, t_PythonMeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementFilter, t_PythonMeasurementFilter, PythonMeasurementFilter);
          PyObject *t_PythonMeasurementFilter::wrap_Object(const PythonMeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementFilter), &PY_TYPE_DEF(PythonMeasurementFilter), module, "PythonMeasurementFilter", 1);
          }

          void t_PythonMeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "class_", make_descriptor(PythonMeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "wrapfn_", make_descriptor(t_PythonMeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementFilter::initializeClass);
            JNINativeMethod methods[] = {
              { "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMeasurementFilter_filter0 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementFilter_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementFilter::wrap_Object(PythonMeasurementFilter(((t_PythonMeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementFilter object((jobject) NULL);

            INT_CALL(object = PythonMeasurementFilter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "filter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data)
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
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
