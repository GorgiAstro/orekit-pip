#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldStaticTransform::class$ = NULL;
      jmethodID *FieldStaticTransform::mids$ = NULL;
      bool FieldStaticTransform::live$ = false;

      jclass FieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_d5bdc0c8fd5f2279] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_compositeRotation_d19ca496962484e6] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_compositeTranslation_08f366667a037862] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_d18340e2e2a53d56] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getInverse_dd9256b23dabf6f6] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_ac4489fdef1c3aef] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_5791f80683b5227e] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_of_15d6b0d0037f2e50] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_def843b29e44d147] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_cd804267ea95b63a] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_d6fd7734a1a942ba] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformLine_9988662f7c6f1b6c] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformLine_14caeddcfca8ca0c] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformPosition_8ff2edc0ecba4b6e] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_89718cf054290f11] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_8ff2edc0ecba4b6e] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_89718cf054290f11] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStaticTransform FieldStaticTransform::compose(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldStaticTransform & a1, const FieldStaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_d5bdc0c8fd5f2279], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::compositeRotation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_d19ca496962484e6], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::compositeTranslation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_08f366667a037862], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_d18340e2e2a53d56], a0.this$));
      }

      FieldStaticTransform FieldStaticTransform::getInverse() const
      {
        return FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_dd9256b23dabf6f6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_5791f80683b5227e]));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_15d6b0d0037f2e50], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_def843b29e44d147], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_cd804267ea95b63a], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_d6fd7734a1a942ba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_9988662f7c6f1b6c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_14caeddcfca8ca0c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_8ff2edc0ecba4b6e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_89718cf054290f11], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_8ff2edc0ecba4b6e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_89718cf054290f11], a0.this$));
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
      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data);
      static PyGetSetDef t_FieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStaticTransform, inverse),
        DECLARE_GET_FIELD(t_FieldStaticTransform, rotation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, translation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_FieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, transformLine, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStaticTransform)[] = {
        { Py_tp_methods, t_FieldStaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(FieldStaticTransform, t_FieldStaticTransform, FieldStaticTransform);
      PyObject *t_FieldStaticTransform::wrap_Object(const FieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStaticTransform), &PY_TYPE_DEF(FieldStaticTransform), module, "FieldStaticTransform", 0);
      }

      void t_FieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "class_", make_descriptor(FieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "wrapfn_", make_descriptor(t_FieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_FieldStaticTransform::wrap_Object(FieldStaticTransform(((t_FieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        FieldStaticTransform a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_, &a2, &p2, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compose(a0, a1, a2));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::getIdentity(a0));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self)
      {
        FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1, a2));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args)
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
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args)
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
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data)
      {
        FieldStaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonStaticTransform::class$ = NULL;
      jmethodID *PythonStaticTransform::mids$ = NULL;
      bool PythonStaticTransform::live$ = false;

      jclass PythonStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_85643104a022b593] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_24d2e432e376f9a0] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_17a952530a808943] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStaticTransform::PythonStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self);
      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data);
      static PyGetSetDef t_PythonStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStaticTransform, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStaticTransform)[] = {
        { Py_tp_methods, t_PythonStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonStaticTransform_init_ },
        { Py_tp_getset, t_PythonStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStaticTransform, t_PythonStaticTransform, PythonStaticTransform);

      void t_PythonStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStaticTransform), &PY_TYPE_DEF(PythonStaticTransform), module, "PythonStaticTransform", 1);
      }

      void t_PythonStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "class_", make_descriptor(PythonStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "wrapfn_", make_descriptor(t_PythonStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/StaticTransform;", (void *) t_PythonStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonStaticTransform::wrap_Object(PythonStaticTransform(((t_PythonStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::StaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::StaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data)
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
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
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

        ::java::lang::Class *DormandPrince54IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54IntegratorBuilder::mids$ = NULL;
        bool DormandPrince54IntegratorBuilder::live$ = false;

        jclass DormandPrince54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54IntegratorBuilder::DormandPrince54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince54IntegratorBuilder, t_DormandPrince54IntegratorBuilder, DormandPrince54IntegratorBuilder);

        void t_DormandPrince54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54IntegratorBuilder), &PY_TYPE_DEF(DormandPrince54IntegratorBuilder), module, "DormandPrince54IntegratorBuilder", 0);
        }

        void t_DormandPrince54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "class_", make_descriptor(DormandPrince54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54IntegratorBuilder::wrap_Object(DormandPrince54IntegratorBuilder(((t_DormandPrince54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinates::class$ = NULL;
      jmethodID *AbsolutePVCoordinates::mids$ = NULL;
      bool AbsolutePVCoordinates::live$ = false;

      jclass AbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff9fd98331524d51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_0eec03e55122ebdc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_70f5c52158b765f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_462992fac2efc3b7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_0893ff3cc15239ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_4f0bb5235d197aa3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_865781d7505fa0be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_2159411e0e643717] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_2afa6e9b5b8d0710] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_71eef8c16a449bcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_f8a365e30a3ddce1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_b070efa02e5e2595] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_0b61f5e41010d518] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_7044cb1966c8a481] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ff9fd98331524d51, a0.this$, a1.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const AbsolutePVCoordinates & a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0eec03e55122ebdc, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_70f5c52158b765f7, a0.this$, a1, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_462992fac2efc3b7, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0893ff3cc15239ef, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4f0bb5235d197aa3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_865781d7505fa0be, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2159411e0e643717, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2afa6e9b5b8d0710, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6, jdouble a7, const AbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_71eef8c16a449bcf, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::frames::Frame AbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6890805957bea2cd]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f8a365e30a3ddce1], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b070efa02e5e2595], a0.this$));
      }

      AbsolutePVCoordinates AbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_0b61f5e41010d518], a0));
      }

      ::org::orekit::utils::PVCoordinatesProvider AbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_7044cb1966c8a481]));
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
      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self);
      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data);
      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, pVCoordinates),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, toTaylorProvider, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinates, t_AbsolutePVCoordinates, AbsolutePVCoordinates);

      void t_AbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinates), &PY_TYPE_DEF(AbsolutePVCoordinates), module, "AbsolutePVCoordinates", 0);
      }

      void t_AbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "class_", make_descriptor(AbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "wrapfn_", make_descriptor(t_AbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinates::wrap_Object(AbsolutePVCoordinates(((t_AbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbsolutePVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            jdouble a7;
            AbsolutePVCoordinates a8((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsolutePVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toTaylorProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "toTaylorProvider", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Vector::class$ = NULL;
      jmethodID *Vector::mids$ = NULL;
      bool Vector::live$ = false;

      jclass Vector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Vector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_a4e9d5f25d954f5d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_add_d5eedea4a7ae5c23] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_blendArithmeticallyWith_dddc3b09788b0767] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/Vector;D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_distance1_05fa5f52db18503d] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceInf_05fa5f52db18503d] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceSq_05fa5f52db18503d] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_dotProduct_05fa5f52db18503d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInf", "()D");
          mids$[mid_getNormSq_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormSq", "()D");
          mids$[mid_getZero_d4a8fa15ffc65842] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_negate_d4a8fa15ffc65842] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_normalize_d4a8fa15ffc65842] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_scalarMultiply_8c76e50884ebab3b] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_a4e9d5f25d954f5d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_d5eedea4a7ae5c23] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Vector Vector::add(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_a4e9d5f25d954f5d], a0.this$));
      }

      Vector Vector::add(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_d5eedea4a7ae5c23], a0, a1.this$));
      }

      Vector Vector::blendArithmeticallyWith(const Vector & a0, jdouble a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_dddc3b09788b0767], a0.this$, a1));
      }

      jdouble Vector::distance1(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance1_05fa5f52db18503d], a0.this$);
      }

      jdouble Vector::distanceInf(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceInf_05fa5f52db18503d], a0.this$);
      }

      jdouble Vector::distanceSq(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceSq_05fa5f52db18503d], a0.this$);
      }

      jdouble Vector::dotProduct(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_05fa5f52db18503d], a0.this$);
      }

      jdouble Vector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
      }

      jdouble Vector::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
      }

      jdouble Vector::getNormInf() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInf_456d9a2f64d6b28d]);
      }

      jdouble Vector::getNormSq() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormSq_456d9a2f64d6b28d]);
      }

      Vector Vector::getZero() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_getZero_d4a8fa15ffc65842]));
      }

      jboolean Vector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      Vector Vector::negate() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_negate_d4a8fa15ffc65842]));
      }

      Vector Vector::normalize() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_normalize_d4a8fa15ffc65842]));
      }

      Vector Vector::scalarMultiply(jdouble a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8c76e50884ebab3b], a0));
      }

      Vector Vector::subtract(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_a4e9d5f25d954f5d], a0.this$));
      }

      Vector Vector::subtract(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_d5eedea4a7ae5c23], a0, a1.this$));
      }

      ::java::lang::String Vector::toString(const ::java::text::NumberFormat & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
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
      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_add(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_getNorm(t_Vector *self);
      static PyObject *t_Vector_getNorm1(t_Vector *self);
      static PyObject *t_Vector_getNormInf(t_Vector *self);
      static PyObject *t_Vector_getNormSq(t_Vector *self);
      static PyObject *t_Vector_getZero(t_Vector *self);
      static PyObject *t_Vector_isInfinite(t_Vector *self);
      static PyObject *t_Vector_negate(t_Vector *self);
      static PyObject *t_Vector_normalize(t_Vector *self);
      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data);
      static PyObject *t_Vector_get__zero(t_Vector *self, void *data);
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data);
      static PyGetSetDef t_Vector__fields_[] = {
        DECLARE_GET_FIELD(t_Vector, infinite),
        DECLARE_GET_FIELD(t_Vector, norm),
        DECLARE_GET_FIELD(t_Vector, norm1),
        DECLARE_GET_FIELD(t_Vector, normInf),
        DECLARE_GET_FIELD(t_Vector, normSq),
        DECLARE_GET_FIELD(t_Vector, zero),
        DECLARE_GET_FIELD(t_Vector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Vector__methods_[] = {
        DECLARE_METHOD(t_Vector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, of_, METH_VARARGS),
        DECLARE_METHOD(t_Vector, add, METH_VARARGS),
        DECLARE_METHOD(t_Vector, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_Vector, distance1, METH_O),
        DECLARE_METHOD(t_Vector, distanceInf, METH_O),
        DECLARE_METHOD(t_Vector, distanceSq, METH_O),
        DECLARE_METHOD(t_Vector, dotProduct, METH_O),
        DECLARE_METHOD(t_Vector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormInf, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormSq, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Vector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Vector, negate, METH_NOARGS),
        DECLARE_METHOD(t_Vector, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Vector, scalarMultiply, METH_O),
        DECLARE_METHOD(t_Vector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Vector, toString, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Vector)[] = {
        { Py_tp_methods, t_Vector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Vector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Vector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::geometry::Point),
        NULL
      };

      DEFINE_TYPE(Vector, t_Vector, Vector);
      PyObject *t_Vector::wrap_Object(const Vector& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Vector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Vector::install(PyObject *module)
      {
        installType(&PY_TYPE(Vector), &PY_TYPE_DEF(Vector), module, "Vector", 0);
      }

      void t_Vector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "class_", make_descriptor(Vector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "wrapfn_", make_descriptor(t_Vector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Vector::initializeClass, 1)))
          return NULL;
        return t_Vector::wrap_Object(Vector(((t_Vector *) arg)->object.this$));
      }
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Vector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Vector_add(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        Vector result((jobject) NULL);

        if (!parseArgs(args, "KD", Vector::initializeClass, &a0, &p0, t_Vector::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distance1(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance1", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceInf(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceSq(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
        return NULL;
      }

      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Vector_getNorm(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNorm1(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormInf(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInf());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormSq(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormSq());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getZero(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_isInfinite(t_Vector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Vector_negate(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_normalize(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg)
      {
        jdouble a0;
        Vector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg)
      {
        ::java::text::NumberFormat a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::text::NumberFormat::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toString", arg);
        return NULL;
      }
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Vector_get__norm(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInf());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormSq());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__zero(t_Vector *self, void *data)
      {
        Vector value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Vector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TimeSystemCorrection::class$ = NULL;
          jmethodID *TimeSystemCorrection::mids$ = NULL;
          bool TimeSystemCorrection::live$ = false;

          jclass TimeSystemCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TimeSystemCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f7ef28a3bc2d7df3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DD)V");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystemCorrectionA0_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeSystemCorrectionA0", "()D");
              mids$[mid_getTimeSystemCorrectionA1_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeSystemCorrectionA1", "()D");
              mids$[mid_getTimeSystemCorrectionType_0090f7797e403f43] = env->getMethodID(cls, "getTimeSystemCorrectionType", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSystemCorrection::TimeSystemCorrection(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7ef28a3bc2d7df3, a0.this$, a1.this$, a2, a3)) {}

          ::org::orekit::time::AbsoluteDate TimeSystemCorrection::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA0_456d9a2f64d6b28d]);
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA1_456d9a2f64d6b28d]);
          }

          ::java::lang::String TimeSystemCorrection::getTimeSystemCorrectionType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrectionType_0090f7797e403f43]));
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
          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data);
          static PyGetSetDef t_TimeSystemCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystemCorrection, referenceDate),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA0),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA1),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystemCorrection__methods_[] = {
            DECLARE_METHOD(t_TimeSystemCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA0, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA1, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystemCorrection)[] = {
            { Py_tp_methods, t_TimeSystemCorrection__methods_ },
            { Py_tp_init, (void *) t_TimeSystemCorrection_init_ },
            { Py_tp_getset, t_TimeSystemCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystemCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSystemCorrection, t_TimeSystemCorrection, TimeSystemCorrection);

          void t_TimeSystemCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystemCorrection), &PY_TYPE_DEF(TimeSystemCorrection), module, "TimeSystemCorrection", 0);
          }

          void t_TimeSystemCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "class_", make_descriptor(TimeSystemCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "wrapfn_", make_descriptor(t_TimeSystemCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystemCorrection::initializeClass, 1)))
              return NULL;
            return t_TimeSystemCorrection::wrap_Object(TimeSystemCorrection(((t_TimeSystemCorrection *) arg)->object.this$));
          }
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystemCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            TimeSystemCorrection object((jobject) NULL);

            if (!parseArgs(args, "skDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeSystemCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrectionType());
            return j2p(result);
          }

          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrectionType());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherIntegrator::class$ = NULL;
        jmethodID *LutherIntegrator::mids$ = NULL;
        bool LutherIntegrator::live$ = false;

        jclass LutherIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_a5966c0482b9b3b2] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegrator::LutherIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > LutherIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > LutherIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > LutherIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
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
        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data);
        static PyGetSetDef t_LutherIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherIntegrator, a),
          DECLARE_GET_FIELD(t_LutherIntegrator, b),
          DECLARE_GET_FIELD(t_LutherIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegrator)[] = {
          { Py_tp_methods, t_LutherIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherIntegrator_init_ },
          { Py_tp_getset, t_LutherIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherIntegrator, t_LutherIntegrator, LutherIntegrator);

        void t_LutherIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegrator), &PY_TYPE_DEF(LutherIntegrator), module, "LutherIntegrator", 0);
        }

        void t_LutherIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "class_", make_descriptor(LutherIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "wrapfn_", make_descriptor(t_LutherIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherIntegrator::wrap_Object(LutherIntegrator(((t_LutherIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
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
                  mids$[mid_build_678bb31515c82aba] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_720b26b998d380f3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_642c909e98fcb86c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_build_678bb31515c82aba]));
              }

              jboolean OcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean OcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean OcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_720b26b998d380f3]));
              }

              ::java::util::Map OcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
              }

              jboolean OcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean OcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean OcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_parse_642c909e98fcb86c], a0.this$));
              }

              jboolean OcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean OcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean OcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void OcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Header::class$ = NULL;
              jmethodID *SsrIm201Header::mids$ = NULL;
              bool SsrIm201Header::live$ = false;

              jclass SsrIm201Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfIonosphericLayers_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfIonosphericLayers", "()I");
                  mids$[mid_getVtecQualityIndicator_456d9a2f64d6b28d] = env->getMethodID(cls, "getVtecQualityIndicator", "()D");
                  mids$[mid_setNumberOfIonosphericLayers_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfIonosphericLayers", "(I)V");
                  mids$[mid_setVtecQualityIndicator_77e0f9a1f260e2e5] = env->getMethodID(cls, "setVtecQualityIndicator", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Header::SsrIm201Header() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIm201Header::getNumberOfIonosphericLayers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfIonosphericLayers_f2f64475e4580546]);
              }

              jdouble SsrIm201Header::getVtecQualityIndicator() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getVtecQualityIndicator_456d9a2f64d6b28d]);
              }

              void SsrIm201Header::setNumberOfIonosphericLayers(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfIonosphericLayers_0a2a1ac2721c0336], a0);
              }

              void SsrIm201Header::setVtecQualityIndicator(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setVtecQualityIndicator_77e0f9a1f260e2e5], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Header, numberOfIonosphericLayers),
                DECLARE_GETSET_FIELD(t_SsrIm201Header, vtecQualityIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Header__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, getNumberOfIonosphericLayers, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, getVtecQualityIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, setNumberOfIonosphericLayers, METH_O),
                DECLARE_METHOD(t_SsrIm201Header, setVtecQualityIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Header)[] = {
                { Py_tp_methods, t_SsrIm201Header__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Header_init_ },
                { Py_tp_getset, t_SsrIm201Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIm201Header, t_SsrIm201Header, SsrIm201Header);

              void t_SsrIm201Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Header), &PY_TYPE_DEF(SsrIm201Header), module, "SsrIm201Header", 0);
              }

              void t_SsrIm201Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "class_", make_descriptor(SsrIm201Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "wrapfn_", make_descriptor(t_SsrIm201Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Header::wrap_Object(SsrIm201Header(((t_SsrIm201Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Header object((jobject) NULL);

                INT_CALL(object = SsrIm201Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfIonosphericLayers(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfIonosphericLayers", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setVtecQualityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setVtecQualityIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfIonosphericLayers(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfIonosphericLayers", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setVtecQualityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "vtecQualityIndicator", arg);
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
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
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
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map EphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
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
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CircularOrbit::class$ = NULL;
      jmethodID *CircularOrbit::mids$ = NULL;
      bool CircularOrbit::live$ = false;

      jclass CircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c42dca2c1e36096d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_e115ec145d0ee229] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_4eabb869f3e95925] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_8a0c29e70f4666fb] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_c564d6ace53a5934] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_c564d6ace53a5934] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAlpha_9803e84c1105942b] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaDot_9803e84c1105942b] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaE_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaE", "()D");
          mids$[mid_getAlphaEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaEDot", "()D");
          mids$[mid_getAlphaM_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaM", "()D");
          mids$[mid_getAlphaMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaMDot", "()D");
          mids$[mid_getAlphaV_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaV", "()D");
          mids$[mid_getAlphaVDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlphaVDot", "()D");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCircularEx", "()D");
          mids$[mid_getCircularExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCircularExDot", "()D");
          mids$[mid_getCircularEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getCircularEy", "()D");
          mids$[mid_getCircularEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCircularEyDot", "()D");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_c564d6ace53a5934] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_d80e0a544ab2a464] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_shiftedBy_088b0329e0604a46] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_c564d6ace53a5934] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CircularOrbit::CircularOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_c42dca2c1e36096d, a0.this$, a1.this$, a2)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e115ec145d0ee229, a0.this$, a1.this$, a2.this$, a3)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_4eabb869f3e95925, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_8a0c29e70f4666fb, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void CircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_c8fa6ba58ef7126b], a0.this$, a1, a2.this$);
      }

      jdouble CircularOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_c564d6ace53a5934], a0, a1, a2);
      }

      jdouble CircularOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_c564d6ace53a5934], a0, a1, a2);
      }

      jdouble CircularOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlpha_9803e84c1105942b], a0.this$);
      }

      jdouble CircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaDot_9803e84c1105942b], a0.this$);
      }

      jdouble CircularOrbit::getAlphaE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaE_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlphaEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaEDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlphaM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaM_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlphaMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaMDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlphaV() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaV_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getAlphaVDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaVDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::PositionAngleType CircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      jdouble CircularOrbit::getCircularEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEx_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getCircularExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularExDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getCircularEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEy_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getCircularEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEyDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_456d9a2f64d6b28d]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::OrbitType CircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean CircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      jdouble CircularOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_c564d6ace53a5934], a0, a1, a2);
      }

      CircularOrbit CircularOrbit::removeRates() const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_d80e0a544ab2a464]));
      }

      CircularOrbit CircularOrbit::shiftedBy(jdouble a0) const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_088b0329e0604a46], a0));
      }

      ::java::lang::String CircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      jdouble CircularOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_c564d6ace53a5934], a0, a1, a2);
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
      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data);
      static PyGetSetDef t_CircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CircularOrbit, a),
        DECLARE_GET_FIELD(t_CircularOrbit, aDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_CircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_CircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, e),
        DECLARE_GET_FIELD(t_CircularOrbit, eDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hx),
        DECLARE_GET_FIELD(t_CircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hy),
        DECLARE_GET_FIELD(t_CircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, i),
        DECLARE_GET_FIELD(t_CircularOrbit, iDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lE),
        DECLARE_GET_FIELD(t_CircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lM),
        DECLARE_GET_FIELD(t_CircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lv),
        DECLARE_GET_FIELD(t_CircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_CircularOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CircularOrbit__methods_[] = {
        DECLARE_METHOD(t_CircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CircularOrbit)[] = {
        { Py_tp_methods, t_CircularOrbit__methods_ },
        { Py_tp_init, (void *) t_CircularOrbit_init_ },
        { Py_tp_getset, t_CircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CircularOrbit, t_CircularOrbit, CircularOrbit);

      void t_CircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CircularOrbit), &PY_TYPE_DEF(CircularOrbit), module, "CircularOrbit", 0);
      }

      void t_CircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "class_", make_descriptor(CircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "wrapfn_", make_descriptor(t_CircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CircularOrbit::initializeClass, 1)))
          return NULL;
        return t_CircularOrbit::wrap_Object(CircularOrbit(((t_CircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CircularOrbit(a0));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args)
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

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaV());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self)
      {
        CircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_CircularOrbit::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble a0;
        CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaV());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *OutlineExtractor::class$ = NULL;
          jmethodID *OutlineExtractor::mids$ = NULL;
          bool OutlineExtractor::live$ = false;

          jclass OutlineExtractor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/OutlineExtractor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bedd188d9f399c34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getOutline_991374efd77c756f] = env->getMethodID(cls, "getOutline", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;)[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlineExtractor::OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedd188d9f399c34, a0.this$, a1.this$)) {}

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > OutlineExtractor::getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet & a0) const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getOutline_991374efd77c756f], a0.this$));
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
        namespace threed {
          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg);

          static PyMethodDef t_OutlineExtractor__methods_[] = {
            DECLARE_METHOD(t_OutlineExtractor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, getOutline, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlineExtractor)[] = {
            { Py_tp_methods, t_OutlineExtractor__methods_ },
            { Py_tp_init, (void *) t_OutlineExtractor_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlineExtractor)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlineExtractor, t_OutlineExtractor, OutlineExtractor);

          void t_OutlineExtractor::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlineExtractor), &PY_TYPE_DEF(OutlineExtractor), module, "OutlineExtractor", 0);
          }

          void t_OutlineExtractor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "class_", make_descriptor(OutlineExtractor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "wrapfn_", make_descriptor(t_OutlineExtractor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlineExtractor::initializeClass, 1)))
              return NULL;
            return t_OutlineExtractor::wrap_Object(OutlineExtractor(((t_OutlineExtractor *) arg)->object.this$));
          }
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlineExtractor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OutlineExtractor object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OutlineExtractor(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::parameters_))
            {
              OBJ_CALL(result = self->object.getOutline(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "getOutline", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractFrames::class$ = NULL;
      jmethodID *PythonAbstractFrames::mids$ = NULL;
      bool PythonAbstractFrames::live$ = false;

      jclass PythonAbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2e8e53c66e9d36c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_7544a283da003d74] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractFrames::PythonAbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_2e8e53c66e9d36c4, a0.this$, a1.this$)) {}

      void PythonAbstractFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self);
      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data);
      static PyGetSetDef t_PythonAbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractFrames__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFrames)[] = {
        { Py_tp_methods, t_PythonAbstractFrames__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractFrames_init_ },
        { Py_tp_getset, t_PythonAbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(PythonAbstractFrames, t_PythonAbstractFrames, PythonAbstractFrames);

      void t_PythonAbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractFrames), &PY_TYPE_DEF(PythonAbstractFrames), module, "PythonAbstractFrames", 1);
      }

      void t_PythonAbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "class_", make_descriptor(PythonAbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "wrapfn_", make_descriptor(t_PythonAbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractFrames_getEOPHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractFrames_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractFrames::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractFrames::wrap_Object(PythonAbstractFrames(((t_PythonAbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        PythonAbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = PythonAbstractFrames(a0, a1));
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

      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data)
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
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *SmoothFieldOfView::class$ = NULL;
        jmethodID *SmoothFieldOfView::mids$ = NULL;
        bool SmoothFieldOfView::live$ = false;

        jclass SmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/SmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCenter_17a952530a808943] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFootprint_260aa711ad5a5b78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getX_17a952530a808943] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getY_17a952530a808943] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getZ_17a952530a808943] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_5f993a721a1d8c59] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getCenter() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_17a952530a808943]));
        }

        ::java::util::List SmoothFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_260aa711ad5a5b78], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getX() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getX_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getY() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getY_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getZ() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZ_17a952530a808943]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args);
        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data);
        static PyGetSetDef t_SmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothFieldOfView, center),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, x),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, y),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, z),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_SmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getX, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getY, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getZ, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothFieldOfView)[] = {
          { Py_tp_methods, t_SmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(SmoothFieldOfView, t_SmoothFieldOfView, SmoothFieldOfView);

        void t_SmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothFieldOfView), &PY_TYPE_DEF(SmoothFieldOfView), module, "SmoothFieldOfView", 0);
        }

        void t_SmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "class_", make_descriptor(SmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "wrapfn_", make_descriptor(t_SmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_SmoothFieldOfView::wrap_Object(SmoothFieldOfView(((t_SmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SmoothFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovariance::class$ = NULL;
              jmethodID *AttitudeCovariance::mids$ = NULL;
              bool AttitudeCovariance::live$ = false;

              jclass AttitudeCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b8baade554523355] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_6938007bdd8d6602] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/DiagonalMatrix;");
                  mids$[mid_getType_10ff8ccfa18eb164] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovariance::AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8baade554523355, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::time::AbsoluteDate AttitudeCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              ::org::hipparchus::linear::DiagonalMatrix AttitudeCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_6938007bdd8d6602]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getType_10ff8ccfa18eb164]));
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
              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data);
              static PyGetSetDef t_AttitudeCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovariance, date),
                DECLARE_GET_FIELD(t_AttitudeCovariance, matrix),
                DECLARE_GET_FIELD(t_AttitudeCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovariance__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovariance)[] = {
                { Py_tp_methods, t_AttitudeCovariance__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovariance_init_ },
                { Py_tp_getset, t_AttitudeCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovariance, t_AttitudeCovariance, AttitudeCovariance);

              void t_AttitudeCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovariance), &PY_TYPE_DEF(AttitudeCovariance), module, "AttitudeCovariance", 0);
              }

              void t_AttitudeCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "class_", make_descriptor(AttitudeCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "wrapfn_", make_descriptor(t_AttitudeCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovariance::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovariance::wrap_Object(AttitudeCovariance(((t_AttitudeCovariance *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< ::java::lang::String > a2((jobject) NULL);
                jint a3;
                AttitudeCovariance object((jobject) NULL);

                if (!parseArgs(args, "Kk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = AttitudeCovariance(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self)
              {
                ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data)
              {
                ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
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
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "java/io/BufferedReader.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileParser::mids$ = NULL;
        bool PythonAttitudeEphemerisFileParser::live$ = false;

        jclass PythonAttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_11e1f1b4855d92ec] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_parse_BS_d9aa408f4354d186] = env->getMethodID(cls, "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileParser::PythonAttitudeEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAttitudeEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAttitudeEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAttitudeEphemerisFileParser::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self);
        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileParser, t_PythonAttitudeEphemerisFileParser, PythonAttitudeEphemerisFileParser);

        void t_PythonAttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileParser), &PY_TYPE_DEF(PythonAttitudeEphemerisFileParser), module, "PythonAttitudeEphemerisFileParser", 1);
        }

        void t_PythonAttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "class_", make_descriptor(PythonAttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse0 },
            { "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse_BS1 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileParser_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileParser::wrap_Object(PythonAttitudeEphemerisFileParser(((t_PythonAttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::java::io::t_BufferedReader::wrap_Object(::java::io::BufferedReader(a0));
          PyObject *o1 = env->fromJString((jstring) a1, 0);
          PyObject *result = PyObject_CallMethod(obj, "parse_BS", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse_BS", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data)
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
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid::class$ = NULL;
        jmethodID *Sigmoid::mids$ = NULL;
        bool Sigmoid::live$ = false;

        jclass Sigmoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid::Sigmoid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        Sigmoid::Sigmoid(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble Sigmoid::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sigmoid::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args);

        static PyMethodDef t_Sigmoid__methods_[] = {
          DECLARE_METHOD(t_Sigmoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid)[] = {
          { Py_tp_methods, t_Sigmoid__methods_ },
          { Py_tp_init, (void *) t_Sigmoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid, t_Sigmoid, Sigmoid);

        void t_Sigmoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid), &PY_TYPE_DEF(Sigmoid), module, "Sigmoid", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "Parametric", make_descriptor(&PY_TYPE_DEF(Sigmoid$Parametric)));
        }

        void t_Sigmoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "class_", make_descriptor(Sigmoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "wrapfn_", make_descriptor(t_Sigmoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid::initializeClass, 1)))
            return NULL;
          return t_Sigmoid::wrap_Object(Sigmoid(((t_Sigmoid *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sigmoid object((jobject) NULL);

              INT_CALL(object = Sigmoid());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Sigmoid object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Sigmoid(a0, a1));
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

        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
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

          ::java::lang::Class *ShapiroOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSRangeModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSRangeModifier::live$ = false;

          jclass ShapiroOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSRangeModifier::ShapiroOneWayGNSSRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSRangeModifier, t_ShapiroOneWayGNSSRangeModifier, ShapiroOneWayGNSSRangeModifier);

          void t_ShapiroOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSRangeModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSRangeModifier), module, "ShapiroOneWayGNSSRangeModifier", 0);
          }

          void t_ShapiroOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "class_", make_descriptor(ShapiroOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSRangeModifier::wrap_Object(ShapiroOneWayGNSSRangeModifier(((t_ShapiroOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cbrt::class$ = NULL;
        jmethodID *Cbrt::mids$ = NULL;
        bool Cbrt::live$ = false;

        jclass Cbrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cbrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cbrt::Cbrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Cbrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cbrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args);

        static PyMethodDef t_Cbrt__methods_[] = {
          DECLARE_METHOD(t_Cbrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cbrt)[] = {
          { Py_tp_methods, t_Cbrt__methods_ },
          { Py_tp_init, (void *) t_Cbrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cbrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cbrt, t_Cbrt, Cbrt);

        void t_Cbrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Cbrt), &PY_TYPE_DEF(Cbrt), module, "Cbrt", 0);
        }

        void t_Cbrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "class_", make_descriptor(Cbrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "wrapfn_", make_descriptor(t_Cbrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cbrt::initializeClass, 1)))
            return NULL;
          return t_Cbrt::wrap_Object(Cbrt(((t_Cbrt *) arg)->object.this$));
        }
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cbrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds)
        {
          Cbrt object((jobject) NULL);

          INT_CALL(object = Cbrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args)
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
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessUnivariateStatistic::class$ = NULL;
        jmethodID *StorelessUnivariateStatistic::mids$ = NULL;
        bool StorelessUnivariateStatistic::live$ = false;

        jclass StorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_341cf16d0d9912f3] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_incrementAll_ebc26dcaf4761286] = env->getMethodID(cls, "incrementAll", "([D)V");
            mids$[mid_incrementAll_d3508f432c1d798d] = env->getMethodID(cls, "incrementAll", "([DII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessUnivariateStatistic::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
        }

        void StorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        StorelessUnivariateStatistic StorelessUnivariateStatistic::copy() const
        {
          return StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_341cf16d0d9912f3]));
        }

        jdouble StorelessUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
        }

        jlong StorelessUnivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble StorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
        }

        void StorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_ebc26dcaf4761286], a0.this$);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_d3508f432c1d798d], a0.this$, a1, a2);
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
        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data);
        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, accept, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, copy, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, incrementAll, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::UnivariateStatistic),
          NULL
        };

        DEFINE_TYPE(StorelessUnivariateStatistic, t_StorelessUnivariateStatistic, StorelessUnivariateStatistic);

        void t_StorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessUnivariateStatistic), &PY_TYPE_DEF(StorelessUnivariateStatistic), module, "StorelessUnivariateStatistic", 0);
        }

        void t_StorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "class_", make_descriptor(StorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_StorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessUnivariateStatistic::wrap_Object(StorelessUnivariateStatistic(((t_StorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          StorelessUnivariateStatistic result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_StorelessUnivariateStatistic::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args)
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

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.incrementAll(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.incrementAll(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "incrementAll", args);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateModifierUtil::class$ = NULL;
          jmethodID *RangeRateModifierUtil::mids$ = NULL;
          bool RangeRateModifierUtil::live$ = false;

          jclass RangeRateModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeRateModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeRateModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateModifierUtil)[] = {
            { Py_tp_methods, t_RangeRateModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeRateModifierUtil, t_RangeRateModifierUtil, RangeRateModifierUtil);

          void t_RangeRateModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateModifierUtil), &PY_TYPE_DEF(RangeRateModifierUtil), module, "RangeRateModifierUtil", 0);
          }

          void t_RangeRateModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "class_", make_descriptor(RangeRateModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "wrapfn_", make_descriptor(t_RangeRateModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeRateModifierUtil::wrap_Object(RangeRateModifierUtil(((t_RangeRateModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateModifierUtil::initializeClass, 0))
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1241::class$ = NULL;
              jmethodID *Rtcm1241::mids$ = NULL;
              bool Rtcm1241::live$ = false;

              jclass Rtcm1241::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3e6a4f6a0e2f98dc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1241::Rtcm1241(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_3e6a4f6a0e2f98dc, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args);
              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data);
              static PyGetSetDef t_Rtcm1241__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1241, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1241__methods_[] = {
                DECLARE_METHOD(t_Rtcm1241, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1241)[] = {
                { Py_tp_methods, t_Rtcm1241__methods_ },
                { Py_tp_init, (void *) t_Rtcm1241_init_ },
                { Py_tp_getset, t_Rtcm1241__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1241)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1241, t_Rtcm1241, Rtcm1241);
              PyObject *t_Rtcm1241::wrap_Object(const Rtcm1241& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1241::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1241::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1241), &PY_TYPE_DEF(Rtcm1241), module, "Rtcm1241", 0);
              }

              void t_Rtcm1241::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "class_", make_descriptor(Rtcm1241::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "wrapfn_", make_descriptor(t_Rtcm1241::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1241::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1241::wrap_Object(Rtcm1241(((t_Rtcm1241 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1241::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1241 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1241(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data)
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
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEState::class$ = NULL;
      jmethodID *ODEState::mids$ = NULL;
      bool ODEState::live$ = false;

      jclass ODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b67fd0977346c69b] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_3bb1f69ed3e6077d] = env->getMethodID(cls, "<init>", "(D[D[[D)V");
          mids$[mid_getCompleteState_7cdc325af0834901] = env->getMethodID(cls, "getCompleteState", "()[D");
          mids$[mid_getCompleteStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_7cdc325af0834901] = env->getMethodID(cls, "getPrimaryState", "()[D");
          mids$[mid_getPrimaryStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_eb9cceadce1b2217] = env->getMethodID(cls, "getSecondaryState", "(I)[D");
          mids$[mid_getSecondaryStateDimension_38565d58479aa24a] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_557d9547e284535f] = env->getMethodID(cls, "copy", "([[D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b67fd0977346c69b, a0, a1.this$)) {}

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3bb1f69ed3e6077d, a0, a1.this$, a2.this$)) {}

      JArray< jdouble > ODEState::getCompleteState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteState_7cdc325af0834901]));
      }

      jint ODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_f2f64475e4580546]);
      }

      jint ODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546]);
      }

      JArray< jdouble > ODEState::getPrimaryState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_7cdc325af0834901]));
      }

      jint ODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_f2f64475e4580546]);
      }

      JArray< jdouble > ODEState::getSecondaryState(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_eb9cceadce1b2217], a0));
      }

      jint ODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_38565d58479aa24a], a0);
      }

      jdouble ODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
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
      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEState_getCompleteState(t_ODEState *self);
      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getTime(t_ODEState *self);
      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data);
      static PyGetSetDef t_ODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ODEState, completeState),
        DECLARE_GET_FIELD(t_ODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ODEState, primaryState),
        DECLARE_GET_FIELD(t_ODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEState__methods_[] = {
        DECLARE_METHOD(t_ODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEState)[] = {
        { Py_tp_methods, t_ODEState__methods_ },
        { Py_tp_init, (void *) t_ODEState_init_ },
        { Py_tp_getset, t_ODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEState, t_ODEState, ODEState);

      void t_ODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEState), &PY_TYPE_DEF(ODEState), module, "ODEState", 0);
      }

      void t_ODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "class_", make_descriptor(ODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "wrapfn_", make_descriptor(t_ODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEState::initializeClass, 1)))
          return NULL;
        return t_ODEState::wrap_Object(ODEState(((t_ODEState *) arg)->object.this$));
      }
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = ODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D[[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEState(a0, a1, a2));
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

      static PyObject *t_ODEState_getCompleteState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getTime(t_ODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationParser::class$ = NULL;
          jmethodID *RinexObservationParser::mids$ = NULL;
          bool RinexObservationParser::live$ = false;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_2_NAMES = NULL;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_3_NAMES = NULL;

          jclass RinexObservationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_3478eebd4736dcb6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_11d321d50d95fcda] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/observation/RinexObservation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_RINEX_2_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_2_NAMES", "Ljava/lang/String;"));
              DEFAULT_RINEX_3_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_3_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationParser::RinexObservationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          RinexObservationParser::RinexObservationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3478eebd4736dcb6, a0.this$)) {}

          ::org::orekit::files::rinex::observation::RinexObservation RinexObservationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::observation::RinexObservation(env->callObjectMethod(this$, mids$[mid_parse_11d321d50d95fcda], a0.this$));
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
          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg);

          static PyMethodDef t_RinexObservationParser__methods_[] = {
            DECLARE_METHOD(t_RinexObservationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationParser)[] = {
            { Py_tp_methods, t_RinexObservationParser__methods_ },
            { Py_tp_init, (void *) t_RinexObservationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationParser, t_RinexObservationParser, RinexObservationParser);

          void t_RinexObservationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationParser), &PY_TYPE_DEF(RinexObservationParser), module, "RinexObservationParser", 0);
          }

          void t_RinexObservationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "class_", make_descriptor(RinexObservationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "wrapfn_", make_descriptor(t_RinexObservationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexObservationParser::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_2_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_2_NAMES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_3_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_3_NAMES)));
          }

          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationParser::initializeClass, 1)))
              return NULL;
            return t_RinexObservationParser::wrap_Object(RinexObservationParser(((t_RinexObservationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexObservationParser object((jobject) NULL);

                INT_CALL(object = RinexObservationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexObservationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexObservationParser(a0));
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

          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::RinexObservation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::observation::t_RinexObservation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamedMessage::class$ = NULL;
          jmethodID *StreamedMessage::mids$ = NULL;
          bool StreamedMessage::live$ = false;

          jclass StreamedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
              mids$[mid_getRate_f2f64475e4580546] = env->getMethodID(cls, "getRate", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String StreamedMessage::getId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
          }

          jint StreamedMessage::getRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getRate_f2f64475e4580546]);
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
          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data);
          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data);
          static PyGetSetDef t_StreamedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_StreamedMessage, id),
            DECLARE_GET_FIELD(t_StreamedMessage, rate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamedMessage__methods_[] = {
            DECLARE_METHOD(t_StreamedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, getId, METH_NOARGS),
            DECLARE_METHOD(t_StreamedMessage, getRate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamedMessage)[] = {
            { Py_tp_methods, t_StreamedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StreamedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StreamedMessage, t_StreamedMessage, StreamedMessage);

          void t_StreamedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamedMessage), &PY_TYPE_DEF(StreamedMessage), module, "StreamedMessage", 0);
          }

          void t_StreamedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "class_", make_descriptor(StreamedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "wrapfn_", make_descriptor(t_StreamedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamedMessage::initializeClass, 1)))
              return NULL;
            return t_StreamedMessage::wrap_Object(StreamedMessage(((t_StreamedMessage *) arg)->object.this$));
          }
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getId());
            return j2p(result);
          }

          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getId());
            return j2p(value);
          }

          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRate());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *Measurement::class$ = NULL;
        jmethodID *Measurement::mids$ = NULL;
        bool Measurement::live$ = false;

        jclass Measurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/Measurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_6d9adf1d5b463928] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix Measurement::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_7116bbecdd8ceb21]));
        }

        jdouble Measurement::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::linear::RealVector Measurement::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_6d9adf1d5b463928]));
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
        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_getCovariance(t_Measurement *self);
        static PyObject *t_Measurement_getTime(t_Measurement *self);
        static PyObject *t_Measurement_getValue(t_Measurement *self);
        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data);
        static PyGetSetDef t_Measurement__fields_[] = {
          DECLARE_GET_FIELD(t_Measurement, covariance),
          DECLARE_GET_FIELD(t_Measurement, time),
          DECLARE_GET_FIELD(t_Measurement, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Measurement__methods_[] = {
          DECLARE_METHOD(t_Measurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Measurement)[] = {
          { Py_tp_methods, t_Measurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Measurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Measurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Measurement, t_Measurement, Measurement);

        void t_Measurement::install(PyObject *module)
        {
          installType(&PY_TYPE(Measurement), &PY_TYPE_DEF(Measurement), module, "Measurement", 0);
        }

        void t_Measurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "class_", make_descriptor(Measurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "wrapfn_", make_descriptor(t_Measurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Measurement::initializeClass, 1)))
            return NULL;
          return t_Measurement::wrap_Object(Measurement(((t_Measurement *) arg)->object.this$));
        }
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Measurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Measurement_getCovariance(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Measurement_getTime(t_Measurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Measurement_getValue(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_928a9f4df476de65] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getDerivativesDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getDerivativesDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getParameterDerivatives_6363ab2c73fe360a] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;)[D");
            mids$[mid_getParameterDerivatives_401862141dab4c49] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_getStateDerivatives_01d6404243df74a0] = env->getMethodID(cls, "getStateDerivatives", "(I)[[D");
            mids$[mid_getStateSize_f2f64475e4580546] = env->getMethodID(cls, "getStateSize", "()I");
            mids$[mid_setParameterDerivatives_24fd0e1bfa4da802] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/utils/TimeSpanMap;)V");
            mids$[mid_setParameterDerivatives_0748e18bcfe2efe9] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_setStateDerivatives_d2ec2a370d571745] = env->getMethodID(cls, "setStateDerivatives", "(I[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurement::EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->newObject(initializeClass, &mids$, mid_init$_928a9f4df476de65, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        ::java::util::stream::Stream EstimatedMeasurement::getDerivativesDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getDerivativesDrivers_a68a17dd093f796d]));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_6363ab2c73fe360a], a0.this$));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_401862141dab4c49], a0.this$, a1.this$));
        }

        JArray< JArray< jdouble > > EstimatedMeasurement::getStateDerivatives(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getStateDerivatives_01d6404243df74a0], a0));
        }

        jint EstimatedMeasurement::getStateSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getStateSize_f2f64475e4580546]);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::utils::TimeSpanMap & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_24fd0e1bfa4da802], a0.this$, a1.this$);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_0748e18bcfe2efe9], a0.this$, a1.this$, a2.this$);
        }

        void EstimatedMeasurement::setStateDerivatives(jint a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setStateDerivatives_d2ec2a370d571745], a0, a1.this$);
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
#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *BinomialProportion::class$ = NULL;
        jmethodID *BinomialProportion::mids$ = NULL;
        bool BinomialProportion::live$ = false;

        jclass BinomialProportion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/BinomialProportion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAgrestiCoullInterval_168111ceff0212ba] = env->getStaticMethodID(cls, "getAgrestiCoullInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getClopperPearsonInterval_168111ceff0212ba] = env->getStaticMethodID(cls, "getClopperPearsonInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getNormalApproximationInterval_168111ceff0212ba] = env->getStaticMethodID(cls, "getNormalApproximationInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getWilsonScoreInterval_168111ceff0212ba] = env->getStaticMethodID(cls, "getWilsonScoreInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getAgrestiCoullInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getAgrestiCoullInterval_168111ceff0212ba], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getClopperPearsonInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getClopperPearsonInterval_168111ceff0212ba], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getNormalApproximationInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getNormalApproximationInterval_168111ceff0212ba], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getWilsonScoreInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getWilsonScoreInterval_168111ceff0212ba], a0, a1, a2));
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
      namespace interval {
        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_BinomialProportion__methods_[] = {
          DECLARE_METHOD(t_BinomialProportion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getAgrestiCoullInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getClopperPearsonInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getNormalApproximationInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getWilsonScoreInterval, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialProportion)[] = {
          { Py_tp_methods, t_BinomialProportion__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialProportion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialProportion, t_BinomialProportion, BinomialProportion);

        void t_BinomialProportion::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialProportion), &PY_TYPE_DEF(BinomialProportion), module, "BinomialProportion", 0);
        }

        void t_BinomialProportion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "class_", make_descriptor(BinomialProportion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "wrapfn_", make_descriptor(t_BinomialProportion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialProportion::initializeClass, 1)))
            return NULL;
          return t_BinomialProportion::wrap_Object(BinomialProportion(((t_BinomialProportion *) arg)->object.this$));
        }
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialProportion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getAgrestiCoullInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getAgrestiCoullInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getClopperPearsonInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getClopperPearsonInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getNormalApproximationInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getNormalApproximationInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getWilsonScoreInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWilsonScoreInterval", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderKey::class$ = NULL;
          jmethodID *HeaderKey::mids$ = NULL;
          bool HeaderKey::live$ = false;
          HeaderKey *HeaderKey::CLASSIFICATION = NULL;
          HeaderKey *HeaderKey::COMMENT = NULL;
          HeaderKey *HeaderKey::CREATION_DATE = NULL;
          HeaderKey *HeaderKey::MESSAGE_ID = NULL;
          HeaderKey *HeaderKey::ORIGINATOR = NULL;

          jclass HeaderKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_a6e5a630e9284487] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Header;)Z");
              mids$[mid_valueOf_b2c2e7bd3b481d6c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/HeaderKey;");
              mids$[mid_values_c58810ba80b8b6ce] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/HeaderKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLASSIFICATION = new HeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              COMMENT = new HeaderKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              CREATION_DATE = new HeaderKey(env->getStaticObjectField(cls, "CREATION_DATE", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              MESSAGE_ID = new HeaderKey(env->getStaticObjectField(cls, "MESSAGE_ID", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              ORIGINATOR = new HeaderKey(env->getStaticObjectField(cls, "ORIGINATOR", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean HeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Header & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_a6e5a630e9284487], a0.this$, a1.this$, a2.this$);
          }

          HeaderKey HeaderKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return HeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b2c2e7bd3b481d6c], a0.this$));
          }

          JArray< HeaderKey > HeaderKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< HeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c58810ba80b8b6ce]));
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
          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_HeaderKey_values(PyTypeObject *type);
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data);
          static PyGetSetDef t_HeaderKey__fields_[] = {
            DECLARE_GET_FIELD(t_HeaderKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HeaderKey__methods_[] = {
            DECLARE_METHOD(t_HeaderKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, process, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderKey)[] = {
            { Py_tp_methods, t_HeaderKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HeaderKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(HeaderKey, t_HeaderKey, HeaderKey);
          PyObject *t_HeaderKey::wrap_Object(const HeaderKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_HeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_HeaderKey::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderKey), &PY_TYPE_DEF(HeaderKey), module, "HeaderKey", 0);
          }

          void t_HeaderKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "class_", make_descriptor(HeaderKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "wrapfn_", make_descriptor(t_HeaderKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(HeaderKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CLASSIFICATION", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CLASSIFICATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "COMMENT", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CREATION_DATE", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CREATION_DATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "MESSAGE_ID", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::MESSAGE_ID)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "ORIGINATOR", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::ORIGINATOR)));
          }

          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderKey::initializeClass, 1)))
              return NULL;
            return t_HeaderKey::wrap_Object(HeaderKey(((t_HeaderKey *) arg)->object.this$));
          }
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Header a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            HeaderKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::valueOf(a0));
              return t_HeaderKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_HeaderKey_values(PyTypeObject *type)
          {
            JArray< HeaderKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::values());
            return JArray<jobject>(result.this$).wrap(t_HeaderKey::wrap_jobject);
          }
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
