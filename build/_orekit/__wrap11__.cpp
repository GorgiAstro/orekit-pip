#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *StaticTransform::class$ = NULL;
      jmethodID *StaticTransform::mids$ = NULL;
      bool StaticTransform::live$ = false;

      jclass StaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/StaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_a8493a788ad7e6d7] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_compositeRotation_a14cf49a0e69bd18] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_compositeTranslation_321e282a5bae744e] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getIdentity_f798b00aed778de3] = env->getStaticMethodID(cls, "getIdentity", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getInverse_f798b00aed778de3] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_f88961cca75a2c0a] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_of_98e36f1d1f4224b7] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_c2b09d9d4d0d9834] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_f2223268ce3ed4bf] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformLine_a329f937d459e992] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
          mids$[mid_transformPosition_588ed0f09550adb9] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_b48aa9aef740fa79] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transformVector_588ed0f09550adb9] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_b48aa9aef740fa79] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StaticTransform StaticTransform::compose(const ::org::orekit::time::AbsoluteDate & a0, const StaticTransform & a1, const StaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_a8493a788ad7e6d7], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::compositeRotation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_a14cf49a0e69bd18], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::compositeTranslation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_321e282a5bae744e], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::getIdentity()
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_f798b00aed778de3]));
      }

      StaticTransform StaticTransform::getInverse() const
      {
        return StaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_f798b00aed778de3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e0dc1a6788897b9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_f88961cca75a2c0a]));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_98e36f1d1f4224b7], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_c2b09d9d4d0d9834], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_f2223268ce3ed4bf], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Line StaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_transformLine_a329f937d459e992], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_588ed0f09550adb9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_b48aa9aef740fa79], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_588ed0f09550adb9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformVector_b48aa9aef740fa79], a0.this$));
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
      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type);
      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg);
      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data);
      static PyGetSetDef t_StaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_StaticTransform, identity),
        DECLARE_GET_FIELD(t_StaticTransform, inverse),
        DECLARE_GET_FIELD(t_StaticTransform, rotation),
        DECLARE_GET_FIELD(t_StaticTransform, translation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StaticTransform__methods_[] = {
        DECLARE_METHOD(t_StaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getIdentity, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, transformLine, METH_O),
        DECLARE_METHOD(t_StaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_StaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StaticTransform)[] = {
        { Py_tp_methods, t_StaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_StaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(StaticTransform, t_StaticTransform, StaticTransform);

      void t_StaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(StaticTransform), &PY_TYPE_DEF(StaticTransform), module, "StaticTransform", 0);
      }

      void t_StaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "class_", make_descriptor(StaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "wrapfn_", make_descriptor(t_StaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StaticTransform::initializeClass, 1)))
          return NULL;
        return t_StaticTransform::wrap_Object(StaticTransform(((t_StaticTransform *) arg)->object.this$));
      }
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        StaticTransform a2((jobject) NULL);
        StaticTransform result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compose(a0, a1, a2));
          return t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::StaticTransform::getIdentity());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1, a2));
              return t_StaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transformLine(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", arg);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getIdentity());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Constant::class$ = NULL;
        jmethodID *Constant::mids$ = NULL;
        bool Constant::live$ = false;

        jclass Constant::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Constant");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Constant::Constant(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble Constant::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Constant::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Constant_value(t_Constant *self, PyObject *args);

        static PyMethodDef t_Constant__methods_[] = {
          DECLARE_METHOD(t_Constant, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Constant)[] = {
          { Py_tp_methods, t_Constant__methods_ },
          { Py_tp_init, (void *) t_Constant_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Constant)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Constant, t_Constant, Constant);

        void t_Constant::install(PyObject *module)
        {
          installType(&PY_TYPE(Constant), &PY_TYPE_DEF(Constant), module, "Constant", 0);
        }

        void t_Constant::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "class_", make_descriptor(Constant::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "wrapfn_", make_descriptor(t_Constant::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Constant::initializeClass, 1)))
            return NULL;
          return t_Constant::wrap_Object(Constant(((t_Constant *) arg)->object.this$));
        }
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Constant::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Constant object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Constant(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Constant_value(t_Constant *self, PyObject *args)
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
#include "org/orekit/time/PythonFieldTimeShiftable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeShiftable::class$ = NULL;
      jmethodID *PythonFieldTimeShiftable::mids$ = NULL;
      bool PythonFieldTimeShiftable::live$ = false;

      jclass PythonFieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_bd763dbb5304e362] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_726000f3d379befb] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_KK_726000f3d379befb] = env->getMethodID(cls, "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeShiftable::PythonFieldTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }

      ::org::orekit::time::FieldTimeShiftable PythonFieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::time::FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_726000f3d379befb], a0.this$));
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
      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args);
      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self);
      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args);
      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg);
      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data);
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonFieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeShiftable)[] = {
        { Py_tp_methods, t_PythonFieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeShiftable_init_ },
        { Py_tp_getset, t_PythonFieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeShiftable, t_PythonFieldTimeShiftable, PythonFieldTimeShiftable);
      PyObject *t_PythonFieldTimeShiftable::wrap_Object(const PythonFieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeShiftable), &PY_TYPE_DEF(PythonFieldTimeShiftable), module, "PythonFieldTimeShiftable", 1);
      }

      void t_PythonFieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "class_", make_descriptor(PythonFieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "wrapfn_", make_descriptor(t_PythonFieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy1 },
          { "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy_KK2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeShiftable::wrap_Object(PythonFieldTimeShiftable(((t_PythonFieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args)
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

      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy_KK", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy_KK", result);
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

      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data)
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
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PythonPhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PythonPhaseCenterVariationFunction::mids$ = NULL;
        bool PythonPhaseCenterVariationFunction::live$ = false;

        jclass PythonPhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPhaseCenterVariationFunction::PythonPhaseCenterVariationFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonPhaseCenterVariationFunction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonPhaseCenterVariationFunction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonPhaseCenterVariationFunction::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace antenna {
        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self);
        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args);
        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data);
        static PyGetSetDef t_PythonPhaseCenterVariationFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPhaseCenterVariationFunction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PythonPhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) t_PythonPhaseCenterVariationFunction_init_ },
          { Py_tp_getset, t_PythonPhaseCenterVariationFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPhaseCenterVariationFunction, t_PythonPhaseCenterVariationFunction, PythonPhaseCenterVariationFunction);

        void t_PythonPhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPhaseCenterVariationFunction), &PY_TYPE_DEF(PythonPhaseCenterVariationFunction), module, "PythonPhaseCenterVariationFunction", 1);
        }

        void t_PythonPhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "class_", make_descriptor(PythonPhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PythonPhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPhaseCenterVariationFunction::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonPhaseCenterVariationFunction_pythonDecRef0 },
            { "value", "(DD)D", (void *) t_PythonPhaseCenterVariationFunction_value1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PythonPhaseCenterVariationFunction::wrap_Object(PythonPhaseCenterVariationFunction(((t_PythonPhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds)
        {
          PythonPhaseCenterVariationFunction object((jobject) NULL);

          INT_CALL(object = PythonPhaseCenterVariationFunction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args)
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

        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "value", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("value", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$SmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$SmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$SmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$SmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_8d02ba458f22e508] = env->getMethodID(cls, "value", "(DDD)D");
            mids$[mid_checkInputEdges_ab23f4ae0fb33968] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_8d02ba458f22e508] = env->getMethodID(cls, "clampInput", "(DDD)D");
            mids$[mid_normalizeInput_8d02ba458f22e508] = env->getMethodID(cls, "normalizeInput", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8d02ba458f22e508], a0, a1, a2);
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
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$SmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$SmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$SmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$SmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::PolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$SmoothStepFunction, t_SmoothStepFactory$SmoothStepFunction, SmoothStepFactory$SmoothStepFunction);

        void t_SmoothStepFactory$SmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$SmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction), module, "SmoothStepFactory$SmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$SmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$SmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$SmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$SmoothStepFunction::wrap_Object(SmoothStepFactory$SmoothStepFunction(((t_SmoothStepFactory$SmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$SmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *RadiationSensitive::class$ = NULL;
        jmethodID *RadiationSensitive::mids$ = NULL;
        bool RadiationSensitive::live$ = false;
        ::java::lang::String *RadiationSensitive::ABSORPTION_COEFFICIENT = NULL;
        ::java::lang::String *RadiationSensitive::GLOBAL_RADIATION_FACTOR = NULL;
        ::java::lang::String *RadiationSensitive::REFLECTION_COEFFICIENT = NULL;

        jclass RadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/RadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABSORPTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ABSORPTION_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_RADIATION_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_RADIATION_FACTOR", "Ljava/lang/String;"));
            REFLECTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "REFLECTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List RadiationSensitive::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_122b60d0431fddf5], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self);
        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args);
        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data);
        static PyGetSetDef t_RadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_RadiationSensitive, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_RadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_RadiationSensitive, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RadiationSensitive)[] = {
          { Py_tp_methods, t_RadiationSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RadiationSensitive, t_RadiationSensitive, RadiationSensitive);

        void t_RadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(RadiationSensitive), &PY_TYPE_DEF(RadiationSensitive), module, "RadiationSensitive", 0);
        }

        void t_RadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "class_", make_descriptor(RadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "wrapfn_", make_descriptor(t_RadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(RadiationSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "ABSORPTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::ABSORPTION_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "GLOBAL_RADIATION_FACTOR", make_descriptor(j2p(*RadiationSensitive::GLOBAL_RADIATION_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "REFLECTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::REFLECTION_COEFFICIENT)));
        }

        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_RadiationSensitive::wrap_Object(RadiationSensitive(((t_RadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GNSSAttitudeProvider::class$ = NULL;
        jmethodID *GNSSAttitudeProvider::mids$ = NULL;
        bool GNSSAttitudeProvider::live$ = false;

        jclass GNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_validityEnd_7a97f7e149e79afb] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_7a97f7e149e79afb] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_7a97f7e149e79afb]));
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
      namespace attitude {
        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self);
        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self);

        static PyMethodDef t_GNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_GNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_GNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GNSSAttitudeProvider, t_GNSSAttitudeProvider, GNSSAttitudeProvider);

        void t_GNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(GNSSAttitudeProvider), &PY_TYPE_DEF(GNSSAttitudeProvider), module, "GNSSAttitudeProvider", 0);
        }

        void t_GNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "class_", make_descriptor(GNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "wrapfn_", make_descriptor(t_GNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_GNSSAttitudeProvider::wrap_Object(GNSSAttitudeProvider(((t_GNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagatorBuilder::class$ = NULL;
          jmethodID *GNSSPropagatorBuilder::mids$ = NULL;
          bool GNSSPropagatorBuilder::live$ = false;

          jclass GNSSPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cc589ac293e044f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;)V");
              mids$[mid_init$_b911d08072198cf6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_887cdac6f079f08a] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_build_2d63e0224266d4a7] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
              mids$[mid_ecef_c41ad29c243e2ca5] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_eci_c41ad29c243e2ca5] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_mass_a35b0fd2d45b0aa1] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc589ac293e044f3, a0.this$)) {}

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b911d08072198cf6, a0.this$, a1.this$)) {}

          GNSSPropagatorBuilder GNSSPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_887cdac6f079f08a], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_build_2d63e0224266d4a7]));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_c41ad29c243e2ca5], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_c41ad29c243e2ca5], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::mass(jdouble a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_a35b0fd2d45b0aa1], a0));
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
          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self);
          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GNSSPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagatorBuilder)[] = {
            { Py_tp_methods, t_GNSSPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GNSSPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GNSSPropagatorBuilder, t_GNSSPropagatorBuilder, GNSSPropagatorBuilder);

          void t_GNSSPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagatorBuilder), &PY_TYPE_DEF(GNSSPropagatorBuilder), module, "GNSSPropagatorBuilder", 0);
          }

          void t_GNSSPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "class_", make_descriptor(GNSSPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "wrapfn_", make_descriptor(t_GNSSPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagatorBuilder::wrap_Object(GNSSPropagatorBuilder(((t_GNSSPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0, a1));
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

          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSRangeModifier::RelativisticJ2ClockOneWayGNSSRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier, t_RelativisticJ2ClockOneWayGNSSRangeModifier, RelativisticJ2ClockOneWayGNSSRangeModifier);

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSRangeModifier), module, "RelativisticJ2ClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSRangeModifier(((t_RelativisticJ2ClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *Localizable::class$ = NULL;
      jmethodID *Localizable::mids$ = NULL;
      bool Localizable::live$ = false;

      jclass Localizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/Localizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Localizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String Localizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg);
      static PyObject *t_Localizable_getSourceString(t_Localizable *self);
      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data);
      static PyGetSetDef t_Localizable__fields_[] = {
        DECLARE_GET_FIELD(t_Localizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Localizable__methods_[] = {
        DECLARE_METHOD(t_Localizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_Localizable, getSourceString, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Localizable)[] = {
        { Py_tp_methods, t_Localizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Localizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Localizable)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Localizable, t_Localizable, Localizable);

      void t_Localizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Localizable), &PY_TYPE_DEF(Localizable), module, "Localizable", 0);
      }

      void t_Localizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "class_", make_descriptor(Localizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "wrapfn_", make_descriptor(t_Localizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Localizable::initializeClass, 1)))
          return NULL;
        return t_Localizable::wrap_Object(Localizable(((t_Localizable *) arg)->object.this$));
      }
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Localizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg)
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

      static PyObject *t_Localizable_getSourceString(t_Localizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_completed_89b302893bdbe1f1] = env->getMethodID(cls, "completed", "()Z");
                  mids$[mid_getDV_f88961cca75a2c0a] = env->getMethodID(cls, "getDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeltaMass_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochIgnition_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochIgnition", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setDV_89aad365fb0ed8da] = env->getMethodID(cls, "setDV", "(ID)V");
                  mids$[mid_setDeltaMass_10f281d777284cea] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_10f281d777284cea] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochIgnition_20affcbd28542333] = env->getMethodID(cls, "setEpochIgnition", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jboolean Maneuver::completed() const
              {
                return env->callBooleanMethod(this$, mids$[mid_completed_89b302893bdbe1f1]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getDV() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDV_f88961cca75a2c0a]));
              }

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_557b8123390d8d0c]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochIgnition() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochIgnition_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2]));
              }

              void Maneuver::setDV(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDV_89aad365fb0ed8da], a0, a1);
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_10f281d777284cea], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_10f281d777284cea], a0);
              }

              void Maneuver::setEpochIgnition(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochIgnition_20affcbd28542333], a0.this$);
              }

              void Maneuver::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void Maneuver::validate(jdouble a0) const
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
          namespace odm {
            namespace opm {
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_completed(t_Maneuver *self);
              static PyObject *t_Maneuver_getDV(t_Maneuver *self);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self);
              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GET_FIELD(t_Maneuver, dV),
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochIgnition),
                DECLARE_GETSET_FIELD(t_Maneuver, referenceFrame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, completed, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDV, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochIgnition, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDV, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochIgnition, METH_O),
                DECLARE_METHOD(t_Maneuver, setReferenceFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

              void t_Maneuver::install(PyObject *module)
              {
                installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
              }

              void t_Maneuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
                  return NULL;
                return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
              }
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Maneuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
              {
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_completed(t_Maneuver *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.completed());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Maneuver_getDV(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDV(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDV", args);
                return NULL;
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochIgnition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochIgnition", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochIgnition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochIgnition", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
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
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *ExtendedKalmanFilter::class$ = NULL;
          jmethodID *ExtendedKalmanFilter::mids$ = NULL;
          bool ExtendedKalmanFilter::live$ = false;

          jclass ExtendedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a9dff1e6aab00742] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/extended/NonLinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_8438f0b1b3460266] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ExtendedKalmanFilter::ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_a9dff1e6aab00742, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate ExtendedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_8438f0b1b3460266], a0.this$));
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
          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args);
          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args);
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data);
          static PyGetSetDef t_ExtendedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ExtendedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ExtendedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_ExtendedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ExtendedKalmanFilter)[] = {
            { Py_tp_methods, t_ExtendedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_ExtendedKalmanFilter_init_ },
            { Py_tp_getset, t_ExtendedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ExtendedKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(ExtendedKalmanFilter, t_ExtendedKalmanFilter, ExtendedKalmanFilter);
          PyObject *t_ExtendedKalmanFilter::wrap_Object(const ExtendedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ExtendedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ExtendedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ExtendedKalmanFilter), &PY_TYPE_DEF(ExtendedKalmanFilter), module, "ExtendedKalmanFilter", 0);
          }

          void t_ExtendedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "class_", make_descriptor(ExtendedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "wrapfn_", make_descriptor(t_ExtendedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ExtendedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_ExtendedKalmanFilter::wrap_Object(ExtendedKalmanFilter(((t_ExtendedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ExtendedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ExtendedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_NonLinearProcess::parameters_, &a2))
            {
              INT_CALL(object = ExtendedKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ExtendedKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateVectorFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateVectorFunctionDifferentiator::mids$ = NULL;
        bool UnivariateVectorFunctionDifferentiator::live$ = false;

        jclass UnivariateVectorFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_4cf1016d87eb18ab] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction UnivariateVectorFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_4cf1016d87eb18ab], a0.this$));
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
        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateVectorFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateVectorFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateVectorFunctionDifferentiator, t_UnivariateVectorFunctionDifferentiator, UnivariateVectorFunctionDifferentiator);

        void t_UnivariateVectorFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateVectorFunctionDifferentiator), &PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator), module, "UnivariateVectorFunctionDifferentiator", 0);
        }

        void t_UnivariateVectorFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "class_", make_descriptor(UnivariateVectorFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateVectorFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateVectorFunctionDifferentiator::wrap_Object(UnivariateVectorFunctionDifferentiator(((t_UnivariateVectorFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$HeaderLineWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter$HeaderLineWriter::mids$ = NULL;
        bool StreamingCpfWriter$HeaderLineWriter::live$ = false;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H1 = NULL;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H2 = NULL;

        jclass StreamingCpfWriter$HeaderLineWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getIdentifier", "()Ljava/lang/String;");
            mids$[mid_valueOf_1b3efe879e7f1d29] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_values_add654cae3f6f9cd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_write_900728190d5e0bec] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ilrs/CPFHeader;Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            H1 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H1", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            H2 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H2", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String StreamingCpfWriter$HeaderLineWriter::getIdentifier() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIdentifier_3cffd47377eca18a]));
        }

        StreamingCpfWriter$HeaderLineWriter StreamingCpfWriter$HeaderLineWriter::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StreamingCpfWriter$HeaderLineWriter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1b3efe879e7f1d29], a0.this$));
        }

        JArray< StreamingCpfWriter$HeaderLineWriter > StreamingCpfWriter$HeaderLineWriter::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StreamingCpfWriter$HeaderLineWriter >(env->callStaticObjectMethod(cls, mids$[mid_values_add654cae3f6f9cd]));
        }

        void StreamingCpfWriter$HeaderLineWriter::write(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::java::lang::Appendable & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_write_900728190d5e0bec], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyGetSetDef t_StreamingCpfWriter$HeaderLineWriter__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, identifier),
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingCpfWriter$HeaderLineWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, of_, METH_VARARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, getIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, values, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$HeaderLineWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$HeaderLineWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StreamingCpfWriter$HeaderLineWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$HeaderLineWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$HeaderLineWriter, t_StreamingCpfWriter$HeaderLineWriter, StreamingCpfWriter$HeaderLineWriter);
        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(const StreamingCpfWriter$HeaderLineWriter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StreamingCpfWriter$HeaderLineWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$HeaderLineWriter), &PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter), module, "StreamingCpfWriter$HeaderLineWriter", 0);
        }

        void t_StreamingCpfWriter$HeaderLineWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "class_", make_descriptor(StreamingCpfWriter$HeaderLineWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "boxfn_", make_descriptor(boxObject));
          env->getClass(StreamingCpfWriter$HeaderLineWriter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H1", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H2", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H2)));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(StreamingCpfWriter$HeaderLineWriter(((t_StreamingCpfWriter$HeaderLineWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIdentifier());
          return j2p(result);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StreamingCpfWriter$HeaderLineWriter result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::valueOf(a0));
            return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type)
        {
          JArray< StreamingCpfWriter$HeaderLineWriter > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::values());
          return JArray<jobject>(result.this$).wrap(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
          ::java::lang::Appendable a1((jobject) NULL);
          ::org::orekit::time::TimeScale a2((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIdentifier());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarS::class$ = NULL;
          jmethodID *FieldCopolarS::mids$ = NULL;
          bool FieldCopolarS::live$ = false;

          jclass FieldCopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_613c8f46c659f636] = env->getMethodID(cls, "cs", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ds_613c8f46c659f636] = env->getMethodID(cls, "ds", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ns_613c8f46c659f636] = env->getMethodID(cls, "ns", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::cs() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cs_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ds() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ds_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ns() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ns_613c8f46c659f636]));
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
          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args);
          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data);
          static PyGetSetDef t_FieldCopolarS__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarS, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarS__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarS)[] = {
            { Py_tp_methods, t_FieldCopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarS__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarS, t_FieldCopolarS, FieldCopolarS);
          PyObject *t_FieldCopolarS::wrap_Object(const FieldCopolarS& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarS::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarS), &PY_TYPE_DEF(FieldCopolarS), module, "FieldCopolarS", 0);
          }

          void t_FieldCopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "class_", make_descriptor(FieldCopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "wrapfn_", make_descriptor(t_FieldCopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarS::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarS::wrap_Object(FieldCopolarS(((t_FieldCopolarS *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cs());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ds());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ns());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data)
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
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonSphericalHarmonicsProvider::live$ = false;

          jclass PythonSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSphericalHarmonicsProvider::PythonSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self);
          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSphericalHarmonicsProvider, t_PythonSphericalHarmonicsProvider, PythonSphericalHarmonicsProvider);

          void t_PythonSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonSphericalHarmonicsProvider), module, "PythonSphericalHarmonicsProvider", 1);
          }

          void t_PythonSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "class_", make_descriptor(PythonSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonSphericalHarmonicsProvider_getTideSystem5 },
              { "pythonDecRef", "()V", (void *) t_PythonSphericalHarmonicsProvider_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonSphericalHarmonicsProvider::wrap_Object(PythonSphericalHarmonicsProvider(((t_PythonSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data)
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
#include "org/hipparchus/fraction/ProperFractionFormat.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperFractionFormat::class$ = NULL;
      jmethodID *ProperFractionFormat::mids$ = NULL;
      bool ProperFractionFormat::live$ = false;

      jclass ProperFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0c28e98ce8b6fdd7] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c8dfafe6701753f2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_001645e916bd626d] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_fb155efb3cdca00d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperFractionFormat::ProperFractionFormat() : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0c28e98ce8b6fdd7, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperFractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c8dfafe6701753f2], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_001645e916bd626d]));
      }

      ::org::hipparchus::fraction::Fraction ProperFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_fb155efb3cdca00d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self);
      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data);
      static PyGetSetDef t_ProperFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperFractionFormat)[] = {
        { Py_tp_methods, t_ProperFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperFractionFormat_init_ },
        { Py_tp_getset, t_ProperFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::FractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperFractionFormat, t_ProperFractionFormat, ProperFractionFormat);

      void t_ProperFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperFractionFormat), &PY_TYPE_DEF(ProperFractionFormat), module, "ProperFractionFormat", 0);
      }

      void t_ProperFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "class_", make_descriptor(ProperFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "wrapfn_", make_descriptor(t_ProperFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperFractionFormat::wrap_Object(ProperFractionFormat(((t_ProperFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonCycleSlipDetectors::class$ = NULL;
          jmethodID *PythonCycleSlipDetectors::mids$ = NULL;
          bool PythonCycleSlipDetectors::live$ = false;

          jclass PythonCycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_detect_77cbef3c12dc7892] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonCycleSlipDetectors::PythonCycleSlipDetectors() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonCycleSlipDetectors::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonCycleSlipDetectors::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonCycleSlipDetectors::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self);
          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args);
          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data);
          static PyGetSetDef t_PythonCycleSlipDetectors__fields_[] = {
            DECLARE_GET_FIELD(t_PythonCycleSlipDetectors, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonCycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_PythonCycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonCycleSlipDetectors)[] = {
            { Py_tp_methods, t_PythonCycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) t_PythonCycleSlipDetectors_init_ },
            { Py_tp_getset, t_PythonCycleSlipDetectors__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonCycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonCycleSlipDetectors, t_PythonCycleSlipDetectors, PythonCycleSlipDetectors);

          void t_PythonCycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonCycleSlipDetectors), &PY_TYPE_DEF(PythonCycleSlipDetectors), module, "PythonCycleSlipDetectors", 1);
          }

          void t_PythonCycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "class_", make_descriptor(PythonCycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "wrapfn_", make_descriptor(t_PythonCycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonCycleSlipDetectors::initializeClass);
            JNINativeMethod methods[] = {
              { "detect", "(Ljava/util/List;)Ljava/util/List;", (void *) t_PythonCycleSlipDetectors_detect0 },
              { "pythonDecRef", "()V", (void *) t_PythonCycleSlipDetectors_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonCycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_PythonCycleSlipDetectors::wrap_Object(PythonCycleSlipDetectors(((t_PythonCycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonCycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds)
          {
            PythonCycleSlipDetectors object((jobject) NULL);

            INT_CALL(object = PythonCycleSlipDetectors());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args)
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

          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
            PyObject *result = PyObject_CallMethod(obj, "detect", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("detect", result);
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

          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data)
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
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *SolarRadiationPressure::class$ = NULL;
        jmethodID *SolarRadiationPressure::mids$ = NULL;
        bool SolarRadiationPressure::live$ = false;

        jclass SolarRadiationPressure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/SolarRadiationPressure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d555dbd04a0c182e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_init$_3e673fd4ea8e449d] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLightingRatio_de1c2d709eb2829c] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLightingRatio_1bbf81d80c47ecdd] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolarRadiationPressure::SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_d555dbd04a0c182e, a0.this$, a1.this$, a2.this$)) {}

        SolarRadiationPressure::SolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_3e673fd4ea8e449d, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::CalculusFieldElement SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLightingRatio_de1c2d709eb2829c], a0.this$));
        }

        jdouble SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLightingRatio_1bbf81d80c47ecdd], a0.this$);
        }

        ::java::util::List SolarRadiationPressure::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
      namespace radiation {
        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data);
        static PyGetSetDef t_SolarRadiationPressure__fields_[] = {
          DECLARE_GET_FIELD(t_SolarRadiationPressure, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolarRadiationPressure__methods_[] = {
          DECLARE_METHOD(t_SolarRadiationPressure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getLightingRatio, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolarRadiationPressure)[] = {
          { Py_tp_methods, t_SolarRadiationPressure__methods_ },
          { Py_tp_init, (void *) t_SolarRadiationPressure_init_ },
          { Py_tp_getset, t_SolarRadiationPressure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolarRadiationPressure)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(SolarRadiationPressure, t_SolarRadiationPressure, SolarRadiationPressure);

        void t_SolarRadiationPressure::install(PyObject *module)
        {
          installType(&PY_TYPE(SolarRadiationPressure), &PY_TYPE_DEF(SolarRadiationPressure), module, "SolarRadiationPressure", 0);
        }

        void t_SolarRadiationPressure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "class_", make_descriptor(SolarRadiationPressure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "wrapfn_", make_descriptor(t_SolarRadiationPressure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolarRadiationPressure::initializeClass, 1)))
            return NULL;
          return t_SolarRadiationPressure::wrap_Object(SolarRadiationPressure(((t_SolarRadiationPressure *) arg)->object.this$));
        }
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolarRadiationPressure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "DDkkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2, a3, a4));
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

        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args)
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

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLightingRatio", args);
          return NULL;
        }

        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$QuadraticSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$QuadraticSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$QuadraticSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_8d02ba458f22e508] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8d02ba458f22e508], a0, a1, a2);
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
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction, t_SmoothStepFactory$QuadraticSmoothStepFunction, SmoothStepFactory$QuadraticSmoothStepFunction);

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction), module, "SmoothStepFactory$QuadraticSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_Object(SmoothStepFactory$QuadraticSmoothStepFunction(((t_SmoothStepFactory$QuadraticSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataWriter::class$ = NULL;
            jmethodID *CdmMetadataWriter::mids$ = NULL;
            bool CdmMetadataWriter::live$ = false;

            jclass CdmMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_188e3c0472d94c3c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadataWriter::CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_188e3c0472d94c3c, a0.this$)) {}
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
            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CdmMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataWriter)[] = {
              { Py_tp_methods, t_CdmMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CdmMetadataWriter, t_CdmMetadataWriter, CdmMetadataWriter);

            void t_CdmMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataWriter), &PY_TYPE_DEF(CdmMetadataWriter), module, "CdmMetadataWriter", 0);
            }

            void t_CdmMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "class_", make_descriptor(CdmMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "wrapfn_", make_descriptor(t_CdmMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataWriter::wrap_Object(CdmMetadataWriter(((t_CdmMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              CdmMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = CdmMetadataWriter(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader$LineParameters::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader$LineParameters::mids$ = NULL;
            bool AbstractSolarActivityDataLoader$LineParameters::live$ = false;

            jclass AbstractSolarActivityDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_2ef76e9305253641] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint AbstractSolarActivityDataLoader$LineParameters::compareTo(const AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_2ef76e9305253641], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jint AbstractSolarActivityDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, compareTo, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader$LineParameters, t_AbstractSolarActivityDataLoader$LineParameters, AbstractSolarActivityDataLoader$LineParameters);
            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(const AbstractSolarActivityDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), &PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters), module, "AbstractSolarActivityDataLoader$LineParameters", 0);
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "class_", make_descriptor(AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(AbstractSolarActivityDataLoader$LineParameters(((t_AbstractSolarActivityDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg)
            {
              AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArg(arg, "K", AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleArrayConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_3246bd31f432242d] = env->getMethodID(cls, "accept", "(I[D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleArrayConsumer::accept(jint a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_3246bd31f432242d], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleArrayConsumer, t_ParseToken$IndexedDoubleArrayConsumer, ParseToken$IndexedDoubleArrayConsumer);

            void t_ParseToken$IndexedDoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer), module, "ParseToken$IndexedDoubleArrayConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleArrayConsumer::wrap_Object(ParseToken$IndexedDoubleArrayConsumer(((t_ParseToken$IndexedDoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args)
            {
              jint a0;
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "I[D", &a0, &a1))
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTSolarRadiationPressure::class$ = NULL;
            jmethodID *DSSTSolarRadiationPressure::mids$ = NULL;
            bool DSSTSolarRadiationPressure::live$ = false;

            jclass DSSTSolarRadiationPressure::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_14a378572b7eca58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_84dee32dce7f9fa5] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_init$_9858768d9a9d55aa] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_6e5ce588856634e5] = env->getMethodID(cls, "<init>", "(DDDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_getEquatorialRadius_557b8123390d8d0c] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                mids$[mid_getSpacecraft_6d06026db8c77c35] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/radiation/RadiationSensitive;");
                mids$[mid_getLLimits_8babb6fb34d6b24d] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_233f032b171b49d2] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_14a378572b7eca58, a0.this$, a1.this$, a2.this$, a3)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, jdouble a4) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_84dee32dce7f9fa5, a0, a1, a2.this$, a3.this$, a4)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4, jdouble a5) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_9858768d9a9d55aa, a0, a1, a2.this$, a3.this$, a4.this$, a5)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::bodies::OneAxisEllipsoid & a5, jdouble a6) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_6e5ce588856634e5, a0, a1, a2, a3, a4.this$, a5.this$, a6)) {}

            jdouble DSSTSolarRadiationPressure::getEquatorialRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_557b8123390d8d0c]);
            }

            ::org::orekit::forces::radiation::RadiationSensitive DSSTSolarRadiationPressure::getSpacecraft() const
            {
              return ::org::orekit::forces::radiation::RadiationSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_6d06026db8c77c35]));
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
            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data);
            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data);
            static PyGetSetDef t_DSSTSolarRadiationPressure__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, equatorialRadius),
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTSolarRadiationPressure__methods_[] = {
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getEquatorialRadius, METH_NOARGS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTSolarRadiationPressure)[] = {
              { Py_tp_methods, t_DSSTSolarRadiationPressure__methods_ },
              { Py_tp_init, (void *) t_DSSTSolarRadiationPressure_init_ },
              { Py_tp_getset, t_DSSTSolarRadiationPressure__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTSolarRadiationPressure)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTSolarRadiationPressure, t_DSSTSolarRadiationPressure, DSSTSolarRadiationPressure);

            void t_DSSTSolarRadiationPressure::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTSolarRadiationPressure), &PY_TYPE_DEF(DSSTSolarRadiationPressure), module, "DSSTSolarRadiationPressure", 0);
            }

            void t_DSSTSolarRadiationPressure::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "class_", make_descriptor(DSSTSolarRadiationPressure::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "wrapfn_", make_descriptor(t_DSSTSolarRadiationPressure::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 1)))
                return NULL;
              return t_DSSTSolarRadiationPressure::wrap_Object(DSSTSolarRadiationPressure(((t_DSSTSolarRadiationPressure *) arg)->object.this$));
            }
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
                  jdouble a3;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "kkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  jdouble a4;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
                  jdouble a5;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a5((jobject) NULL);
                  jdouble a6;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDDDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self)
            {
              ::org::orekit::forces::radiation::RadiationSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data)
            {
              ::org::orekit::forces::radiation::RadiationSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor::class$ = NULL;
        jmethodID *BSPTreeVisitor::mids$ = NULL;
        bool BSPTreeVisitor::live$ = false;

        jclass BSPTreeVisitor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_visitInternalNode_5865d893f5a7dd72] = env->getMethodID(cls, "visitInternalNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitLeafNode_5865d893f5a7dd72] = env->getMethodID(cls, "visitLeafNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitOrder_30238d6180adf358] = env->getMethodID(cls, "visitOrder", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BSPTreeVisitor::visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitInternalNode_5865d893f5a7dd72], a0.this$);
        }

        void BSPTreeVisitor::visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitLeafNode_5865d893f5a7dd72], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order BSPTreeVisitor::visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order(env->callObjectMethod(this$, mids$[mid_visitOrder_30238d6180adf358], a0.this$));
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
      namespace partitioning {
        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor, visitInternalNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitLeafNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitOrder, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor)[] = {
          { Py_tp_methods, t_BSPTreeVisitor__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor, t_BSPTreeVisitor, BSPTreeVisitor);
        PyObject *t_BSPTreeVisitor::wrap_Object(const BSPTreeVisitor& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor), &PY_TYPE_DEF(BSPTreeVisitor), module, "BSPTreeVisitor", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "Order", make_descriptor(&PY_TYPE_DEF(BSPTreeVisitor$Order)));
        }

        void t_BSPTreeVisitor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "class_", make_descriptor(BSPTreeVisitor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "wrapfn_", make_descriptor(t_BSPTreeVisitor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor::wrap_Object(BSPTreeVisitor(((t_BSPTreeVisitor *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitInternalNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitInternalNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitLeafNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitLeafNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.visitOrder(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "visitOrder", arg);
          return NULL;
        }
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log10::class$ = NULL;
        jmethodID *Log10::mids$ = NULL;
        bool Log10::live$ = false;

        jclass Log10::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log10");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log10::Log10() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Log10::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log10::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args);

        static PyMethodDef t_Log10__methods_[] = {
          DECLARE_METHOD(t_Log10, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log10)[] = {
          { Py_tp_methods, t_Log10__methods_ },
          { Py_tp_init, (void *) t_Log10_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log10)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log10, t_Log10, Log10);

        void t_Log10::install(PyObject *module)
        {
          installType(&PY_TYPE(Log10), &PY_TYPE_DEF(Log10), module, "Log10", 0);
        }

        void t_Log10::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "class_", make_descriptor(Log10::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "wrapfn_", make_descriptor(t_Log10::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log10::initializeClass, 1)))
            return NULL;
          return t_Log10::wrap_Object(Log10(((t_Log10 *) arg)->object.this$));
        }
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log10::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds)
        {
          Log10 object((jobject) NULL);

          INT_CALL(object = Log10());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Euler::class$ = NULL;
              jmethodID *Euler::mids$ = NULL;
              bool Euler::live$ = false;

              jclass Euler::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Euler");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_cd8353278e08930b] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getRotationAngles_a53a7513ecedada2] = env->getMethodID(cls, "getRotationAngles", "()[D");
                  mids$[mid_getRotationRates_a53a7513ecedada2] = env->getMethodID(cls, "getRotationRates", "()[D");
                  mids$[mid_hasAngles_89b302893bdbe1f1] = env->getMethodID(cls, "hasAngles", "()Z");
                  mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_isSpacecraftBodyRate_89b302893bdbe1f1] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_89b302893bdbe1f1] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setEulerRotSeq_8b9f97be929dfd52] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInRotationAngles_ed2afdb8506b9742] = env->getMethodID(cls, "setInRotationAngles", "(Z)V");
                  mids$[mid_setIndexedRotationAngle_89aad365fb0ed8da] = env->getMethodID(cls, "setIndexedRotationAngle", "(ID)V");
                  mids$[mid_setIndexedRotationRate_89aad365fb0ed8da] = env->getMethodID(cls, "setIndexedRotationRate", "(ID)V");
                  mids$[mid_setLabeledRotationAngle_b8c9c03aaef77ecf] = env->getMethodID(cls, "setLabeledRotationAngle", "(CD)V");
                  mids$[mid_setLabeledRotationRate_b8c9c03aaef77ecf] = env->getMethodID(cls, "setLabeledRotationRate", "(CD)V");
                  mids$[mid_setRateFrameIsA_ed2afdb8506b9742] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Euler::Euler() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints Euler::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder Euler::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_cd8353278e08930b]));
              }

              JArray< jdouble > Euler::getRotationAngles() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationAngles_a53a7513ecedada2]));
              }

              JArray< jdouble > Euler::getRotationRates() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationRates_a53a7513ecedada2]));
              }

              jboolean Euler::hasAngles() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasAngles_89b302893bdbe1f1]);
              }

              jboolean Euler::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
              }

              jboolean Euler::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_89b302893bdbe1f1]);
              }

              jboolean Euler::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_89b302893bdbe1f1]);
              }

              void Euler::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_8b9f97be929dfd52], a0.this$);
              }

              void Euler::setInRotationAngles(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInRotationAngles_ed2afdb8506b9742], a0);
              }

              void Euler::setIndexedRotationAngle(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationAngle_89aad365fb0ed8da], a0, a1);
              }

              void Euler::setIndexedRotationRate(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationRate_89aad365fb0ed8da], a0, a1);
              }

              void Euler::setLabeledRotationAngle(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationAngle_b8c9c03aaef77ecf], a0, a1);
              }

              void Euler::setLabeledRotationRate(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationRate_b8c9c03aaef77ecf], a0, a1);
              }

              void Euler::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_ed2afdb8506b9742], a0);
              }

              void Euler::validate(jdouble a0) const
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
            namespace apm {
              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Euler_getEndpoints(t_Euler *self);
              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self);
              static PyObject *t_Euler_getRotationAngles(t_Euler *self);
              static PyObject *t_Euler_getRotationRates(t_Euler *self);
              static PyObject *t_Euler_hasAngles(t_Euler *self);
              static PyObject *t_Euler_hasRates(t_Euler *self);
              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self);
              static PyObject *t_Euler_rateFrameIsA(t_Euler *self);
              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data);
              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data);
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data);
              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data);
              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data);
              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data);
              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data);
              static PyGetSetDef t_Euler__fields_[] = {
                DECLARE_GET_FIELD(t_Euler, endpoints),
                DECLARE_GETSET_FIELD(t_Euler, eulerRotSeq),
                DECLARE_SET_FIELD(t_Euler, inRotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationRates),
                DECLARE_GET_FIELD(t_Euler, spacecraftBodyRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Euler__methods_[] = {
                DECLARE_METHOD(t_Euler, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_Euler, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_Euler, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_Euler, setInRotationAngles, METH_O),
                DECLARE_METHOD(t_Euler, setIndexedRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setIndexedRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_Euler, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Euler)[] = {
                { Py_tp_methods, t_Euler__methods_ },
                { Py_tp_init, (void *) t_Euler_init_ },
                { Py_tp_getset, t_Euler__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Euler)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Euler, t_Euler, Euler);

              void t_Euler::install(PyObject *module)
              {
                installType(&PY_TYPE(Euler), &PY_TYPE_DEF(Euler), module, "Euler", 0);
              }

              void t_Euler::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "class_", make_descriptor(Euler::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "wrapfn_", make_descriptor(t_Euler::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Euler::initializeClass, 1)))
                  return NULL;
                return t_Euler::wrap_Object(Euler(((t_Euler *) arg)->object.this$));
              }
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Euler::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds)
              {
                Euler object((jobject) NULL);

                INT_CALL(object = Euler());
                self->object = object;

                return 0;
              }

              static PyObject *t_Euler_getEndpoints(t_Euler *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_Euler_getRotationAngles(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationAngles());
                return result.wrap();
              }

              static PyObject *t_Euler_getRotationRates(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationRates());
                return result.wrap();
              }

              static PyObject *t_Euler_hasAngles(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasAngles());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_hasRates(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_rateFrameIsA(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setInRotationAngles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInRotationAngles", arg);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Euler), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setInRotationAngles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inRotationAngles", arg);
                return -1;
              }

              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationAngles());
                return value.wrap();
              }

              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationRates());
                return value.wrap();
              }

              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadata::mids$ = NULL;
              bool AttitudeStateHistoryMetadata::live$ = false;

              jclass AttitudeStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAttBasis_3cffd47377eca18a] = env->getMethodID(cls, "getAttBasis", "()Ljava/lang/String;");
                  mids$[mid_getAttBasisID_3cffd47377eca18a] = env->getMethodID(cls, "getAttBasisID", "()Ljava/lang/String;");
                  mids$[mid_getAttID_3cffd47377eca18a] = env->getMethodID(cls, "getAttID", "()Ljava/lang/String;");
                  mids$[mid_getAttPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getAttPrevID", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeType_5db4fed82a3253b8] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_cd8353278e08930b] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getNbStates_412668abc8d889e9] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getRateType_232ed199566358d9] = env->getMethodID(cls, "getRateType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_setAttBasis_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setAttBasisID_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttID_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeType_a785d3c67d2cf110] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setEulerRotSeq_8b9f97be929dfd52] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setNbStates_a3da1a935cb37f7b] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setRateType_2a73a81936748923] = env->getMethodID(cls, "setRateType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistoryMetadata::AttitudeStateHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasis_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasisID_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttID_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttPrevID_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeStateHistoryMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_5db4fed82a3253b8]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeStateHistoryMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeStateHistoryMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_cd8353278e08930b]));
              }

              jint AttitudeStateHistoryMetadata::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeStateHistoryMetadata::getRateType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateType_232ed199566358d9]));
              }

              void AttitudeStateHistoryMetadata::setAttBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasis_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasisID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_a785d3c67d2cf110], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_8b9f97be929dfd52], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_a3da1a935cb37f7b], a0);
              }

              void AttitudeStateHistoryMetadata::setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateType_2a73a81936748923], a0.this$);
              }

              void AttitudeStateHistoryMetadata::validate(jdouble a0) const
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
              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasis),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, rateType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getRateType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasis, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setRateType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadata, t_AttitudeStateHistoryMetadata, AttitudeStateHistoryMetadata);

              void t_AttitudeStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadata), &PY_TYPE_DEF(AttitudeStateHistoryMetadata), module, "AttitudeStateHistoryMetadata", 0);
              }

              void t_AttitudeStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "class_", make_descriptor(AttitudeStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadata::wrap_Object(AttitudeStateHistoryMetadata(((t_AttitudeStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeStateHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeStateHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasis());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasisID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttPrevID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateType", arg);
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
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonBoundedAttitudeProvider::class$ = NULL;
      jmethodID *PythonBoundedAttitudeProvider::mids$ = NULL;
      bool PythonBoundedAttitudeProvider::live$ = false;

      jclass PythonBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedAttitudeProvider::PythonBoundedAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonBoundedAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonBoundedAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonBoundedAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self);
      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedAttitudeProvider, t_PythonBoundedAttitudeProvider, PythonBoundedAttitudeProvider);

      void t_PythonBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedAttitudeProvider), &PY_TYPE_DEF(PythonBoundedAttitudeProvider), module, "PythonBoundedAttitudeProvider", 1);
      }

      void t_PythonBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "class_", make_descriptor(PythonBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_PythonBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude1 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMaxDate2 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMinDate3 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedAttitudeProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedAttitudeProvider::wrap_Object(PythonBoundedAttitudeProvider(((t_PythonBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonBoundedAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmWriter::class$ = NULL;
              jmethodID *OcmWriter::mids$ = NULL;
              bool OcmWriter::live$ = false;
              jdouble OcmWriter::CCSDS_OCM_VERS = (jdouble) 0;
              jint OcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6e7dc3e42ba012e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;)V");
                  mids$[mid_getEquatorialRadius_557b8123390d8d0c] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFlattening_557b8123390d8d0c] = env->getMethodID(cls, "getFlattening", "()D");
                  mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OCM_VERS = env->getStaticDoubleField(cls, "CCSDS_OCM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmWriter::OcmWriter(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6e7dc3e42ba012e7, a0.this$, a1, a2, a3.this$)) {}

              jdouble OcmWriter::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_557b8123390d8d0c]);
              }

              jdouble OcmWriter::getFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFlattening_557b8123390d8d0c]);
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
              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args);
              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self);
              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self);
              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data);
              static PyGetSetDef t_OcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OcmWriter, equatorialRadius),
                DECLARE_GET_FIELD(t_OcmWriter, flattening),
                DECLARE_GET_FIELD(t_OcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmWriter__methods_[] = {
                DECLARE_METHOD(t_OcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmWriter, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_OcmWriter, getFlattening, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmWriter)[] = {
                { Py_tp_methods, t_OcmWriter__methods_ },
                { Py_tp_init, (void *) t_OcmWriter_init_ },
                { Py_tp_getset, t_OcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OcmWriter, t_OcmWriter, OcmWriter);
              PyObject *t_OcmWriter::wrap_Object(const OcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmWriter), &PY_TYPE_DEF(OcmWriter), module, "OcmWriter", 0);
              }

              void t_OcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "class_", make_descriptor(OcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "wrapfn_", make_descriptor(t_OcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "CCSDS_OCM_VERS", make_descriptor(OcmWriter::CCSDS_OCM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "KVN_PADDING_WIDTH", make_descriptor(OcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmWriter::initializeClass, 1)))
                  return NULL;
                return t_OcmWriter::wrap_Object(OcmWriter(((t_OcmWriter *) arg)->object.this$));
              }
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                jdouble a2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                OcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KDDk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = OcmWriter(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(Ocm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlattening());
                return PyFloat_FromDouble((double) result);
              }
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFlattening());
                return PyFloat_FromDouble((double) value);
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
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeShiftable::class$ = NULL;
      jmethodID *FieldTimeShiftable::mids$ = NULL;
      bool FieldTimeShiftable::live$ = false;

      jclass FieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_726000f3d379befb] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeShiftable FieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_726000f3d379befb], a0.this$));
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
      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data);
      static PyGetSetDef t_FieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_FieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeShiftable, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeShiftable)[] = {
        { Py_tp_methods, t_FieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeShiftable),
        NULL
      };

      DEFINE_TYPE(FieldTimeShiftable, t_FieldTimeShiftable, FieldTimeShiftable);
      PyObject *t_FieldTimeShiftable::wrap_Object(const FieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeShiftable), &PY_TYPE_DEF(FieldTimeShiftable), module, "FieldTimeShiftable", 0);
      }

      void t_FieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "class_", make_descriptor(FieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "wrapfn_", make_descriptor(t_FieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_FieldTimeShiftable::wrap_Object(FieldTimeShiftable(((t_FieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTimeShiftable result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldTimeShiftable::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldTimeShiftable), (PyObject *) self, "shiftedBy", args, 2);
      }
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *SecantSolver::class$ = NULL;
        jmethodID *SecantSolver::mids$ = NULL;
        bool SecantSolver::live$ = false;

        jclass SecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/SecantSolver");

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

        SecantSolver::SecantSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SecantSolver::SecantSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        SecantSolver::SecantSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}
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
        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args);
        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data);
        static PyGetSetDef t_SecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SecantSolver__methods_[] = {
          DECLARE_METHOD(t_SecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SecantSolver)[] = {
          { Py_tp_methods, t_SecantSolver__methods_ },
          { Py_tp_init, (void *) t_SecantSolver_init_ },
          { Py_tp_getset, t_SecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(SecantSolver, t_SecantSolver, SecantSolver);
        PyObject *t_SecantSolver::wrap_Object(const SecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SecantSolver), &PY_TYPE_DEF(SecantSolver), module, "SecantSolver", 0);
        }

        void t_SecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "class_", make_descriptor(SecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "wrapfn_", make_descriptor(t_SecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SecantSolver::initializeClass, 1)))
            return NULL;
          return t_SecantSolver::wrap_Object(SecantSolver(((t_SecantSolver *) arg)->object.this$));
        }
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SecantSolver object((jobject) NULL);

              INT_CALL(object = SecantSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SecantSolver(a0));
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
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SecantSolver(a0, a1));
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
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
