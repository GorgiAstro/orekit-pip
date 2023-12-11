#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54FieldIntegratorBuilder::mids$ = NULL;
        bool HighamHall54FieldIntegratorBuilder::live$ = false;

        jclass HighamHall54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegratorBuilder::HighamHall54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator HighamHall54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegratorBuilder, t_HighamHall54FieldIntegratorBuilder, HighamHall54FieldIntegratorBuilder);
        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_Object(const HighamHall54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegratorBuilder), &PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder), module, "HighamHall54FieldIntegratorBuilder", 0);
        }

        void t_HighamHall54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "class_", make_descriptor(HighamHall54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegratorBuilder::wrap_Object(HighamHall54FieldIntegratorBuilder(((t_HighamHall54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Data::class$ = NULL;
          jmethodID *Data::mids$ = NULL;
          bool Data::live$ = false;

          jclass Data::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Data");

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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Data__methods_[] = {
            DECLARE_METHOD(t_Data, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Data, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Data)[] = {
            { Py_tp_methods, t_Data__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Data)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Section),
            NULL
          };

          DEFINE_TYPE(Data, t_Data, Data);

          void t_Data::install(PyObject *module)
          {
            installType(&PY_TYPE(Data), &PY_TYPE_DEF(Data), module, "Data", 0);
          }

          void t_Data::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "class_", make_descriptor(Data::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "wrapfn_", make_descriptor(t_Data::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Data::initializeClass, 1)))
              return NULL;
            return t_Data::wrap_Object(Data(((t_Data *) arg)->object.this$));
          }
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Data::initializeClass, 0))
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
#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractConvergenceChecker::class$ = NULL;
      jmethodID *AbstractConvergenceChecker::mids$ = NULL;
      bool AbstractConvergenceChecker::live$ = false;

      jclass AbstractConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_converged_a643aa1e5ed43cf0] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
          mids$[mid_getAbsoluteThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteThreshold", "()D");
          mids$[mid_getRelativeThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeThreshold", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractConvergenceChecker::AbstractConvergenceChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      jboolean AbstractConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_a643aa1e5ed43cf0], a0, a1.this$, a2.this$);
      }

      jdouble AbstractConvergenceChecker::getAbsoluteThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsoluteThreshold_557b8123390d8d0c]);
      }

      jdouble AbstractConvergenceChecker::getRelativeThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRelativeThreshold_557b8123390d8d0c]);
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
      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args);
      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args);
      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data);
      static PyGetSetDef t_AbstractConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, absoluteThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, relativeThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_AbstractConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, converged, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getAbsoluteThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getRelativeThreshold, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractConvergenceChecker)[] = {
        { Py_tp_methods, t_AbstractConvergenceChecker__methods_ },
        { Py_tp_init, (void *) t_AbstractConvergenceChecker_init_ },
        { Py_tp_getset, t_AbstractConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractConvergenceChecker, t_AbstractConvergenceChecker, AbstractConvergenceChecker);
      PyObject *t_AbstractConvergenceChecker::wrap_Object(const AbstractConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractConvergenceChecker), &PY_TYPE_DEF(AbstractConvergenceChecker), module, "AbstractConvergenceChecker", 0);
      }

      void t_AbstractConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "class_", make_descriptor(AbstractConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "wrapfn_", make_descriptor(t_AbstractConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_AbstractConvergenceChecker::wrap_Object(AbstractConvergenceChecker(((t_AbstractConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        AbstractConvergenceChecker object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = AbstractConvergenceChecker(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args)
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

      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) result);
      }
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHullGenerator2D::class$ = NULL;
            jmethodID *ConvexHullGenerator2D::mids$ = NULL;
            bool ConvexHullGenerator2D::live$ = false;

            jclass ConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_b7d73bd07a9bc56d] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D ConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_b7d73bd07a9bc56d], a0.this$));
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
            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args);

            static PyMethodDef t_ConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_ConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::hull::ConvexHullGenerator),
              NULL
            };

            DEFINE_TYPE(ConvexHullGenerator2D, t_ConvexHullGenerator2D, ConvexHullGenerator2D);

            void t_ConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHullGenerator2D), &PY_TYPE_DEF(ConvexHullGenerator2D), module, "ConvexHullGenerator2D", 0);
            }

            void t_ConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "class_", make_descriptor(ConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "wrapfn_", make_descriptor(t_ConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHullGenerator2D::wrap_Object(ConvexHullGenerator2D(((t_ConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              return callSuper(PY_TYPE(ConvexHullGenerator2D), (PyObject *) self, "generate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombinationFactory::class$ = NULL;
          jmethodID *MeasurementCombinationFactory::mids$ = NULL;
          bool MeasurementCombinationFactory::live$ = false;

          jclass MeasurementCombinationFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getGRAPHICCombination_b80d8f8528f7c532] = env->getStaticMethodID(cls, "getGRAPHICCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GRAPHICCombination;");
              mids$[mid_getGeometryFreeCombination_67d54b328b5ec799] = env->getStaticMethodID(cls, "getGeometryFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GeometryFreeCombination;");
              mids$[mid_getIonosphereFreeCombination_d842a68344c6ba82] = env->getStaticMethodID(cls, "getIonosphereFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/IonosphereFreeCombination;");
              mids$[mid_getMelbourneWubbenaCombination_10a56ef5d39182b1] = env->getStaticMethodID(cls, "getMelbourneWubbenaCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination;");
              mids$[mid_getNarrowLaneCombination_32012fea9b2fc3d3] = env->getStaticMethodID(cls, "getNarrowLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/NarrowLaneCombination;");
              mids$[mid_getPhaseMinusCodeCombination_96d7bd866e3f6da7] = env->getStaticMethodID(cls, "getPhaseMinusCodeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination;");
              mids$[mid_getWideLaneCombination_183fcfefa59f744b] = env->getStaticMethodID(cls, "getWideLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/WideLaneCombination;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::GRAPHICCombination MeasurementCombinationFactory::getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GRAPHICCombination(env->callStaticObjectMethod(cls, mids$[mid_getGRAPHICCombination_b80d8f8528f7c532], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination MeasurementCombinationFactory::getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getGeometryFreeCombination_67d54b328b5ec799], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination MeasurementCombinationFactory::getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getIonosphereFreeCombination_d842a68344c6ba82], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination MeasurementCombinationFactory::getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination(env->callStaticObjectMethod(cls, mids$[mid_getMelbourneWubbenaCombination_10a56ef5d39182b1], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination MeasurementCombinationFactory::getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getNarrowLaneCombination_32012fea9b2fc3d3], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination MeasurementCombinationFactory::getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination(env->callStaticObjectMethod(cls, mids$[mid_getPhaseMinusCodeCombination_96d7bd866e3f6da7], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::WideLaneCombination MeasurementCombinationFactory::getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::WideLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getWideLaneCombination_183fcfefa59f744b], a0.this$));
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
          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_MeasurementCombinationFactory__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombinationFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGRAPHICCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGeometryFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getIonosphereFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getMelbourneWubbenaCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getNarrowLaneCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getPhaseMinusCodeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getWideLaneCombination, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombinationFactory)[] = {
            { Py_tp_methods, t_MeasurementCombinationFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombinationFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombinationFactory, t_MeasurementCombinationFactory, MeasurementCombinationFactory);

          void t_MeasurementCombinationFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombinationFactory), &PY_TYPE_DEF(MeasurementCombinationFactory), module, "MeasurementCombinationFactory", 0);
          }

          void t_MeasurementCombinationFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "class_", make_descriptor(MeasurementCombinationFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "wrapfn_", make_descriptor(t_MeasurementCombinationFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombinationFactory::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombinationFactory::wrap_Object(MeasurementCombinationFactory(((t_MeasurementCombinationFactory *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombinationFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GRAPHICCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGRAPHICCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GRAPHICCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGRAPHICCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGeometryFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GeometryFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGeometryFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getIonosphereFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IonosphereFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIonosphereFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getMelbourneWubbenaCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_MelbourneWubbenaCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMelbourneWubbenaCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getNarrowLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_NarrowLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNarrowLaneCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getPhaseMinusCodeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_PhaseMinusCodeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPhaseMinusCodeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::WideLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getWideLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_WideLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getWideLaneCombination", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EclipseDetector::class$ = NULL;
        jmethodID *EclipseDetector::mids$ = NULL;
        bool EclipseDetector::live$ = false;

        jclass EclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0ef01684d428ac9c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_96b8e1d4ccad7364] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getMargin_557b8123390d8d0c] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getOccultationEngine_fed7baa95ffa6698] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_89b302893bdbe1f1] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_a1fde6d5872cd52e] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withPenumbra_76e14f3742e5da58] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withUmbra_76e14f3742e5da58] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_create_c1aaa24ee2ef77a7] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::OccultationEngine & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0ef01684d428ac9c, a0.this$)) {}

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_96b8e1d4ccad7364, a0.this$, a1, a2.this$)) {}

        jdouble EclipseDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble EclipseDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_557b8123390d8d0c]);
        }

        ::org::orekit::utils::OccultationEngine EclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_fed7baa95ffa6698]));
        }

        jboolean EclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_89b302893bdbe1f1]);
        }

        EclipseDetector EclipseDetector::withMargin(jdouble a0) const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_a1fde6d5872cd52e], a0));
        }

        EclipseDetector EclipseDetector::withPenumbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_76e14f3742e5da58]));
        }

        EclipseDetector EclipseDetector::withUmbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_76e14f3742e5da58]));
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
        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args);
        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args);
        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg);
        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data);
        static PyGetSetDef t_EclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EclipseDetector, margin),
          DECLARE_GET_FIELD(t_EclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_EclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_EclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EclipseDetector__methods_[] = {
          DECLARE_METHOD(t_EclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_EclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EclipseDetector)[] = {
          { Py_tp_methods, t_EclipseDetector__methods_ },
          { Py_tp_init, (void *) t_EclipseDetector_init_ },
          { Py_tp_getset, t_EclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EclipseDetector, t_EclipseDetector, EclipseDetector);
        PyObject *t_EclipseDetector::wrap_Object(const EclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EclipseDetector), &PY_TYPE_DEF(EclipseDetector), module, "EclipseDetector", 0);
        }

        void t_EclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "class_", make_descriptor(EclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "wrapfn_", make_descriptor(t_EclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EclipseDetector::initializeClass, 1)))
            return NULL;
          return t_EclipseDetector::wrap_Object(EclipseDetector(((t_EclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::OccultationEngine a0((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::OccultationEngine::initializeClass, &a0))
              {
                INT_CALL(object = EclipseDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EclipseDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
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

        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg)
        {
          jdouble a0;
          EclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_EclipseDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_EclipseDetector::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_EclipseDetector::wrap_Object(result);
        }
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTileFactory::class$ = NULL;
          jmethodID *MinMaxTreeTileFactory::mids$ = NULL;
          bool MinMaxTreeTileFactory::live$ = false;

          jclass MinMaxTreeTileFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_createTile_dbbd1875b51af85e] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/intersection/duvenhage/MinMaxTreeTile;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MinMaxTreeTileFactory::MinMaxTreeTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile MinMaxTreeTileFactory::createTile() const
          {
            return ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile(env->callObjectMethod(this$, mids$[mid_createTile_dbbd1875b51af85e]));
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
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self);

          static PyMethodDef t_MinMaxTreeTileFactory__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTileFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, createTile, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTileFactory)[] = {
            { Py_tp_methods, t_MinMaxTreeTileFactory__methods_ },
            { Py_tp_init, (void *) t_MinMaxTreeTileFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTileFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTileFactory, t_MinMaxTreeTileFactory, MinMaxTreeTileFactory);

          void t_MinMaxTreeTileFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTileFactory), &PY_TYPE_DEF(MinMaxTreeTileFactory), module, "MinMaxTreeTileFactory", 0);
          }

          void t_MinMaxTreeTileFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "class_", make_descriptor(MinMaxTreeTileFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "wrapfn_", make_descriptor(t_MinMaxTreeTileFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTileFactory::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTileFactory::wrap_Object(MinMaxTreeTileFactory(((t_MinMaxTreeTileFactory *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTileFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds)
          {
            MinMaxTreeTileFactory object((jobject) NULL);

            INT_CALL(object = MinMaxTreeTileFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self)
          {
            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile result((jobject) NULL);
            OBJ_CALL(result = self->object.createTile());
            return ::org::orekit::rugged::intersection::duvenhage::t_MinMaxTreeTile::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitType::class$ = NULL;
      jmethodID *OrbitType::mids$ = NULL;
      bool OrbitType::live$ = false;
      ::java::lang::String *OrbitType::A = NULL;
      OrbitType *OrbitType::CARTESIAN = NULL;
      OrbitType *OrbitType::CIRCULAR = NULL;
      ::java::lang::String *OrbitType::ECC = NULL;
      ::java::lang::String *OrbitType::ECC_ANOM = NULL;
      ::java::lang::String *OrbitType::ECC_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::ECC_LON_ARG = NULL;
      OrbitType *OrbitType::EQUINOCTIAL = NULL;
      ::java::lang::String *OrbitType::E_X = NULL;
      ::java::lang::String *OrbitType::E_Y = NULL;
      ::java::lang::String *OrbitType::H_X = NULL;
      ::java::lang::String *OrbitType::H_Y = NULL;
      ::java::lang::String *OrbitType::INC = NULL;
      OrbitType *OrbitType::KEPLERIAN = NULL;
      ::java::lang::String *OrbitType::MEAN_ANOM = NULL;
      ::java::lang::String *OrbitType::MEAN_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::MEAN_LON_ARG = NULL;
      ::java::lang::String *OrbitType::PA = NULL;
      ::java::lang::String *OrbitType::POS_X = NULL;
      ::java::lang::String *OrbitType::POS_Y = NULL;
      ::java::lang::String *OrbitType::POS_Z = NULL;
      ::java::lang::String *OrbitType::RAAN = NULL;
      ::java::lang::String *OrbitType::TRUE_ANOM = NULL;
      ::java::lang::String *OrbitType::TRUE_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::TRUE_LON_ARG = NULL;
      ::java::lang::String *OrbitType::VEL_X = NULL;
      ::java::lang::String *OrbitType::VEL_Y = NULL;
      ::java::lang::String *OrbitType::VEL_Z = NULL;

      jclass OrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToFieldOrbit_e9be6c9886c2ede1] = env->getMethodID(cls, "convertToFieldOrbit", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_8e5d41efd1316adf] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_f66341a46b0a495a] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_getDrivers_2dc678382be03f90] = env->getMethodID(cls, "getDrivers", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/utils/ParameterDriversList;");
          mids$[mid_isPositionAngleBased_89b302893bdbe1f1] = env->getMethodID(cls, "isPositionAngleBased", "()Z");
          mids$[mid_mapArrayToOrbit_ac083376e9e49863] = env->getMethodID(cls, "mapArrayToOrbit", "([D[DLorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/frames/Frame;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_mapArrayToOrbit_b8f94d8b89c37228] = env->getMethodID(cls, "mapArrayToOrbit", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_mapOrbitToArray_9d78f2b469e9d210] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[D[D)V");
          mids$[mid_mapOrbitToArray_eae83fc342f0eb92] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_normalize_9a9f168ee5c82859] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_normalize_b2a35539461bc5cf] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_valueOf_1887b258ce5f94b2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/OrbitType;");
          mids$[mid_values_fc02321a93006dba] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/OrbitType;");
          mids$[mid_scale_447de1222ff10980] = env->getMethodID(cls, "scale", "(DLorg/orekit/orbits/Orbit;)[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new ::java::lang::String(env->getStaticObjectField(cls, "A", "Ljava/lang/String;"));
          CARTESIAN = new OrbitType(env->getStaticObjectField(cls, "CARTESIAN", "Lorg/orekit/orbits/OrbitType;"));
          CIRCULAR = new OrbitType(env->getStaticObjectField(cls, "CIRCULAR", "Lorg/orekit/orbits/OrbitType;"));
          ECC = new ::java::lang::String(env->getStaticObjectField(cls, "ECC", "Ljava/lang/String;"));
          ECC_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_ANOM", "Ljava/lang/String;"));
          ECC_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LAT_ARG", "Ljava/lang/String;"));
          ECC_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LON_ARG", "Ljava/lang/String;"));
          EQUINOCTIAL = new OrbitType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/orbits/OrbitType;"));
          E_X = new ::java::lang::String(env->getStaticObjectField(cls, "E_X", "Ljava/lang/String;"));
          E_Y = new ::java::lang::String(env->getStaticObjectField(cls, "E_Y", "Ljava/lang/String;"));
          H_X = new ::java::lang::String(env->getStaticObjectField(cls, "H_X", "Ljava/lang/String;"));
          H_Y = new ::java::lang::String(env->getStaticObjectField(cls, "H_Y", "Ljava/lang/String;"));
          INC = new ::java::lang::String(env->getStaticObjectField(cls, "INC", "Ljava/lang/String;"));
          KEPLERIAN = new OrbitType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/orbits/OrbitType;"));
          MEAN_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_ANOM", "Ljava/lang/String;"));
          MEAN_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LAT_ARG", "Ljava/lang/String;"));
          MEAN_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LON_ARG", "Ljava/lang/String;"));
          PA = new ::java::lang::String(env->getStaticObjectField(cls, "PA", "Ljava/lang/String;"));
          POS_X = new ::java::lang::String(env->getStaticObjectField(cls, "POS_X", "Ljava/lang/String;"));
          POS_Y = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Y", "Ljava/lang/String;"));
          POS_Z = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Z", "Ljava/lang/String;"));
          RAAN = new ::java::lang::String(env->getStaticObjectField(cls, "RAAN", "Ljava/lang/String;"));
          TRUE_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_ANOM", "Ljava/lang/String;"));
          TRUE_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LAT_ARG", "Ljava/lang/String;"));
          TRUE_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LON_ARG", "Ljava/lang/String;"));
          VEL_X = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_X", "Ljava/lang/String;"));
          VEL_Y = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Y", "Ljava/lang/String;"));
          VEL_Z = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Z", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertToFieldOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertToFieldOrbit_e9be6c9886c2ede1], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertType(const ::org::orekit::orbits::FieldOrbit & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertType_8e5d41efd1316adf], a0.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::convertType(const ::org::orekit::orbits::Orbit & a0) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_convertType_f66341a46b0a495a], a0.this$));
      }

      ::org::orekit::utils::ParameterDriversList OrbitType::getDrivers(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getDrivers_2dc678382be03f90], a0, a1.this$, a2.this$));
      }

      jboolean OrbitType::isPositionAngleBased() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPositionAngleBased_89b302893bdbe1f1]);
      }

      ::org::orekit::orbits::Orbit OrbitType::mapArrayToOrbit(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_ac083376e9e49863], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_b8f94d8b89c37228], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_9d78f2b469e9d210], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_eae83fc342f0eb92], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::normalize(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::FieldOrbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_normalize_9a9f168ee5c82859], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::normalize(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_normalize_b2a35539461bc5cf], a0.this$, a1.this$));
      }

      OrbitType OrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1887b258ce5f94b2], a0.this$));
      }

      JArray< OrbitType > OrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_fc02321a93006dba]));
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
      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self);
      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrbitType_values(PyTypeObject *type);
      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data);
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data);
      static PyGetSetDef t_OrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitType, positionAngleBased),
        DECLARE_GET_FIELD(t_OrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitType__methods_[] = {
        DECLARE_METHOD(t_OrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertToFieldOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertType, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, getDrivers, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, isPositionAngleBased, METH_NOARGS),
        DECLARE_METHOD(t_OrbitType, mapArrayToOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, mapOrbitToArray, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, normalize, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitType)[] = {
        { Py_tp_methods, t_OrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrbitType, t_OrbitType, OrbitType);
      PyObject *t_OrbitType::wrap_Object(const OrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitType), &PY_TYPE_DEF(OrbitType), module, "OrbitType", 0);
      }

      void t_OrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "class_", make_descriptor(OrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "wrapfn_", make_descriptor(t_OrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "A", make_descriptor(j2p(*OrbitType::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CARTESIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CARTESIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CIRCULAR", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CIRCULAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC", make_descriptor(j2p(*OrbitType::ECC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_ANOM", make_descriptor(j2p(*OrbitType::ECC_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LAT_ARG", make_descriptor(j2p(*OrbitType::ECC_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LON_ARG", make_descriptor(j2p(*OrbitType::ECC_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "EQUINOCTIAL", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_X", make_descriptor(j2p(*OrbitType::E_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_Y", make_descriptor(j2p(*OrbitType::E_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_X", make_descriptor(j2p(*OrbitType::H_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_Y", make_descriptor(j2p(*OrbitType::H_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "INC", make_descriptor(j2p(*OrbitType::INC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "KEPLERIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::KEPLERIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_ANOM", make_descriptor(j2p(*OrbitType::MEAN_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LAT_ARG", make_descriptor(j2p(*OrbitType::MEAN_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LON_ARG", make_descriptor(j2p(*OrbitType::MEAN_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "PA", make_descriptor(j2p(*OrbitType::PA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_X", make_descriptor(j2p(*OrbitType::POS_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Y", make_descriptor(j2p(*OrbitType::POS_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Z", make_descriptor(j2p(*OrbitType::POS_Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "RAAN", make_descriptor(j2p(*OrbitType::RAAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_ANOM", make_descriptor(j2p(*OrbitType::TRUE_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LAT_ARG", make_descriptor(j2p(*OrbitType::TRUE_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LON_ARG", make_descriptor(j2p(*OrbitType::TRUE_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_X", make_descriptor(j2p(*OrbitType::VEL_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Y", make_descriptor(j2p(*OrbitType::VEL_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Z", make_descriptor(j2p(*OrbitType::VEL_Z)));
      }

      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitType::initializeClass, 1)))
          return NULL;
        return t_OrbitType::wrap_Object(OrbitType(((t_OrbitType *) arg)->object.this$));
      }
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.convertToFieldOrbit(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertToFieldOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertType", args);
        return NULL;
      }

      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

        if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getDrivers(a0, a1, a2));
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDrivers", args);
        return NULL;
      }

      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 6:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            jdouble a4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "[D[DKkDk", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "[K[KKKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapArrayToOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KK[K[K", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);

            if (!parseArgs(args, "kK[D[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapOrbitToArray", args);
        return NULL;
      }

      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "normalize", args);
        return NULL;
      }

      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::OrbitType::valueOf(a0));
          return t_OrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrbitType_values(PyTypeObject *type)
      {
        JArray< OrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::OrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_OrbitType::wrap_jobject);
      }
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04::class$ = NULL;
              jmethodID *SsrIgm04::mids$ = NULL;
              bool SsrIgm04::live$ = false;

              jclass SsrIgm04::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_fda72f789735f041] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm04Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm04Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04::SsrIgm04(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_fda72f789735f041, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm04::getSsrIgm04Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm04Data_1e62c2f73fbdd1c4]));
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
            namespace igm {
              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args);
              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self);
              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data);
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data);
              static PyGetSetDef t_SsrIgm04__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm04, ssrIgm04Data),
                DECLARE_GET_FIELD(t_SsrIgm04, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm04, getSsrIgm04Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04)[] = {
                { Py_tp_methods, t_SsrIgm04__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04_init_ },
                { Py_tp_getset, t_SsrIgm04__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm04, t_SsrIgm04, SsrIgm04);
              PyObject *t_SsrIgm04::wrap_Object(const SsrIgm04& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm04::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm04::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04), &PY_TYPE_DEF(SsrIgm04), module, "SsrIgm04", 0);
              }

              void t_SsrIgm04::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "class_", make_descriptor(SsrIgm04::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "wrapfn_", make_descriptor(t_SsrIgm04::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04::wrap_Object(SsrIgm04(((t_SsrIgm04 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm04 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm04(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm04Data());
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_sign_7e960cd6eee376d8] = env->getMethodID(cls, "sign", "(D)D");
              mids$[mid_discreteSearch_0640e6acf969ed28] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0640e6acf969ed28] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "inverseDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedLambdaMethod::ModifiedLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeIndependentLOSTransform::class$ = NULL;
        jmethodID *TimeIndependentLOSTransform::mids$ = NULL;
        bool TimeIndependentLOSTransform::live$ = false;

        jclass TimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_871f750b8782ea1a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_1f552c4ec2328a5b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream TimeIndependentLOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_871f750b8782ea1a], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_1f552c4ec2328a5b], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self);
        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args);
        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_TimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_TimeIndependentLOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_TimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_TimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeIndependentLOSTransform, t_TimeIndependentLOSTransform, TimeIndependentLOSTransform);

        void t_TimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeIndependentLOSTransform), &PY_TYPE_DEF(TimeIndependentLOSTransform), module, "TimeIndependentLOSTransform", 0);
        }

        void t_TimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "class_", make_descriptor(TimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_TimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_TimeIndependentLOSTransform::wrap_Object(TimeIndependentLOSTransform(((t_TimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSAlmanac::class$ = NULL;
            jmethodID *IRNSSAlmanac::mids$ = NULL;
            bool IRNSSAlmanac::live$ = false;

            jclass IRNSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_setSqrtA_10f281d777284cea] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSAlmanac::IRNSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void IRNSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_10f281d777284cea], a0);
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
            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg);
            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_IRNSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_IRNSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSAlmanac)[] = {
              { Py_tp_methods, t_IRNSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_IRNSSAlmanac_init_ },
              { Py_tp_getset, t_IRNSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(IRNSSAlmanac, t_IRNSSAlmanac, IRNSSAlmanac);

            void t_IRNSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSAlmanac), &PY_TYPE_DEF(IRNSSAlmanac), module, "IRNSSAlmanac", 0);
            }

            void t_IRNSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "class_", make_descriptor(IRNSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "wrapfn_", make_descriptor(t_IRNSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_IRNSSAlmanac::wrap_Object(IRNSSAlmanac(((t_IRNSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              IRNSSAlmanac object((jobject) NULL);

              INT_CALL(object = IRNSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg)
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

            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dcfb87c8aad36676] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Ljava/util/Map;Lorg/orekit/frames/FieldTransform;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
            mids$[mid_getIndices_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getIndices", "()Ljava/util/Map;");
            mids$[mid_getOffsetToInertialDownlink_88fa1fad93ade5d3] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getState_15e85d5301b90ef8] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_232470f1b769250c] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTauD_b157bc83ac48b3b3] = env->getMethodID(cls, "getTauD", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getTransitPV_232470f1b769250c] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTransitState_15e85d5301b90ef8] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithDerivatives::GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::java::util::Map & a1, const ::org::orekit::frames::FieldTransform & a2, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a3, const ::org::hipparchus::analysis::differentiation::Gradient & a4, const ::org::orekit::propagation::SpacecraftState & a5, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcfb87c8aad36676, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::java::util::Map GroundReceiverCommonParametersWithDerivatives::getIndices() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIndices_1e62c2f73fbdd1c4]));
        }

        ::org::orekit::frames::FieldTransform GroundReceiverCommonParametersWithDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_88fa1fad93ade5d3]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_15e85d5301b90ef8]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_232470f1b769250c]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GroundReceiverCommonParametersWithDerivatives::getTauD() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getTauD_b157bc83ac48b3b3]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_232470f1b769250c]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_15e85d5301b90ef8]));
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
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, indices),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getIndices, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithDerivatives, t_GroundReceiverCommonParametersWithDerivatives, GroundReceiverCommonParametersWithDerivatives);

        void t_GroundReceiverCommonParametersWithDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives), module, "GroundReceiverCommonParametersWithDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithDerivatives::wrap_Object(GroundReceiverCommonParametersWithDerivatives(((t_GroundReceiverCommonParametersWithDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::frames::FieldTransform a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::analysis::differentiation::Gradient a4((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a5((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a6((jobject) NULL);
          PyTypeObject **p6;
          GroundReceiverCommonParametersWithDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kKKKkkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::java::util::Map::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2, &p2, ::org::orekit::frames::t_FieldTransform::parameters_, &a3, &p3, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithDerivatives(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::frames::FieldTransform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::frames::FieldTransform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
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
                  mids$[mid_build_e9cba3a6a16c301c] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/omm/Omm;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_d7722dc369ae0874] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::Omm OmmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::Omm(env->callObjectMethod(this$, mids$[mid_build_e9cba3a6a16c301c]));
              }

              jboolean OmmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean OmmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean OmmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OmmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d7722dc369ae0874]));
              }

              ::java::util::Map OmmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
              }

              jboolean OmmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean OmmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean OmmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              jboolean OmmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean OmmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean OmmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void OmmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
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
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Authentication::class$ = NULL;
          jmethodID *Authentication::mids$ = NULL;
          bool Authentication::live$ = false;
          Authentication *Authentication::BASIC = NULL;
          Authentication *Authentication::DIGEST = NULL;
          Authentication *Authentication::NONE = NULL;

          jclass Authentication::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Authentication");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAuthentication_5be94ee2ae80af8b] = env->getStaticMethodID(cls, "getAuthentication", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_valueOf_5be94ee2ae80af8b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_values_5992da16d181ef32] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Authentication;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = new Authentication(env->getStaticObjectField(cls, "BASIC", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              DIGEST = new Authentication(env->getStaticObjectField(cls, "DIGEST", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              NONE = new Authentication(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Authentication Authentication::getAuthentication(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_getAuthentication_5be94ee2ae80af8b], a0.this$));
          }

          Authentication Authentication::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5be94ee2ae80af8b], a0.this$));
          }

          JArray< Authentication > Authentication::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Authentication >(env->callStaticObjectMethod(cls, mids$[mid_values_5992da16d181ef32]));
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
          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args);
          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Authentication_values(PyTypeObject *type);
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data);
          static PyGetSetDef t_Authentication__fields_[] = {
            DECLARE_GET_FIELD(t_Authentication, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Authentication__methods_[] = {
            DECLARE_METHOD(t_Authentication, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, of_, METH_VARARGS),
            DECLARE_METHOD(t_Authentication, getAuthentication, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Authentication, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Authentication)[] = {
            { Py_tp_methods, t_Authentication__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Authentication__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Authentication)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Authentication, t_Authentication, Authentication);
          PyObject *t_Authentication::wrap_Object(const Authentication& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Authentication::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Authentication::install(PyObject *module)
          {
            installType(&PY_TYPE(Authentication), &PY_TYPE_DEF(Authentication), module, "Authentication", 0);
          }

          void t_Authentication::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "class_", make_descriptor(Authentication::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "wrapfn_", make_descriptor(t_Authentication::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "boxfn_", make_descriptor(boxObject));
            env->getClass(Authentication::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "BASIC", make_descriptor(t_Authentication::wrap_Object(*Authentication::BASIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "DIGEST", make_descriptor(t_Authentication::wrap_Object(*Authentication::DIGEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "NONE", make_descriptor(t_Authentication::wrap_Object(*Authentication::NONE)));
          }

          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Authentication::initializeClass, 1)))
              return NULL;
            return t_Authentication::wrap_Object(Authentication(((t_Authentication *) arg)->object.this$));
          }
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Authentication::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::getAuthentication(a0));
              return t_Authentication::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getAuthentication", arg);
            return NULL;
          }

          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::valueOf(a0));
              return t_Authentication::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Authentication_values(PyTypeObject *type)
          {
            JArray< Authentication > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::values());
            return JArray<jobject>(result.this$).wrap(t_Authentication::wrap_jobject);
          }
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data)
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
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractOrbitInterpolator::mids$ = NULL;
      bool AbstractOrbitInterpolator::live$ = false;

      jclass AbstractOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fc65bf318d004af6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_checkOrbitsConsistency_3abde0be9b9c9773] = env->getStaticMethodID(cls, "checkOrbitsConsistency", "(Ljava/util/Collection;)V");
          mids$[mid_getOutputInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_5e9e8aa4ef832981] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractOrbitInterpolator::AbstractOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fc65bf318d004af6, a0, a1, a2.this$)) {}

      void AbstractOrbitInterpolator::checkOrbitsConsistency(const ::java::util::Collection & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrbitsConsistency_3abde0be9b9c9773], a0.this$);
      }

      ::org::orekit::frames::Frame AbstractOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::orbits::Orbit AbstractOrbitInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_interpolate_5e9e8aa4ef832981], a0.this$, a1.this$));
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
      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args);
      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self);
      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, checkOrbitsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractOrbitInterpolator, t_AbstractOrbitInterpolator, AbstractOrbitInterpolator);
      PyObject *t_AbstractOrbitInterpolator::wrap_Object(const AbstractOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOrbitInterpolator), &PY_TYPE_DEF(AbstractOrbitInterpolator), module, "AbstractOrbitInterpolator", 0);
      }

      void t_AbstractOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "class_", make_descriptor(AbstractOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractOrbitInterpolator::wrap_Object(AbstractOrbitInterpolator(((t_AbstractOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractOrbitInterpolator(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(::org::orekit::orbits::AbstractOrbitInterpolator::checkOrbitsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkOrbitsConsistency", arg);
        return NULL;
      }

      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::Orbit result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbstractOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldBoundedPropagator::class$ = NULL;
      jmethodID *FieldBoundedPropagator::mids$ = NULL;
      bool FieldBoundedPropagator::live$ = false;

      jclass FieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_f1fe4daf77c66560]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_f1fe4daf77c66560]));
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
      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args);
      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_FieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, minDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBoundedPropagator)[] = {
        { Py_tp_methods, t_FieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldPropagator),
        NULL
      };

      DEFINE_TYPE(FieldBoundedPropagator, t_FieldBoundedPropagator, FieldBoundedPropagator);
      PyObject *t_FieldBoundedPropagator::wrap_Object(const FieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBoundedPropagator), &PY_TYPE_DEF(FieldBoundedPropagator), module, "FieldBoundedPropagator", 0);
      }

      void t_FieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "class_", make_descriptor(FieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "wrapfn_", make_descriptor(t_FieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldBoundedPropagator::wrap_Object(FieldBoundedPropagator(((t_FieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *InterSensorsOptimizationProblemBuilder::class$ = NULL;
        jmethodID *InterSensorsOptimizationProblemBuilder::mids$ = NULL;
        bool InterSensorsOptimizationProblemBuilder::live$ = false;

        jclass InterSensorsOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_405f0f4d5bb16c1a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Ljava/util/Collection;)V");
            mids$[mid_build_d4732481b9968791] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_initMapping_0640e6acf969ed28] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_0640e6acf969ed28] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_createFunction_e31bcbfb9203b3a6] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSensorsOptimizationProblemBuilder::InterSensorsOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::java::util::Collection & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_405f0f4d5bb16c1a, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem InterSensorsOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_d4732481b9968791], a0, a1));
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
        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_InterSensorsOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSensorsOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_InterSensorsOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_InterSensorsOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSensorsOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(InterSensorsOptimizationProblemBuilder, t_InterSensorsOptimizationProblemBuilder, InterSensorsOptimizationProblemBuilder);

        void t_InterSensorsOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSensorsOptimizationProblemBuilder), &PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder), module, "InterSensorsOptimizationProblemBuilder", 0);
        }

        void t_InterSensorsOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "class_", make_descriptor(InterSensorsOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_InterSensorsOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_InterSensorsOptimizationProblemBuilder::wrap_Object(InterSensorsOptimizationProblemBuilder(((t_InterSensorsOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::java::util::Collection a2((jobject) NULL);
          PyTypeObject **p2;
          InterSensorsOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "KkK", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = InterSensorsOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterSensorsOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *AbstractMultivariateRealDistribution::class$ = NULL;
        jmethodID *AbstractMultivariateRealDistribution::mids$ = NULL;
        bool AbstractMultivariateRealDistribution::live$ = false;

        jclass AbstractMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_a53a7513ecedada2] = env->getMethodID(cls, "sample", "()[D");
            mids$[mid_sample_ace8110626df0bb8] = env->getMethodID(cls, "sample", "(I)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractMultivariateRealDistribution::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        void AbstractMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22], a0);
        }

        JArray< jdouble > AbstractMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_a53a7513ecedada2]));
        }

        JArray< JArray< jdouble > > AbstractMultivariateRealDistribution::sample(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_ace8110626df0bb8], a0));
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
      namespace multivariate {
        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self);
        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_AbstractMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMultivariateRealDistribution, dimension),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, reseedRandomGenerator, METH_O),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_AbstractMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultivariateRealDistribution, t_AbstractMultivariateRealDistribution, AbstractMultivariateRealDistribution);

        void t_AbstractMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultivariateRealDistribution), &PY_TYPE_DEF(AbstractMultivariateRealDistribution), module, "AbstractMultivariateRealDistribution", 0);
        }

        void t_AbstractMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "class_", make_descriptor(AbstractMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "wrapfn_", make_descriptor(t_AbstractMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractMultivariateRealDistribution::wrap_Object(AbstractMultivariateRealDistribution(((t_AbstractMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.sample());
              return result.wrap();
            }
            break;
           case 1:
            {
              jint a0;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.sample(a0));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sample", args);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well44497b.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497b::class$ = NULL;
      jmethodID *Well44497b::mids$ = NULL;
      bool Well44497b::live$ = false;

      jclass Well44497b::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497b");

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

      Well44497b::Well44497b() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well44497b::Well44497b(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well44497b::Well44497b(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well44497b::Well44497b(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well44497b::nextInt() const
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
      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args);

      static PyMethodDef t_Well44497b__methods_[] = {
        DECLARE_METHOD(t_Well44497b, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497b)[] = {
        { Py_tp_methods, t_Well44497b__methods_ },
        { Py_tp_init, (void *) t_Well44497b_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497b)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497b, t_Well44497b, Well44497b);

      void t_Well44497b::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497b), &PY_TYPE_DEF(Well44497b), module, "Well44497b", 0);
      }

      void t_Well44497b::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "class_", make_descriptor(Well44497b::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "wrapfn_", make_descriptor(t_Well44497b::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497b::initializeClass, 1)))
          return NULL;
        return t_Well44497b::wrap_Object(Well44497b(((t_Well44497b *) arg)->object.this$));
      }
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497b::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497b object((jobject) NULL);

            INT_CALL(object = Well44497b());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497b(a0));
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

      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497b), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Header::class$ = NULL;
              jmethodID *SsrIgm06Header::mids$ = NULL;
              bool SsrIgm06Header::live$ = false;

              jclass SsrIgm06Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_isConsistencyMaintained_89b302893bdbe1f1] = env->getMethodID(cls, "isConsistencyMaintained", "()Z");
                  mids$[mid_isMelbourneWubbenaConsistencyMaintained_89b302893bdbe1f1] = env->getMethodID(cls, "isMelbourneWubbenaConsistencyMaintained", "()Z");
                  mids$[mid_setIsConsistencyMaintained_ed2afdb8506b9742] = env->getMethodID(cls, "setIsConsistencyMaintained", "(Z)V");
                  mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_ed2afdb8506b9742] = env->getMethodID(cls, "setIsMelbourneWubbenaConsistencyMaintained", "(Z)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Header::SsrIgm06Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jboolean SsrIgm06Header::isConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isConsistencyMaintained_89b302893bdbe1f1]);
              }

              jboolean SsrIgm06Header::isMelbourneWubbenaConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isMelbourneWubbenaConsistencyMaintained_89b302893bdbe1f1]);
              }

              void SsrIgm06Header::setIsConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsConsistencyMaintained_ed2afdb8506b9742], a0);
              }

              void SsrIgm06Header::setIsMelbourneWubbenaConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_ed2afdb8506b9742], a0);
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
            namespace igm {
              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyGetSetDef t_SsrIgm06Header__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06Header, consistencyMaintained),
                DECLARE_GET_FIELD(t_SsrIgm06Header, melbourneWubbenaConsistencyMaintained),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, isConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, isMelbourneWubbenaConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, setIsConsistencyMaintained, METH_O),
                DECLARE_METHOD(t_SsrIgm06Header, setIsMelbourneWubbenaConsistencyMaintained, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Header)[] = {
                { Py_tp_methods, t_SsrIgm06Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Header_init_ },
                { Py_tp_getset, t_SsrIgm06Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Header, t_SsrIgm06Header, SsrIgm06Header);

              void t_SsrIgm06Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Header), &PY_TYPE_DEF(SsrIgm06Header), module, "SsrIgm06Header", 0);
              }

              void t_SsrIgm06Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "class_", make_descriptor(SsrIgm06Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "wrapfn_", make_descriptor(t_SsrIgm06Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Header::wrap_Object(SsrIgm06Header(((t_SsrIgm06Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Header object((jobject) NULL);

                INT_CALL(object = SsrIgm06Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsMelbourneWubbenaConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsMelbourneWubbenaConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isMelbourneWubbenaConsistencyMaintained());
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
#include "org/orekit/gnss/rflink/gps/SubFrame4D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4D::class$ = NULL;
          jmethodID *SubFrame4D::mids$ = NULL;
          bool SubFrame4D::live$ = false;

          jclass SubFrame4D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA0_557b8123390d8d0c] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_557b8123390d8d0c] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getAlpha0_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha0", "()D");
              mids$[mid_getAlpha1_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha1", "()D");
              mids$[mid_getAlpha2_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha2", "()D");
              mids$[mid_getAlpha3_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha3", "()D");
              mids$[mid_getBeta0_557b8123390d8d0c] = env->getMethodID(cls, "getBeta0", "()D");
              mids$[mid_getBeta1_557b8123390d8d0c] = env->getMethodID(cls, "getBeta1", "()D");
              mids$[mid_getBeta2_557b8123390d8d0c] = env->getMethodID(cls, "getBeta2", "()D");
              mids$[mid_getBeta3_557b8123390d8d0c] = env->getMethodID(cls, "getBeta3", "()D");
              mids$[mid_getDeltaTLs_412668abc8d889e9] = env->getMethodID(cls, "getDeltaTLs", "()I");
              mids$[mid_getDeltaTLsf_412668abc8d889e9] = env->getMethodID(cls, "getDeltaTLsf", "()I");
              mids$[mid_getDn_412668abc8d889e9] = env->getMethodID(cls, "getDn", "()I");
              mids$[mid_getReserved10_412668abc8d889e9] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getTot_412668abc8d889e9] = env->getMethodID(cls, "getTot", "()I");
              mids$[mid_getWeekNumberLsf_412668abc8d889e9] = env->getMethodID(cls, "getWeekNumberLsf", "()I");
              mids$[mid_getWeekNumberT_412668abc8d889e9] = env->getMethodID(cls, "getWeekNumberT", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame4D::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getAlpha0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha0_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getAlpha1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha1_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getAlpha2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha2_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getAlpha3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha3_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getBeta0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta0_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getBeta1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta1_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getBeta2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta2_557b8123390d8d0c]);
          }

          jdouble SubFrame4D::getBeta3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta3_557b8123390d8d0c]);
          }

          jint SubFrame4D::getDeltaTLs() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLs_412668abc8d889e9]);
          }

          jint SubFrame4D::getDeltaTLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLsf_412668abc8d889e9]);
          }

          jint SubFrame4D::getDn() const
          {
            return env->callIntMethod(this$, mids$[mid_getDn_412668abc8d889e9]);
          }

          jint SubFrame4D::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_412668abc8d889e9]);
          }

          jint SubFrame4D::getTot() const
          {
            return env->callIntMethod(this$, mids$[mid_getTot_412668abc8d889e9]);
          }

          jint SubFrame4D::getWeekNumberLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberLsf_412668abc8d889e9]);
          }

          jint SubFrame4D::getWeekNumberT() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberT_412668abc8d889e9]);
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
          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data);
          static PyGetSetDef t_SubFrame4D__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4D, a0),
            DECLARE_GET_FIELD(t_SubFrame4D, a1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha0),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha2),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha3),
            DECLARE_GET_FIELD(t_SubFrame4D, beta0),
            DECLARE_GET_FIELD(t_SubFrame4D, beta1),
            DECLARE_GET_FIELD(t_SubFrame4D, beta2),
            DECLARE_GET_FIELD(t_SubFrame4D, beta3),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLs),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, dn),
            DECLARE_GET_FIELD(t_SubFrame4D, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4D, tot),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberT),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4D__methods_[] = {
            DECLARE_METHOD(t_SubFrame4D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDn, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getTot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberT, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4D)[] = {
            { Py_tp_methods, t_SubFrame4D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4D)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4D, t_SubFrame4D, SubFrame4D);

          void t_SubFrame4D::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4D), &PY_TYPE_DEF(SubFrame4D), module, "SubFrame4D", 0);
          }

          void t_SubFrame4D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "class_", make_descriptor(SubFrame4D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "wrapfn_", make_descriptor(t_SubFrame4D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4D::initializeClass, 1)))
              return NULL;
            return t_SubFrame4D::wrap_Object(SubFrame4D(((t_SubFrame4D *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLs());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTot());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberT());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLs());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTot());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberT());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Data::class$ = NULL;
              jmethodID *SsrIgm03Data::mids$ = NULL;
              bool SsrIgm03Data::live$ = false;

              jclass SsrIgm03Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_96d5462b84e1a874] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_412668abc8d889e9] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_58d117cad6f91792] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_cf572ee5ddb143ac] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_a3da1a935cb37f7b] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_9a400e8af37b7414] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Data::SsrIgm03Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm03Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_96d5462b84e1a874]));
              }

              jint SsrIgm03Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm03Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_58d117cad6f91792]));
              }

              void SsrIgm03Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_cf572ee5ddb143ac], a0.this$);
              }

              void SsrIgm03Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_a3da1a935cb37f7b], a0);
              }

              void SsrIgm03Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_9a400e8af37b7414], a0.this$);
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
            namespace igm {
              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, clockCorrection),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, setClockCorrection, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Data)[] = {
                { Py_tp_methods, t_SsrIgm03Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Data_init_ },
                { Py_tp_getset, t_SsrIgm03Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Data, t_SsrIgm03Data, SsrIgm03Data);

              void t_SsrIgm03Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Data), &PY_TYPE_DEF(SsrIgm03Data), module, "SsrIgm03Data", 0);
              }

              void t_SsrIgm03Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "class_", make_descriptor(SsrIgm03Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "wrapfn_", make_descriptor(t_SsrIgm03Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Data::wrap_Object(SsrIgm03Data(((t_SsrIgm03Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Data object((jobject) NULL);

                INT_CALL(object = SsrIgm03Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3FileType::class$ = NULL;
        jmethodID *SP3FileType::mids$ = NULL;
        bool SP3FileType::live$ = false;
        SP3FileType *SP3FileType::COMPASS = NULL;
        SP3FileType *SP3FileType::GALILEO = NULL;
        SP3FileType *SP3FileType::GLONASS = NULL;
        SP3FileType *SP3FileType::GPS = NULL;
        SP3FileType *SP3FileType::IRNSS = NULL;
        SP3FileType *SP3FileType::LEO = NULL;
        SP3FileType *SP3FileType::MIXED = NULL;
        SP3FileType *SP3FileType::QZSS = NULL;
        SP3FileType *SP3FileType::SBAS = NULL;
        SP3FileType *SP3FileType::UNDEFINED = NULL;

        jclass SP3FileType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3FileType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_bc5676c6440b8f4c] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_valueOf_bc5676c6440b8f4c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_values_75bb43e1028b8def] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3FileType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            COMPASS = new SP3FileType(env->getStaticObjectField(cls, "COMPASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GALILEO = new SP3FileType(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            GLONASS = new SP3FileType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GPS = new SP3FileType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/sp3/SP3FileType;"));
            IRNSS = new SP3FileType(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            LEO = new SP3FileType(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            MIXED = new SP3FileType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/SP3FileType;"));
            QZSS = new SP3FileType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            SBAS = new SP3FileType(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/files/sp3/SP3FileType;"));
            UNDEFINED = new SP3FileType(env->getStaticObjectField(cls, "UNDEFINED", "Lorg/orekit/files/sp3/SP3FileType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String SP3FileType::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
        }

        SP3FileType SP3FileType::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_parse_bc5676c6440b8f4c], a0.this$));
        }

        SP3FileType SP3FileType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bc5676c6440b8f4c], a0.this$));
        }

        JArray< SP3FileType > SP3FileType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3FileType >(env->callStaticObjectMethod(cls, mids$[mid_values_75bb43e1028b8def]));
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
      namespace sp3 {
        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args);
        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self);
        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3FileType_values(PyTypeObject *type);
        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data);
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data);
        static PyGetSetDef t_SP3FileType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3FileType, key),
          DECLARE_GET_FIELD(t_SP3FileType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3FileType__methods_[] = {
          DECLARE_METHOD(t_SP3FileType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3FileType, getKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3FileType, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3FileType)[] = {
          { Py_tp_methods, t_SP3FileType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3FileType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3FileType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3FileType, t_SP3FileType, SP3FileType);
        PyObject *t_SP3FileType::wrap_Object(const SP3FileType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3FileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3FileType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3FileType), &PY_TYPE_DEF(SP3FileType), module, "SP3FileType", 0);
        }

        void t_SP3FileType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "class_", make_descriptor(SP3FileType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "wrapfn_", make_descriptor(t_SP3FileType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3FileType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "COMPASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::COMPASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GALILEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GALILEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GLONASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GPS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GPS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "IRNSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::IRNSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "LEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::LEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "MIXED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "QZSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "SBAS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::SBAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "UNDEFINED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::UNDEFINED)));
        }

        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3FileType::initializeClass, 1)))
            return NULL;
          return t_SP3FileType::wrap_Object(SP3FileType(((t_SP3FileType *) arg)->object.this$));
        }
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3FileType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::parse(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::valueOf(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3FileType_values(PyTypeObject *type)
        {
          JArray< SP3FileType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3FileType::wrap_jobject);
        }
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Enum.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeEndpoints::class$ = NULL;
            jmethodID *AttitudeEndpoints::mids$ = NULL;
            bool AttitudeEndpoints::live$ = false;
            ::java::lang::String *AttitudeEndpoints::A2B = NULL;
            ::java::lang::String *AttitudeEndpoints::B2A = NULL;

            jclass AttitudeEndpoints::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_4329b81cdba13b7b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
                mids$[mid_build_76e687ee866bdc48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
                mids$[mid_checkExternalFrame_a149591111ac16ba] = env->getMethodID(cls, "checkExternalFrame", "(Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_checkMandatoryEntriesExceptExternalFrame_220b7e9d21985607] = env->getMethodID(cls, "checkMandatoryEntriesExceptExternalFrame", "(DLjava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_getExternalFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getExternalFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameA_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrameA", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameB_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrameB", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getSpacecraftBodyFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_isA2b_89b302893bdbe1f1] = env->getMethodID(cls, "isA2b", "()Z");
                mids$[mid_isCompatibleWith_9b08e60715a7a476] = env->getMethodID(cls, "isCompatibleWith", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;)Z");
                mids$[mid_isExternal2SpacecraftBody_89b302893bdbe1f1] = env->getMethodID(cls, "isExternal2SpacecraftBody", "()Z");
                mids$[mid_setA2b_ed2afdb8506b9742] = env->getMethodID(cls, "setA2b", "(Z)V");
                mids$[mid_setFrameA_f55eee1236275bb1] = env->getMethodID(cls, "setFrameA", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setFrameB_f55eee1236275bb1] = env->getMethodID(cls, "setFrameB", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                A2B = new ::java::lang::String(env->getStaticObjectField(cls, "A2B", "Ljava/lang/String;"));
                B2A = new ::java::lang::String(env->getStaticObjectField(cls, "B2A", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AttitudeEndpoints::AttitudeEndpoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::orekit::attitudes::FieldAttitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_4329b81cdba13b7b], a0.this$, a1.this$, a2.this$));
            }

            ::org::orekit::attitudes::Attitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_76e687ee866bdc48], a0.this$, a1.this$, a2.this$));
            }

            void AttitudeEndpoints::checkExternalFrame(const ::java::lang::Enum & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkExternalFrame_a149591111ac16ba], a0.this$, a1.this$);
            }

            void AttitudeEndpoints::checkMandatoryEntriesExceptExternalFrame(jdouble a0, const ::java::lang::Enum & a1, const ::java::lang::Enum & a2, const ::java::lang::Enum & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_checkMandatoryEntriesExceptExternalFrame_220b7e9d21985607], a0, a1.this$, a2.this$, a3.this$);
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getExternalFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getExternalFrame_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameA() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameA_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameB() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameB_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getSpacecraftBodyFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getSpacecraftBodyFrame_98f5fcaff3e3f9d2]));
            }

            jboolean AttitudeEndpoints::isA2b() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isA2b_89b302893bdbe1f1]);
            }

            jboolean AttitudeEndpoints::isCompatibleWith(const AttitudeEndpoints & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_9b08e60715a7a476], a0.this$);
            }

            jboolean AttitudeEndpoints::isExternal2SpacecraftBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isExternal2SpacecraftBody_89b302893bdbe1f1]);
            }

            void AttitudeEndpoints::setA2b(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA2b_ed2afdb8506b9742], a0);
            }

            void AttitudeEndpoints::setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameA_f55eee1236275bb1], a0.this$);
            }

            void AttitudeEndpoints::setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameB_f55eee1236275bb1], a0.this$);
            }

            ::java::lang::String AttitudeEndpoints::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data);
            static PyGetSetDef t_AttitudeEndpoints__fields_[] = {
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, a2b),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, external2SpacecraftBody),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, externalFrame),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameA),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameB),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, spacecraftBodyFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeEndpoints__methods_[] = {
              DECLARE_METHOD(t_AttitudeEndpoints, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkMandatoryEntriesExceptExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getExternalFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameA, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameB, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getSpacecraftBodyFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isA2b, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isCompatibleWith, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, isExternal2SpacecraftBody, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, setA2b, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameA, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameB, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, toString, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeEndpoints)[] = {
              { Py_tp_methods, t_AttitudeEndpoints__methods_ },
              { Py_tp_init, (void *) t_AttitudeEndpoints_init_ },
              { Py_tp_getset, t_AttitudeEndpoints__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeEndpoints)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AttitudeEndpoints, t_AttitudeEndpoints, AttitudeEndpoints);

            void t_AttitudeEndpoints::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeEndpoints), &PY_TYPE_DEF(AttitudeEndpoints), module, "AttitudeEndpoints", 0);
            }

            void t_AttitudeEndpoints::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "class_", make_descriptor(AttitudeEndpoints::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "wrapfn_", make_descriptor(t_AttitudeEndpoints::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeEndpoints::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "A2B", make_descriptor(j2p(*AttitudeEndpoints::A2B)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "B2A", make_descriptor(j2p(*AttitudeEndpoints::B2A)));
            }

            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeEndpoints::initializeClass, 1)))
                return NULL;
              return t_AttitudeEndpoints::wrap_Object(AttitudeEndpoints(((t_AttitudeEndpoints *) arg)->object.this$));
            }
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeEndpoints::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds)
            {
              AttitudeEndpoints object((jobject) NULL);

              INT_CALL(object = AttitudeEndpoints());
              self->object = object;

              return 0;
            }

            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                  ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
                  ::org::orekit::attitudes::Attitude result((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                  if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkExternalFrame(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              jdouble a0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::lang::Enum a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Enum a3((jobject) NULL);
              PyTypeObject **p3;

              if (!parseArgs(args, "DKKK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2, &p2, ::java::lang::t_Enum::parameters_, &a3, &p3, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkMandatoryEntriesExceptExternalFrame(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkMandatoryEntriesExceptExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isA2b());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg)
            {
              AttitudeEndpoints a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", AttitudeEndpoints::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isCompatibleWith(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setA2b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA2b", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameA", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameB(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameB", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeEndpoints), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isA2b());
              Py_RETURN_BOOL(value);
            }
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setA2b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a2b", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }

            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameA", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameB(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameB", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TimingSystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TimingSystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$TimingSystemConfiguration::live$ = false;

        jclass CRDConfiguration$TimingSystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEpochDelayCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getEpochDelayCorrection", "()D");
            mids$[mid_getFrequencySource_3cffd47377eca18a] = env->getMethodID(cls, "getFrequencySource", "()Ljava/lang/String;");
            mids$[mid_getLocalTimingId_3cffd47377eca18a] = env->getMethodID(cls, "getLocalTimingId", "()Ljava/lang/String;");
            mids$[mid_getTimeSource_3cffd47377eca18a] = env->getMethodID(cls, "getTimeSource", "()Ljava/lang/String;");
            mids$[mid_getTimer_3cffd47377eca18a] = env->getMethodID(cls, "getTimer", "()Ljava/lang/String;");
            mids$[mid_getTimerSerialNumber_3cffd47377eca18a] = env->getMethodID(cls, "getTimerSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setEpochDelayCorrection_10f281d777284cea] = env->getMethodID(cls, "setEpochDelayCorrection", "(D)V");
            mids$[mid_setFrequencySource_f5ffdf29129ef90a] = env->getMethodID(cls, "setFrequencySource", "(Ljava/lang/String;)V");
            mids$[mid_setLocalTimingId_f5ffdf29129ef90a] = env->getMethodID(cls, "setLocalTimingId", "(Ljava/lang/String;)V");
            mids$[mid_setTimeSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setTimeSource", "(Ljava/lang/String;)V");
            mids$[mid_setTimer_f5ffdf29129ef90a] = env->getMethodID(cls, "setTimer", "(Ljava/lang/String;)V");
            mids$[mid_setTimerSerialNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setTimerSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TimingSystemConfiguration::CRDConfiguration$TimingSystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble CRDConfiguration$TimingSystemConfiguration::getEpochDelayCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochDelayCorrection_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getFrequencySource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrequencySource_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getLocalTimingId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalTimingId_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimeSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSource_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimer_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimerSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimerSerialNumber_3cffd47377eca18a]));
        }

        void CRDConfiguration$TimingSystemConfiguration::setEpochDelayCorrection(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochDelayCorrection_10f281d777284cea], a0);
        }

        void CRDConfiguration$TimingSystemConfiguration::setFrequencySource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFrequencySource_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setLocalTimingId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLocalTimingId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimeSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSource_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimer_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimerSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimerSerialNumber_f5ffdf29129ef90a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TimingSystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, epochDelayCorrection),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, frequencySource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, localTimingId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timeSource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timerSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TimingSystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getEpochDelayCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getFrequencySource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getLocalTimingId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimeSource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimerSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setEpochDelayCorrection, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setFrequencySource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setLocalTimingId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimeSource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimerSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TimingSystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TimingSystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TimingSystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TimingSystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TimingSystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TimingSystemConfiguration, t_CRDConfiguration$TimingSystemConfiguration, CRDConfiguration$TimingSystemConfiguration);

        void t_CRDConfiguration$TimingSystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TimingSystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration), module, "CRDConfiguration$TimingSystemConfiguration", 0);
        }

        void t_CRDConfiguration$TimingSystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "class_", make_descriptor(CRDConfiguration$TimingSystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TimingSystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(CRDConfiguration$TimingSystemConfiguration(((t_CRDConfiguration$TimingSystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TimingSystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TimingSystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencySource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLocalTimingId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimerSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochDelayCorrection(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochDelayCorrection", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFrequencySource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFrequencySource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLocalTimingId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLocalTimingId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimeSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimerSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimerSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochDelayCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochDelayCorrection", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencySource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFrequencySource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "frequencySource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalTimingId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLocalTimingId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "localTimingId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimeSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimer());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimerSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimerSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timerSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateIonosphericDelayModifier::BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          void BistaticRangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void BistaticRangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateIonosphericDelayModifier, t_BistaticRangeRateIonosphericDelayModifier, BistaticRangeRateIonosphericDelayModifier);

          void t_BistaticRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateIonosphericDelayModifier), module, "BistaticRangeRateIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateIonosphericDelayModifier::wrap_Object(BistaticRangeRateIonosphericDelayModifier(((t_BistaticRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeRateIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MultiplexedMeasurementBuilder::class$ = NULL;
          jmethodID *MultiplexedMeasurementBuilder::mids$ = NULL;
          bool MultiplexedMeasurementBuilder::live$ = false;

          jclass MultiplexedMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_6fd4734691683ef8] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/MultiplexedMeasurement;");
              mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_b8c09fefa9db3b83] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiplexedMeasurementBuilder::MultiplexedMeasurementBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

          void MultiplexedMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_6f472135bf397672], a0.this$);
          }

          ::org::orekit::estimation::measurements::MultiplexedMeasurement MultiplexedMeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::MultiplexedMeasurement(env->callObjectMethod(this$, mids$[mid_build_6fd4734691683ef8], a0.this$, a1.this$));
          }

          ::java::util::List MultiplexedMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_0d9551367f7ecdef]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MultiplexedMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_b8c09fefa9db3b83]));
          }

          void MultiplexedMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyGetSetDef t_MultiplexedMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, satellites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiplexedMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurementBuilder)[] = {
            { Py_tp_methods, t_MultiplexedMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_MultiplexedMeasurementBuilder_init_ },
            { Py_tp_getset, t_MultiplexedMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultiplexedMeasurementBuilder, t_MultiplexedMeasurementBuilder, MultiplexedMeasurementBuilder);

          void t_MultiplexedMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiplexedMeasurementBuilder), &PY_TYPE_DEF(MultiplexedMeasurementBuilder), module, "MultiplexedMeasurementBuilder", 0);
          }

          void t_MultiplexedMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "class_", make_descriptor(MultiplexedMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "wrapfn_", make_descriptor(t_MultiplexedMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MultiplexedMeasurementBuilder::wrap_Object(MultiplexedMeasurementBuilder(((t_MultiplexedMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MultiplexedMeasurementBuilder object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MultiplexedMeasurementBuilder(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_MultiplexedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008::class$ = NULL;
          jmethodID *JB2008::mids$ = NULL;
          bool JB2008::live$ = false;

          jclass JB2008::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e7a1189cc9b12fae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_3e36eaa773f82fe8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_88d18a18f8513830] = env->getMethodID(cls, "getDensity", "(DDDDDDDDDDDDDDD)D");
              mids$[mid_getDensity_32da7eaa37881d06] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDDDDDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7a1189cc9b12fae, a0.this$, a1.this$, a2.this$)) {}

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e36eaa773f82fe8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          jdouble JB2008::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          jdouble JB2008::getDensity(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_88d18a18f8513830], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_32da7eaa37881d06], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          }

          ::org::orekit::frames::Frame JB2008::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args);
          static PyObject *t_JB2008_getFrame(t_JB2008 *self);
          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data);
          static PyGetSetDef t_JB2008__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008__methods_[] = {
            DECLARE_METHOD(t_JB2008, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_JB2008, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008)[] = {
            { Py_tp_methods, t_JB2008__methods_ },
            { Py_tp_init, (void *) t_JB2008_init_ },
            { Py_tp_getset, t_JB2008__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JB2008, t_JB2008, JB2008);

          void t_JB2008::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008), &PY_TYPE_DEF(JB2008), module, "JB2008", 0);
          }

          void t_JB2008::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "class_", make_descriptor(JB2008::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "wrapfn_", make_descriptor(t_JB2008::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008::initializeClass, 1)))
              return NULL;
            return t_JB2008::wrap_Object(JB2008(((t_JB2008 *) arg)->object.this$));
          }
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = JB2008(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = JB2008(a0, a1, a2, a3));
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

          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 15:
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
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble result;

                if (!parseArgs(args, "DDDDDDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
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
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKKKDDDDDDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_JB2008_getFrame(t_JB2008 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixFormat::class$ = NULL;
      jmethodID *RealMatrixFormat::mids$ = NULL;
      bool RealMatrixFormat::live$ = false;

      jclass RealMatrixFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_7ef3cb05fa691170] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_27cbbcdef5ceb319] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_d9d9257bc38f92d9] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;)Ljava/lang/String;");
          mids$[mid_format_f5a59753aa65c5c2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getColumnSeparator_3cffd47377eca18a] = env->getMethodID(cls, "getColumnSeparator", "()Ljava/lang/String;");
          mids$[mid_getFormat_001645e916bd626d] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealMatrixFormat_585ececd2b2dc96d] = env->getStaticMethodID(cls, "getRealMatrixFormat", "()Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRealMatrixFormat_9305d502db00d8a7] = env->getStaticMethodID(cls, "getRealMatrixFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRowPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getRowPrefix", "()Ljava/lang/String;");
          mids$[mid_getRowSeparator_3cffd47377eca18a] = env->getMethodID(cls, "getRowSeparator", "()Ljava/lang/String;");
          mids$[mid_getRowSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getRowSuffix", "()Ljava/lang/String;");
          mids$[mid_getSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_f40bf79e7cf80d97] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_parse_89d35fd76436d8a2] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrixFormat::RealMatrixFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ef3cb05fa691170, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::text::NumberFormat & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27cbbcdef5ceb319, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::java::lang::String RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_d9d9257bc38f92d9], a0.this$));
      }

      ::java::lang::StringBuffer RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5a59753aa65c5c2], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealMatrixFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      ::java::lang::String RealMatrixFormat::getColumnSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getColumnSeparator_3cffd47377eca18a]));
      }

      ::java::text::NumberFormat RealMatrixFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_001645e916bd626d]));
      }

      ::java::lang::String RealMatrixFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_3cffd47377eca18a]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_585ececd2b2dc96d]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_9305d502db00d8a7], a0.this$));
      }

      ::java::lang::String RealMatrixFormat::getRowPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowPrefix_3cffd47377eca18a]));
      }

      ::java::lang::String RealMatrixFormat::getRowSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSeparator_3cffd47377eca18a]));
      }

      ::java::lang::String RealMatrixFormat::getRowSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSuffix_3cffd47377eca18a]));
      }

      ::java::lang::String RealMatrixFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_3cffd47377eca18a]));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_f40bf79e7cf80d97], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_89d35fd76436d8a2], a0.this$, a1.this$));
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
      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data);
      static PyGetSetDef t_RealMatrixFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrixFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealMatrixFormat, columnSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, prefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, realMatrixFormat),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowPrefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSuffix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrixFormat__methods_[] = {
        DECLARE_METHOD(t_RealMatrixFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getColumnSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRealMatrixFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixFormat)[] = {
        { Py_tp_methods, t_RealMatrixFormat__methods_ },
        { Py_tp_init, (void *) t_RealMatrixFormat_init_ },
        { Py_tp_getset, t_RealMatrixFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixFormat, t_RealMatrixFormat, RealMatrixFormat);

      void t_RealMatrixFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixFormat), &PY_TYPE_DEF(RealMatrixFormat), module, "RealMatrixFormat", 0);
      }

      void t_RealMatrixFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "class_", make_descriptor(RealMatrixFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "wrapfn_", make_descriptor(t_RealMatrixFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixFormat::initializeClass, 1)))
          return NULL;
        return t_RealMatrixFormat::wrap_Object(RealMatrixFormat(((t_RealMatrixFormat *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat object((jobject) NULL);

            INT_CALL(object = RealMatrixFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealMatrixFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            ::java::text::NumberFormat a6((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getColumnSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat());
            return t_RealMatrixFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealMatrixFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat(a0));
              return t_RealMatrixFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealMatrixFormat", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getColumnSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data)
      {
        RealMatrixFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealMatrixFormat());
        return t_RealMatrixFormat::wrap_Object(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSuffix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
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
              mids$[mid_init$_be9548a8a583a03d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getOutline_94f17f0a661d1fc6] = env->getMethodID(cls, "getOutline", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;)[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlineExtractor::OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9548a8a583a03d, a0.this$, a1.this$)) {}

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > OutlineExtractor::getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet & a0) const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getOutline_94f17f0a661d1fc6], a0.this$));
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
#include "java/util/function/IntConsumer.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *IntConsumer::class$ = NULL;
      jmethodID *IntConsumer::mids$ = NULL;
      bool IntConsumer::live$ = false;

      jclass IntConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/IntConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_a3da1a935cb37f7b] = env->getMethodID(cls, "accept", "(I)V");
          mids$[mid_andThen_3bb71483b6bd180d] = env->getMethodID(cls, "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IntConsumer::accept(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_a3da1a935cb37f7b], a0);
      }

      IntConsumer IntConsumer::andThen(const IntConsumer & a0) const
      {
        return IntConsumer(env->callObjectMethod(this$, mids$[mid_andThen_3bb71483b6bd180d], a0.this$));
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
      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg);
      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg);

      static PyMethodDef t_IntConsumer__methods_[] = {
        DECLARE_METHOD(t_IntConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, accept, METH_O),
        DECLARE_METHOD(t_IntConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntConsumer)[] = {
        { Py_tp_methods, t_IntConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntConsumer, t_IntConsumer, IntConsumer);

      void t_IntConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(IntConsumer), &PY_TYPE_DEF(IntConsumer), module, "IntConsumer", 0);
      }

      void t_IntConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "class_", make_descriptor(IntConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "wrapfn_", make_descriptor(t_IntConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntConsumer::initializeClass, 1)))
          return NULL;
        return t_IntConsumer::wrap_Object(IntConsumer(((t_IntConsumer *) arg)->object.this$));
      }
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg)
      {
        IntConsumer a0((jobject) NULL);
        IntConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", IntConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_IntConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
