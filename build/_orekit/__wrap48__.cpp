#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryProjection::class$ = NULL;
        jmethodID *BoundaryProjection::mids$ = NULL;
        bool BoundaryProjection::live$ = false;

        jclass BoundaryProjection::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryProjection");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e309095d0009b9ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;Lorg/hipparchus/geometry/Point;D)V");
            mids$[mid_getOffset_557b8123390d8d0c] = env->getMethodID(cls, "getOffset", "()D");
            mids$[mid_getOriginal_abb5df84e8ab06b8] = env->getMethodID(cls, "getOriginal", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getProjected_abb5df84e8ab06b8] = env->getMethodID(cls, "getProjected", "()Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BoundaryProjection::BoundaryProjection(const ::org::hipparchus::geometry::Point & a0, const ::org::hipparchus::geometry::Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e309095d0009b9ae, a0.this$, a1.this$, a2)) {}

        jdouble BoundaryProjection::getOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getOriginal() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getOriginal_abb5df84e8ab06b8]));
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getProjected() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getProjected_abb5df84e8ab06b8]));
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
        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args);
        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data);
        static PyGetSetDef t_BoundaryProjection__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryProjection, offset),
          DECLARE_GET_FIELD(t_BoundaryProjection, original),
          DECLARE_GET_FIELD(t_BoundaryProjection, projected),
          DECLARE_GET_FIELD(t_BoundaryProjection, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryProjection__methods_[] = {
          DECLARE_METHOD(t_BoundaryProjection, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOffset, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getProjected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryProjection)[] = {
          { Py_tp_methods, t_BoundaryProjection__methods_ },
          { Py_tp_init, (void *) t_BoundaryProjection_init_ },
          { Py_tp_getset, t_BoundaryProjection__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryProjection)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryProjection, t_BoundaryProjection, BoundaryProjection);
        PyObject *t_BoundaryProjection::wrap_Object(const BoundaryProjection& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryProjection::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryProjection::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryProjection), &PY_TYPE_DEF(BoundaryProjection), module, "BoundaryProjection", 0);
        }

        void t_BoundaryProjection::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "class_", make_descriptor(BoundaryProjection::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "wrapfn_", make_descriptor(t_BoundaryProjection::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryProjection::initializeClass, 1)))
            return NULL;
          return t_BoundaryProjection::wrap_Object(BoundaryProjection(((t_BoundaryProjection *) arg)->object.this$));
        }
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryProjection::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          BoundaryProjection object((jobject) NULL);

          if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &p1, ::org::hipparchus::geometry::t_Point::parameters_, &a2))
          {
            INT_CALL(object = BoundaryProjection(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOffset());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Function::class$ = NULL;
      jmethodID *MathArrays$Function::mids$ = NULL;
      bool MathArrays$Function::live$ = false;

      jclass MathArrays$Function::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Function");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_86c4a0582e0747ce] = env->getMethodID(cls, "evaluate", "([D)D");
          mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_86c4a0582e0747ce], a0.this$);
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
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
      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args);

      static PyMethodDef t_MathArrays$Function__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Function, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Function)[] = {
        { Py_tp_methods, t_MathArrays$Function__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Function)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays$Function, t_MathArrays$Function, MathArrays$Function);

      void t_MathArrays$Function::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Function), &PY_TYPE_DEF(MathArrays$Function), module, "MathArrays$Function", 0);
      }

      void t_MathArrays$Function::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "class_", make_descriptor(MathArrays$Function::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "wrapfn_", make_descriptor(t_MathArrays$Function::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Function::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Function::wrap_Object(MathArrays$Function(((t_MathArrays$Function *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Function::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorMapping::class$ = NULL;
          jmethodID *SensorMapping::mids$ = NULL;
          bool SensorMapping::live$ = false;

          jclass SensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_2f09be1ae7695efd] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Object;)V");
              mids$[mid_getMapping_2dfcbd371d62f4e1] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_3cffd47377eca18a] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_3cffd47377eca18a] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorMapping::SensorMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          SensorMapping::SensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          void SensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::java::lang::Object & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_2f09be1ae7695efd], a0.this$, a1.this$);
          }

          ::java::util::Set SensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_2dfcbd371d62f4e1]));
          }

          ::java::lang::String SensorMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_3cffd47377eca18a]));
          }

          ::java::lang::String SensorMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_3cffd47377eca18a]));
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args);
          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args);
          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data);
          static PyGetSetDef t_SensorMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorMapping, sensorName),
            DECLARE_GET_FIELD(t_SensorMapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, of_, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorMapping)[] = {
            { Py_tp_methods, t_SensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorMapping_init_ },
            { Py_tp_getset, t_SensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorMapping, t_SensorMapping, SensorMapping);
          PyObject *t_SensorMapping::wrap_Object(const SensorMapping& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SensorMapping::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorMapping), &PY_TYPE_DEF(SensorMapping), module, "SensorMapping", 0);
          }

          void t_SensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "class_", make_descriptor(SensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "wrapfn_", make_descriptor(t_SensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorMapping::wrap_Object(SensorMapping(((t_SensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorMapping(a0, a1));
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

          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::java::lang::Object a1((jobject) NULL);

            if (!parseArgs(args, "kO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, self->parameters[0], &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *RinexUtils::class$ = NULL;
            jmethodID *RinexUtils::mids$ = NULL;
            bool RinexUtils::live$ = false;
            jint RinexUtils::LABEL_INDEX = (jint) 0;

            jclass RinexUtils::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/parsing/RinexUtils");

                mids$ = new jmethodID[max_mid];
                mids$[mid_convert2DigitsYear_0092017e99012694] = env->getStaticMethodID(cls, "convert2DigitsYear", "(I)I");
                mids$[mid_getLabel_60bb1b490b673cbf] = env->getStaticMethodID(cls, "getLabel", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_matchesLabel_64c9e5626fbef1d6] = env->getStaticMethodID(cls, "matchesLabel", "(Ljava/lang/String;Ljava/lang/String;)Z");
                mids$[mid_parseComment_e76e76329b477742] = env->getStaticMethodID(cls, "parseComment", "(ILjava/lang/String;Lorg/orekit/files/rinex/RinexFile;)V");
                mids$[mid_parseDouble_9b73674a2b24fce0] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;II)D");
                mids$[mid_parseInt_c5ebe9457f5c54f8] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;II)I");
                mids$[mid_parseProgramRunByDate_c3775fbe3016c9f8] = env->getStaticMethodID(cls, "parseProgramRunByDate", "(Ljava/lang/String;ILjava/lang/String;Lorg/orekit/time/TimeScales;Lorg/orekit/files/rinex/section/RinexBaseHeader;)V");
                mids$[mid_parseString_5ef851871fdd5040] = env->getStaticMethodID(cls, "parseString", "(Ljava/lang/String;II)Ljava/lang/String;");
                mids$[mid_parseVersionFileTypeSatelliteSystem_469c8644f4d64922] = env->getStaticMethodID(cls, "parseVersionFileTypeSatelliteSystem", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/rinex/section/RinexBaseHeader;[D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LABEL_INDEX = env->getStaticIntField(cls, "LABEL_INDEX");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint RinexUtils::convert2DigitsYear(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_convert2DigitsYear_0092017e99012694], a0);
            }

            ::java::lang::String RinexUtils::getLabel(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getLabel_60bb1b490b673cbf], a0.this$));
            }

            jboolean RinexUtils::matchesLabel(const ::java::lang::String & a0, const ::java::lang::String & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticBooleanMethod(cls, mids$[mid_matchesLabel_64c9e5626fbef1d6], a0.this$, a1.this$);
            }

            void RinexUtils::parseComment(jint a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::RinexFile & a2)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseComment_e76e76329b477742], a0, a1.this$, a2.this$);
            }

            jdouble RinexUtils::parseDouble(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_9b73674a2b24fce0], a0.this$, a1, a2);
            }

            jint RinexUtils::parseInt(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_parseInt_c5ebe9457f5c54f8], a0.this$, a1, a2);
            }

            void RinexUtils::parseProgramRunByDate(const ::java::lang::String & a0, jint a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::files::rinex::section::RinexBaseHeader & a4)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseProgramRunByDate_c3775fbe3016c9f8], a0.this$, a1, a2.this$, a3.this$, a4.this$);
            }

            ::java::lang::String RinexUtils::parseString(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_parseString_5ef851871fdd5040], a0.this$, a1, a2));
            }

            void RinexUtils::parseVersionFileTypeSatelliteSystem(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::section::RinexBaseHeader & a2, const JArray< jdouble > & a3)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseVersionFileTypeSatelliteSystem_469c8644f4d64922], a0.this$, a1.this$, a2.this$, a3.this$);
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
      namespace rinex {
        namespace utils {
          namespace parsing {
            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_RinexUtils__methods_[] = {
              DECLARE_METHOD(t_RinexUtils, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, convert2DigitsYear, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, getLabel, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, matchesLabel, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseComment, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseDouble, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseInt, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseProgramRunByDate, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseString, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseVersionFileTypeSatelliteSystem, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RinexUtils)[] = {
              { Py_tp_methods, t_RinexUtils__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RinexUtils)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RinexUtils, t_RinexUtils, RinexUtils);

            void t_RinexUtils::install(PyObject *module)
            {
              installType(&PY_TYPE(RinexUtils), &PY_TYPE_DEF(RinexUtils), module, "RinexUtils", 0);
            }

            void t_RinexUtils::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "class_", make_descriptor(RinexUtils::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "wrapfn_", make_descriptor(t_RinexUtils::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "boxfn_", make_descriptor(boxObject));
              env->getClass(RinexUtils::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "LABEL_INDEX", make_descriptor(RinexUtils::LABEL_INDEX));
            }

            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RinexUtils::initializeClass, 1)))
                return NULL;
              return t_RinexUtils::wrap_Object(RinexUtils(((t_RinexUtils *) arg)->object.this$));
            }
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RinexUtils::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              jint result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::convert2DigitsYear(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "convert2DigitsYear", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::getLabel(a0));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "getLabel", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::matchesLabel(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError(type, "matchesLabel", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::RinexFile a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "IsK", ::org::orekit::files::rinex::RinexFile::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::rinex::t_RinexFile::parameters_))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseComment(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseComment", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseDouble(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "parseDouble", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jint result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseInt(a0, a1, a2));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "parseInt", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::time::TimeScales a3((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a4((jobject) NULL);

              if (!parseArgs(args, "sIskk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseProgramRunByDate(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseProgramRunByDate", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseString(a0, a1, a2));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "parseString", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "ssk[D", ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseVersionFileTypeSatelliteSystem(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseVersionFileTypeSatelliteSystem", args);
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
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap::class$ = NULL;
      jmethodID *TimeSpanMap::mids$ = NULL;
      bool TimeSpanMap::live$ = false;

      jclass TimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_009757f2c0fd9090] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
          mids$[mid_addValidAfter_04cc60d9baa266b3] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBefore_04cc60d9baa266b3] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBetween_625d73dd0fdd755c] = env->getMethodID(cls, "addValidBetween", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_extractRange_cdee4c9b841a225d] = env->getMethodID(cls, "extractRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_get_d8f5ff8bb8636023] = env->getMethodID(cls, "get", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getFirstSpan_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getFirstTransition_b2de56d896f89501] = env->getMethodID(cls, "getFirstTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getLastSpan_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getLastSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getLastTransition_b2de56d896f89501] = env->getMethodID(cls, "getLastTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getSpan_320d9b9cba67eeb8] = env->getMethodID(cls, "getSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpansNumber_412668abc8d889e9] = env->getMethodID(cls, "getSpansNumber", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeSpanMap::TimeSpanMap(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_009757f2c0fd9090, a0.this$)) {}

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidAfter_04cc60d9baa266b3], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBefore_04cc60d9baa266b3], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBetween(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBetween_625d73dd0fdd755c], a0.this$, a1.this$, a2.this$));
      }

      TimeSpanMap TimeSpanMap::extractRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractRange_cdee4c9b841a225d], a0.this$, a1.this$));
      }

      ::java::lang::Object TimeSpanMap::get$(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_d8f5ff8bb8636023], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getFirstSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_2a24ed7b7f6cbca3]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getFirstTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getFirstTransition_b2de56d896f89501]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getLastSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getLastSpan_2a24ed7b7f6cbca3]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getLastTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getLastTransition_b2de56d896f89501]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpan_320d9b9cba67eeb8], a0.this$));
      }

      jint TimeSpanMap::getSpansNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getSpansNumber_412668abc8d889e9]);
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
      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args);
      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data);
      static PyGetSetDef t_TimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap, firstSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, firstTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, spansNumber),
        DECLARE_GET_FIELD(t_TimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBetween, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, extractRange, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getFirstSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getFirstTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getSpan, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getSpansNumber, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap)[] = {
        { Py_tp_methods, t_TimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_TimeSpanMap_init_ },
        { Py_tp_getset, t_TimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap, t_TimeSpanMap, TimeSpanMap);
      PyObject *t_TimeSpanMap::wrap_Object(const TimeSpanMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap), &PY_TYPE_DEF(TimeSpanMap), module, "TimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Span", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Span)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Transition)));
      }

      void t_TimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "class_", make_descriptor(TimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "wrapfn_", make_descriptor(t_TimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap::wrap_Object(TimeSpanMap(((t_TimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        TimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "o", &a0))
        {
          INT_CALL(object = TimeSpanMap(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidAfter(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBefore(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "Okk", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBetween(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBetween", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeSpanMap result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractRange(a0, a1));
          return t_TimeSpanMap::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "extractRange", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSpan(a0));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSpan", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSpansNumber());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSpansNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NodeDetector::class$ = NULL;
        jmethodID *NodeDetector::mids$ = NULL;
        bool NodeDetector::live$ = false;

        jclass NodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_1e7bd0ad52fbd83d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_34e9e7d7cb5fe7ac] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_d9545ab0373921cb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodeDetector::NodeDetector(const ::org::orekit::frames::Frame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

        NodeDetector::NodeDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1e7bd0ad52fbd83d, a0.this$, a1.this$)) {}

        NodeDetector::NodeDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_34e9e7d7cb5fe7ac, a0, a1.this$, a2.this$)) {}

        jdouble NodeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::frames::Frame NodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args);
        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args);
        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self);
        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data);
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data);
        static PyGetSetDef t_NodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NodeDetector, frame),
          DECLARE_GET_FIELD(t_NodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodeDetector__methods_[] = {
          DECLARE_METHOD(t_NodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodeDetector)[] = {
          { Py_tp_methods, t_NodeDetector__methods_ },
          { Py_tp_init, (void *) t_NodeDetector_init_ },
          { Py_tp_getset, t_NodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NodeDetector, t_NodeDetector, NodeDetector);
        PyObject *t_NodeDetector::wrap_Object(const NodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NodeDetector), &PY_TYPE_DEF(NodeDetector), module, "NodeDetector", 0);
        }

        void t_NodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "class_", make_descriptor(NodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "wrapfn_", make_descriptor(t_NodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodeDetector::initializeClass, 1)))
            return NULL;
          return t_NodeDetector::wrap_Object(NodeDetector(((t_NodeDetector *) arg)->object.this$));
        }
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                INT_CALL(object = NodeDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NodeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = NodeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
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

        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *PythonStationDisplacement::class$ = NULL;
          jmethodID *PythonStationDisplacement::mids$ = NULL;
          bool PythonStationDisplacement::live$ = false;

          jclass PythonStationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/PythonStationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_displacement_2092c3958d15642d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStationDisplacement::PythonStationDisplacement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonStationDisplacement::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonStationDisplacement::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonStationDisplacement::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self);
          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args);
          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data);
          static PyGetSetDef t_PythonStationDisplacement__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStationDisplacement, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStationDisplacement__methods_[] = {
            DECLARE_METHOD(t_PythonStationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStationDisplacement, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStationDisplacement)[] = {
            { Py_tp_methods, t_PythonStationDisplacement__methods_ },
            { Py_tp_init, (void *) t_PythonStationDisplacement_init_ },
            { Py_tp_getset, t_PythonStationDisplacement__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonStationDisplacement, t_PythonStationDisplacement, PythonStationDisplacement);

          void t_PythonStationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStationDisplacement), &PY_TYPE_DEF(PythonStationDisplacement), module, "PythonStationDisplacement", 1);
          }

          void t_PythonStationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "class_", make_descriptor(PythonStationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "wrapfn_", make_descriptor(t_PythonStationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStationDisplacement::initializeClass);
            JNINativeMethod methods[] = {
              { "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStationDisplacement_displacement0 },
              { "pythonDecRef", "()V", (void *) t_PythonStationDisplacement_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStationDisplacement::initializeClass, 1)))
              return NULL;
            return t_PythonStationDisplacement::wrap_Object(PythonStationDisplacement(((t_PythonStationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds)
          {
            PythonStationDisplacement object((jobject) NULL);

            INT_CALL(object = PythonStationDisplacement());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args)
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

          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
            PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
            PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
            PyObject *result = PyObject_CallMethod(obj, "displacement", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("displacement", result);
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

          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data)
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
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinates::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinates::live$ = false;

      jclass TimeStampedFieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e3c82b13e2cf201] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_354b52f41aeff9a4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_47577ce34ad0612e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_448839dff1f7f897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_7d35ada25901a0df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_init$_a5863878b8b8d3e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_97721bc21cc7efe3] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_revert_6ee4b6b8d0c547ac] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_4f847e3a19f195cb] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_4f016eb855e53d73] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_subtractOffset_97721bc21cc7efe3] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3e3c82b13e2cf201, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_354b52f41aeff9a4, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_47577ce34ad0612e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_448839dff1f7f897, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7d35ada25901a0df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a5863878b8b8d3e2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::addOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_97721bc21cc7efe3], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::revert() const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_6ee4b6b8d0c547ac]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_4f847e3a19f195cb], a0));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_4f016eb855e53d73], a0.this$));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_97721bc21cc7efe3], a0.this$));
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
      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self);
      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldAngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinates, t_TimeStampedFieldAngularCoordinates, TimeStampedFieldAngularCoordinates);
      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_Object(const TimeStampedFieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinates), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinates), module, "TimeStampedFieldAngularCoordinates", 0);
      }

      void t_TimeStampedFieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "class_", make_descriptor(TimeStampedFieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinates::wrap_Object(TimeStampedFieldAngularCoordinates(((t_TimeStampedFieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Transform::class$ = NULL;
      jmethodID *Transform::mids$ = NULL;
      bool Transform::live$ = false;
      Transform *Transform::IDENTITY = NULL;

      jclass Transform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Transform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_31365e78edba4ec1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_900f9429442ceeb9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_32faa46b708cf6da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_a1f5dc554250f77b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_230b401d18461d1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_8a280baa525bbe55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_5646b37963c337b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_d071eb3aa7ff7805] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_ab40439ce57e4b27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_06f788959c496621] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_freeze_1168c6fb2fb8754f] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngular_f385f7a363d6ca27] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_getCartesian_77bd7b3cdab2713e] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_1168c6fb2fb8754f] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getJacobian_b7366abe4d4cbf1f] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[D)V");
          mids$[mid_getRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_f88961cca75a2c0a] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTranslation_f88961cca75a2c0a] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_interpolate_ce26e8cca99f8687] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/frames/Transform;");
          mids$[mid_interpolate_bc60dc3fce0278ca] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/Transform;");
          mids$[mid_shiftedBy_b51fe6f3da102a87] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/Transform;");
          mids$[mid_staticShiftedBy_44b666ddb2dc3254] = env->getMethodID(cls, "staticShiftedBy", "(D)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toStaticTransform_f798b00aed778de3] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformPVCoordinates_f6b3fdf5ec92a07f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_fc4b100c90055253] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_transformPVCoordinates_5954fda0d828683a] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_c0d29187a28e22fc] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new Transform(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/frames/Transform;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31365e78edba4ec1, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_900f9429442ceeb9, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32faa46b708cf6da, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1f5dc554250f77b, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_230b401d18461d1c, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a280baa525bbe55, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const Transform & a1, const Transform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5646b37963c337b6, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d071eb3aa7ff7805, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab40439ce57e4b27, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06f788959c496621, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform Transform::freeze() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_freeze_1168c6fb2fb8754f]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_f88961cca75a2c0a]));
      }

      ::org::orekit::utils::AngularCoordinates Transform::getAngular() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_f385f7a363d6ca27]));
      }

      ::org::orekit::utils::PVCoordinates Transform::getCartesian() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_77bd7b3cdab2713e]));
      }

      ::org::orekit::time::AbsoluteDate Transform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      Transform Transform::getInverse() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_getInverse_1168c6fb2fb8754f]));
      }

      void Transform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_b7366abe4d4cbf1f], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Transform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e0dc1a6788897b9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_f88961cca75a2c0a]));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_interpolate_ce26e8cca99f8687], a0.this$, a1.this$));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return Transform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_bc60dc3fce0278ca], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Transform Transform::shiftedBy(jdouble a0) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_shiftedBy_b51fe6f3da102a87], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::staticShiftedBy(jdouble a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_44b666ddb2dc3254], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_f798b00aed778de3]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_f6b3fdf5ec92a07f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_fc4b100c90055253], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_5954fda0d828683a], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_c0d29187a28e22fc], a0.this$));
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
      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Transform_freeze(t_Transform *self);
      static PyObject *t_Transform_getAcceleration(t_Transform *self);
      static PyObject *t_Transform_getAngular(t_Transform *self);
      static PyObject *t_Transform_getCartesian(t_Transform *self);
      static PyObject *t_Transform_getDate(t_Transform *self);
      static PyObject *t_Transform_getInverse(t_Transform *self);
      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_getRotation(t_Transform *self);
      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self);
      static PyObject *t_Transform_getRotationRate(t_Transform *self);
      static PyObject *t_Transform_getTranslation(t_Transform *self);
      static PyObject *t_Transform_getVelocity(t_Transform *self);
      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_toStaticTransform(t_Transform *self);
      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__angular(t_Transform *self, void *data);
      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data);
      static PyObject *t_Transform_get__date(t_Transform *self, void *data);
      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data);
      static PyObject *t_Transform_get__translation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data);
      static PyGetSetDef t_Transform__fields_[] = {
        DECLARE_GET_FIELD(t_Transform, acceleration),
        DECLARE_GET_FIELD(t_Transform, angular),
        DECLARE_GET_FIELD(t_Transform, cartesian),
        DECLARE_GET_FIELD(t_Transform, date),
        DECLARE_GET_FIELD(t_Transform, inverse),
        DECLARE_GET_FIELD(t_Transform, rotation),
        DECLARE_GET_FIELD(t_Transform, rotationAcceleration),
        DECLARE_GET_FIELD(t_Transform, rotationRate),
        DECLARE_GET_FIELD(t_Transform, translation),
        DECLARE_GET_FIELD(t_Transform, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Transform__methods_[] = {
        DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_Transform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_Transform, interpolate, METH_VARARGS),
        DECLARE_METHOD(t_Transform, interpolate_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Transform, shiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_Transform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
        { Py_tp_methods, t_Transform__methods_ },
        { Py_tp_init, (void *) t_Transform_init_ },
        { Py_tp_getset, t_Transform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Transform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Transform, t_Transform, Transform);

      void t_Transform::install(PyObject *module)
      {
        installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
      }

      void t_Transform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        env->getClass(Transform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "IDENTITY", make_descriptor(t_Transform::wrap_Object(*Transform::IDENTITY)));
      }

      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
          return NULL;
        return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
      }
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Transform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            Transform a1((jobject) NULL);
            Transform a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, Transform::initializeClass, Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
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

      static PyObject *t_Transform_freeze(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getAngular(t_Transform *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getCartesian(t_Transform *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getDate(t_Transform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Transform_getInverse(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_Transform_getRotation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationRate(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getTranslation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getVelocity(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::stream::Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }

      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        ::java::util::Collection a3((jobject) NULL);
        PyTypeObject **p3;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::Transform::interpolate(a0, a1, a2, a3));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "interpolate_", args);
        return NULL;
      }

      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        Transform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::frames::StaticTransform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_toStaticTransform(t_Transform *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__angular(t_Transform *self, void *data)
      {
        ::org::orekit::utils::AngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__date(t_Transform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data)
      {
        Transform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Transform::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__translation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data)
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
#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {

          ::java::lang::Class *LegendreEllipticIntegral::class$ = NULL;
          jmethodID *LegendreEllipticIntegral::mids$ = NULL;
          bool LegendreEllipticIntegral::live$ = false;

          jclass LegendreEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_bigD_4e63ff3bda7c322e] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_285633f17a3543fe] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_7e960cd6eee376d8] = env->getStaticMethodID(cls, "bigD", "(D)D");
              mids$[mid_bigD_6672ad854985cb64] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigD_600605bb97069728] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_c07eaa4a298b48d0] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_2268d18be49a6087] = env->getStaticMethodID(cls, "bigD", "(DD)D");
              mids$[mid_bigD_d5f58731bcb8a011] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_4e63ff3bda7c322e] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_285633f17a3543fe] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_7e960cd6eee376d8] = env->getStaticMethodID(cls, "bigE", "(D)D");
              mids$[mid_bigE_6672ad854985cb64] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_600605bb97069728] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_c07eaa4a298b48d0] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_2268d18be49a6087] = env->getStaticMethodID(cls, "bigE", "(DD)D");
              mids$[mid_bigE_d5f58731bcb8a011] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_092ab04c4a8aed0e] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_79d4cab42d424679] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_600605bb97069728] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_c07eaa4a298b48d0] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_2268d18be49a6087] = env->getStaticMethodID(cls, "bigF", "(DD)D");
              mids$[mid_bigF_d5f58731bcb8a011] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigF_092ab04c4a8aed0e] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_79d4cab42d424679] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_4e63ff3bda7c322e] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigK_285633f17a3543fe] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_7e960cd6eee376d8] = env->getStaticMethodID(cls, "bigK", "(D)D");
              mids$[mid_bigK_6672ad854985cb64] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigKPrime_4e63ff3bda7c322e] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigKPrime_285633f17a3543fe] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigKPrime_7e960cd6eee376d8] = env->getStaticMethodID(cls, "bigKPrime", "(D)D");
              mids$[mid_bigKPrime_6672ad854985cb64] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_600605bb97069728] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_c07eaa4a298b48d0] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_2268d18be49a6087] = env->getStaticMethodID(cls, "bigPi", "(DD)D");
              mids$[mid_bigPi_d5f58731bcb8a011] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_6156fa5f0dbd9ed3] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_97a60df2e559f4a4] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_8d02ba458f22e508] = env->getStaticMethodID(cls, "bigPi", "(DDD)D");
              mids$[mid_bigPi_d181e731358aa045] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_989fa4e31612fca8] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_1514104f460aef00] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_nome_7e960cd6eee376d8] = env->getStaticMethodID(cls, "nome", "(D)D");
              mids$[mid_nome_6672ad854985cb64] = env->getStaticMethodID(cls, "nome", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_4e63ff3bda7c322e], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_285633f17a3543fe], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_600605bb97069728], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_c07eaa4a298b48d0], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_d5f58731bcb8a011], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_4e63ff3bda7c322e], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_285633f17a3543fe], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_600605bb97069728], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_c07eaa4a298b48d0], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_d5f58731bcb8a011], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_092ab04c4a8aed0e], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_79d4cab42d424679], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_600605bb97069728], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_c07eaa4a298b48d0], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigF(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigF_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigF_d5f58731bcb8a011], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_092ab04c4a8aed0e], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_79d4cab42d424679], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigK_4e63ff3bda7c322e], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigK_285633f17a3543fe], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigK(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigK_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigK(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigK_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_4e63ff3bda7c322e], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_285633f17a3543fe], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigKPrime(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigKPrime_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_600605bb97069728], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_c07eaa4a298b48d0], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_d5f58731bcb8a011], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_6156fa5f0dbd9ed3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_97a60df2e559f4a4], a0.this$, a1.this$, a2.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_8d02ba458f22e508], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_d181e731358aa045], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_989fa4e31612fca8], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_1514104f460aef00], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          jdouble LegendreEllipticIntegral::nome(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_nome_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::nome(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_nome_6672ad854985cb64], a0.this$));
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
        namespace legendre {
          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_LegendreEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_LegendreEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigKPrime, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigPi, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, nome, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreEllipticIntegral)[] = {
            { Py_tp_methods, t_LegendreEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LegendreEllipticIntegral, t_LegendreEllipticIntegral, LegendreEllipticIntegral);

          void t_LegendreEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreEllipticIntegral), &PY_TYPE_DEF(LegendreEllipticIntegral), module, "LegendreEllipticIntegral", 0);
          }

          void t_LegendreEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "class_", make_descriptor(LegendreEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "wrapfn_", make_descriptor(t_LegendreEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_LegendreEllipticIntegral::wrap_Object(LegendreEllipticIntegral(((t_LegendreEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigD", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigE", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigF", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigK", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigKPrime", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a3((jobject) NULL);
                jint a4;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a3((jobject) NULL);
                PyTypeObject **p3;
                jint a4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigPi", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "nome", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
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
            mids$[mid_init$_ef117304f0be0f1a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;Ljava/util/List;)V");
            mids$[mid_init$_5df7079863934303] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getBodyToInertial_df04e3927954349e] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialToBody_df04e3927954349e] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getOvershootTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getScToInertial_df04e3927954349e] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTStep_557b8123390d8d0c] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_isInRange_981023bfa4a8a093] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, const ::java::util::List & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef117304f0be0f1a, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7.this$)) {}

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, jint a7, const ::org::orekit::utils::CartesianDerivativesFilter & a8, const ::java::util::List & a9, jint a10, const ::org::orekit::utils::AngularDerivativesFilter & a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5df7079863934303, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7, a8.this$, a9.this$, a10, a11.this$)) {}

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_df04e3927954349e], a0.this$));
        }

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_df04e3927954349e], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        jdouble SpacecraftToObservedBody::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_557b8123390d8d0c]);
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_df04e3927954349e], a0.this$));
        }

        jdouble SpacecraftToObservedBody::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_557b8123390d8d0c]);
        }

        jboolean SpacecraftToObservedBody::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_981023bfa4a8a093], a0.this$);
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
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *GLSMultipleLinearRegression::class$ = NULL;
        jmethodID *GLSMultipleLinearRegression::mids$ = NULL;
        bool GLSMultipleLinearRegression::live$ = false;

        jclass GLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/GLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newSampleData_392243885d3ba752] = env->getMethodID(cls, "newSampleData", "([D[[D[[D)V");
            mids$[mid_calculateBeta_75d50d73180655b4] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_70a207fcbc031df2] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_557b8123390d8d0c] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_newCovarianceData_edb361bfdd1ad9ae] = env->getMethodID(cls, "newCovarianceData", "([[D)V");
            mids$[mid_getOmegaInverse_70a207fcbc031df2] = env->getMethodID(cls, "getOmegaInverse", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLSMultipleLinearRegression::GLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void GLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_392243885d3ba752], a0.this$, a1.this$, a2.this$);
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
      namespace regression {
        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_GLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_GLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_GLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_GLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(GLSMultipleLinearRegression, t_GLSMultipleLinearRegression, GLSMultipleLinearRegression);

        void t_GLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(GLSMultipleLinearRegression), &PY_TYPE_DEF(GLSMultipleLinearRegression), module, "GLSMultipleLinearRegression", 0);
        }

        void t_GLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "class_", make_descriptor(GLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_GLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_GLSMultipleLinearRegression::wrap_Object(GLSMultipleLinearRegression(((t_GLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          GLSMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = GLSMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "[D[[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(GLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *LocalizedODEFormats::class$ = NULL;
      jmethodID *LocalizedODEFormats::mids$ = NULL;
      bool LocalizedODEFormats::live$ = false;
      LocalizedODEFormats *LocalizedODEFormats::FIND_ROOT = NULL;
      LocalizedODEFormats *LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES = NULL;
      LocalizedODEFormats *LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY = NULL;
      LocalizedODEFormats *LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH = NULL;
      LocalizedODEFormats *LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNKNOWN_PARAMETER = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET = NULL;

      jclass LocalizedODEFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/LocalizedODEFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_d368850a65d634c2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/LocalizedODEFormats;");
          mids$[mid_values_ac05cca52586756a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/LocalizedODEFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FIND_ROOT = new LocalizedODEFormats(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          HOLE_BETWEEN_MODELS_TIME_RANGES = new LocalizedODEFormats(env->getStaticObjectField(cls, "HOLE_BETWEEN_MODELS_TIME_RANGES", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = new LocalizedODEFormats(env->getStaticObjectField(cls, "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MULTISTEP_STARTER_STOPPED_EARLY = new LocalizedODEFormats(env->getStaticObjectField(cls, "MULTISTEP_STARTER_STOPPED_EARLY", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          NAN_APPEARING_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "NAN_APPEARING_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          PROPAGATION_DIRECTION_MISMATCH = new LocalizedODEFormats(env->getStaticObjectField(cls, "PROPAGATION_DIRECTION_MISMATCH", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          TOO_SMALL_INTEGRATION_INTERVAL = new LocalizedODEFormats(env->getStaticObjectField(cls, "TOO_SMALL_INTEGRATION_INTERVAL", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNKNOWN_PARAMETER = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNKNOWN_PARAMETER", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNMATCHED_ODE_IN_EXPANDED_SET = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNMATCHED_ODE_IN_EXPANDED_SET", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedODEFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String LocalizedODEFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      LocalizedODEFormats LocalizedODEFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedODEFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d368850a65d634c2], a0.this$));
      }

      JArray< LocalizedODEFormats > LocalizedODEFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedODEFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_ac05cca52586756a]));
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
      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args);
      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self);
      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data);
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data);
      static PyGetSetDef t_LocalizedODEFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedODEFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedODEFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedODEFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedODEFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedODEFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedODEFormats)[] = {
        { Py_tp_methods, t_LocalizedODEFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedODEFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedODEFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedODEFormats, t_LocalizedODEFormats, LocalizedODEFormats);
      PyObject *t_LocalizedODEFormats::wrap_Object(const LocalizedODEFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedODEFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedODEFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedODEFormats), &PY_TYPE_DEF(LocalizedODEFormats), module, "LocalizedODEFormats", 0);
      }

      void t_LocalizedODEFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "class_", make_descriptor(LocalizedODEFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "wrapfn_", make_descriptor(t_LocalizedODEFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedODEFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "FIND_ROOT", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "HOLE_BETWEEN_MODELS_TIME_RANGES", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MULTISTEP_STARTER_STOPPED_EARLY", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "NAN_APPEARING_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "PROPAGATION_DIRECTION_MISMATCH", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "TOO_SMALL_INTEGRATION_INTERVAL", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNKNOWN_PARAMETER", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNKNOWN_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNMATCHED_ODE_IN_EXPANDED_SET", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET)));
      }

      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedODEFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedODEFormats::wrap_Object(LocalizedODEFormats(((t_LocalizedODEFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedODEFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedODEFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::valueOf(a0));
          return t_LocalizedODEFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedODEFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedODEFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data)
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
#include "org/orekit/gnss/metric/parser/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::MM = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NS = NULL;
          ::org::orekit::utils::units::Unit *Units::SEMI_CIRCLE = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              MM = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NS", "Lorg/orekit/utils/units/Unit;"));
              SEMI_CIRCLE = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SEMI_CIRCLE", "Lorg/orekit/utils/units/Unit;"));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "SEMI_CIRCLE", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::SEMI_CIRCLE)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
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
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractGradientConverter::mids$ = NULL;
        bool PythonAbstractGradientConverter::live$ = false;

        jclass PythonAbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_extend_beae67aa5f292d28] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_extend_ba3b4c80c8c4abc1] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_a82b19a24d5b726e] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFreeStateParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeStateParameters", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGradientConverter::PythonAbstractGradientConverter(jint a0) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        ::org::hipparchus::analysis::differentiation::Gradient PythonAbstractGradientConverter::extend(const ::org::hipparchus::analysis::differentiation::Gradient & a0, jint a1) const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_extend_beae67aa5f292d28], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_extend_ba3b4c80c8c4abc1], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_extend_a82b19a24d5b726e], a0.this$, a1));
        }

        jint PythonAbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_412668abc8d889e9]);
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
      namespace integration {
        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, extend, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, getFreeStateParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGradientConverter, t_PythonAbstractGradientConverter, PythonAbstractGradientConverter);

        void t_PythonAbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGradientConverter), &PY_TYPE_DEF(PythonAbstractGradientConverter), module, "PythonAbstractGradientConverter", 0);
        }

        void t_PythonAbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "class_", make_descriptor(PythonAbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGradientConverter::wrap_Object(PythonAbstractGradientConverter(((t_PythonAbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          PythonAbstractGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = PythonAbstractGradientConverter(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::differentiation::Gradient a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extend", args);
          return NULL;
        }

        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFreeStateParameters());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractGradientConverter), (PyObject *) self, "getFreeStateParameters", args, 2);
        }

        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e2dfaf38ed50d1d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_doEvent_fb65fa9c10878675] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/events/EventState$EventOccurrence;");
            mids$[mid_evaluateStep_fceb501d76c6c874] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_7a97f7e149e79afb] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_0701b00b25822fff] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_reinitializeBegin_729a66b1e94503de] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_b6dd29b1bf01f21f] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventState::EventState(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e2dfaf38ed50d1d, a0.this$)) {}

        ::org::orekit::propagation::events::EventState$EventOccurrence EventState::doEvent(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::EventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_fb65fa9c10878675], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_fceb501d76c6c874], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate EventState::getEventDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_7a97f7e149e79afb]));
        }

        ::org::orekit::propagation::events::EventDetector EventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_0701b00b25822fff]));
        }

        void EventState::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        void EventState::reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_729a66b1e94503de], a0.this$);
        }

        jboolean EventState::tryAdvance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_b6dd29b1bf01f21f], a0.this$, a1.this$);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args);
        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventDate(t_EventState *self);
        static PyObject *t_EventState_getEventDetector(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data);
        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data);
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventDate),
          DECLARE_GET_FIELD(t_EventState, eventDetector),
          DECLARE_GET_FIELD(t_EventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_EventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          DECLARE_METHOD(t_EventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_EventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) t_EventState_init_ },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);
        PyObject *t_EventState::wrap_Object(const EventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(EventState$EventOccurrence)));
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          EventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = EventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_EventState$EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventDate(t_EventState *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventState_getEventDetector(t_EventState *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexComment::class$ = NULL;
          jmethodID *RinexComment::mids$ = NULL;
          bool RinexComment::live$ = false;

          jclass RinexComment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexComment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_da9d52f3cfda13c8] = env->getMethodID(cls, "<init>", "(ILjava/lang/String;)V");
              mids$[mid_getLineNumber_412668abc8d889e9] = env->getMethodID(cls, "getLineNumber", "()I");
              mids$[mid_getText_3cffd47377eca18a] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexComment::RinexComment(jint a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da9d52f3cfda13c8, a0, a1.this$)) {}

          jint RinexComment::getLineNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLineNumber_412668abc8d889e9]);
          }

          ::java::lang::String RinexComment::getText() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_3cffd47377eca18a]));
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
          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self);
          static PyObject *t_RinexComment_getText(t_RinexComment *self);
          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data);
          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data);
          static PyGetSetDef t_RinexComment__fields_[] = {
            DECLARE_GET_FIELD(t_RinexComment, lineNumber),
            DECLARE_GET_FIELD(t_RinexComment, text),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexComment__methods_[] = {
            DECLARE_METHOD(t_RinexComment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, getLineNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexComment, getText, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexComment)[] = {
            { Py_tp_methods, t_RinexComment__methods_ },
            { Py_tp_init, (void *) t_RinexComment_init_ },
            { Py_tp_getset, t_RinexComment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexComment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexComment, t_RinexComment, RinexComment);

          void t_RinexComment::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexComment), &PY_TYPE_DEF(RinexComment), module, "RinexComment", 0);
          }

          void t_RinexComment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "class_", make_descriptor(RinexComment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "wrapfn_", make_descriptor(t_RinexComment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexComment::initializeClass, 1)))
              return NULL;
            return t_RinexComment::wrap_Object(RinexComment(((t_RinexComment *) arg)->object.this$));
          }
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexComment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            RinexComment object((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              INT_CALL(object = RinexComment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLineNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexComment_getText(t_RinexComment *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getText());
            return j2p(result);
          }

          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLineNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getText());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceChecker::class$ = NULL;
      jmethodID *ConvergenceChecker::mids$ = NULL;
      bool ConvergenceChecker::live$ = false;

      jclass ConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_converged_a643aa1e5ed43cf0] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_a643aa1e5ed43cf0], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data);
      static PyGetSetDef t_ConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_ConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceChecker)[] = {
        { Py_tp_methods, t_ConvergenceChecker__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceChecker, t_ConvergenceChecker, ConvergenceChecker);
      PyObject *t_ConvergenceChecker::wrap_Object(const ConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceChecker), &PY_TYPE_DEF(ConvergenceChecker), module, "ConvergenceChecker", 0);
      }

      void t_ConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "class_", make_descriptor(ConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "wrapfn_", make_descriptor(t_ConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_ConvergenceChecker::wrap_Object(ConvergenceChecker(((t_ConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *CorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *CorrelatedRandomVectorGenerator::mids$ = NULL;
      bool CorrelatedRandomVectorGenerator::live$ = false;

      jclass CorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/CorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0175c4d47bc18395] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_1671dd5bf6cbe2ec] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_getGenerator_bbf29926cadb12ad] = env->getMethodID(cls, "getGenerator", "()Lorg/hipparchus/random/NormalizedRandomGenerator;");
          mids$[mid_getRank_412668abc8d889e9] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0175c4d47bc18395, a0.this$, a1, a2.this$)) {}

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, const ::org::hipparchus::random::NormalizedRandomGenerator & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1671dd5bf6cbe2ec, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::hipparchus::random::NormalizedRandomGenerator CorrelatedRandomVectorGenerator::getGenerator() const
      {
        return ::org::hipparchus::random::NormalizedRandomGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_bbf29926cadb12ad]));
      }

      jint CorrelatedRandomVectorGenerator::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix CorrelatedRandomVectorGenerator::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_70a207fcbc031df2]));
      }

      JArray< jdouble > CorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
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
      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyGetSetDef t_CorrelatedRandomVectorGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, generator),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rank),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRank, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRootMatrix, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_CorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_CorrelatedRandomVectorGenerator_init_ },
        { Py_tp_getset, t_CorrelatedRandomVectorGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CorrelatedRandomVectorGenerator, t_CorrelatedRandomVectorGenerator, CorrelatedRandomVectorGenerator);

      void t_CorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(CorrelatedRandomVectorGenerator), &PY_TYPE_DEF(CorrelatedRandomVectorGenerator), module, "CorrelatedRandomVectorGenerator", 0);
      }

      void t_CorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "class_", make_descriptor(CorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_CorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_CorrelatedRandomVectorGenerator::wrap_Object(CorrelatedRandomVectorGenerator(((t_CorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::random::NormalizedRandomGenerator a3((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[DkDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2, a3));
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

      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$DataType::class$ = NULL;
        jmethodID *CRDHeader$DataType::mids$ = NULL;
        bool CRDHeader$DataType::live$ = false;
        CRDHeader$DataType *CRDHeader$DataType::FULL_RATE = NULL;
        CRDHeader$DataType *CRDHeader$DataType::NORMAL_POINT = NULL;
        CRDHeader$DataType *CRDHeader$DataType::SAMPLED_ENGIEERING = NULL;

        jclass CRDHeader$DataType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$DataType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDataType_6e4c9ffa8370e5fc] = env->getStaticMethodID(cls, "getDataType", "(I)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_getIndicator_412668abc8d889e9] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_valueOf_5ccfc51c51c34249] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_values_3e8f7c6181efa933] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$DataType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FULL_RATE = new CRDHeader$DataType(env->getStaticObjectField(cls, "FULL_RATE", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            NORMAL_POINT = new CRDHeader$DataType(env->getStaticObjectField(cls, "NORMAL_POINT", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            SAMPLED_ENGIEERING = new CRDHeader$DataType(env->getStaticObjectField(cls, "SAMPLED_ENGIEERING", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader$DataType CRDHeader$DataType::getDataType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_getDataType_6e4c9ffa8370e5fc], a0));
        }

        jint CRDHeader$DataType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_412668abc8d889e9]);
        }

        CRDHeader$DataType CRDHeader$DataType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ccfc51c51c34249], a0.this$));
        }

        JArray< CRDHeader$DataType > CRDHeader$DataType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_3e8f7c6181efa933]));
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
        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args);
        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self);
        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data);
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data);
        static PyGetSetDef t_CRDHeader$DataType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$DataType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$DataType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$DataType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$DataType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, getDataType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$DataType)[] = {
          { Py_tp_methods, t_CRDHeader$DataType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$DataType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$DataType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$DataType, t_CRDHeader$DataType, CRDHeader$DataType);
        PyObject *t_CRDHeader$DataType::wrap_Object(const CRDHeader$DataType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$DataType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$DataType), &PY_TYPE_DEF(CRDHeader$DataType), module, "CRDHeader$DataType", 0);
        }

        void t_CRDHeader$DataType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "class_", make_descriptor(CRDHeader$DataType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "wrapfn_", make_descriptor(t_CRDHeader$DataType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$DataType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "FULL_RATE", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::FULL_RATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "NORMAL_POINT", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::NORMAL_POINT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "SAMPLED_ENGIEERING", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::SAMPLED_ENGIEERING)));
        }

        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$DataType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$DataType::wrap_Object(CRDHeader$DataType(((t_CRDHeader$DataType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$DataType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::getDataType(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::valueOf(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$DataType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$DataType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/Class.h"
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
                  mids$[mid_valueOf_0dedbbc6c0fc7d86] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_values_f8037bbcc868436c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");

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
                return ObjectType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0dedbbc6c0fc7d86], a0.this$));
              }

              JArray< ObjectType > ObjectType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ObjectType >(env->callStaticObjectMethod(cls, mids$[mid_values_f8037bbcc868436c]));
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
              mids$[mid_init$_ec58038bb7e9c8f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;Ljava/lang/String;)V");
              mids$[mid_getBaseEquipment_e2de329eef1af1d2] = env->getMethodID(cls, "getBaseEquipment", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_getLabel_3cffd47377eca18a] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_parse_aabf160ae6f6aa12] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame::SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec58038bb7e9c8f8, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame::getBaseEquipment() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment(env->callObjectMethod(this$, mids$[mid_getBaseEquipment_e2de329eef1af1d2]));
          }

          ::java::lang::String SpacecraftBodyFrame::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_3cffd47377eca18a]));
          }

          SpacecraftBodyFrame SpacecraftBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_aabf160ae6f6aa12], a0.this$));
          }

          ::java::lang::String SpacecraftBodyFrame::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmElements::class$ = NULL;
              jmethodID *AcmElements::mids$ = NULL;
              bool AcmElements::live$ = false;
              AcmElements *AcmElements::AD = NULL;
              AcmElements *AcmElements::ATT = NULL;
              AcmElements *AcmElements::COV = NULL;
              AcmElements *AcmElements::MAN = NULL;
              AcmElements *AcmElements::PHYS = NULL;
              AcmElements *AcmElements::USER = NULL;

              jclass AcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_217badfa693dd936] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");
                  mids$[mid_values_9c4f561bad90c76b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmElements(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  ATT = new AcmElements(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  COV = new AcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  MAN = new AcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  PHYS = new AcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  USER = new AcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmElements AcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_217badfa693dd936], a0.this$));
              }

              JArray< AcmElements > AcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_9c4f561bad90c76b]));
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
              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args);
              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmElements_values(PyTypeObject *type);
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data);
              static PyGetSetDef t_AcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_AcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmElements__methods_[] = {
                DECLARE_METHOD(t_AcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmElements)[] = {
                { Py_tp_methods, t_AcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmElements, t_AcmElements, AcmElements);
              PyObject *t_AcmElements::wrap_Object(const AcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmElements), &PY_TYPE_DEF(AcmElements), module, "AcmElements", 0);
              }

              void t_AcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "class_", make_descriptor(AcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "wrapfn_", make_descriptor(t_AcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "AD", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "ATT", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "COV", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "MAN", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "PHYS", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "USER", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::USER)));
              }

              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmElements::initializeClass, 1)))
                  return NULL;
                return t_AcmElements::wrap_Object(AcmElements(((t_AcmElements *) arg)->object.this$));
              }
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::valueOf(a0));
                  return t_AcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmElements_values(PyTypeObject *type)
              {
                JArray< AcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_AcmElements::wrap_jobject);
              }
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data)
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
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/PointValuePair.h"
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
            mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_getConstraints_12ee61573a18f417] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");
            mids$[mid_isRestrictedToNonNegative_89b302893bdbe1f1] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");
            mids$[mid_getFunction_254a9da82033e549] = env->getMethodID(cls, "getFunction", "()Lorg/hipparchus/optim/linear/LinearObjectiveFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::PointValuePair LinearOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
#include "org/hipparchus/linear/SchurTransformer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SchurTransformer::class$ = NULL;
      jmethodID *SchurTransformer::mids$ = NULL;
      bool SchurTransformer::live$ = false;

      jclass SchurTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SchurTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_70a207fcbc031df2] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getT_70a207fcbc031df2] = env->getMethodID(cls, "getT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getT_70a207fcbc031df2]));
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
      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data);
      static PyGetSetDef t_SchurTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_SchurTransformer, p),
        DECLARE_GET_FIELD(t_SchurTransformer, pT),
        DECLARE_GET_FIELD(t_SchurTransformer, t),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SchurTransformer__methods_[] = {
        DECLARE_METHOD(t_SchurTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getPT, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SchurTransformer)[] = {
        { Py_tp_methods, t_SchurTransformer__methods_ },
        { Py_tp_init, (void *) t_SchurTransformer_init_ },
        { Py_tp_getset, t_SchurTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SchurTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SchurTransformer, t_SchurTransformer, SchurTransformer);

      void t_SchurTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(SchurTransformer), &PY_TYPE_DEF(SchurTransformer), module, "SchurTransformer", 0);
      }

      void t_SchurTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "class_", make_descriptor(SchurTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "wrapfn_", make_descriptor(t_SchurTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SchurTransformer::initializeClass, 1)))
          return NULL;
        return t_SchurTransformer::wrap_Object(SchurTransformer(((t_SchurTransformer *) arg)->object.this$));
      }
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SchurTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SchurTransformer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SchurTransformer(a0, a1));
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

      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *RealMatrixPreservingVisitor::mids$ = NULL;
      bool RealMatrixPreservingVisitor::live$ = false;

      jclass RealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_754312f3734d6e2f] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void RealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      void RealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_754312f3734d6e2f], a0, a1, a2);
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
      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self);
      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixPreservingVisitor, t_RealMatrixPreservingVisitor, RealMatrixPreservingVisitor);

      void t_RealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixPreservingVisitor), &PY_TYPE_DEF(RealMatrixPreservingVisitor), module, "RealMatrixPreservingVisitor", 0);
      }

      void t_RealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "class_", make_descriptor(RealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_RealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixPreservingVisitor::wrap_Object(RealMatrixPreservingVisitor(((t_RealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/FixedPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *FixedPanel::class$ = NULL;
      jmethodID *FixedPanel::mids$ = NULL;
      bool FixedPanel::live$ = false;

      jclass FixedPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/FixedPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e54897e1e1283021] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DZDDDD)V");
          mids$[mid_getNormal_503a254311e5da95] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedPanel::FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_e54897e1e1283021, a0.this$, a1, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_503a254311e5da95], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_3fff8c49d4e2dc6b], a0.this$));
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
      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args);

      static PyMethodDef t_FixedPanel__methods_[] = {
        DECLARE_METHOD(t_FixedPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedPanel)[] = {
        { Py_tp_methods, t_FixedPanel__methods_ },
        { Py_tp_init, (void *) t_FixedPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(FixedPanel, t_FixedPanel, FixedPanel);

      void t_FixedPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedPanel), &PY_TYPE_DEF(FixedPanel), module, "FixedPanel", 0);
      }

      void t_FixedPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "class_", make_descriptor(FixedPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "wrapfn_", make_descriptor(t_FixedPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedPanel::initializeClass, 1)))
          return NULL;
        return t_FixedPanel::wrap_Object(FixedPanel(((t_FixedPanel *) arg)->object.this$));
      }
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        jboolean a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        FixedPanel object((jobject) NULL);

        if (!parseArgs(args, "kDZDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = FixedPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FixedPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldDateDetector::class$ = NULL;
        jmethodID *FieldDateDetector::mids$ = NULL;
        bool FieldDateDetector::live$ = false;
        jdouble FieldDateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldDateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldDateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_675030e5ec88191c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/orekit/time/FieldTimeStamped;)V");
            mids$[mid_addEventDate_96f1f04e218525b7] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getDates_0d9551367f7ecdef] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_ba8c32d08952bed4] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/FieldDateDetector;");
            mids$[mid_create_642164c30982a939] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldDateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDateDetector::FieldDateDetector(const ::org::hipparchus::Field & a0, const JArray< ::org::orekit::time::FieldTimeStamped > & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_675030e5ec88191c, a0.this$, a1.this$)) {}

        void FieldDateDetector::addEventDate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_96f1f04e218525b7], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldDateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldDateDetector::getDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
        }

        ::java::util::List FieldDateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_0d9551367f7ecdef]));
        }

        FieldDateDetector FieldDateDetector::withMinGap(jdouble a0) const
        {
          return FieldDateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_ba8c32d08952bed4], a0));
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
        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args);
        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args);
        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data);
        static PyGetSetDef t_FieldDateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDateDetector, date),
          DECLARE_GET_FIELD(t_FieldDateDetector, dates),
          DECLARE_GET_FIELD(t_FieldDateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldDateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_FieldDateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDateDetector)[] = {
          { Py_tp_methods, t_FieldDateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldDateDetector_init_ },
          { Py_tp_getset, t_FieldDateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldDateDetector, t_FieldDateDetector, FieldDateDetector);
        PyObject *t_FieldDateDetector::wrap_Object(const FieldDateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDateDetector), &PY_TYPE_DEF(FieldDateDetector), module, "FieldDateDetector", 0);
        }

        void t_FieldDateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "class_", make_descriptor(FieldDateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "wrapfn_", make_descriptor(t_FieldDateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldDateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MAX_CHECK", make_descriptor(FieldDateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MIN_GAP", make_descriptor(FieldDateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldDateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldDateDetector::wrap_Object(FieldDateDetector(((t_FieldDateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::time::FieldTimeStamped > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDateDetector object((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
          {
            INT_CALL(object = FieldDateDetector(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldDateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldDateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_FieldDateDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$DetectorConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$DetectorConfiguration::mids$ = NULL;
        bool CRDConfiguration$DetectorConfiguration::live$ = false;

        jclass CRDConfiguration$DetectorConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAmplifierBandwidth_557b8123390d8d0c] = env->getMethodID(cls, "getAmplifierBandwidth", "()D");
            mids$[mid_getAmplifierGain_557b8123390d8d0c] = env->getMethodID(cls, "getAmplifierGain", "()D");
            mids$[mid_getAmplifierInUse_3cffd47377eca18a] = env->getMethodID(cls, "getAmplifierInUse", "()Ljava/lang/String;");
            mids$[mid_getApplicableWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getApplicableWavelength", "()D");
            mids$[mid_getAppliedVoltage_557b8123390d8d0c] = env->getMethodID(cls, "getAppliedVoltage", "()D");
            mids$[mid_getDarkCount_557b8123390d8d0c] = env->getMethodID(cls, "getDarkCount", "()D");
            mids$[mid_getDetectorId_3cffd47377eca18a] = env->getMethodID(cls, "getDetectorId", "()Ljava/lang/String;");
            mids$[mid_getDetectorType_3cffd47377eca18a] = env->getMethodID(cls, "getDetectorType", "()Ljava/lang/String;");
            mids$[mid_getExternalSignalProcessing_3cffd47377eca18a] = env->getMethodID(cls, "getExternalSignalProcessing", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseType_3cffd47377eca18a] = env->getMethodID(cls, "getOutputPulseType", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseWidth_557b8123390d8d0c] = env->getMethodID(cls, "getOutputPulseWidth", "()D");
            mids$[mid_getQuantumEfficiency_557b8123390d8d0c] = env->getMethodID(cls, "getQuantumEfficiency", "()D");
            mids$[mid_getSpatialFilter_557b8123390d8d0c] = env->getMethodID(cls, "getSpatialFilter", "()D");
            mids$[mid_getSpectralFilter_557b8123390d8d0c] = env->getMethodID(cls, "getSpectralFilter", "()D");
            mids$[mid_getTransmissionOfSpectralFilter_557b8123390d8d0c] = env->getMethodID(cls, "getTransmissionOfSpectralFilter", "()D");
            mids$[mid_setAmplifierBandwidth_10f281d777284cea] = env->getMethodID(cls, "setAmplifierBandwidth", "(D)V");
            mids$[mid_setAmplifierGain_10f281d777284cea] = env->getMethodID(cls, "setAmplifierGain", "(D)V");
            mids$[mid_setAmplifierInUse_f5ffdf29129ef90a] = env->getMethodID(cls, "setAmplifierInUse", "(Ljava/lang/String;)V");
            mids$[mid_setApplicableWavelength_10f281d777284cea] = env->getMethodID(cls, "setApplicableWavelength", "(D)V");
            mids$[mid_setAppliedVoltage_10f281d777284cea] = env->getMethodID(cls, "setAppliedVoltage", "(D)V");
            mids$[mid_setDarkCount_10f281d777284cea] = env->getMethodID(cls, "setDarkCount", "(D)V");
            mids$[mid_setDetectorId_f5ffdf29129ef90a] = env->getMethodID(cls, "setDetectorId", "(Ljava/lang/String;)V");
            mids$[mid_setDetectorType_f5ffdf29129ef90a] = env->getMethodID(cls, "setDetectorType", "(Ljava/lang/String;)V");
            mids$[mid_setExternalSignalProcessing_f5ffdf29129ef90a] = env->getMethodID(cls, "setExternalSignalProcessing", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseType_f5ffdf29129ef90a] = env->getMethodID(cls, "setOutputPulseType", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseWidth_10f281d777284cea] = env->getMethodID(cls, "setOutputPulseWidth", "(D)V");
            mids$[mid_setQuantumEfficiency_10f281d777284cea] = env->getMethodID(cls, "setQuantumEfficiency", "(D)V");
            mids$[mid_setSpatialFilter_10f281d777284cea] = env->getMethodID(cls, "setSpatialFilter", "(D)V");
            mids$[mid_setSpectralFilter_10f281d777284cea] = env->getMethodID(cls, "setSpectralFilter", "(D)V");
            mids$[mid_setTransmissionOfSpectralFilter_10f281d777284cea] = env->getMethodID(cls, "setTransmissionOfSpectralFilter", "(D)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$DetectorConfiguration::CRDConfiguration$DetectorConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierBandwidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierBandwidth_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierGain() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierGain_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getAmplifierInUse() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAmplifierInUse_3cffd47377eca18a]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getApplicableWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getApplicableWavelength_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAppliedVoltage() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAppliedVoltage_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getDarkCount() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDarkCount_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorId_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorType_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getExternalSignalProcessing() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalSignalProcessing_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getOutputPulseType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputPulseType_3cffd47377eca18a]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getOutputPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOutputPulseWidth_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getQuantumEfficiency() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuantumEfficiency_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpatialFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpatialFilter_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpectralFilter_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getTransmissionOfSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTransmissionOfSpectralFilter_557b8123390d8d0c]);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierBandwidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierBandwidth_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierGain(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierGain_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierInUse(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierInUse_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setApplicableWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setApplicableWavelength_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAppliedVoltage(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAppliedVoltage_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDarkCount(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDarkCount_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorType_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setExternalSignalProcessing(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setExternalSignalProcessing_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseType_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseWidth_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setQuantumEfficiency(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQuantumEfficiency_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpatialFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpatialFilter_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpectralFilter_10f281d777284cea], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setTransmissionOfSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransmissionOfSpectralFilter_10f281d777284cea], a0);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$DetectorConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierBandwidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierGain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierInUse),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, applicableWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, appliedVoltage),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, darkCount),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, externalSignalProcessing),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseWidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, quantumEfficiency),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spatialFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spectralFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, transmissionOfSpectralFilter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$DetectorConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierBandwidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierGain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierInUse, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getApplicableWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAppliedVoltage, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDarkCount, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getExternalSignalProcessing, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getQuantumEfficiency, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpatialFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getTransmissionOfSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierBandwidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierGain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierInUse, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setApplicableWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAppliedVoltage, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDarkCount, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setExternalSignalProcessing, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setQuantumEfficiency, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpatialFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setTransmissionOfSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$DetectorConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$DetectorConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$DetectorConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$DetectorConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$DetectorConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$DetectorConfiguration, t_CRDConfiguration$DetectorConfiguration, CRDConfiguration$DetectorConfiguration);

        void t_CRDConfiguration$DetectorConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$DetectorConfiguration), &PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration), module, "CRDConfiguration$DetectorConfiguration", 0);
        }

        void t_CRDConfiguration$DetectorConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "class_", make_descriptor(CRDConfiguration$DetectorConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$DetectorConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$DetectorConfiguration::wrap_Object(CRDConfiguration$DetectorConfiguration(((t_CRDConfiguration$DetectorConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$DetectorConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$DetectorConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAmplifierInUse());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDarkCount());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getExternalSignalProcessing());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOutputPulseType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierBandwidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierBandwidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierGain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierGain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAmplifierInUse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierInUse", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setApplicableWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setApplicableWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAppliedVoltage(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAppliedVoltage", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDarkCount(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDarkCount", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setExternalSignalProcessing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setExternalSignalProcessing", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setQuantumEfficiency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQuantumEfficiency", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpatialFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpatialFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTransmissionOfSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransmissionOfSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierBandwidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierBandwidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierGain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierGain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAmplifierInUse());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAmplifierInUse(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierInUse", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setApplicableWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "applicableWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAppliedVoltage(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "appliedVoltage", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDarkCount());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDarkCount(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "darkCount", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorId());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getExternalSignalProcessing());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setExternalSignalProcessing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "externalSignalProcessing", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOutputPulseType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOutputPulseType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setOutputPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseWidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setQuantumEfficiency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "quantumEfficiency", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpatialFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spatialFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spectralFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTransmissionOfSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transmissionOfSpectralFilter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *Rugged::class$ = NULL;
        jmethodID *Rugged::mids$ = NULL;
        bool Rugged::live$ = false;

        jclass Rugged::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/Rugged");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dateLocation_03c804cd85b6a606] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_dateLocation_4c87d707b4cb76cf] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;DDII)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_directLocation_ebdd52895fb08f8a] = env->getMethodID(cls, "directLocation", "(Ljava/lang/String;D)[Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_directLocation_5aa64d851a121163] = env->getMethodID(cls, "directLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_distanceBetweenLOS_dba97cfe7c1da25e] = env->getMethodID(cls, "distanceBetweenLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;D)[D");
            mids$[mid_distanceBetweenLOSderivatives_ff26bf7eeebd9c0d] = env->getMethodID(cls, "distanceBetweenLOSderivatives", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getAlgorithm_a215ec96f5ff8add] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/intersection/IntersectionAlgorithm;");
            mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getBodyToInertial_df04e3927954349e] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getEllipsoid_3aefdf5430f1346a] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialToBody_df04e3927954349e] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getLineSensor_65cfb823e2102f32] = env->getMethodID(cls, "getLineSensor", "(Ljava/lang/String;)Lorg/orekit/rugged/linesensor/LineSensor;");
            mids$[mid_getLineSensors_12ee61573a18f417] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/Collection;");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getRefractionCorrection_0f038fb48fafa13d] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getScToBody_90cfcff71c037e63] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getScToInertial_df04e3927954349e] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_inverseLocation_f5527ee705393f53] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocation_1b54f398bbbd19ba] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;DDII)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocationDerivatives_27a17ae8dc61e6d2] = env->getMethodID(cls, "inverseLocationDerivatives", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;IILorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_isAberrationOfLightCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isAberrationOfLightCorrected", "()Z");
            mids$[mid_isInRange_981023bfa4a8a093] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");
            mids$[mid_isLightTimeCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isLightTimeCorrected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_03c804cd85b6a606], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_4c87d707b4cb76cf], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::orekit::bodies::GeodeticPoint > Rugged::directLocation(const ::java::lang::String & a0, jdouble a1) const
        {
          return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_directLocation_ebdd52895fb08f8a], a0.this$, a1));
        }

        ::org::orekit::bodies::GeodeticPoint Rugged::directLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_directLocation_5aa64d851a121163], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > Rugged::distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOS_dba97cfe7c1da25e], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6, const ::org::orekit::rugged::utils::DerivativeGenerator & a7) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOSderivatives_ff26bf7eeebd9c0d], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6, a7.this$));
        }

        ::org::orekit::rugged::intersection::IntersectionAlgorithm Rugged::getAlgorithm() const
        {
          return ::org::orekit::rugged::intersection::IntersectionAlgorithm(env->callObjectMethod(this$, mids$[mid_getAlgorithm_a215ec96f5ff8add]));
        }

        ::org::orekit::rugged::api::AlgorithmId Rugged::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
        }

        ::org::orekit::frames::Transform Rugged::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_df04e3927954349e], a0.this$));
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid Rugged::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_3aefdf5430f1346a]));
        }

        ::org::orekit::frames::Transform Rugged::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_df04e3927954349e], a0.this$));
        }

        ::org::orekit::rugged::linesensor::LineSensor Rugged::getLineSensor(const ::java::lang::String & a0) const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getLineSensor_65cfb823e2102f32], a0.this$));
        }

        ::java::util::Collection Rugged::getLineSensors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getLineSensors_12ee61573a18f417]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        ::java::lang::String Rugged::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction Rugged::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_0f038fb48fafa13d]));
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody Rugged::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_90cfcff71c037e63]));
        }

        ::org::orekit::frames::Transform Rugged::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_df04e3927954349e], a0.this$));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_f5527ee705393f53], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_1b54f398bbbd19ba], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::inverseLocationDerivatives(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3, const ::org::orekit::rugged::utils::DerivativeGenerator & a4) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_inverseLocationDerivatives_27a17ae8dc61e6d2], a0.this$, a1.this$, a2, a3, a4.this$));
        }

        jboolean Rugged::isAberrationOfLightCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAberrationOfLightCorrected_89b302893bdbe1f1]);
        }

        jboolean Rugged::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_981023bfa4a8a093], a0.this$);
        }

        jboolean Rugged::isLightTimeCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLightTimeCorrected_89b302893bdbe1f1]);
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
        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self);
        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self);
        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self);
        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensors(t_Rugged *self);
        static PyObject *t_Rugged_getMaxDate(t_Rugged *self);
        static PyObject *t_Rugged_getMinDate(t_Rugged *self);
        static PyObject *t_Rugged_getName(t_Rugged *self);
        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self);
        static PyObject *t_Rugged_getScToBody(t_Rugged *self);
        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self);
        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self);
        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data);
        static PyGetSetDef t_Rugged__fields_[] = {
          DECLARE_GET_FIELD(t_Rugged, aberrationOfLightCorrected),
          DECLARE_GET_FIELD(t_Rugged, algorithm),
          DECLARE_GET_FIELD(t_Rugged, algorithmId),
          DECLARE_GET_FIELD(t_Rugged, ellipsoid),
          DECLARE_GET_FIELD(t_Rugged, lightTimeCorrected),
          DECLARE_GET_FIELD(t_Rugged, lineSensors),
          DECLARE_GET_FIELD(t_Rugged, maxDate),
          DECLARE_GET_FIELD(t_Rugged, minDate),
          DECLARE_GET_FIELD(t_Rugged, name),
          DECLARE_GET_FIELD(t_Rugged, refractionCorrection),
          DECLARE_GET_FIELD(t_Rugged, scToBody),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Rugged__methods_[] = {
          DECLARE_METHOD(t_Rugged, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, dateLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, directLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOS, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOSderivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getInertialToBody, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensor, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getName, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, inverseLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, inverseLocationDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, isAberrationOfLightCorrected, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, isInRange, METH_O),
          DECLARE_METHOD(t_Rugged, isLightTimeCorrected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rugged)[] = {
          { Py_tp_methods, t_Rugged__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Rugged__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rugged)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rugged, t_Rugged, Rugged);

        void t_Rugged::install(PyObject *module)
        {
          installType(&PY_TYPE(Rugged), &PY_TYPE_DEF(Rugged), module, "Rugged", 0);
        }

        void t_Rugged::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "class_", make_descriptor(Rugged::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "wrapfn_", make_descriptor(t_Rugged::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rugged::initializeClass, 1)))
            return NULL;
          return t_Rugged::wrap_Object(Rugged(((t_Rugged *) arg)->object.this$));
        }
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rugged::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dateLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);

              if (!parseArgs(args, "sD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "directLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOS(a0, a1, a2, a3, a4, a5, a6));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOS", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          ::org::orekit::rugged::utils::DerivativeGenerator a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkDK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOSderivatives(a0, a1, a2, a3, a4, a5, a6, a7));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOSderivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(result);
        }

        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg)
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

        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg)
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

        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getLineSensor(a0));
            return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLineSensor", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensors(t_Rugged *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_Rugged_getMaxDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getMinDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getName(t_Rugged *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToBody(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg)
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

        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::DerivativeGenerator a4((jobject) NULL);
          PyTypeObject **p4;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "skIIK", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.inverseLocationDerivatives(a0, a1, a2, a3, a4));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocationDerivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg)
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

        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldEquinoctialOrbit::class$ = NULL;
      jmethodID *FieldEquinoctialOrbit::mids$ = NULL;
      bool FieldEquinoctialOrbit::live$ = false;

      jclass FieldEquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldEquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_dec3985bcf1132c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/EquinoctialOrbit;)V");
          mids$[mid_init$_7568a622582bbb9f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_b2c573ad66dbbf4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2003571c0e8d33c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_5ef84f89b3c0d68c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_1ffb1b4106e68722] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_442a44d8b8481234] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_d181e731358aa045] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_d181e731358aa045] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_613c8f46c659f636] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_613c8f46c659f636] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_613c8f46c659f636] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_613c8f46c659f636] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_613c8f46c659f636] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_1c32e6b4d15c6c38] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_1c32e6b4d15c6c38] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_613c8f46c659f636] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_613c8f46c659f636] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_d181e731358aa045] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_98621730ff24ca37] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_6cefdbe266bb2561] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_ffac9babd8751b76] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_toOrbit_122d53e131631054] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_d181e731358aa045] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_2d64addf4c3391d9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::EquinoctialOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_dec3985bcf1132c2, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_7568a622582bbb9f, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b2c573ad66dbbf4e, a0.this$, a1.this$, a2.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2003571c0e8d33c1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_5ef84f89b3c0d68c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1ffb1b4106e68722, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldEquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_442a44d8b8481234], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::PositionAngleType FieldEquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::OrbitType FieldEquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean FieldEquinoctialOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      jboolean FieldEquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_d181e731358aa045], a0.this$, a1.this$, a2.this$));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::removeRates() const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_98621730ff24ca37]));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_6cefdbe266bb2561], a0));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_ffac9babd8751b76], a0.this$));
      }

      ::org::orekit::orbits::EquinoctialOrbit FieldEquinoctialOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_122d53e131631054]));
      }

      ::java::lang::String FieldEquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_d181e731358aa045], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args);
      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data);
      static PyGetSetDef t_FieldEquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, type),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldEquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquinoctialOrbit)[] = {
        { Py_tp_methods, t_FieldEquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldEquinoctialOrbit_init_ },
        { Py_tp_getset, t_FieldEquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldEquinoctialOrbit, t_FieldEquinoctialOrbit, FieldEquinoctialOrbit);
      PyObject *t_FieldEquinoctialOrbit::wrap_Object(const FieldEquinoctialOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquinoctialOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquinoctialOrbit), &PY_TYPE_DEF(FieldEquinoctialOrbit), module, "FieldEquinoctialOrbit", 0);
      }

      void t_FieldEquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "class_", make_descriptor(FieldEquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "wrapfn_", make_descriptor(t_FieldEquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldEquinoctialOrbit::wrap_Object(FieldEquinoctialOrbit(((t_FieldEquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::EquinoctialOrbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::EquinoctialOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self)
      {
        FieldEquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodType::class$ = NULL;
          jmethodID *PocMethodType::mids$ = NULL;
          bool PocMethodType::live$ = false;
          PocMethodType *PocMethodType::AKELLAALFRIEND_2000 = NULL;
          PocMethodType *PocMethodType::ALFANO_2005 = NULL;
          PocMethodType *PocMethodType::ALFANO_MAX_PROBABILITY = NULL;
          PocMethodType *PocMethodType::ALFANO_PARAL_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_TUBES_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_VOXELS_2006 = NULL;
          PocMethodType *PocMethodType::ALFRIEND_1999 = NULL;
          PocMethodType *PocMethodType::CHAN_1997 = NULL;
          PocMethodType *PocMethodType::CHAN_2003 = NULL;
          PocMethodType *PocMethodType::FOSTER_1992 = NULL;
          PocMethodType *PocMethodType::MCKINLEY_2006 = NULL;
          PocMethodType *PocMethodType::PATERA_2001 = NULL;
          PocMethodType *PocMethodType::PATERA_2003 = NULL;
          PocMethodType *PocMethodType::PATERA_2005 = NULL;

          jclass PocMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCCSDSName_3cffd47377eca18a] = env->getMethodID(cls, "getCCSDSName", "()Ljava/lang/String;");
              mids$[mid_getMethodType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getMethodType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
              mids$[mid_valueOf_9043b81e77df60c7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_values_d5e436107b529acf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/PocMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AKELLAALFRIEND_2000 = new PocMethodType(env->getStaticObjectField(cls, "AKELLAALFRIEND_2000", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_2005 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_MAX_PROBABILITY = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_PARAL_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_PARAL_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_TUBES_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_TUBES_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_VOXELS_2006 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_VOXELS_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFRIEND_1999 = new PocMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_1997 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_2003 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              FOSTER_1992 = new PocMethodType(env->getStaticObjectField(cls, "FOSTER_1992", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              MCKINLEY_2006 = new PocMethodType(env->getStaticObjectField(cls, "MCKINLEY_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2001 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2001", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2003 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2005 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String PocMethodType::getCCSDSName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCCSDSName_3cffd47377eca18a]));
          }

          ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType PocMethodType::getMethodType() const
          {
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getMethodType_4b8bf2bb84f7480e]));
          }

          PocMethodType PocMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9043b81e77df60c7], a0.this$));
          }

          JArray< PocMethodType > PocMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< PocMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_d5e436107b529acf]));
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
          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args);
          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self);
          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self);
          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_PocMethodType_values(PyTypeObject *type);
          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data);
          static PyGetSetDef t_PocMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodType, cCSDSName),
            DECLARE_GET_FIELD(t_PocMethodType, methodType),
            DECLARE_GET_FIELD(t_PocMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodType__methods_[] = {
            DECLARE_METHOD(t_PocMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_PocMethodType, getCCSDSName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, getMethodType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodType)[] = {
            { Py_tp_methods, t_PocMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PocMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(PocMethodType, t_PocMethodType, PocMethodType);
          PyObject *t_PocMethodType::wrap_Object(const PocMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PocMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PocMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodType), &PY_TYPE_DEF(PocMethodType), module, "PocMethodType", 0);
          }

          void t_PocMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "class_", make_descriptor(PocMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "wrapfn_", make_descriptor(t_PocMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(PocMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "AKELLAALFRIEND_2000", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::AKELLAALFRIEND_2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_MAX_PROBABILITY", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_MAX_PROBABILITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_PARAL_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_PARAL_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_TUBES_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_TUBES_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_VOXELS_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_VOXELS_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFRIEND_1999", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFRIEND_1999)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_1997", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "FOSTER_1992", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::FOSTER_1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "MCKINLEY_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::MCKINLEY_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2001", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2005)));
          }

          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodType::initializeClass, 1)))
              return NULL;
            return t_PocMethodType::wrap_Object(PocMethodType(((t_PocMethodType *) arg)->object.this$));
          }
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCCSDSName());
            return j2p(result);
          }

          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::valueOf(a0));
              return t_PocMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_PocMethodType_values(PyTypeObject *type)
          {
            JArray< PocMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_PocMethodType::wrap_jobject);
          }
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCCSDSName());
            return j2p(value);
          }

          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
