#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$InconsistentStateAt2PiWrapping::class$ = NULL;
          jmethodID *ArcsSet$InconsistentStateAt2PiWrapping::mids$ = NULL;
          bool ArcsSet$InconsistentStateAt2PiWrapping::live$ = false;

          jclass ArcsSet$InconsistentStateAt2PiWrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet$InconsistentStateAt2PiWrapping::ArcsSet$InconsistentStateAt2PiWrapping() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
        namespace oned {
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args);
          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data);
          static PyGetSetDef t_ArcsSet$InconsistentStateAt2PiWrapping__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$InconsistentStateAt2PiWrapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$InconsistentStateAt2PiWrapping__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            { Py_tp_methods, t_ArcsSet$InconsistentStateAt2PiWrapping__methods_ },
            { Py_tp_init, (void *) t_ArcsSet$InconsistentStateAt2PiWrapping_init_ },
            { Py_tp_getset, t_ArcsSet$InconsistentStateAt2PiWrapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
            NULL
          };

          DEFINE_TYPE(ArcsSet$InconsistentStateAt2PiWrapping, t_ArcsSet$InconsistentStateAt2PiWrapping, ArcsSet$InconsistentStateAt2PiWrapping);
          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), &PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping), module, "ArcsSet$InconsistentStateAt2PiWrapping", 0);
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "class_", make_descriptor(ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "wrapfn_", make_descriptor(t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(ArcsSet$InconsistentStateAt2PiWrapping(((t_ArcsSet$InconsistentStateAt2PiWrapping *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds)
          {
            ArcsSet$InconsistentStateAt2PiWrapping object((jobject) NULL);

            INT_CALL(object = ArcsSet$InconsistentStateAt2PiWrapping());
            self->object = object;
            self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);

            return 0;
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere::class$ = NULL;
        jmethodID *InterpolatingMicrosphere::mids$ = NULL;
        bool InterpolatingMicrosphere::live$ = false;

        jclass InterpolatingMicrosphere::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c22db685632bea7] = env->getMethodID(cls, "<init>", "(IIDDDLorg/hipparchus/random/UnitSphereRandomVectorGenerator;)V");
            mids$[mid_copy_a7d66e8901ff57bc] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_value_7ccc6a6851373f5c] = env->getMethodID(cls, "value", "([D[[D[DDD)D");
            mids$[mid_add_2808bdf785b578a3] = env->getMethodID(cls, "add", "([DZ)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere::InterpolatingMicrosphere(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c22db685632bea7, a0, a1, a2, a3, a4, a5.this$)) {}

        InterpolatingMicrosphere InterpolatingMicrosphere::copy() const
        {
          return InterpolatingMicrosphere(env->callObjectMethod(this$, mids$[mid_copy_a7d66e8901ff57bc]));
        }

        jint InterpolatingMicrosphere::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        jint InterpolatingMicrosphere::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_55546ef6a647f39b]);
        }

        jdouble InterpolatingMicrosphere::value(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< jdouble > & a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7ccc6a6851373f5c], a0.this$, a1.this$, a2.this$, a3, a4);
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
      namespace interpolation {
        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args);
        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data);
        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data);
        static PyGetSetDef t_InterpolatingMicrosphere__fields_[] = {
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, dimension),
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterpolatingMicrosphere__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, copy, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getSize, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere_init_ },
          { Py_tp_getset, t_InterpolatingMicrosphere__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere, t_InterpolatingMicrosphere, InterpolatingMicrosphere);

        void t_InterpolatingMicrosphere::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere), &PY_TYPE_DEF(InterpolatingMicrosphere), module, "InterpolatingMicrosphere", 0);
        }

        void t_InterpolatingMicrosphere::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "class_", make_descriptor(InterpolatingMicrosphere::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere::wrap_Object(InterpolatingMicrosphere(((t_InterpolatingMicrosphere *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::random::UnitSphereRandomVectorGenerator a5((jobject) NULL);
          InterpolatingMicrosphere object((jobject) NULL);

          if (!parseArgs(args, "IIDDDk", ::org::hipparchus::random::UnitSphereRandomVectorGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = InterpolatingMicrosphere(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self)
        {
          InterpolatingMicrosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_InterpolatingMicrosphere::wrap_Object(result);
        }

        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble result;

          if (!parseArgs(args, "[D[[D[DDD", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *AbstractSimplex::class$ = NULL;
            jmethodID *AbstractSimplex::mids$ = NULL;
            bool AbstractSimplex::live$ = false;

            jclass AbstractSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_ab69da052b88f50c] = env->getMethodID(cls, "build", "([D)V");
                mids$[mid_evaluate_7c5f20de6989de35] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
                mids$[mid_getPoint_e9b1472253148099] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getPoints_326f59a2f136a3de] = env->getMethodID(cls, "getPoints", "()[Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");
                mids$[mid_iterate_7c5f20de6989de35] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_setPoints_69be9412a3623a09] = env->getMethodID(cls, "setPoints", "([Lorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_setPoint_0edefa101b8dfd74] = env->getMethodID(cls, "setPoint", "(ILorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_replaceWorstPoint_c18bea1c44829a53] = env->getMethodID(cls, "replaceWorstPoint", "(Lorg/hipparchus/optim/PointValuePair;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractSimplex::build(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_build_ab69da052b88f50c], a0.this$);
            }

            void AbstractSimplex::evaluate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_evaluate_7c5f20de6989de35], a0.this$, a1.this$);
            }

            jint AbstractSimplex::getDimension() const
            {
              return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
            }

            ::org::hipparchus::optim::PointValuePair AbstractSimplex::getPoint(jint a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getPoint_e9b1472253148099], a0));
            }

            JArray< ::org::hipparchus::optim::PointValuePair > AbstractSimplex::getPoints() const
            {
              return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getPoints_326f59a2f136a3de]));
            }

            jint AbstractSimplex::getSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getSize_55546ef6a647f39b]);
            }

            void AbstractSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_7c5f20de6989de35], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data);
            static PyGetSetDef t_AbstractSimplex__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSimplex, dimension),
              DECLARE_GET_FIELD(t_AbstractSimplex, points),
              DECLARE_GET_FIELD(t_AbstractSimplex, size),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSimplex__methods_[] = {
              DECLARE_METHOD(t_AbstractSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, build, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, evaluate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSimplex, getDimension, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getPoint, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, getPoints, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getSize, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSimplex)[] = {
              { Py_tp_methods, t_AbstractSimplex__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSimplex__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSimplex)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSimplex, t_AbstractSimplex, AbstractSimplex);

            void t_AbstractSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSimplex), &PY_TYPE_DEF(AbstractSimplex), module, "AbstractSimplex", 0);
            }

            void t_AbstractSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "class_", make_descriptor(AbstractSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "wrapfn_", make_descriptor(t_AbstractSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSimplex::initializeClass, 1)))
                return NULL;
              return t_AbstractSimplex::wrap_Object(AbstractSimplex(((t_AbstractSimplex *) arg)->object.this$));
            }
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.build(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "build", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.evaluate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDimension());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPoint(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoints());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "iterate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDimension());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoints());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSize());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableFieldTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableFieldTimeStampedCache::mids$ = NULL;
      bool ImmutableFieldTimeStampedCache::live$ = false;

      jclass ImmutableFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_36a24b5e65508672] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_14972a5b95f969fe] = env->getStaticMethodID(cls, "emptyCache", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getAll_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_e7a49be0190c3b40] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_e7a49be0190c3b40] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_fe526c9a9cb8189c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableFieldTimeStampedCache::ImmutableFieldTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36a24b5e65508672, a0, a1.this$)) {}

      ImmutableFieldTimeStampedCache ImmutableFieldTimeStampedCache::emptyCache(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableFieldTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_14972a5b95f969fe], a0.this$));
      }

      ::java::util::List ImmutableFieldTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_e7a49be0190c3b40]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_e7a49be0190c3b40]));
      }

      ::java::util::stream::Stream ImmutableFieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_fe526c9a9cb8189c], a0.this$));
      }

      jint ImmutableFieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_55546ef6a647f39b]);
      }

      ::java::lang::String ImmutableFieldTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, emptyCache, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableFieldTimeStampedCache, t_ImmutableFieldTimeStampedCache, ImmutableFieldTimeStampedCache);
      PyObject *t_ImmutableFieldTimeStampedCache::wrap_Object(const ImmutableFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_ImmutableFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_ImmutableFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableFieldTimeStampedCache), &PY_TYPE_DEF(ImmutableFieldTimeStampedCache), module, "ImmutableFieldTimeStampedCache", 0);
      }

      void t_ImmutableFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "class_", make_descriptor(ImmutableFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableFieldTimeStampedCache::wrap_Object(ImmutableFieldTimeStampedCache(((t_ImmutableFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableFieldTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableFieldTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ImmutableFieldTimeStampedCache result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::ImmutableFieldTimeStampedCache::emptyCache(a0));
          return t_ImmutableFieldTimeStampedCache::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "emptyCache", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableFieldTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractIntegrator::class$ = NULL;
      jmethodID *AbstractIntegrator::mids$ = NULL;
      bool AbstractIntegrator::live$ = false;

      jclass AbstractIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_b3037e2992b522fb] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_00cecfec8aa9403e] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_cd9b3224c18c683b] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_91fbb4072ae7ce9a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getCurrentSignedStepsize_b74f83833fdad017] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_73a804ac72232dd7] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_getStepSize_b74f83833fdad017] = env->getMethodID(cls, "getStepSize", "()D");
          mids$[mid_sanityChecks_9ab16ee510aba086] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
          mids$[mid_initIntegration_8cb4bf2a0c64fd92] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setStepStart_d2d966b8a9c77b61] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_fcb96c98de6fad04] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_acceptStep_6f4f6de6bb232b27] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_isLastStep_9ab94ac1dc23b105] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_9ab94ac1dc23b105] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_setStepSize_8ba9fe7a847cecad] = env->getMethodID(cls, "setStepSize", "(D)V");
          mids$[mid_getEvaluationsCounter_3c86b06a86576583] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getEquations_f19d9c4799a8baa5] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/ExpandableODE;");
          mids$[mid_setStateInitialized_fcb96c98de6fad04] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_b3037e2992b522fb], a0.this$);
      }

      void AbstractIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_00cecfec8aa9403e], a0.this$);
      }

      void AbstractIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_cd9b3224c18c683b], a0.this$);
      }

      void AbstractIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2]);
      }

      void AbstractIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2]);
      }

      void AbstractIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      JArray< jdouble > AbstractIntegrator::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_91fbb4072ae7ce9a], a0, a1.this$));
      }

      jdouble AbstractIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_b74f83833fdad017]);
      }

      jint AbstractIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      ::java::util::List AbstractIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_e62d3bb06d56d7e3]));
      }

      jint AbstractIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
      }

      ::java::lang::String AbstractIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::util::List AbstractIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3]));
      }

      ::java::util::List AbstractIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative AbstractIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_73a804ac72232dd7]));
      }

      void AbstractIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_44ed599e93e8a30c], a0);
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
      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args);
      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data);
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data);
      static PyGetSetDef t_AbstractIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_AbstractIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractIntegrator)[] = {
        { Py_tp_methods, t_AbstractIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractIntegrator, t_AbstractIntegrator, AbstractIntegrator);

      void t_AbstractIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractIntegrator), &PY_TYPE_DEF(AbstractIntegrator), module, "AbstractIntegrator", 0);
      }

      void t_AbstractIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "class_", make_descriptor(AbstractIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "wrapfn_", make_descriptor(t_AbstractIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractIntegrator::wrap_Object(AbstractIntegrator(((t_AbstractIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args)
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

      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessageType::class$ = NULL;
          jmethodID *MessageType::mids$ = NULL;
          bool MessageType::live$ = false;

          jclass MessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parse_9c30feea4fe836ce] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::messages::ParsedMessage MessageType::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_9c30feea4fe836ce], a0.this$, a1));
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
          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args);

          static PyMethodDef t_MessageType__methods_[] = {
            DECLARE_METHOD(t_MessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageType)[] = {
            { Py_tp_methods, t_MessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageType, t_MessageType, MessageType);

          void t_MessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageType), &PY_TYPE_DEF(MessageType), module, "MessageType", 0);
          }

          void t_MessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "class_", make_descriptor(MessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "wrapfn_", make_descriptor(t_MessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageType::initializeClass, 1)))
              return NULL;
            return t_MessageType::wrap_Object(MessageType(((t_MessageType *) arg)->object.this$));
          }
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *Acm::class$ = NULL;
              jmethodID *Acm::mids$ = NULL;
              bool Acm::live$ = false;
              ::java::lang::String *Acm::ATT_LINE = NULL;
              ::java::lang::String *Acm::COV_LINE = NULL;
              ::java::lang::String *Acm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Acm::ROOT = NULL;
              ::java::lang::String *Acm::UNKNOWN_OBJECT = NULL;

              jclass Acm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/Acm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9603b9963356e980] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getData_efaea2325d549369] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmData;");
                  mids$[mid_getMetadata_0253132f83eae763] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;");
                  mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "ATT_LINE", "Ljava/lang/String;"));
                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Acm::Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9603b9963356e980, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmData Acm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmData(env->callObjectMethod(this$, mids$[mid_getData_efaea2325d549369]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata Acm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_0253132f83eae763]));
              }

              ::java::util::Map Acm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args);
              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Acm_getData(t_Acm *self);
              static PyObject *t_Acm_getMetadata(t_Acm *self);
              static PyObject *t_Acm_getSatellites(t_Acm *self);
              static PyObject *t_Acm_get__data(t_Acm *self, void *data);
              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data);
              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data);
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data);
              static PyGetSetDef t_Acm__fields_[] = {
                DECLARE_GET_FIELD(t_Acm, data),
                DECLARE_GET_FIELD(t_Acm, metadata),
                DECLARE_GET_FIELD(t_Acm, satellites),
                DECLARE_GET_FIELD(t_Acm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Acm__methods_[] = {
                DECLARE_METHOD(t_Acm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Acm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Acm)[] = {
                { Py_tp_methods, t_Acm__methods_ },
                { Py_tp_init, (void *) t_Acm_init_ },
                { Py_tp_getset, t_Acm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Acm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Acm, t_Acm, Acm);
              PyObject *t_Acm::wrap_Object(const Acm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Acm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Acm::install(PyObject *module)
              {
                installType(&PY_TYPE(Acm), &PY_TYPE_DEF(Acm), module, "Acm", 0);
              }

              void t_Acm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "class_", make_descriptor(Acm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "wrapfn_", make_descriptor(t_Acm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Acm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ATT_LINE", make_descriptor(j2p(*Acm::ATT_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "COV_LINE", make_descriptor(j2p(*Acm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Acm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ROOT", make_descriptor(j2p(*Acm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Acm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Acm::initializeClass, 1)))
                  return NULL;
                return t_Acm::wrap_Object(Acm(((t_Acm *) arg)->object.this$));
              }
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Acm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Acm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Acm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Acm_getData(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(result);
              }

              static PyObject *t_Acm_getMetadata(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Acm_getSatellites(t_Acm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmSatelliteEphemeris));
              }
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Acm_get__data(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(value);
              }

              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LinearInterpolator::class$ = NULL;
        jmethodID *LinearInterpolator::mids$ = NULL;
        bool LinearInterpolator::live$ = false;

        jclass LinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_4b522051166e7218] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_a8efc421c988dfdd] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearInterpolator::LinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_4b522051166e7218], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction LinearInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_a8efc421c988dfdd], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args);

        static PyMethodDef t_LinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_LinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearInterpolator)[] = {
          { Py_tp_methods, t_LinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_LinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearInterpolator, t_LinearInterpolator, LinearInterpolator);

        void t_LinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearInterpolator), &PY_TYPE_DEF(LinearInterpolator), module, "LinearInterpolator", 0);
        }

        void t_LinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "class_", make_descriptor(LinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "wrapfn_", make_descriptor(t_LinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_LinearInterpolator::wrap_Object(LinearInterpolator(((t_LinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          LinearInterpolator object((jobject) NULL);

          INT_CALL(object = LinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *RombergIntegrator::class$ = NULL;
        jmethodID *RombergIntegrator::mids$ = NULL;
        bool RombergIntegrator::live$ = false;
        jint RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass RombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/RombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_5408957787adf55f] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RombergIntegrator::RombergIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        RombergIntegrator::RombergIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        RombergIntegrator::RombergIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5408957787adf55f, a0, a1, a2, a3)) {}
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
        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_RombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_RombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RombergIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RombergIntegrator)[] = {
          { Py_tp_methods, t_RombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_RombergIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(RombergIntegrator, t_RombergIntegrator, RombergIntegrator);

        void t_RombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RombergIntegrator), &PY_TYPE_DEF(RombergIntegrator), module, "RombergIntegrator", 0);
        }

        void t_RombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "class_", make_descriptor(RombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "wrapfn_", make_descriptor(t_RombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(RombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_RombergIntegrator::wrap_Object(RombergIntegrator(((t_RombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RombergIntegrator object((jobject) NULL);

              INT_CALL(object = RombergIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = RombergIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = RombergIntegrator(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Dipole::class$ = NULL;
          jmethodID *Dipole::mids$ = NULL;
          bool Dipole::live$ = false;
          Dipole *Dipole::CANONICAL_I_J = NULL;

          jclass Dipole::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Dipole");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getPrimary_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSecondary_8b724f8b4fdad1a2] = env->getMethodID(cls, "getSecondary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CANONICAL_I_J = new Dipole(env->getStaticObjectField(cls, "CANONICAL_I_J", "Lorg/orekit/estimation/measurements/gnss/Dipole;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getPrimary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPrimary_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getSecondary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSecondary_8b724f8b4fdad1a2]));
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
          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_getPrimary(t_Dipole *self);
          static PyObject *t_Dipole_getSecondary(t_Dipole *self);
          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data);
          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data);
          static PyGetSetDef t_Dipole__fields_[] = {
            DECLARE_GET_FIELD(t_Dipole, primary),
            DECLARE_GET_FIELD(t_Dipole, secondary),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Dipole__methods_[] = {
            DECLARE_METHOD(t_Dipole, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, getPrimary, METH_NOARGS),
            DECLARE_METHOD(t_Dipole, getSecondary, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Dipole)[] = {
            { Py_tp_methods, t_Dipole__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Dipole__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Dipole)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Dipole, t_Dipole, Dipole);

          void t_Dipole::install(PyObject *module)
          {
            installType(&PY_TYPE(Dipole), &PY_TYPE_DEF(Dipole), module, "Dipole", 0);
          }

          void t_Dipole::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "class_", make_descriptor(Dipole::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "wrapfn_", make_descriptor(t_Dipole::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "boxfn_", make_descriptor(boxObject));
            env->getClass(Dipole::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "CANONICAL_I_J", make_descriptor(t_Dipole::wrap_Object(*Dipole::CANONICAL_I_J)));
          }

          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Dipole::initializeClass, 1)))
              return NULL;
            return t_Dipole::wrap_Object(Dipole(((t_Dipole *) arg)->object.this$));
          }
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Dipole::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Dipole_getPrimary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_getSecondary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8e55d90b2c31e510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEarth_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSun_5df52e80cbb5eb85] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DeSitterRelativity::DeSitterRelativity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        DeSitterRelativity::DeSitterRelativity(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e55d90b2c31e510, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean DeSitterRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getEarth() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_5df52e80cbb5eb85]));
        }

        ::java::util::List DeSitterRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getSun() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_5df52e80cbb5eb85]));
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
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSGP4::class$ = NULL;
          jmethodID *FieldSGP4::mids$ = NULL;
          bool FieldSGP4::live$ = false;

          jclass FieldSGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8d1f9859c5514da2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5459c6c0c91f1c96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_8b0f7facc8a6a46e] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_1d66803ed368a800] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_8d1f9859c5514da2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_5459c6c0c91f1c96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args);
          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data);
          static PyGetSetDef t_FieldSGP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSGP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSGP4__methods_[] = {
            DECLARE_METHOD(t_FieldSGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSGP4)[] = {
            { Py_tp_methods, t_FieldSGP4__methods_ },
            { Py_tp_init, (void *) t_FieldSGP4_init_ },
            { Py_tp_getset, t_FieldSGP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSGP4, t_FieldSGP4, FieldSGP4);
          PyObject *t_FieldSGP4::wrap_Object(const FieldSGP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSGP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSGP4), &PY_TYPE_DEF(FieldSGP4), module, "FieldSGP4", 0);
          }

          void t_FieldSGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "class_", make_descriptor(FieldSGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "wrapfn_", make_descriptor(t_FieldSGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSGP4::initializeClass, 1)))
              return NULL;
            return t_FieldSGP4::wrap_Object(FieldSGP4(((t_FieldSGP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data)
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
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractOptimizationProblem::class$ = NULL;
      jmethodID *AbstractOptimizationProblem::mids$ = NULL;
      bool AbstractOptimizationProblem::live$ = false;

      jclass AbstractOptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractOptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_cae0efb5080a73b8] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_3c86b06a86576583] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_3c86b06a86576583] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker AbstractOptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_cae0efb5080a73b8]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_3c86b06a86576583]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_3c86b06a86576583]));
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
      static PyObject *t_AbstractOptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOptimizationProblem_of_(t_AbstractOptimizationProblem *self, PyObject *args);
      static PyObject *t_AbstractOptimizationProblem_getConvergenceChecker(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_getEvaluationCounter(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_getIterationCounter(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_get__convergenceChecker(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__evaluationCounter(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__iterationCounter(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__parameters_(t_AbstractOptimizationProblem *self, void *data);
      static PyGetSetDef t_AbstractOptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_AbstractOptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOptimizationProblem)[] = {
        { Py_tp_methods, t_AbstractOptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractOptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractOptimizationProblem, t_AbstractOptimizationProblem, AbstractOptimizationProblem);
      PyObject *t_AbstractOptimizationProblem::wrap_Object(const AbstractOptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOptimizationProblem *self = (t_AbstractOptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOptimizationProblem *self = (t_AbstractOptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOptimizationProblem), &PY_TYPE_DEF(AbstractOptimizationProblem), module, "AbstractOptimizationProblem", 0);
      }

      void t_AbstractOptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "class_", make_descriptor(AbstractOptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "wrapfn_", make_descriptor(t_AbstractOptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_AbstractOptimizationProblem::wrap_Object(AbstractOptimizationProblem(((t_AbstractOptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_AbstractOptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOptimizationProblem_of_(t_AbstractOptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractOptimizationProblem_getConvergenceChecker(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractOptimizationProblem_getEvaluationCounter(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_AbstractOptimizationProblem_getIterationCounter(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_AbstractOptimizationProblem_get__parameters_(t_AbstractOptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOptimizationProblem_get__convergenceChecker(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_AbstractOptimizationProblem_get__evaluationCounter(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_AbstractOptimizationProblem_get__iterationCounter(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialNutation::class$ = NULL;
      jmethodID *PolynomialNutation::mids$ = NULL;
      bool PolynomialNutation::live$ = false;

      jclass PolynomialNutation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialNutation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_derivative_04fd0666b613d2ab] = env->getMethodID(cls, "derivative", "(D)D");
          mids$[mid_derivative_6e00dc5eb352fe51] = env->getMethodID(cls, "derivative", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialNutation::PolynomialNutation(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      jdouble PolynomialNutation::derivative(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_derivative_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::derivative(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_derivative_6e00dc5eb352fe51], a0.this$));
      }

      jdouble PolynomialNutation::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
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
      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args);
      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args);

      static PyMethodDef t_PolynomialNutation__methods_[] = {
        DECLARE_METHOD(t_PolynomialNutation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialNutation, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialNutation)[] = {
        { Py_tp_methods, t_PolynomialNutation__methods_ },
        { Py_tp_init, (void *) t_PolynomialNutation_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialNutation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialNutation, t_PolynomialNutation, PolynomialNutation);

      void t_PolynomialNutation::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialNutation), &PY_TYPE_DEF(PolynomialNutation), module, "PolynomialNutation", 0);
      }

      void t_PolynomialNutation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "class_", make_descriptor(PolynomialNutation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "wrapfn_", make_descriptor(t_PolynomialNutation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialNutation::initializeClass, 1)))
          return NULL;
        return t_PolynomialNutation::wrap_Object(PolynomialNutation(((t_PolynomialNutation *) arg)->object.this$));
      }
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialNutation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialNutation object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = PolynomialNutation(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args)
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
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative::class$ = NULL;
        jmethodID *FieldUnivariateDerivative::mids$ = NULL;
        bool FieldUnivariateDerivative::live$ = false;

        jclass FieldUnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_21e6b3c521b9c768] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_8224159d85a4681d] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDerivativeStructure_4b6e77c66fd622c3] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative::FieldUnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_21e6b3c521b9c768], a0));
        }

        jint FieldUnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_8224159d85a4681d], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_4b6e77c66fd622c3]));
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
        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args);
        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data);
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative, t_FieldUnivariateDerivative, FieldUnivariateDerivative);
        PyObject *t_FieldUnivariateDerivative::wrap_Object(const FieldUnivariateDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative), &PY_TYPE_DEF(FieldUnivariateDerivative), module, "FieldUnivariateDerivative", 0);
        }

        void t_FieldUnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "class_", make_descriptor(FieldUnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative::wrap_Object(FieldUnivariateDerivative(((t_FieldUnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          FieldUnivariateDerivative object((jobject) NULL);

          INT_CALL(object = FieldUnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTHarvester::class$ = NULL;
          jmethodID *DSSTHarvester::mids$ = NULL;
          bool DSSTHarvester::live$ = false;

          jclass DSSTHarvester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTHarvester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2] = env->getMethodID(cls, "freezeColumnsNames", "()V");
              mids$[mid_getB1_f77d745f2128c391] = env->getMethodID(cls, "getB1", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB2_b7aa5791b069a41f] = env->getMethodID(cls, "getB2", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB3_b7aa5791b069a41f] = env->getMethodID(cls, "getB3", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB4_f77d745f2128c391] = env->getMethodID(cls, "getB4", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getParametersJacobian_b7aa5791b069a41f] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_initializeFieldShortPeriodTerms_280c3390961e0a50] = env->getMethodID(cls, "initializeFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setReferenceState_280c3390961e0a50] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_updateFieldShortPeriodTerms_280c3390961e0a50] = env->getMethodID(cls, "updateFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTHarvester::freezeColumnsNames() const
          {
            env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2]);
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB1() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB1_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB2(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB2_b7aa5791b069a41f], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB3(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB3_b7aa5791b069a41f], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB4() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB4_f77d745f2128c391]));
          }

          ::java::util::List DSSTHarvester::getJacobiansColumnsNames() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3]));
          }

          ::org::orekit::orbits::OrbitType DSSTHarvester::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_b7aa5791b069a41f], a0.this$));
          }

          ::org::orekit::orbits::PositionAngleType DSSTHarvester::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f], a0.this$));
          }

          void DSSTHarvester::initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_initializeFieldShortPeriodTerms_280c3390961e0a50], a0.this$);
          }

          void DSSTHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceState_280c3390961e0a50], a0.this$);
          }

          void DSSTHarvester::updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updateFieldShortPeriodTerms_280c3390961e0a50], a0.this$);
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
          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data);
          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTHarvester__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTHarvester, b1),
            DECLARE_GET_FIELD(t_DSSTHarvester, b4),
            DECLARE_GET_FIELD(t_DSSTHarvester, jacobiansColumnsNames),
            DECLARE_GET_FIELD(t_DSSTHarvester, orbitType),
            DECLARE_GET_FIELD(t_DSSTHarvester, positionAngleType),
            DECLARE_SET_FIELD(t_DSSTHarvester, referenceState),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTHarvester__methods_[] = {
            DECLARE_METHOD(t_DSSTHarvester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, freezeColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB1, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB2, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB3, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB4, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getJacobiansColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getOrbitType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getParametersJacobian, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getPositionAngleType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getStateTransitionMatrix, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, initializeFieldShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, setReferenceState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, updateFieldShortPeriodTerms, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTHarvester)[] = {
            { Py_tp_methods, t_DSSTHarvester__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DSSTHarvester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTHarvester)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
            NULL
          };

          DEFINE_TYPE(DSSTHarvester, t_DSSTHarvester, DSSTHarvester);

          void t_DSSTHarvester::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTHarvester), &PY_TYPE_DEF(DSSTHarvester), module, "DSSTHarvester", 0);
          }

          void t_DSSTHarvester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "class_", make_descriptor(DSSTHarvester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "wrapfn_", make_descriptor(t_DSSTHarvester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTHarvester::initializeClass, 1)))
              return NULL;
            return t_DSSTHarvester::wrap_Object(DSSTHarvester(((t_DSSTHarvester *) arg)->object.this$));
          }
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTHarvester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.freezeColumnsNames());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB2(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB2", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB3(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB3", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getJacobiansColumnsNames());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOrbitType());
              return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getOrbitType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParametersJacobian(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
          }

          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getPositionAngleType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
          }

          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.initializeFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "initializeFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "setReferenceState", args, 2);
          }

          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.updateFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updateFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPForceModel::class$ = NULL;
          jmethodID *CR3BPForceModel::mids$ = NULL;
          bool CR3BPForceModel::live$ = false;
          ::java::lang::String *CR3BPForceModel::MASS_RATIO_SUFFIX = NULL;

          jclass CR3BPForceModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPForceModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_572e4de529747211] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPotential_70d618f733e9234e] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
              mids$[mid_getPotential_ed1f58cbefd22aa8] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MASS_RATIO_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MASS_RATIO_SUFFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPForceModel::CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_572e4de529747211, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
          }

          jboolean CR3BPForceModel::dependsOnPositionOnly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
          }

          ::java::util::List CR3BPForceModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_70d618f733e9234e], a0.this$));
          }

          ::org::hipparchus::analysis::differentiation::DerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_ed1f58cbefd22aa8], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data);
          static PyGetSetDef t_CR3BPForceModel__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPForceModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPForceModel__methods_[] = {
            DECLARE_METHOD(t_CR3BPForceModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, acceleration, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPForceModel, dependsOnPositionOnly, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getPotential, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPForceModel)[] = {
            { Py_tp_methods, t_CR3BPForceModel__methods_ },
            { Py_tp_init, (void *) t_CR3BPForceModel_init_ },
            { Py_tp_getset, t_CR3BPForceModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPForceModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPForceModel, t_CR3BPForceModel, CR3BPForceModel);

          void t_CR3BPForceModel::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPForceModel), &PY_TYPE_DEF(CR3BPForceModel), module, "CR3BPForceModel", 0);
          }

          void t_CR3BPForceModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "class_", make_descriptor(CR3BPForceModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "wrapfn_", make_descriptor(t_CR3BPForceModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(CR3BPForceModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "MASS_RATIO_SUFFIX", make_descriptor(j2p(*CR3BPForceModel::MASS_RATIO_SUFFIX)));
          }

          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPForceModel::initializeClass, 1)))
              return NULL;
            return t_CR3BPForceModel::wrap_Object(CR3BPForceModel(((t_CR3BPForceModel *) arg)->object.this$));
          }
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPForceModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            CR3BPForceModel object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = CR3BPForceModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args)
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

          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.dependsOnPositionOnly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getPotential", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmData::class$ = NULL;
              jmethodID *ApmData::mids$ = NULL;
              bool ApmData::live$ = false;

              jclass ApmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c9d5491d174d1eb2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)V");
                  mids$[mid_addManeuver_f1ad24c585be4032] = env->getMethodID(cls, "addManeuver", "(Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)V");
                  mids$[mid_getAngularVelocityBlock_a664b9618d8007a9] = env->getMethodID(cls, "getAngularVelocityBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;");
                  mids$[mid_getAttitude_0aeff0f42eb90e75] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                  mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEulerBlock_a7c668c67fab35b8] = env->getMethodID(cls, "getEulerBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;");
                  mids$[mid_getInertiaBlock_9d04d713e2db017a] = env->getMethodID(cls, "getInertiaBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;");
                  mids$[mid_getManeuver_0a5a3b3bba59a2a1] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;");
                  mids$[mid_getManeuvers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getNbManeuvers_55546ef6a647f39b] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getQuaternionBlock_bfe60d66e480f06b] = env->getMethodID(cls, "getQuaternionBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;");
                  mids$[mid_getSpinStabilizedBlock_957b702a7fb38e4f] = env->getMethodID(cls, "getSpinStabilizedBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;");
                  mids$[mid_hasManeuvers_9ab94ac1dc23b105] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmData::ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a3, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a4, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a5, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9d5491d174d1eb2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              void ApmData::addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addManeuver_f1ad24c585be4032], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity ApmData::getAngularVelocityBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity(env->callObjectMethod(this$, mids$[mid_getAngularVelocityBlock_a664b9618d8007a9]));
              }

              ::org::orekit::attitudes::Attitude ApmData::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_0aeff0f42eb90e75], a0.this$, a1.this$));
              }

              ::java::util::List ApmData::getComments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate ApmData::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Euler ApmData::getEulerBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Euler(env->callObjectMethod(this$, mids$[mid_getEulerBlock_a7c668c67fab35b8]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Inertia ApmData::getInertiaBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Inertia(env->callObjectMethod(this$, mids$[mid_getInertiaBlock_9d04d713e2db017a]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver ApmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_0a5a3b3bba59a2a1], a0));
              }

              ::java::util::List ApmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_e62d3bb06d56d7e3]));
              }

              jint ApmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion ApmData::getQuaternionBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionBlock_bfe60d66e480f06b]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized ApmData::getSpinStabilizedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized(env->callObjectMethod(this$, mids$[mid_getSpinStabilizedBlock_957b702a7fb38e4f]));
              }

              jboolean ApmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_9ab94ac1dc23b105]);
              }

              void ApmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self);
              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args);
              static PyObject *t_ApmData_getComments(t_ApmData *self);
              static PyObject *t_ApmData_getEpoch(t_ApmData *self);
              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self);
              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self);
              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self);
              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self);
              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data);
              static PyGetSetDef t_ApmData__fields_[] = {
                DECLARE_GET_FIELD(t_ApmData, angularVelocityBlock),
                DECLARE_GET_FIELD(t_ApmData, comments),
                DECLARE_GET_FIELD(t_ApmData, epoch),
                DECLARE_GET_FIELD(t_ApmData, eulerBlock),
                DECLARE_GET_FIELD(t_ApmData, inertiaBlock),
                DECLARE_GET_FIELD(t_ApmData, maneuvers),
                DECLARE_GET_FIELD(t_ApmData, nbManeuvers),
                DECLARE_GET_FIELD(t_ApmData, quaternionBlock),
                DECLARE_GET_FIELD(t_ApmData, spinStabilizedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmData__methods_[] = {
                DECLARE_METHOD(t_ApmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, addManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getAngularVelocityBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_ApmData, getComments, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEulerBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getInertiaBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getQuaternionBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getSpinStabilizedBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmData)[] = {
                { Py_tp_methods, t_ApmData__methods_ },
                { Py_tp_init, (void *) t_ApmData_init_ },
                { Py_tp_getset, t_ApmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ApmData, t_ApmData, ApmData);

              void t_ApmData::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmData), &PY_TYPE_DEF(ApmData), module, "ApmData", 0);
              }

              void t_ApmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "class_", make_descriptor(ApmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "wrapfn_", make_descriptor(t_ApmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmData::initializeClass, 1)))
                  return NULL;
                return t_ApmData::wrap_Object(ApmData(((t_ApmData *) arg)->object.this$));
              }
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a6((jobject) NULL);
                ApmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = ApmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addManeuver(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(result);
              }

              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_ApmData_getComments(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getComments());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_ApmData_getEpoch(t_ApmData *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(result);
              }

              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(result);
              }

              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getManeuvers(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Maneuver));
              }

              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(result);
              }

              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(result);
              }

              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getComments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationsProvider::class$ = NULL;
        jmethodID *PythonEstimationsProvider::mids$ = NULL;
        bool PythonEstimationsProvider::live$ = false;

        jclass PythonEstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEstimatedMeasurement_9e3faa50e0df43fe] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_55546ef6a647f39b] = env->getMethodID(cls, "getNumber", "()I");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationsProvider::PythonEstimationsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEstimationsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEstimationsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEstimationsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self);
        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data);
        static PyGetSetDef t_PythonEstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationsProvider)[] = {
          { Py_tp_methods, t_PythonEstimationsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationsProvider_init_ },
          { Py_tp_getset, t_PythonEstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationsProvider, t_PythonEstimationsProvider, PythonEstimationsProvider);

        void t_PythonEstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationsProvider), &PY_TYPE_DEF(PythonEstimationsProvider), module, "PythonEstimationsProvider", 1);
        }

        void t_PythonEstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "class_", make_descriptor(PythonEstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "wrapfn_", make_descriptor(t_PythonEstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonEstimationsProvider_getEstimatedMeasurement0 },
            { "getNumber", "()I", (void *) t_PythonEstimationsProvider_getNumber1 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationsProvider::wrap_Object(PythonEstimationsProvider(((t_PythonEstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationsProvider object((jobject) NULL);

          INT_CALL(object = PythonEstimationsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurement", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurement", result);
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

        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonShortPeriodTerms::class$ = NULL;
            jmethodID *PythonShortPeriodTerms::mids$ = NULL;
            bool PythonShortPeriodTerms::live$ = false;

            jclass PythonShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_92ad788dda1c7643] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_88da41feb340affc] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonShortPeriodTerms::PythonShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self);
            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonShortPeriodTerms, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonShortPeriodTerms, t_PythonShortPeriodTerms, PythonShortPeriodTerms);

            void t_PythonShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonShortPeriodTerms), &PY_TYPE_DEF(PythonShortPeriodTerms), module, "PythonShortPeriodTerms", 1);
            }

            void t_PythonShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "class_", make_descriptor(PythonShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/Orbit;)[D", (void *) t_PythonShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonShortPeriodTerms::wrap_Object(PythonShortPeriodTerms(((t_PythonShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data)
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
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldBooleanDetector::class$ = NULL;
        jmethodID *FieldBooleanDetector::mids$ = NULL;
        bool FieldBooleanDetector::live$ = false;

        jclass FieldBooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldBooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_0c2e20f777766260] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_andCombine_40521d61e5807c2b] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_notCombine_36655fb9b3e59c37] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldNegateDetector;");
            mids$[mid_orCombine_0c2e20f777766260] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_orCombine_40521d61e5807c2b] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_create_f909254591779991] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldBooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_0c2e20f777766260], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_40521d61e5807c2b], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBooleanDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::java::util::List FieldBooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_e62d3bb06d56d7e3]));
        }

        void FieldBooleanDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::FieldNegateDetector FieldBooleanDetector::notCombine(const ::org::orekit::propagation::events::FieldEventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::FieldNegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_36655fb9b3e59c37], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_0c2e20f777766260], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_40521d61e5807c2b], a0.this$));
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
        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self);
        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data);
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data);
        static PyGetSetDef t_FieldBooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBooleanDetector, detectors),
          DECLARE_GET_FIELD(t_FieldBooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBooleanDetector__methods_[] = {
          DECLARE_METHOD(t_FieldBooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBooleanDetector)[] = {
          { Py_tp_methods, t_FieldBooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldBooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldBooleanDetector, t_FieldBooleanDetector, FieldBooleanDetector);
        PyObject *t_FieldBooleanDetector::wrap_Object(const FieldBooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBooleanDetector), &PY_TYPE_DEF(FieldBooleanDetector), module, "FieldBooleanDetector", 0);
        }

        void t_FieldBooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "class_", make_descriptor(FieldBooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "wrapfn_", make_descriptor(t_FieldBooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBooleanDetector::initializeClass, 1)))
            return NULL;
          return t_FieldBooleanDetector::wrap_Object(FieldBooleanDetector(((t_FieldBooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldNegateDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_FieldNegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionLagrangeForm::class$ = NULL;
        jmethodID *PolynomialFunctionLagrangeForm::mids$ = NULL;
        bool PolynomialFunctionLagrangeForm::live$ = false;

        jclass PolynomialFunctionLagrangeForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_55546ef6a647f39b] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_5427cadc72cd59f7] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getInterpolatingPoints_25e1757a36c4dde2] = env->getMethodID(cls, "getInterpolatingPoints", "()[D");
            mids$[mid_getInterpolatingValues_25e1757a36c4dde2] = env->getMethodID(cls, "getInterpolatingValues", "()[D");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_verifyInterpolationArray_393011d94d739a17] = env->getStaticMethodID(cls, "verifyInterpolationArray", "([D[DZ)Z");
            mids$[mid_computeCoefficients_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeCoefficients", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionLagrangeForm::PolynomialFunctionLagrangeForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

        jint PolynomialFunctionLagrangeForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_55546ef6a647f39b]);
        }

        jdouble PolynomialFunctionLagrangeForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_5427cadc72cd59f7], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_25e1757a36c4dde2]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingPoints() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingPoints_25e1757a36c4dde2]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingValues_25e1757a36c4dde2]));
        }

        jdouble PolynomialFunctionLagrangeForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        jboolean PolynomialFunctionLagrangeForm::verifyInterpolationArray(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_verifyInterpolationArray_393011d94d739a17], a0.this$, a1.this$, a2);
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
        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionLagrangeForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingPoints),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingValues),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionLagrangeForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingPoints, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingValues, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, value, METH_O),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, verifyInterpolationArray, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionLagrangeForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionLagrangeForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionLagrangeForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionLagrangeForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionLagrangeForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionLagrangeForm, t_PolynomialFunctionLagrangeForm, PolynomialFunctionLagrangeForm);

        void t_PolynomialFunctionLagrangeForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionLagrangeForm), &PY_TYPE_DEF(PolynomialFunctionLagrangeForm), module, "PolynomialFunctionLagrangeForm", 0);
        }

        void t_PolynomialFunctionLagrangeForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "class_", make_descriptor(PolynomialFunctionLagrangeForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "wrapfn_", make_descriptor(t_PolynomialFunctionLagrangeForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionLagrangeForm::wrap_Object(PolynomialFunctionLagrangeForm(((t_PolynomialFunctionLagrangeForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionLagrangeForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionLagrangeForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingPoints());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingValues());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jboolean result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::verifyInterpolationArray(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "verifyInterpolationArray", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingPoints());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingValues());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateOptimizer::class$ = NULL;
        jmethodID *UnivariateOptimizer::mids$ = NULL;
        bool UnivariateOptimizer::live$ = false;

        jclass UnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getGoalType_cf6b21746452ef78] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_b74f83833fdad017] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_optimize_369e9441b694b1bf] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_computeObjectiveValue_04fd0666b613d2ab] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::scalar::GoalType UnivariateOptimizer::getGoalType() const
        {
          return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_cf6b21746452ef78]));
        }

        jdouble UnivariateOptimizer::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble UnivariateOptimizer::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jdouble UnivariateOptimizer::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_b74f83833fdad017]);
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair UnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_369e9441b694b1bf], a0.this$));
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
      namespace univariate {
        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data);
        static PyGetSetDef t_UnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateOptimizer, goalType),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, max),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, min),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, startValue),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_UnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getGoalType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMax, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMin, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateOptimizer)[] = {
          { Py_tp_methods, t_UnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
          NULL
        };

        DEFINE_TYPE(UnivariateOptimizer, t_UnivariateOptimizer, UnivariateOptimizer);
        PyObject *t_UnivariateOptimizer::wrap_Object(const UnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateOptimizer), &PY_TYPE_DEF(UnivariateOptimizer), module, "UnivariateOptimizer", 0);
        }

        void t_UnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "class_", make_descriptor(UnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "wrapfn_", make_descriptor(t_UnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_UnivariateOptimizer::wrap_Object(UnivariateOptimizer(((t_UnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
          OBJ_CALL(result = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
        }

        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
          OBJ_CALL(value = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
        }

        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianAnomalyUtility.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianAnomalyUtility::class$ = NULL;
      jmethodID *FieldKeplerianAnomalyUtility::mids$ = NULL;
      bool FieldKeplerianAnomalyUtility::live$ = false;

      jclass FieldKeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticEccentricToTrue_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToEccentric_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToTrue_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToEccentric_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToMean_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToMean_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToTrue_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToEccentric_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToTrue_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToEccentric_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToMean_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToMean_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToTrue_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToEccentric_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToTrue_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToEccentric_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToMean_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToMean_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToTrue_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToEccentric_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToTrue_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToEccentric_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToMean_c6408fdce2cc6c1a], a0.this$, a1.this$));
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
      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FieldKeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_FieldKeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianAnomalyUtility, t_FieldKeplerianAnomalyUtility, FieldKeplerianAnomalyUtility);

      void t_FieldKeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianAnomalyUtility), &PY_TYPE_DEF(FieldKeplerianAnomalyUtility), module, "FieldKeplerianAnomalyUtility", 0);
      }

      void t_FieldKeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "class_", make_descriptor(FieldKeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_FieldKeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianAnomalyUtility::wrap_Object(FieldKeplerianAnomalyUtility(((t_FieldKeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeBuilder::class$ = NULL;
          jmethodID *RangeBuilder::mids$ = NULL;
          bool RangeBuilder::live$ = false;

          jclass RangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9b5700032cdfc1f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_05e0f9152fb7bc0a] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Range;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeBuilder::RangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_9b5700032cdfc1f4, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::Range RangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Range(env->callObjectMethod(this$, mids$[mid_build_05e0f9152fb7bc0a], a0.this$, a1.this$));
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
          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args);
          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args);
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data);
          static PyGetSetDef t_RangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeBuilder)[] = {
            { Py_tp_methods, t_RangeBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeBuilder_init_ },
            { Py_tp_getset, t_RangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeBuilder, t_RangeBuilder, RangeBuilder);
          PyObject *t_RangeBuilder::wrap_Object(const RangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeBuilder), &PY_TYPE_DEF(RangeBuilder), module, "RangeBuilder", 0);
          }

          void t_RangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "class_", make_descriptor(RangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "wrapfn_", make_descriptor(t_RangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeBuilder::wrap_Object(RangeBuilder(((t_RangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Range result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Range::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GradientMultivariateOptimizer::class$ = NULL;
          jmethodID *GradientMultivariateOptimizer::mids$ = NULL;
          bool GradientMultivariateOptimizer::live$ = false;

          jclass GradientMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
              mids$[mid_computeObjectiveGradient_14dee4cb8cc3e959] = env->getMethodID(cls, "computeObjectiveGradient", "([D)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::optim::PointValuePair GradientMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
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
          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_GradientMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_GradientMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GradientMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_GradientMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GradientMultivariateOptimizer)[] = {
            { Py_tp_methods, t_GradientMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GradientMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GradientMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(GradientMultivariateOptimizer, t_GradientMultivariateOptimizer, GradientMultivariateOptimizer);
          PyObject *t_GradientMultivariateOptimizer::wrap_Object(const GradientMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GradientMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GradientMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(GradientMultivariateOptimizer), &PY_TYPE_DEF(GradientMultivariateOptimizer), module, "GradientMultivariateOptimizer", 0);
          }

          void t_GradientMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "class_", make_descriptor(GradientMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "wrapfn_", make_descriptor(t_GradientMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GradientMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_GradientMultivariateOptimizer::wrap_Object(GradientMultivariateOptimizer(((t_GradientMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GradientMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GradientMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data)
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
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldMultivariateMatrixFunction::mids$ = NULL;
      bool FieldMultivariateMatrixFunction::live$ = false;

      jclass FieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateMatrixFunction_0ae03c80a4475e2b] = env->getMethodID(cls, "toCalculusFieldMultivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction;");
          mids$[mid_value_627e74fafe9198e9] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction FieldMultivariateMatrixFunction::toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateMatrixFunction_0ae03c80a4475e2b], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_627e74fafe9198e9], a0.this$));
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
      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, toCalculusFieldMultivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateMatrixFunction, t_FieldMultivariateMatrixFunction, FieldMultivariateMatrixFunction);

      void t_FieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateMatrixFunction), &PY_TYPE_DEF(FieldMultivariateMatrixFunction), module, "FieldMultivariateMatrixFunction", 0);
      }

      void t_FieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "class_", make_descriptor(FieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateMatrixFunction::wrap_Object(FieldMultivariateMatrixFunction(((t_FieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractFieldTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractFieldTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_dadd4156df1ed960] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getInterpolationDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getNeighborList_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getOne_81520b552cb3fa26] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_81520b552cb3fa26] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCentralDate_5b6d0b7fbadac432] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableFieldTimeStampedCache AbstractFieldTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableFieldTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_dadd4156df1ed960]));
      }

      ::org::hipparchus::Field AbstractFieldTimeInterpolator$InterpolationData::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_fa23a4301b9c83e7]));
      }

      ::java::util::List AbstractFieldTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getOne() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOne_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getZero() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZero_81520b552cb3fa26]));
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
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, field),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, one),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, zero),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getOne, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getZero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator$InterpolationData, t_AbstractFieldTimeInterpolator$InterpolationData, AbstractFieldTimeInterpolator$InterpolationData);
      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData), module, "AbstractFieldTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(AbstractFieldTimeInterpolator$InterpolationData(((t_AbstractFieldTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegrator::mids$ = NULL;
        bool DormandPrince853FieldIntegrator::live$ = false;

        jclass DormandPrince853FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_05ca1b2bf7edc3a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_19be2ee49bc66dd7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_50468581fd2c7db2] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853FieldStateInterpolator;");
            mids$[mid_estimateError_4b43ddf833459788] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_05ca1b2bf7edc3a6, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_19be2ee49bc66dd7, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince853FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
        }

        jint DormandPrince853FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
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
        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegrator, t_DormandPrince853FieldIntegrator, DormandPrince853FieldIntegrator);
        PyObject *t_DormandPrince853FieldIntegrator::wrap_Object(const DormandPrince853FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegrator), &PY_TYPE_DEF(DormandPrince853FieldIntegrator), module, "DormandPrince853FieldIntegrator", 0);
        }

        void t_DormandPrince853FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "class_", make_descriptor(DormandPrince853FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegrator::wrap_Object(DormandPrince853FieldIntegrator(((t_DormandPrince853FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonAbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonAbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool PythonAbstractConstantThrustPropulsionModel::live$ = false;

          jclass PythonAbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5c295347eb1c7d1a] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_b060e4326765ccf1] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_ba5ea64a789ad864] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_fd347811007a6ba3] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5dc321c3ba065f30] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b7e5bd35daed8b40] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractConstantThrustPropulsionModel::PythonAbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_5c295347eb1c7d1a, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          void PythonAbstractConstantThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractConstantThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractConstantThrustPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonAbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractConstantThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonAbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonAbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(PythonAbstractConstantThrustPropulsionModel, t_PythonAbstractConstantThrustPropulsionModel, PythonAbstractConstantThrustPropulsionModel);

          void t_PythonAbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel), module, "PythonAbstractConstantThrustPropulsionModel", 1);
          }

          void t_PythonAbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "class_", make_descriptor(PythonAbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonAbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractConstantThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getFlowRate", "()D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0 },
              { "getFlowRate", "([D)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7 },
              { "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractConstantThrustPropulsionModel::wrap_Object(PythonAbstractConstantThrustPropulsionModel(((t_PythonAbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::lang::String a4((jobject) NULL);
            PythonAbstractConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
            {
              INT_CALL(object = PythonAbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data)
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
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeInterpolator::class$ = NULL;
      jmethodID *PythonFieldTimeInterpolator::mids$ = NULL;
      bool PythonFieldTimeInterpolator::live$ = false;

      jclass PythonFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_8ebbc99ff107d81e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_interpolate_4eb6c23dfecf951e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeInterpolator::PythonFieldTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldTimeInterpolator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self);
      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data);
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeInterpolator, t_PythonFieldTimeInterpolator, PythonFieldTimeInterpolator);
      PyObject *t_PythonFieldTimeInterpolator::wrap_Object(const PythonFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeInterpolator), &PY_TYPE_DEF(PythonFieldTimeInterpolator), module, "PythonFieldTimeInterpolator", 1);
      }

      void t_PythonFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "class_", make_descriptor(PythonFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "wrapfn_", make_descriptor(t_PythonFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonFieldTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonFieldTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonFieldTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeInterpolator::wrap_Object(PythonFieldTimeInterpolator(((t_PythonFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
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

      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999::class$ = NULL;
              jmethodID *Alfriend1999::mids$ = NULL;
              bool Alfriend1999::live$ = false;

              jclass Alfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999::Alfriend1999() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
              }

              jboolean Alfriend1999::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105]);
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
              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data);
              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data);
              static PyGetSetDef t_Alfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999)[] = {
                { Py_tp_methods, t_Alfriend1999__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999_init_ },
                { Py_tp_getset, t_Alfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999, t_Alfriend1999, Alfriend1999);

              void t_Alfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999), &PY_TYPE_DEF(Alfriend1999), module, "Alfriend1999", 0);
              }

              void t_Alfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "class_", make_descriptor(Alfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "wrapfn_", make_descriptor(t_Alfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999::wrap_Object(Alfriend1999(((t_Alfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999 object((jobject) NULL);

                INT_CALL(object = Alfriend1999());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data)
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
