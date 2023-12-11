#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/bodies/Ellipse.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipsoid::class$ = NULL;
      jmethodID *Ellipsoid::mids$ = NULL;
      bool Ellipsoid::live$ = false;

      jclass Ellipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_563f09c906576b6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDD)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_557b8123390d8d0c] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getC_557b8123390d8d0c] = env->getMethodID(cls, "getC", "()D");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPlaneSection_8bcf26874b6ac495] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldEllipse;");
          mids$[mid_getPlaneSection_0c53fe7c07ad58f7] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/Ellipse;");
          mids$[mid_isInside_7a86ea6adaa11bf8] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
          mids$[mid_isInside_7ccf3b3f40d5fcd3] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
          mids$[mid_pointOnLimb_b3579c1d2113481e] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointOnLimb_720ad0a891308b00] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipsoid::Ellipsoid(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_563f09c906576b6f, a0.this$, a1, a2, a3)) {}

      jdouble Ellipsoid::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble Ellipsoid::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_557b8123390d8d0c]);
      }

      jdouble Ellipsoid::getC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getC_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Frame Ellipsoid::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::bodies::FieldEllipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldEllipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_8bcf26874b6ac495], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::Ellipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::Ellipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_0c53fe7c07ad58f7], a0.this$, a1.this$));
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_7a86ea6adaa11bf8], a0.this$);
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_7ccf3b3f40d5fcd3], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_b3579c1d2113481e], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_720ad0a891308b00], a0.this$, a1.this$));
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
      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data);
      static PyGetSetDef t_Ellipsoid__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipsoid, a),
        DECLARE_GET_FIELD(t_Ellipsoid, b),
        DECLARE_GET_FIELD(t_Ellipsoid, c),
        DECLARE_GET_FIELD(t_Ellipsoid, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipsoid__methods_[] = {
        DECLARE_METHOD(t_Ellipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getC, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getPlaneSection, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, isInside, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, pointOnLimb, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipsoid)[] = {
        { Py_tp_methods, t_Ellipsoid__methods_ },
        { Py_tp_init, (void *) t_Ellipsoid_init_ },
        { Py_tp_getset, t_Ellipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipsoid)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipsoid, t_Ellipsoid, Ellipsoid);

      void t_Ellipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipsoid), &PY_TYPE_DEF(Ellipsoid), module, "Ellipsoid", 0);
      }

      void t_Ellipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "class_", make_descriptor(Ellipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "wrapfn_", make_descriptor(t_Ellipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipsoid::initializeClass, 1)))
          return NULL;
        return t_Ellipsoid::wrap_Object(Ellipsoid(((t_Ellipsoid *) arg)->object.this$));
      }
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        Ellipsoid object((jobject) NULL);

        if (!parseArgs(args, "kDDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = Ellipsoid(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldEllipse result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_FieldEllipse::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::Ellipse result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_Ellipse::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPlaneSection", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "isInside", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pointOnLimb", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame3::class$ = NULL;
          jmethodID *SubFrame3::mids$ = NULL;
          bool SubFrame3::live$ = false;

          jclass SubFrame3::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame3");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCic_557b8123390d8d0c] = env->getMethodID(cls, "getCic", "()D");
              mids$[mid_getCis_557b8123390d8d0c] = env->getMethodID(cls, "getCis", "()D");
              mids$[mid_getCrc_557b8123390d8d0c] = env->getMethodID(cls, "getCrc", "()D");
              mids$[mid_getI0_557b8123390d8d0c] = env->getMethodID(cls, "getI0", "()D");
              mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
              mids$[mid_getIODE_412668abc8d889e9] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getLowercaseOmega_557b8123390d8d0c] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getOmegaDot_557b8123390d8d0c] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getUppercaseOmega0_557b8123390d8d0c] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame3::getCic() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCic_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getCis() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCis_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getCrc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrc_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getI0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI0_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getIDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
          }

          jint SubFrame3::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_412668abc8d889e9]);
          }

          jdouble SubFrame3::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_557b8123390d8d0c]);
          }

          jdouble SubFrame3::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_557b8123390d8d0c]);
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
          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data);
          static PyGetSetDef t_SubFrame3__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame3, cic),
            DECLARE_GET_FIELD(t_SubFrame3, cis),
            DECLARE_GET_FIELD(t_SubFrame3, crc),
            DECLARE_GET_FIELD(t_SubFrame3, i0),
            DECLARE_GET_FIELD(t_SubFrame3, iDot),
            DECLARE_GET_FIELD(t_SubFrame3, iODE),
            DECLARE_GET_FIELD(t_SubFrame3, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrame3, omegaDot),
            DECLARE_GET_FIELD(t_SubFrame3, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame3__methods_[] = {
            DECLARE_METHOD(t_SubFrame3, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, getCic, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCis, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCrc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getI0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame3)[] = {
            { Py_tp_methods, t_SubFrame3__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame3__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame3)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame3, t_SubFrame3, SubFrame3);

          void t_SubFrame3::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame3), &PY_TYPE_DEF(SubFrame3), module, "SubFrame3", 0);
          }

          void t_SubFrame3::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "class_", make_descriptor(SubFrame3::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "wrapfn_", make_descriptor(t_SubFrame3::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame3::initializeClass, 1)))
              return NULL;
            return t_SubFrame3::wrap_Object(SubFrame3(((t_SubFrame3 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame3::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCic());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getIDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCic());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCis());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventEnablingPredicateFilter::class$ = NULL;
        jmethodID *EventEnablingPredicateFilter::mids$ = NULL;
        bool EventEnablingPredicateFilter::live$ = false;

        jclass EventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ae7b6c8a71a15af5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/EnablingPredicate;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_0701b00b25822fff] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_cfc51d75282aea03] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventEnablingPredicateFilter::EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::EnablingPredicate & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ae7b6c8a71a15af5, a0.this$, a1.this$)) {}

        jdouble EventEnablingPredicateFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_0701b00b25822fff]));
        }

        void EventEnablingPredicateFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args);
        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self);
        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data);
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_EventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_EventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_EventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_EventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_EventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventEnablingPredicateFilter, t_EventEnablingPredicateFilter, EventEnablingPredicateFilter);
        PyObject *t_EventEnablingPredicateFilter::wrap_Object(const EventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventEnablingPredicateFilter), &PY_TYPE_DEF(EventEnablingPredicateFilter), module, "EventEnablingPredicateFilter", 0);
        }

        void t_EventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "class_", make_descriptor(EventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_EventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_EventEnablingPredicateFilter::wrap_Object(EventEnablingPredicateFilter(((t_EventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EnablingPredicate a1((jobject) NULL);
          EventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::EnablingPredicate::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EventEnablingPredicateFilter(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventEnablingPredicateFilter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
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
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_7cd681864cf513c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_2c0fd42a693364fa] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getNumberOfPoints_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_8b3a1c735adfa4bc] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getWeight_8b3a1c735adfa4bc] = env->getMethodID(cls, "getWeight", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_integrate_cf175d31250bee45] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegrator::FieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cd681864cf513c2, a0.this$)) {}

          FieldGaussIntegrator::FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c0fd42a693364fa, a0.this$, a1.this$)) {}

          jint FieldGaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_412668abc8d889e9]);
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getPoint(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPoint_8b3a1c735adfa4bc], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getWeight(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getWeight_8b3a1c735adfa4bc], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_cf175d31250bee45], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeTroposphericDelayModifier::mids$ = NULL;
          bool RangeTroposphericDelayModifier::live$ = false;

          jclass RangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeTroposphericDelayModifier::RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          void RangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void RangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeTroposphericDelayModifier, t_RangeTroposphericDelayModifier, RangeTroposphericDelayModifier);

          void t_RangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeTroposphericDelayModifier), &PY_TYPE_DEF(RangeTroposphericDelayModifier), module, "RangeTroposphericDelayModifier", 0);
          }

          void t_RangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "class_", make_descriptor(RangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeTroposphericDelayModifier::wrap_Object(RangeTroposphericDelayModifier(((t_RangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            RangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = RangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *RecordType::class$ = NULL;
          jmethodID *RecordType::mids$ = NULL;
          bool RecordType::live$ = false;
          RecordType *RecordType::CAS = NULL;
          RecordType *RecordType::NET = NULL;
          RecordType *RecordType::STR = NULL;

          jclass RecordType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/RecordType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_3df4837fb58adca8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_values_ac2ff08525ba38bc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/RecordType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CAS = new RecordType(env->getStaticObjectField(cls, "CAS", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              NET = new RecordType(env->getStaticObjectField(cls, "NET", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              STR = new RecordType(env->getStaticObjectField(cls, "STR", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordType RecordType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RecordType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3df4837fb58adca8], a0.this$));
          }

          JArray< RecordType > RecordType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RecordType >(env->callStaticObjectMethod(cls, mids$[mid_values_ac2ff08525ba38bc]));
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
          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args);
          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RecordType_values(PyTypeObject *type);
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data);
          static PyGetSetDef t_RecordType__fields_[] = {
            DECLARE_GET_FIELD(t_RecordType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordType__methods_[] = {
            DECLARE_METHOD(t_RecordType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RecordType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RecordType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordType)[] = {
            { Py_tp_methods, t_RecordType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RecordType, t_RecordType, RecordType);
          PyObject *t_RecordType::wrap_Object(const RecordType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RecordType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RecordType::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordType), &PY_TYPE_DEF(RecordType), module, "RecordType", 0);
          }

          void t_RecordType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "class_", make_descriptor(RecordType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "wrapfn_", make_descriptor(t_RecordType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RecordType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "CAS", make_descriptor(t_RecordType::wrap_Object(*RecordType::CAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "NET", make_descriptor(t_RecordType::wrap_Object(*RecordType::NET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "STR", make_descriptor(t_RecordType::wrap_Object(*RecordType::STR)));
          }

          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordType::initializeClass, 1)))
              return NULL;
            return t_RecordType::wrap_Object(RecordType(((t_RecordType *) arg)->object.this$));
          }
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RecordType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::valueOf(a0));
              return t_RecordType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RecordType_values(PyTypeObject *type)
          {
            JArray< RecordType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::values());
            return JArray<jobject>(result.this$).wrap(t_RecordType::wrap_jobject);
          }
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data)
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
#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *DeSitterRelativity::class$ = NULL;
        jmethodID *DeSitterRelativity::mids$ = NULL;
        bool DeSitterRelativity::live$ = false;
        ::java::lang::String *DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass DeSitterRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/DeSitterRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_9a72c2af019e2130] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEarth_40e74583267ad550] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSun_40e74583267ad550] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DeSitterRelativity::DeSitterRelativity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        DeSitterRelativity::DeSitterRelativity(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a72c2af019e2130, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        jboolean DeSitterRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getEarth() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_40e74583267ad550]));
        }

        ::java::util::List DeSitterRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getSun() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_40e74583267ad550]));
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
        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args);
        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data);
        static PyGetSetDef t_DeSitterRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_DeSitterRelativity, earth),
          DECLARE_GET_FIELD(t_DeSitterRelativity, parametersDrivers),
          DECLARE_GET_FIELD(t_DeSitterRelativity, sun),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DeSitterRelativity__methods_[] = {
          DECLARE_METHOD(t_DeSitterRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DeSitterRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getEarth, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getSun, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DeSitterRelativity)[] = {
          { Py_tp_methods, t_DeSitterRelativity__methods_ },
          { Py_tp_init, (void *) t_DeSitterRelativity_init_ },
          { Py_tp_getset, t_DeSitterRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DeSitterRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DeSitterRelativity, t_DeSitterRelativity, DeSitterRelativity);

        void t_DeSitterRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(DeSitterRelativity), &PY_TYPE_DEF(DeSitterRelativity), module, "DeSitterRelativity", 0);
        }

        void t_DeSitterRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "class_", make_descriptor(DeSitterRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "wrapfn_", make_descriptor(t_DeSitterRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "boxfn_", make_descriptor(boxObject));
          env->getClass(DeSitterRelativity::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DeSitterRelativity::initializeClass, 1)))
            return NULL;
          return t_DeSitterRelativity::wrap_Object(DeSitterRelativity(((t_DeSitterRelativity *) arg)->object.this$));
        }
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DeSitterRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DeSitterRelativity object((jobject) NULL);

              INT_CALL(object = DeSitterRelativity());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              DeSitterRelativity object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DeSitterRelativity(a0, a1));
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

        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args)
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

        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinatesProvider::class$ = NULL;
      jmethodID *PVCoordinatesProvider::mids$ = NULL;
      bool PVCoordinatesProvider::live$ = false;

      jclass PVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_7ca40559664606d9] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedPVCoordinates PVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_7ca40559664606d9], a0.this$, a1.this$));
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
      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_PVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinatesProvider, t_PVCoordinatesProvider, PVCoordinatesProvider);

      void t_PVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinatesProvider), &PY_TYPE_DEF(PVCoordinatesProvider), module, "PVCoordinatesProvider", 0);
      }

      void t_PVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "class_", make_descriptor(PVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "wrapfn_", make_descriptor(t_PVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PVCoordinatesProvider::wrap_Object(PVCoordinatesProvider(((t_PVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmParser::class$ = NULL;
              jmethodID *OcmParser::mids$ = NULL;
              bool OcmParser::live$ = false;

              jclass OcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_65119184c47c28d4] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_d7722dc369ae0874] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_17620dfc90b03975] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_build_65119184c47c28d4]));
              }

              jboolean OcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean OcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean OcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d7722dc369ae0874]));
              }

              ::java::util::Map OcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
              }

              jboolean OcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean OcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean OcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_parse_17620dfc90b03975], a0.this$));
              }

              jboolean OcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean OcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean OcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void OcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg);
              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data);
              static PyGetSetDef t_OcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OcmParser, header),
                DECLARE_GET_FIELD(t_OcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmParser__methods_[] = {
                DECLARE_METHOD(t_OcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, parse, METH_O),
                DECLARE_METHOD(t_OcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmParser)[] = {
                { Py_tp_methods, t_OcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OcmParser, t_OcmParser, OcmParser);
              PyObject *t_OcmParser::wrap_Object(const OcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmParser), &PY_TYPE_DEF(OcmParser), module, "OcmParser", 0);
              }

              void t_OcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "class_", make_descriptor(OcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "wrapfn_", make_descriptor(t_OcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmParser::initializeClass, 1)))
                  return NULL;
                return t_OcmParser::wrap_Object(OcmParser(((t_OcmParser *) arg)->object.this$));
              }
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadata::class$ = NULL;
              jmethodID *AcmMetadata::mids$ = NULL;
              bool AcmMetadata::live$ = false;

              jclass AcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_23625b258f7a7479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAcmDataElements_0d9551367f7ecdef] = env->getMethodID(cls, "getAcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_3cffd47377eca18a] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_557b8123390d8d0c] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getObjectDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getOdmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getOdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorAddress_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_557b8123390d8d0c] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_setAcmDataElements_4ccaedadb068bdeb] = env->getMethodID(cls, "setAcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_f5ffdf29129ef90a] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_20affcbd28542333] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_f5ffdf29129ef90a] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_20affcbd28542333] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_10f281d777284cea] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setObjectDesignator_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setOdmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setOdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorAddress_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setStartTime_20affcbd28542333] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_20affcbd28542333] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_10f281d777284cea] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmMetadata::AcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_23625b258f7a7479, a0.this$)) {}

              ::java::util::List AcmMetadata::getAcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAcmDataElements_0d9551367f7ecdef]));
              }

              ::java::lang::String AcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_7a97f7e149e79afb]));
              }

              ::java::lang::String AcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_7a97f7e149e79afb]));
              }

              jdouble AcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_557b8123390d8d0c]);
              }

              ::java::lang::String AcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMessageLink_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_3cffd47377eca18a]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_7a97f7e149e79afb]));
              }

              jdouble AcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_557b8123390d8d0c]);
              }

              void AcmMetadata::setAcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcmDataElements_4ccaedadb068bdeb], a0.this$);
              }

              void AcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_20affcbd28542333], a0.this$);
              }

              void AcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_20affcbd28542333], a0.this$);
              }

              void AcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_10f281d777284cea], a0);
              }

              void AcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOdmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_f5ffdf29129ef90a], a0.this$);
              }

              void AcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_20affcbd28542333], a0.this$);
              }

              void AcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_20affcbd28542333], a0.this$);
              }

              void AcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_10f281d777284cea], a0);
              }

              void AcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args);
              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AcmMetadata, acmDataElements),
                DECLARE_GETSET_FIELD(t_AcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_AcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_AcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_AcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, odmMessageLink),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_AcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, taimutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadata__methods_[] = {
                DECLARE_METHOD(t_AcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, getAcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, setAcmDataElements, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOdmMessageLink, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadata)[] = {
                { Py_tp_methods, t_AcmMetadata__methods_ },
                { Py_tp_init, (void *) t_AcmMetadata_init_ },
                { Py_tp_getset, t_AcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AcmMetadata, t_AcmMetadata, AcmMetadata);

              void t_AcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadata), &PY_TYPE_DEF(AcmMetadata), module, "AcmMetadata", 0);
              }

              void t_AcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "class_", make_descriptor(AcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "wrapfn_", make_descriptor(t_AcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadata::wrap_Object(AcmMetadata(((t_AcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                AcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = AcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmElements));
              }

              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg)
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

              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "acmDataElements", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOdmMessageLink());
                return j2p(value);
              }
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "odmMessageLink", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointFieldIntegrator::class$ = NULL;
        jmethodID *MidpointFieldIntegrator::mids$ = NULL;
        bool MidpointFieldIntegrator::live$ = false;

        jclass MidpointFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_3e47e13285086c49] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegrator::MidpointFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > MidpointFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args);
        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, c),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegrator)[] = {
          { Py_tp_methods, t_MidpointFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegrator_init_ },
          { Py_tp_getset, t_MidpointFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegrator, t_MidpointFieldIntegrator, MidpointFieldIntegrator);
        PyObject *t_MidpointFieldIntegrator::wrap_Object(const MidpointFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegrator), &PY_TYPE_DEF(MidpointFieldIntegrator), module, "MidpointFieldIntegrator", 0);
        }

        void t_MidpointFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "class_", make_descriptor(MidpointFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "wrapfn_", make_descriptor(t_MidpointFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegrator::wrap_Object(MidpointFieldIntegrator(((t_MidpointFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          MidpointFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = MidpointFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {

        ::java::lang::Class *PCA::class$ = NULL;
        jmethodID *PCA::mids$ = NULL;
        bool PCA::live$ = false;

        jclass PCA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/projection/PCA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_9b50b4169e00a9a7] = env->getMethodID(cls, "<init>", "(IZZ)V");
            mids$[mid_fit_08e8cc218c0c12b9] = env->getMethodID(cls, "fit", "([[D)Lorg/hipparchus/stat/projection/PCA;");
            mids$[mid_fitAndTransform_2b7f9de2d1ea1ddb] = env->getMethodID(cls, "fitAndTransform", "([[D)[[D");
            mids$[mid_getCenter_a53a7513ecedada2] = env->getMethodID(cls, "getCenter", "()[D");
            mids$[mid_getComponents_8cf5267aa13a77f3] = env->getMethodID(cls, "getComponents", "()[[D");
            mids$[mid_getNumComponents_412668abc8d889e9] = env->getMethodID(cls, "getNumComponents", "()I");
            mids$[mid_getVariance_a53a7513ecedada2] = env->getMethodID(cls, "getVariance", "()[D");
            mids$[mid_isBiasCorrection_89b302893bdbe1f1] = env->getMethodID(cls, "isBiasCorrection", "()Z");
            mids$[mid_isScale_89b302893bdbe1f1] = env->getMethodID(cls, "isScale", "()Z");
            mids$[mid_transform_2b7f9de2d1ea1ddb] = env->getMethodID(cls, "transform", "([[D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PCA::PCA(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        PCA::PCA(jint a0, jboolean a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9b50b4169e00a9a7, a0, a1, a2)) {}

        PCA PCA::fit(const JArray< JArray< jdouble > > & a0) const
        {
          return PCA(env->callObjectMethod(this$, mids$[mid_fit_08e8cc218c0c12b9], a0.this$));
        }

        JArray< JArray< jdouble > > PCA::fitAndTransform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_fitAndTransform_2b7f9de2d1ea1ddb], a0.this$));
        }

        JArray< jdouble > PCA::getCenter() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenter_a53a7513ecedada2]));
        }

        JArray< JArray< jdouble > > PCA::getComponents() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getComponents_8cf5267aa13a77f3]));
        }

        jint PCA::getNumComponents() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumComponents_412668abc8d889e9]);
        }

        JArray< jdouble > PCA::getVariance() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVariance_a53a7513ecedada2]));
        }

        jboolean PCA::isBiasCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isBiasCorrection_89b302893bdbe1f1]);
        }

        jboolean PCA::isScale() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isScale_89b302893bdbe1f1]);
        }

        JArray< JArray< jdouble > > PCA::transform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_transform_2b7f9de2d1ea1ddb], a0.this$));
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
      namespace projection {
        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_getCenter(t_PCA *self);
        static PyObject *t_PCA_getComponents(t_PCA *self);
        static PyObject *t_PCA_getNumComponents(t_PCA *self);
        static PyObject *t_PCA_getVariance(t_PCA *self);
        static PyObject *t_PCA_isBiasCorrection(t_PCA *self);
        static PyObject *t_PCA_isScale(t_PCA *self);
        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data);
        static PyObject *t_PCA_get__center(t_PCA *self, void *data);
        static PyObject *t_PCA_get__components(t_PCA *self, void *data);
        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data);
        static PyObject *t_PCA_get__scale(t_PCA *self, void *data);
        static PyObject *t_PCA_get__variance(t_PCA *self, void *data);
        static PyGetSetDef t_PCA__fields_[] = {
          DECLARE_GET_FIELD(t_PCA, biasCorrection),
          DECLARE_GET_FIELD(t_PCA, center),
          DECLARE_GET_FIELD(t_PCA, components),
          DECLARE_GET_FIELD(t_PCA, numComponents),
          DECLARE_GET_FIELD(t_PCA, scale),
          DECLARE_GET_FIELD(t_PCA, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PCA__methods_[] = {
          DECLARE_METHOD(t_PCA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, fit, METH_O),
          DECLARE_METHOD(t_PCA, fitAndTransform, METH_O),
          DECLARE_METHOD(t_PCA, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getNumComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isBiasCorrection, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isScale, METH_NOARGS),
          DECLARE_METHOD(t_PCA, transform, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PCA)[] = {
          { Py_tp_methods, t_PCA__methods_ },
          { Py_tp_init, (void *) t_PCA_init_ },
          { Py_tp_getset, t_PCA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PCA)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PCA, t_PCA, PCA);

        void t_PCA::install(PyObject *module)
        {
          installType(&PY_TYPE(PCA), &PY_TYPE_DEF(PCA), module, "PCA", 0);
        }

        void t_PCA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "class_", make_descriptor(PCA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "wrapfn_", make_descriptor(t_PCA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PCA::initializeClass, 1)))
            return NULL;
          return t_PCA::wrap_Object(PCA(((t_PCA *) arg)->object.this$));
        }
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PCA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = PCA(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jboolean a2;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "IZZ", &a0, &a1, &a2))
              {
                INT_CALL(object = PCA(a0, a1, a2));
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

        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          PCA result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fit(a0));
            return t_PCA::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "fit", arg);
          return NULL;
        }

        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fitAndTransform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "fitAndTransform", arg);
          return NULL;
        }

        static PyObject *t_PCA_getCenter(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return result.wrap();
        }

        static PyObject *t_PCA_getComponents(t_PCA *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PCA_getNumComponents(t_PCA *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumComponents());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PCA_getVariance(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVariance());
          return result.wrap();
        }

        static PyObject *t_PCA_isBiasCorrection(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isBiasCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_isScale(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isScale());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.transform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "transform", arg);
          return NULL;
        }

        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isBiasCorrection());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__center(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return value.wrap();
        }

        static PyObject *t_PCA_get__components(t_PCA *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumComponents());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PCA_get__scale(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isScale());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__variance(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVariance());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonTideSystemProvider::class$ = NULL;
          jmethodID *PythonTideSystemProvider::mids$ = NULL;
          bool PythonTideSystemProvider::live$ = false;

          jclass PythonTideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonTideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTideSystemProvider::PythonTideSystemProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonTideSystemProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonTideSystemProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonTideSystemProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self);
          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args);
          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data);
          static PyGetSetDef t_PythonTideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTideSystemProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_PythonTideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTideSystemProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTideSystemProvider)[] = {
            { Py_tp_methods, t_PythonTideSystemProvider__methods_ },
            { Py_tp_init, (void *) t_PythonTideSystemProvider_init_ },
            { Py_tp_getset, t_PythonTideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTideSystemProvider, t_PythonTideSystemProvider, PythonTideSystemProvider);

          void t_PythonTideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTideSystemProvider), &PY_TYPE_DEF(PythonTideSystemProvider), module, "PythonTideSystemProvider", 1);
          }

          void t_PythonTideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "class_", make_descriptor(PythonTideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "wrapfn_", make_descriptor(t_PythonTideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTideSystemProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonTideSystemProvider_getTideSystem0 },
              { "pythonDecRef", "()V", (void *) t_PythonTideSystemProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_PythonTideSystemProvider::wrap_Object(PythonTideSystemProvider(((t_PythonTideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonTideSystemProvider object((jobject) NULL);

            INT_CALL(object = PythonTideSystemProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data)
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
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit::class$ = NULL;
        jmethodID *Logit::mids$ = NULL;
        bool Logit::live$ = false;

        jclass Logit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit::Logit() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        Logit::Logit(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble Logit::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logit::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit_value(t_Logit *self, PyObject *args);

        static PyMethodDef t_Logit__methods_[] = {
          DECLARE_METHOD(t_Logit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit)[] = {
          { Py_tp_methods, t_Logit__methods_ },
          { Py_tp_init, (void *) t_Logit_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit, t_Logit, Logit);

        void t_Logit::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit), &PY_TYPE_DEF(Logit), module, "Logit", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "Parametric", make_descriptor(&PY_TYPE_DEF(Logit$Parametric)));
        }

        void t_Logit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "class_", make_descriptor(Logit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "wrapfn_", make_descriptor(t_Logit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit::initializeClass, 1)))
            return NULL;
          return t_Logit::wrap_Object(Logit(((t_Logit *) arg)->object.this$));
        }
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Logit object((jobject) NULL);

              INT_CALL(object = Logit());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Logit object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Logit(a0, a1));
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

        static PyObject *t_Logit_value(t_Logit *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesIntegrator::mids$ = NULL;
        bool ThreeEighthesIntegrator::live$ = false;

        jclass ThreeEighthesIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_68dc828ebc8622c4] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegrator::ThreeEighthesIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > ThreeEighthesIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegrator, t_ThreeEighthesIntegrator, ThreeEighthesIntegrator);

        void t_ThreeEighthesIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegrator), &PY_TYPE_DEF(ThreeEighthesIntegrator), module, "ThreeEighthesIntegrator", 0);
        }

        void t_ThreeEighthesIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "class_", make_descriptor(ThreeEighthesIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegrator::wrap_Object(ThreeEighthesIntegrator(((t_ThreeEighthesIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$InvalidPVProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$InvalidPVProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$InvalidPVProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$InvalidPVProvider::AggregatedPVCoordinatesProvider$InvalidPVProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider$InvalidPVProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider, t_AggregatedPVCoordinatesProvider$InvalidPVProvider, AggregatedPVCoordinatesProvider$InvalidPVProvider);

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider), module, "AggregatedPVCoordinatesProvider$InvalidPVProvider", 0);
      }

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_Object(AggregatedPVCoordinatesProvider$InvalidPVProvider(((t_AggregatedPVCoordinatesProvider$InvalidPVProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds)
      {
        AggregatedPVCoordinatesProvider$InvalidPVProvider object((jobject) NULL);

        INT_CALL(object = AggregatedPVCoordinatesProvider$InvalidPVProvider());
        self->object = object;

        return 0;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointVectorValuePair::class$ = NULL;
      jmethodID *PointVectorValuePair::mids$ = NULL;
      bool PointVectorValuePair::live$ = false;

      jclass PointVectorValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointVectorValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_ef37244d0d44cd23] = env->getMethodID(cls, "<init>", "([D[DZ)V");
          mids$[mid_getPoint_a53a7513ecedada2] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_a53a7513ecedada2] = env->getMethodID(cls, "getPointRef", "()[D");
          mids$[mid_getValue_a53a7513ecedada2] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_getValueRef_a53a7513ecedada2] = env->getMethodID(cls, "getValueRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_ef37244d0d44cd23, a0.this$, a1.this$, a2)) {}

      JArray< jdouble > PointVectorValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_a53a7513ecedada2]));
      }

      JArray< jdouble > PointVectorValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_a53a7513ecedada2]));
      }

      JArray< jdouble > PointVectorValuePair::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_a53a7513ecedada2]));
      }

      JArray< jdouble > PointVectorValuePair::getValueRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValueRef_a53a7513ecedada2]));
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
      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args);
      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args);
      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data);
      static PyGetSetDef t_PointVectorValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointVectorValuePair, point),
        DECLARE_GET_FIELD(t_PointVectorValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, value),
        DECLARE_GET_FIELD(t_PointVectorValuePair, valueRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointVectorValuePair__methods_[] = {
        DECLARE_METHOD(t_PointVectorValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPointRef, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValue, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValueRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointVectorValuePair)[] = {
        { Py_tp_methods, t_PointVectorValuePair__methods_ },
        { Py_tp_init, (void *) t_PointVectorValuePair_init_ },
        { Py_tp_getset, t_PointVectorValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointVectorValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointVectorValuePair, t_PointVectorValuePair, PointVectorValuePair);
      PyObject *t_PointVectorValuePair::wrap_Object(const PointVectorValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointVectorValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointVectorValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointVectorValuePair), &PY_TYPE_DEF(PointVectorValuePair), module, "PointVectorValuePair", 0);
      }

      void t_PointVectorValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "class_", make_descriptor(PointVectorValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "wrapfn_", make_descriptor(t_PointVectorValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointVectorValuePair::initializeClass, 1)))
          return NULL;
        return t_PointVectorValuePair::wrap_Object(PointVectorValuePair(((t_PointVectorValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointVectorValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
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

      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getValue());
          return result.wrap();
        }

        return callSuper(PY_TYPE(PointVectorValuePair), (PyObject *) self, "getValue", args, 2);
      }

      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueRef());
        return result.wrap();
      }
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *WeatherModel::class$ = NULL;
          jmethodID *WeatherModel::mids$ = NULL;
          bool WeatherModel::live$ = false;

          jclass WeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/WeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_weatherParameters_4ca6118c75b70100] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void WeatherModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_4ca6118c75b70100], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args);

          static PyMethodDef t_WeatherModel__methods_[] = {
            DECLARE_METHOD(t_WeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WeatherModel)[] = {
            { Py_tp_methods, t_WeatherModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WeatherModel, t_WeatherModel, WeatherModel);

          void t_WeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(WeatherModel), &PY_TYPE_DEF(WeatherModel), module, "WeatherModel", 0);
          }

          void t_WeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "class_", make_descriptor(WeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "wrapfn_", make_descriptor(t_WeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WeatherModel::initializeClass, 1)))
              return NULL;
            return t_WeatherModel::wrap_Object(WeatherModel(((t_WeatherModel *) arg)->object.this$));
          }
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonSemiAnalyticalProcess::class$ = NULL;
        jmethodID *PythonSemiAnalyticalProcess::mids$ = NULL;
        bool PythonSemiAnalyticalProcess::live$ = false;

        jclass PythonSemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonSemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_25fab8044126746b] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateNominalSpacecraftState_8655761ebf04b503] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_8655761ebf04b503] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSemiAnalyticalProcess::PythonSemiAnalyticalProcess() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonSemiAnalyticalProcess::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonSemiAnalyticalProcess::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonSemiAnalyticalProcess::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self);
        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_PythonSemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSemiAnalyticalProcess, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_PythonSemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) t_PythonSemiAnalyticalProcess_init_ },
          { Py_tp_getset, t_PythonSemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSemiAnalyticalProcess, t_PythonSemiAnalyticalProcess, PythonSemiAnalyticalProcess);

        void t_PythonSemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSemiAnalyticalProcess), &PY_TYPE_DEF(PythonSemiAnalyticalProcess), module, "PythonSemiAnalyticalProcess", 1);
        }

        void t_PythonSemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "class_", make_descriptor(PythonSemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "wrapfn_", make_descriptor(t_PythonSemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSemiAnalyticalProcess::initializeClass);
          JNINativeMethod methods[] = {
            { "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V", (void *) t_PythonSemiAnalyticalProcess_finalizeEstimation0 },
            { "finalizeOperationsObservationGrid", "()V", (void *) t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1 },
            { "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;", (void *) t_PythonSemiAnalyticalProcess_getObserver2 },
            { "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3 },
            { "pythonDecRef", "()V", (void *) t_PythonSemiAnalyticalProcess_pythonDecRef4 },
            { "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5 },
            { "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateShortPeriods6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_PythonSemiAnalyticalProcess::wrap_Object(PythonSemiAnalyticalProcess(((t_PythonSemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds)
        {
          PythonSemiAnalyticalProcess object((jobject) NULL);

          INT_CALL(object = PythonSemiAnalyticalProcess());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args)
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

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
          PyObject *o1 = ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(::org::hipparchus::filtering::kalman::ProcessEstimate(a1));
          PyObject *result = PyObject_CallMethod(obj, "finalizeEstimation", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "finalizeOperationsObservationGrid", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObserver", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
          {
            throwTypeError("getObserver", result);
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

        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodicTerms", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateNominalSpacecraftState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateShortPeriods", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldHermiteRuleFactory::class$ = NULL;
          jmethodID *FieldHermiteRuleFactory::mids$ = NULL;
          bool FieldHermiteRuleFactory::live$ = false;

          jclass FieldHermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldHermiteRuleFactory::FieldHermiteRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}
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
          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args);
          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data);
          static PyGetSetDef t_FieldHermiteRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldHermiteRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldHermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldHermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldHermiteRuleFactory)[] = {
            { Py_tp_methods, t_FieldHermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldHermiteRuleFactory_init_ },
            { Py_tp_getset, t_FieldHermiteRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldHermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldHermiteRuleFactory, t_FieldHermiteRuleFactory, FieldHermiteRuleFactory);
          PyObject *t_FieldHermiteRuleFactory::wrap_Object(const FieldHermiteRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldHermiteRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldHermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldHermiteRuleFactory), &PY_TYPE_DEF(FieldHermiteRuleFactory), module, "FieldHermiteRuleFactory", 0);
          }

          void t_FieldHermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "class_", make_descriptor(FieldHermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "wrapfn_", make_descriptor(t_FieldHermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldHermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldHermiteRuleFactory::wrap_Object(FieldHermiteRuleFactory(((t_FieldHermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldHermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldHermiteRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldHermiteRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenTesseralLinear::class$ = NULL;
              jmethodID *HansenTesseralLinear::mids$ = NULL;
              bool HansenTesseralLinear::live$ = false;

              jclass HansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a0ab3b1da64ee815] = env->getMethodID(cls, "<init>", "(IIIII)V");
                  mids$[mid_computeInitValues_87096e3fd8086100] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_77f9e227e4cf04b4] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_77f9e227e4cf04b4] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenTesseralLinear::HansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0ab3b1da64ee815, a0, a1, a2, a3, a4)) {}

              void HansenTesseralLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_87096e3fd8086100], a0, a1, a2);
              }

              jdouble HansenTesseralLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_77f9e227e4cf04b4], a0, a1);
              }

              jdouble HansenTesseralLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_77f9e227e4cf04b4], a0, a1);
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
              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args);

              static PyMethodDef t_HansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_HansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenTesseralLinear)[] = {
                { Py_tp_methods, t_HansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_HansenTesseralLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenTesseralLinear, t_HansenTesseralLinear, HansenTesseralLinear);

              void t_HansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenTesseralLinear), &PY_TYPE_DEF(HansenTesseralLinear), module, "HansenTesseralLinear", 0);
              }

              void t_HansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "class_", make_descriptor(HansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "wrapfn_", make_descriptor(t_HansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenTesseralLinear::wrap_Object(HansenTesseralLinear(((t_HansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                HansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = HansenTesseralLinear(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
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
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_4ccaedadb068bdeb] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_4ccaedadb068bdeb] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_98fa7d48d3b7f88a] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatStepHandler::PythonMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonMultiSatStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonMultiSatStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonMultiSatStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *LongConsumer::class$ = NULL;
      jmethodID *LongConsumer::mids$ = NULL;
      bool LongConsumer::live$ = false;

      jclass LongConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/LongConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_3cd6a6b354c6aa22] = env->getMethodID(cls, "accept", "(J)V");
          mids$[mid_andThen_505bb136645d869d] = env->getMethodID(cls, "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LongConsumer::accept(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_3cd6a6b354c6aa22], a0);
      }

      LongConsumer LongConsumer::andThen(const LongConsumer & a0) const
      {
        return LongConsumer(env->callObjectMethod(this$, mids$[mid_andThen_505bb136645d869d], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg);
      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg);

      static PyMethodDef t_LongConsumer__methods_[] = {
        DECLARE_METHOD(t_LongConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, accept, METH_O),
        DECLARE_METHOD(t_LongConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongConsumer)[] = {
        { Py_tp_methods, t_LongConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LongConsumer, t_LongConsumer, LongConsumer);

      void t_LongConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(LongConsumer), &PY_TYPE_DEF(LongConsumer), module, "LongConsumer", 0);
      }

      void t_LongConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "class_", make_descriptor(LongConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "wrapfn_", make_descriptor(t_LongConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongConsumer::initializeClass, 1)))
          return NULL;
        return t_LongConsumer::wrap_Object(LongConsumer(((t_LongConsumer *) arg)->object.this$));
      }
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg)
      {
        LongConsumer a0((jobject) NULL);
        LongConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", LongConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_LongConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposition::class$ = NULL;
      jmethodID *QRDecomposition::mids$ = NULL;
      bool QRDecomposition::live$ = false;

      jclass QRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getH_70a207fcbc031df2] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQ_70a207fcbc031df2] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQT_70a207fcbc031df2] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getR_70a207fcbc031df2] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_edb361bfdd1ad9ae] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_03f9d79d0168ba0b] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQ_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQT_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getR_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::DecompositionSolver QRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
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
      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data);
      static PyGetSetDef t_QRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_QRDecomposition, h),
        DECLARE_GET_FIELD(t_QRDecomposition, q),
        DECLARE_GET_FIELD(t_QRDecomposition, qT),
        DECLARE_GET_FIELD(t_QRDecomposition, r),
        DECLARE_GET_FIELD(t_QRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QRDecomposition__methods_[] = {
        DECLARE_METHOD(t_QRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposition)[] = {
        { Py_tp_methods, t_QRDecomposition__methods_ },
        { Py_tp_init, (void *) t_QRDecomposition_init_ },
        { Py_tp_getset, t_QRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposition, t_QRDecomposition, QRDecomposition);

      void t_QRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposition), &PY_TYPE_DEF(QRDecomposition), module, "QRDecomposition", 0);
      }

      void t_QRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "class_", make_descriptor(QRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "wrapfn_", make_descriptor(t_QRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposition::initializeClass, 1)))
          return NULL;
        return t_QRDecomposition::wrap_Object(QRDecomposition(((t_QRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = QRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = QRDecomposition(a0, a1));
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

      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonReaderOpener::class$ = NULL;
      jmethodID *PythonReaderOpener::mids$ = NULL;
      bool PythonReaderOpener::live$ = false;

      jclass PythonReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_db817b1afec8e8b3] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonReaderOpener::PythonReaderOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonReaderOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonReaderOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonReaderOpener::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self);
      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args);
      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data);
      static PyGetSetDef t_PythonReaderOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonReaderOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonReaderOpener__methods_[] = {
        DECLARE_METHOD(t_PythonReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonReaderOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonReaderOpener)[] = {
        { Py_tp_methods, t_PythonReaderOpener__methods_ },
        { Py_tp_init, (void *) t_PythonReaderOpener_init_ },
        { Py_tp_getset, t_PythonReaderOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonReaderOpener, t_PythonReaderOpener, PythonReaderOpener);

      void t_PythonReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonReaderOpener), &PY_TYPE_DEF(PythonReaderOpener), module, "PythonReaderOpener", 1);
      }

      void t_PythonReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "class_", make_descriptor(PythonReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "wrapfn_", make_descriptor(t_PythonReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonReaderOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/Reader;", (void *) t_PythonReaderOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonReaderOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonReaderOpener::initializeClass, 1)))
          return NULL;
        return t_PythonReaderOpener::wrap_Object(PythonReaderOpener(((t_PythonReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonReaderOpener object((jobject) NULL);

        INT_CALL(object = PythonReaderOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::Reader value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::Reader::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TimetagReference::class$ = NULL;
            jmethodID *TimetagReference::mids$ = NULL;
            bool TimetagReference::live$ = false;
            TimetagReference *TimetagReference::RECEIVE = NULL;
            TimetagReference *TimetagReference::TRANSMIT = NULL;

            jclass TimetagReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TimetagReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_bc053f433d2984d8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_values_2c23046667b6a263] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RECEIVE = new TimetagReference(env->getStaticObjectField(cls, "RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                TRANSMIT = new TimetagReference(env->getStaticObjectField(cls, "TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TimetagReference TimetagReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TimetagReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bc053f433d2984d8], a0.this$));
            }

            JArray< TimetagReference > TimetagReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TimetagReference >(env->callStaticObjectMethod(cls, mids$[mid_values_2c23046667b6a263]));
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
            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args);
            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TimetagReference_values(PyTypeObject *type);
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data);
            static PyGetSetDef t_TimetagReference__fields_[] = {
              DECLARE_GET_FIELD(t_TimetagReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TimetagReference__methods_[] = {
              DECLARE_METHOD(t_TimetagReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_TimetagReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TimetagReference)[] = {
              { Py_tp_methods, t_TimetagReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TimetagReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TimetagReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TimetagReference, t_TimetagReference, TimetagReference);
            PyObject *t_TimetagReference::wrap_Object(const TimetagReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TimetagReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TimetagReference::install(PyObject *module)
            {
              installType(&PY_TYPE(TimetagReference), &PY_TYPE_DEF(TimetagReference), module, "TimetagReference", 0);
            }

            void t_TimetagReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "class_", make_descriptor(TimetagReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "wrapfn_", make_descriptor(t_TimetagReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(TimetagReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "RECEIVE", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "TRANSMIT", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::TRANSMIT)));
            }

            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TimetagReference::initializeClass, 1)))
                return NULL;
              return t_TimetagReference::wrap_Object(TimetagReference(((t_TimetagReference *) arg)->object.this$));
            }
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TimetagReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TimetagReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::valueOf(a0));
                return t_TimetagReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TimetagReference_values(PyTypeObject *type)
            {
              JArray< TimetagReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::values());
              return JArray<jobject>(result.this$).wrap(t_TimetagReference::wrap_jobject);
            }
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data)
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
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GPSScale::class$ = NULL;
      jmethodID *GPSScale::mids$ = NULL;
      bool GPSScale::live$ = false;

      jclass GPSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GPSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GPSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble GPSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GPSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble GPSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String GPSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_getName(t_GPSScale *self);
      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data);
      static PyGetSetDef t_GPSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GPSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GPSScale__methods_[] = {
        DECLARE_METHOD(t_GPSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GPSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GPSScale)[] = {
        { Py_tp_methods, t_GPSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GPSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GPSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GPSScale, t_GPSScale, GPSScale);

      void t_GPSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GPSScale), &PY_TYPE_DEF(GPSScale), module, "GPSScale", 0);
      }

      void t_GPSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "class_", make_descriptor(GPSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "wrapfn_", make_descriptor(t_GPSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GPSScale::initializeClass, 1)))
          return NULL;
        return t_GPSScale::wrap_Object(GPSScale(((t_GPSScale *) arg)->object.this$));
      }
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GPSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GPSScale_getName(t_GPSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GPSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHull2D::class$ = NULL;
            jmethodID *ConvexHull2D::mids$ = NULL;
            bool ConvexHull2D::live$ = false;

            jclass ConvexHull2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c0bcde802d314b1b] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
                mids$[mid_createRegion_fd006079784937f2] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
                mids$[mid_getLineSegments_1db8d57a3ccdb413] = env->getMethodID(cls, "getLineSegments", "()[Lorg/hipparchus/geometry/euclidean/twod/Segment;");
                mids$[mid_getVertices_2ba250086feeaa90] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ConvexHull2D::ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0bcde802d314b1b, a0.this$, a1)) {}

            ::org::hipparchus::geometry::partitioning::Region ConvexHull2D::createRegion() const
            {
              return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_fd006079784937f2]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > ConvexHull2D::getLineSegments() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Segment >(env->callObjectMethod(this$, mids$[mid_getLineSegments_1db8d57a3ccdb413]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > ConvexHull2D::getVertices() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D >(env->callObjectMethod(this$, mids$[mid_getVertices_2ba250086feeaa90]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data);
            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data);
            static PyGetSetDef t_ConvexHull2D__fields_[] = {
              DECLARE_GET_FIELD(t_ConvexHull2D, lineSegments),
              DECLARE_GET_FIELD(t_ConvexHull2D, vertices),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ConvexHull2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHull2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, createRegion, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getLineSegments, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getVertices, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHull2D)[] = {
              { Py_tp_methods, t_ConvexHull2D__methods_ },
              { Py_tp_init, (void *) t_ConvexHull2D_init_ },
              { Py_tp_getset, t_ConvexHull2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHull2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ConvexHull2D, t_ConvexHull2D, ConvexHull2D);

            void t_ConvexHull2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHull2D), &PY_TYPE_DEF(ConvexHull2D), module, "ConvexHull2D", 0);
            }

            void t_ConvexHull2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "class_", make_descriptor(ConvexHull2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "wrapfn_", make_descriptor(t_ConvexHull2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHull2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHull2D::wrap_Object(ConvexHull2D(((t_ConvexHull2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHull2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a0((jobject) NULL);
              jdouble a1;
              ConvexHull2D object((jobject) NULL);

              if (!parseArgs(args, "[kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConvexHull2D(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self)
            {
              ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
              OBJ_CALL(result = self->object.createRegion());
              return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > result((jobject) NULL);
              OBJ_CALL(result = self->object.getLineSegments());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > result((jobject) NULL);
              OBJ_CALL(result = self->object.getVertices());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > value((jobject) NULL);
              OBJ_CALL(value = self->object.getLineSegments());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > value((jobject) NULL);
              OBJ_CALL(value = self->object.getVertices());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well512a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well512a::class$ = NULL;
      jmethodID *Well512a::mids$ = NULL;
      bool Well512a::live$ = false;

      jclass Well512a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well512a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well512a::Well512a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well512a::Well512a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well512a::Well512a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well512a::Well512a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well512a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
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
      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args);

      static PyMethodDef t_Well512a__methods_[] = {
        DECLARE_METHOD(t_Well512a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well512a)[] = {
        { Py_tp_methods, t_Well512a__methods_ },
        { Py_tp_init, (void *) t_Well512a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well512a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well512a, t_Well512a, Well512a);

      void t_Well512a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well512a), &PY_TYPE_DEF(Well512a), module, "Well512a", 0);
      }

      void t_Well512a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "class_", make_descriptor(Well512a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "wrapfn_", make_descriptor(t_Well512a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well512a::initializeClass, 1)))
          return NULL;
        return t_Well512a::wrap_Object(Well512a(((t_Well512a *) arg)->object.this$));
      }
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well512a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well512a object((jobject) NULL);

            INT_CALL(object = Well512a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well512a(a0));
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

      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well512a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver2.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver2::class$ = NULL;
        jmethodID *MullerSolver2::mids$ = NULL;
        bool MullerSolver2::live$ = false;

        jclass MullerSolver2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver2::MullerSolver2() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        MullerSolver2::MullerSolver2(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        MullerSolver2::MullerSolver2(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}
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
        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args);
        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data);
        static PyGetSetDef t_MullerSolver2__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver2__methods_[] = {
          DECLARE_METHOD(t_MullerSolver2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver2)[] = {
          { Py_tp_methods, t_MullerSolver2__methods_ },
          { Py_tp_init, (void *) t_MullerSolver2_init_ },
          { Py_tp_getset, t_MullerSolver2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver2, t_MullerSolver2, MullerSolver2);
        PyObject *t_MullerSolver2::wrap_Object(const MullerSolver2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver2::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver2), &PY_TYPE_DEF(MullerSolver2), module, "MullerSolver2", 0);
        }

        void t_MullerSolver2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "class_", make_descriptor(MullerSolver2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "wrapfn_", make_descriptor(t_MullerSolver2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver2::initializeClass, 1)))
            return NULL;
          return t_MullerSolver2::wrap_Object(MullerSolver2(((t_MullerSolver2 *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver2 object((jobject) NULL);

              INT_CALL(object = MullerSolver2());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver2(a0));
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
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver2(a0, a1));
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
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance::class$ = NULL;
          jmethodID *SemiVariance::mids$ = NULL;
          bool SemiVariance::live$ = false;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::DOWNSIDE_VARIANCE = NULL;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::UPSIDE_VARIANCE = NULL;

          jclass SemiVariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_2faf93aaaab8a142] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_27c77adcc15eef37] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_copy_26c42fa296fc5bfe] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_evaluate_1f641d7d3375a072] = env->getMethodID(cls, "evaluate", "([DLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_05f591cf0826202b] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_173d2508cb01802e] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_e9b03b2ca024d2a8] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;ZII)D");
              mids$[mid_getVarianceDirection_10a295ec4eb71545] = env->getMethodID(cls, "getVarianceDirection", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_isBiasCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrected_718e07110e31bc5d] = env->getMethodID(cls, "withBiasCorrected", "(Z)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_withVarianceDirection_f5e457a3e8387ad8] = env->getMethodID(cls, "withVarianceDirection", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance::SemiVariance() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          SemiVariance::SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_2faf93aaaab8a142, a0.this$)) {}

          SemiVariance::SemiVariance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

          SemiVariance::SemiVariance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_27c77adcc15eef37, a0, a1.this$)) {}

          SemiVariance SemiVariance::copy() const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_copy_26c42fa296fc5bfe]));
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1f641d7d3375a072], a0.this$, a1.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_05f591cf0826202b], a0.this$, a1);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_173d2508cb01802e], a0.this$, a1, a2.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2, jboolean a3, jint a4, jint a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_e9b03b2ca024d2a8], a0.this$, a1, a2.this$, a3, a4, a5);
          }

          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction SemiVariance::getVarianceDirection() const
          {
            return ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->callObjectMethod(this$, mids$[mid_getVarianceDirection_10a295ec4eb71545]));
          }

          jboolean SemiVariance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_89b302893bdbe1f1]);
          }

          SemiVariance SemiVariance::withBiasCorrected(jboolean a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withBiasCorrected_718e07110e31bc5d], a0));
          }

          SemiVariance SemiVariance::withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withVarianceDirection_f5e457a3e8387ad8], a0.this$));
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
        namespace moment {
          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self);
          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self);
          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data);
          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data);
          static PyGetSetDef t_SemiVariance__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance, biasCorrected),
            DECLARE_GET_FIELD(t_SemiVariance, varianceDirection),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance__methods_[] = {
            DECLARE_METHOD(t_SemiVariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, copy, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, getVarianceDirection, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, withBiasCorrected, METH_O),
            DECLARE_METHOD(t_SemiVariance, withVarianceDirection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance)[] = {
            { Py_tp_methods, t_SemiVariance__methods_ },
            { Py_tp_init, (void *) t_SemiVariance_init_ },
            { Py_tp_getset, t_SemiVariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SemiVariance, t_SemiVariance, SemiVariance);

          void t_SemiVariance::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance), &PY_TYPE_DEF(SemiVariance), module, "SemiVariance", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "Direction", make_descriptor(&PY_TYPE_DEF(SemiVariance$Direction)));
          }

          void t_SemiVariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "class_", make_descriptor(SemiVariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "wrapfn_", make_descriptor(t_SemiVariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "DOWNSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::DOWNSIDE_VARIANCE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "UPSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::UPSIDE_VARIANCE)));
          }

          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance::initializeClass, 1)))
              return NULL;
            return t_SemiVariance::wrap_Object(SemiVariance(((t_SemiVariance *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SemiVariance object((jobject) NULL);

                INT_CALL(object = SemiVariance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
                PyTypeObject **p0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "ZK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0, a1));
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

          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args)
          {
            SemiVariance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SemiVariance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble result;

                if (!parseArgs(args, "[DK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble result;

                if (!parseArgs(args, "[DDK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 6:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jboolean a3;
                jint a4;
                jint a5;
                jdouble result;

                if (!parseArgs(args, "[DDKZII", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction result((jobject) NULL);
            OBJ_CALL(result = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(result);
          }

          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg)
          {
            jboolean a0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrected(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrected", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
            PyTypeObject **p0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
            {
              OBJ_CALL(result = self->object.withVarianceDirection(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withVarianceDirection", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction value((jobject) NULL);
            OBJ_CALL(value = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexBaseHeader::class$ = NULL;
          jmethodID *RinexBaseHeader::mids$ = NULL;
          bool RinexBaseHeader::live$ = false;

          jclass RinexBaseHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexBaseHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCreationDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateComponents_36ab2bc94e6368bd] = env->getMethodID(cls, "getCreationDateComponents", "()Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getCreationTimeZone_3cffd47377eca18a] = env->getMethodID(cls, "getCreationTimeZone", "()Ljava/lang/String;");
              mids$[mid_getDoi_3cffd47377eca18a] = env->getMethodID(cls, "getDoi", "()Ljava/lang/String;");
              mids$[mid_getFileType_398c2b7f7227cc4c] = env->getMethodID(cls, "getFileType", "()Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_getFormatVersion_557b8123390d8d0c] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getLicense_3cffd47377eca18a] = env->getMethodID(cls, "getLicense", "()Ljava/lang/String;");
              mids$[mid_getProgramName_3cffd47377eca18a] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getRunByName_3cffd47377eca18a] = env->getMethodID(cls, "getRunByName", "()Ljava/lang/String;");
              mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getStationInformation_3cffd47377eca18a] = env->getMethodID(cls, "getStationInformation", "()Ljava/lang/String;");
              mids$[mid_setCreationDate_20affcbd28542333] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateComponents_f86c144703aac3d6] = env->getMethodID(cls, "setCreationDateComponents", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_setCreationTimeZone_f5ffdf29129ef90a] = env->getMethodID(cls, "setCreationTimeZone", "(Ljava/lang/String;)V");
              mids$[mid_setDoi_f5ffdf29129ef90a] = env->getMethodID(cls, "setDoi", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_10f281d777284cea] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setLicense_f5ffdf29129ef90a] = env->getMethodID(cls, "setLicense", "(Ljava/lang/String;)V");
              mids$[mid_setProgramName_f5ffdf29129ef90a] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setRunByName_f5ffdf29129ef90a] = env->getMethodID(cls, "setRunByName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_b744026f46deda44] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationInformation_f5ffdf29129ef90a] = env->getMethodID(cls, "setStationInformation", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate RinexBaseHeader::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_7a97f7e149e79afb]));
          }

          ::org::orekit::time::DateTimeComponents RinexBaseHeader::getCreationDateComponents() const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getCreationDateComponents_36ab2bc94e6368bd]));
          }

          ::java::lang::String RinexBaseHeader::getCreationTimeZone() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZone_3cffd47377eca18a]));
          }

          ::java::lang::String RinexBaseHeader::getDoi() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDoi_3cffd47377eca18a]));
          }

          ::org::orekit::files::rinex::utils::RinexFileType RinexBaseHeader::getFileType() const
          {
            return ::org::orekit::files::rinex::utils::RinexFileType(env->callObjectMethod(this$, mids$[mid_getFileType_398c2b7f7227cc4c]));
          }

          jdouble RinexBaseHeader::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_557b8123390d8d0c]);
          }

          ::java::lang::String RinexBaseHeader::getLicense() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLicense_3cffd47377eca18a]));
          }

          ::java::lang::String RinexBaseHeader::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_3cffd47377eca18a]));
          }

          ::java::lang::String RinexBaseHeader::getRunByName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRunByName_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexBaseHeader::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
          }

          ::java::lang::String RinexBaseHeader::getStationInformation() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationInformation_3cffd47377eca18a]));
          }

          void RinexBaseHeader::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_20affcbd28542333], a0.this$);
          }

          void RinexBaseHeader::setCreationDateComponents(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateComponents_f86c144703aac3d6], a0.this$);
          }

          void RinexBaseHeader::setCreationTimeZone(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZone_f5ffdf29129ef90a], a0.this$);
          }

          void RinexBaseHeader::setDoi(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDoi_f5ffdf29129ef90a], a0.this$);
          }

          void RinexBaseHeader::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_10f281d777284cea], a0);
          }

          void RinexBaseHeader::setLicense(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLicense_f5ffdf29129ef90a], a0.this$);
          }

          void RinexBaseHeader::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexBaseHeader::setRunByName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRunByName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexBaseHeader::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_b744026f46deda44], a0.this$);
          }

          void RinexBaseHeader::setStationInformation(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationInformation_f5ffdf29129ef90a], a0.this$);
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
        namespace section {
          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data);
          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyGetSetDef t_RinexBaseHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDate),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDateComponents),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationTimeZone),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, doi),
            DECLARE_GET_FIELD(t_RinexBaseHeader, fileType),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, formatVersion),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, license),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, programName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, runByName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, satelliteSystem),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, stationInformation),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexBaseHeader__methods_[] = {
            DECLARE_METHOD(t_RinexBaseHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDateComponents, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationTimeZone, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getDoi, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFileType, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getLicense, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getRunByName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getStationInformation, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDateComponents, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationTimeZone, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setDoi, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setLicense, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setRunByName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setStationInformation, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexBaseHeader)[] = {
            { Py_tp_methods, t_RinexBaseHeader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexBaseHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexBaseHeader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexBaseHeader, t_RinexBaseHeader, RinexBaseHeader);

          void t_RinexBaseHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexBaseHeader), &PY_TYPE_DEF(RinexBaseHeader), module, "RinexBaseHeader", 0);
          }

          void t_RinexBaseHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "class_", make_descriptor(RinexBaseHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "wrapfn_", make_descriptor(t_RinexBaseHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexBaseHeader::initializeClass, 1)))
              return NULL;
            return t_RinexBaseHeader::wrap_Object(RinexBaseHeader(((t_RinexBaseHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexBaseHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZone());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoi());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self)
          {
            ::org::orekit::files::rinex::utils::RinexFileType result((jobject) NULL);
            OBJ_CALL(result = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLicense());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRunByName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationInformation());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDateComponents(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateComponents", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZone(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZone", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setDoi(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDoi", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setLicense(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLicense", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setRunByName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRunByName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationInformation(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationInformation", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::DateTimeComponents value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::DateTimeComponents value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDateComponents(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateComponents", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZone());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZone(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZone", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoi());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setDoi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "doi", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::files::rinex::utils::RinexFileType value((jobject) NULL);
            OBJ_CALL(value = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(value);
          }

          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLicense());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setLicense(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "license", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRunByName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setRunByName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "runByName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationInformation());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationInformation(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationInformation", arg);
            return -1;
          }
        }
      }
    }
  }
}
