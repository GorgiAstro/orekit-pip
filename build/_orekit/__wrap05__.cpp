#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
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
            mids$[mid_init$_ccdd860aa84caa04] = env->getMethodID(cls, "<init>", "(IIDDDLorg/hipparchus/random/UnitSphereRandomVectorGenerator;)V");
            mids$[mid_copy_edeef1d772c2ce78] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_value_6260a516b67893ef] = env->getMethodID(cls, "value", "([D[[D[DDD)D");
            mids$[mid_add_d26930f65a8ba6c9] = env->getMethodID(cls, "add", "([DZ)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere::InterpolatingMicrosphere(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ccdd860aa84caa04, a0, a1, a2, a3, a4, a5.this$)) {}

        InterpolatingMicrosphere InterpolatingMicrosphere::copy() const
        {
          return InterpolatingMicrosphere(env->callObjectMethod(this$, mids$[mid_copy_edeef1d772c2ce78]));
        }

        jint InterpolatingMicrosphere::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        jint InterpolatingMicrosphere::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_f2f64475e4580546]);
        }

        jdouble InterpolatingMicrosphere::value(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< jdouble > & a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_6260a516b67893ef], a0.this$, a1.this$, a2.this$, a3, a4);
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
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldExpandableODE::class$ = NULL;
      jmethodID *FieldExpandableODE::mids$ = NULL;
      bool FieldExpandableODE::live$ = false;

      jclass FieldExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2e419b80baea033b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_900c8342a9ae2930] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/FieldSecondaryODE;)I");
          mids$[mid_computeDerivatives_ea2fed402e730f9f] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMapper_ac3e7c17676ea260] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
          mids$[mid_getPrimary_bf46998f6ba5ae79] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;");
          mids$[mid_init_2231c8fee9b0ac70] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldExpandableODE::FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e419b80baea033b, a0.this$)) {}

      jint FieldExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_900c8342a9ae2930], a0.this$);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldExpandableODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_ea2fed402e730f9f], a0.this$, a1.this$));
      }

      ::org::hipparchus::ode::FieldEquationsMapper FieldExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::FieldEquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_ac3e7c17676ea260]));
      }

      ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation FieldExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_bf46998f6ba5ae79]));
      }

      void FieldExpandableODE::init(const ::org::hipparchus::ode::FieldODEState & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2231c8fee9b0ac70], a0.this$, a1.this$);
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
      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args);
      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg);
      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data);
      static PyGetSetDef t_FieldExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldExpandableODE, mapper),
        DECLARE_GET_FIELD(t_FieldExpandableODE, primary),
        DECLARE_GET_FIELD(t_FieldExpandableODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldExpandableODE__methods_[] = {
        DECLARE_METHOD(t_FieldExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_FieldExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldExpandableODE)[] = {
        { Py_tp_methods, t_FieldExpandableODE__methods_ },
        { Py_tp_init, (void *) t_FieldExpandableODE_init_ },
        { Py_tp_getset, t_FieldExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldExpandableODE, t_FieldExpandableODE, FieldExpandableODE);
      PyObject *t_FieldExpandableODE::wrap_Object(const FieldExpandableODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldExpandableODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldExpandableODE), &PY_TYPE_DEF(FieldExpandableODE), module, "FieldExpandableODE", 0);
      }

      void t_FieldExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "class_", make_descriptor(FieldExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "wrapfn_", make_descriptor(t_FieldExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldExpandableODE::initializeClass, 1)))
          return NULL;
        return t_FieldExpandableODE::wrap_Object(FieldExpandableODE(((t_FieldExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
        PyTypeObject **p0;
        FieldExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_))
        {
          INT_CALL(object = FieldExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldSecondaryODE a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldSecondaryODE::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldSecondaryODE::parameters_))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldEquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldEquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(value);
      }

      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/Set.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *FieldDSSTPropagator::class$ = NULL;
          jmethodID *FieldDSSTPropagator::mids$ = NULL;
          bool FieldDSSTPropagator::live$ = false;

          jclass FieldDSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_272d3b6a3360c8cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
              mids$[mid_init$_fb107a39f80551b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_f6f035abb558a5c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_init$_83e6faf9d20273f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_868bb92ba9b91af7] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_419dafe52feda214] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeMeanState_097dbc0442e5454b] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeOsculatingState_419dafe52feda214] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_e9e1a6780fe94297] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_initialIsOsculating_e470b6d9e0d979db] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_7ae3461a92a43152] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_52154b94d63e10ed] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setInitialState_7e8354b496e2a6c1] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_03a16642f77779e7] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setMu_03a16642f77779e7] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setSatelliteRevolution_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_ef1b87702d7ae7b8] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_tolerances_668d49e2109cbb89] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_tolerances_c97c7886dbd53a2c] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_beforeIntegration_acdd8180a5dc1a8d] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_afterIntegration_7ae3461a92a43152] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_a553824829fc2514] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_createMapper_b12e4020688f2d3a] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
              mids$[mid_getMainStateEquations_9199626b9ad748bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_272d3b6a3360c8cc, a0.this$, a1.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fb107a39f80551b6, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f6f035abb558a5c0, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_83e6faf9d20273f4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void FieldDSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_868bb92ba9b91af7], a0.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_419dafe52feda214], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_097dbc0442e5454b], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_419dafe52feda214], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List FieldDSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
          }

          ::org::orekit::orbits::OrbitType FieldDSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
          }

          ::org::orekit::orbits::PositionAngleType FieldDSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
          }

          jint FieldDSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_f2f64475e4580546]);
          }

          ::java::util::Set FieldDSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_e9e1a6780fe94297]));
          }

          jboolean FieldDSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_e470b6d9e0d979db]);
          }

          void FieldDSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_7ae3461a92a43152]);
          }

          void FieldDSSTPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
          }

          void FieldDSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_52154b94d63e10ed], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_7e8354b496e2a6c1], a0.this$, a1.this$);
          }

          void FieldDSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336], a0);
          }

          void FieldDSSTPropagator::setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_03a16642f77779e7], a0.this$);
          }

          void FieldDSSTPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_03a16642f77779e7], a0.this$);
          }

          void FieldDSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_0a2a1ac2721c0336], a0);
          }

          void FieldDSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_ef1b87702d7ae7b8], a0.this$);
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_668d49e2109cbb89], a0.this$, a1.this$));
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_c97c7886dbd53a2c], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args);
          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data);
          static PyGetSetDef t_FieldDSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, mu),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, selectedCoefficients),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldDSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDSSTPropagator)[] = {
            { Py_tp_methods, t_FieldDSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_FieldDSSTPropagator_init_ },
            { Py_tp_getset, t_FieldDSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(FieldDSSTPropagator, t_FieldDSSTPropagator, FieldDSSTPropagator);
          PyObject *t_FieldDSSTPropagator::wrap_Object(const FieldDSSTPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDSSTPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDSSTPropagator), &PY_TYPE_DEF(FieldDSSTPropagator), module, "FieldDSSTPropagator", 0);
          }

          void t_FieldDSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "class_", make_descriptor(FieldDSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "wrapfn_", make_descriptor(t_FieldDSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldDSSTPropagator::wrap_Object(FieldDSSTPropagator(((t_FieldDSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2, a3));
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

          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
              {
                INT_CALL(self->object.setAttitudeProvider(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAmbiguityAcceptance::class$ = NULL;
          jmethodID *PythonAmbiguityAcceptance::mids$ = NULL;
          bool PythonAmbiguityAcceptance::live$ = false;

          jclass PythonAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_accept_20e068095c0bf963] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_numberOfCandidates_f2f64475e4580546] = env->getMethodID(cls, "numberOfCandidates", "()I");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAmbiguityAcceptance::PythonAmbiguityAcceptance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonAmbiguityAcceptance::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAmbiguityAcceptance::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAmbiguityAcceptance::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self);
          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args);
          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data);
          static PyGetSetDef t_PythonAmbiguityAcceptance__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAmbiguityAcceptance, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_PythonAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_PythonAmbiguityAcceptance_init_ },
            { Py_tp_getset, t_PythonAmbiguityAcceptance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAmbiguityAcceptance, t_PythonAmbiguityAcceptance, PythonAmbiguityAcceptance);

          void t_PythonAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAmbiguityAcceptance), &PY_TYPE_DEF(PythonAmbiguityAcceptance), module, "PythonAmbiguityAcceptance", 1);
          }

          void t_PythonAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "class_", make_descriptor(PythonAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "wrapfn_", make_descriptor(t_PythonAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAmbiguityAcceptance::initializeClass);
            JNINativeMethod methods[] = {
              { "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonAmbiguityAcceptance_accept0 },
              { "numberOfCandidates", "()I", (void *) t_PythonAmbiguityAcceptance_numberOfCandidates1 },
              { "pythonDecRef", "()V", (void *) t_PythonAmbiguityAcceptance_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_PythonAmbiguityAcceptance::wrap_Object(PythonAmbiguityAcceptance(((t_PythonAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            PythonAmbiguityAcceptance object((jobject) NULL);

            INT_CALL(object = PythonAmbiguityAcceptance());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args)
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

          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
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

          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "numberOfCandidates", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("numberOfCandidates", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ProcessingState::class$ = NULL;
            jmethodID *ProcessingState::mids$ = NULL;
            bool ProcessingState::live$ = false;

            jclass ProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
          namespace parsing {
            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg);

            static PyMethodDef t_ProcessingState__methods_[] = {
              DECLARE_METHOD(t_ProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ProcessingState)[] = {
              { Py_tp_methods, t_ProcessingState__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ProcessingState, t_ProcessingState, ProcessingState);

            void t_ProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(ProcessingState), &PY_TYPE_DEF(ProcessingState), module, "ProcessingState", 0);
            }

            void t_ProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "class_", make_descriptor(ProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "wrapfn_", make_descriptor(t_ProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ProcessingState::initializeClass, 1)))
                return NULL;
              return t_ProcessingState::wrap_Object(ProcessingState(((t_ProcessingState *) arg)->object.this$));
            }
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationListener::class$ = NULL;
      jmethodID *IterationListener::mids$ = NULL;
      bool IterationListener::live$ = false;

      jclass IterationListener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationListener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_initializationPerformed_71cb46270a31ceff] = env->getMethodID(cls, "initializationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationPerformed_71cb46270a31ceff] = env->getMethodID(cls, "iterationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationStarted_71cb46270a31ceff] = env->getMethodID(cls, "iterationStarted", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_terminationPerformed_71cb46270a31ceff] = env->getMethodID(cls, "terminationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IterationListener::initializationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_initializationPerformed_71cb46270a31ceff], a0.this$);
      }

      void IterationListener::iterationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationPerformed_71cb46270a31ceff], a0.this$);
      }

      void IterationListener::iterationStarted(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationStarted_71cb46270a31ceff], a0.this$);
      }

      void IterationListener::terminationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_terminationPerformed_71cb46270a31ceff], a0.this$);
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
      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg);

      static PyMethodDef t_IterationListener__methods_[] = {
        DECLARE_METHOD(t_IterationListener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, initializationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationStarted, METH_O),
        DECLARE_METHOD(t_IterationListener, terminationPerformed, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationListener)[] = {
        { Py_tp_methods, t_IterationListener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationListener)[] = {
        &PY_TYPE_DEF(::java::util::EventListener),
        NULL
      };

      DEFINE_TYPE(IterationListener, t_IterationListener, IterationListener);

      void t_IterationListener::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationListener), &PY_TYPE_DEF(IterationListener), module, "IterationListener", 0);
      }

      void t_IterationListener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "class_", make_descriptor(IterationListener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "wrapfn_", make_descriptor(t_IterationListener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationListener::initializeClass, 1)))
          return NULL;
        return t_IterationListener::wrap_Object(IterationListener(((t_IterationListener *) arg)->object.this$));
      }
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationListener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.initializationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "initializationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationStarted(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationStarted", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.terminationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "terminationPerformed", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmData::class$ = NULL;
              jmethodID *OmmData::mids$ = NULL;
              bool OmmData::live$ = false;

              jclass OmmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f549949310db6566] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_5a3868cb67b566ca] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_5ef7d45a76a827d2] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getSpacecraftParametersBlock_df8be17b569173ba] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getTLEBlock_34d881eec65a98f7] = env->getMethodID(cls, "getTLEBlock", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;");
                  mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmData::OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a0, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f549949310db6566, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OmmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_5a3868cb67b566ca]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OmmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_5ef7d45a76a827d2]));
              }

              jdouble OmmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OmmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_df8be17b569173ba]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle OmmData::getTLEBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle(env->callObjectMethod(this$, mids$[mid_getTLEBlock_34d881eec65a98f7]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OmmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52]));
              }

              void OmmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self);
              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self);
              static PyObject *t_OmmData_getMass(t_OmmData *self);
              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self);
              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self);
              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self);
              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg);
              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data);
              static PyGetSetDef t_OmmData__fields_[] = {
                DECLARE_GET_FIELD(t_OmmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OmmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OmmData, mass),
                DECLARE_GET_FIELD(t_OmmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OmmData, tLEBlock),
                DECLARE_GET_FIELD(t_OmmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmData__methods_[] = {
                DECLARE_METHOD(t_OmmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getTLEBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmData)[] = {
                { Py_tp_methods, t_OmmData__methods_ },
                { Py_tp_init, (void *) t_OmmData_init_ },
                { Py_tp_getset, t_OmmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OmmData, t_OmmData, OmmData);

              void t_OmmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmData), &PY_TYPE_DEF(OmmData), module, "OmmData", 0);
              }

              void t_OmmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "class_", make_descriptor(OmmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "wrapfn_", make_descriptor(t_OmmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmData::initializeClass, 1)))
                  return NULL;
                return t_OmmData::wrap_Object(OmmData(((t_OmmData *) arg)->object.this$));
              }
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a4((jobject) NULL);
                jdouble a5;
                OmmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkD", ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = OmmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OmmData_getMass(t_OmmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle result((jobject) NULL);
                OBJ_CALL(result = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(result);
              }

              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg)
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

              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle value((jobject) NULL);
                OBJ_CALL(value = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *Observables::class$ = NULL;
          jmethodID *Observables::mids$ = NULL;
          bool Observables::live$ = false;

          jclass Observables::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/Observables");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_addGroundMapping_1afb5828617014ec] = env->getMethodID(cls, "addGroundMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;)V");
              mids$[mid_addInterMapping_8cf2ccb67844acde] = env->getMethodID(cls, "addInterMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;)V");
              mids$[mid_getGroundMapping_372d2e7f09297236] = env->getMethodID(cls, "getGroundMapping", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;");
              mids$[mid_getGroundMappings_cfcfd130f9013e3e] = env->getMethodID(cls, "getGroundMappings", "()Ljava/util/Collection;");
              mids$[mid_getInterMapping_eebda754e4c976db] = env->getMethodID(cls, "getInterMapping", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;");
              mids$[mid_getInterMappings_cfcfd130f9013e3e] = env->getMethodID(cls, "getInterMappings", "()Ljava/util/Collection;");
              mids$[mid_getNbModels_f2f64475e4580546] = env->getMethodID(cls, "getNbModels", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Observables::Observables(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

          void Observables::addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGroundMapping_1afb5828617014ec], a0.this$);
          }

          void Observables::addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addInterMapping_8cf2ccb67844acde], a0.this$);
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping Observables::getGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping(env->callObjectMethod(this$, mids$[mid_getGroundMapping_372d2e7f09297236], a0.this$, a1.this$));
          }

          ::java::util::Collection Observables::getGroundMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getGroundMappings_cfcfd130f9013e3e]));
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping Observables::getInterMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping(env->callObjectMethod(this$, mids$[mid_getInterMapping_eebda754e4c976db], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::Collection Observables::getInterMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getInterMappings_cfcfd130f9013e3e]));
          }

          jint Observables::getNbModels() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbModels_f2f64475e4580546]);
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
          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getGroundMappings(t_Observables *self);
          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getInterMappings(t_Observables *self);
          static PyObject *t_Observables_getNbModels(t_Observables *self);
          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data);
          static PyGetSetDef t_Observables__fields_[] = {
            DECLARE_GET_FIELD(t_Observables, groundMappings),
            DECLARE_GET_FIELD(t_Observables, interMappings),
            DECLARE_GET_FIELD(t_Observables, nbModels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Observables__methods_[] = {
            DECLARE_METHOD(t_Observables, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, addGroundMapping, METH_O),
            DECLARE_METHOD(t_Observables, addInterMapping, METH_O),
            DECLARE_METHOD(t_Observables, getGroundMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getGroundMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getInterMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getInterMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getNbModels, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Observables)[] = {
            { Py_tp_methods, t_Observables__methods_ },
            { Py_tp_init, (void *) t_Observables_init_ },
            { Py_tp_getset, t_Observables__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Observables)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Observables, t_Observables, Observables);

          void t_Observables::install(PyObject *module)
          {
            installType(&PY_TYPE(Observables), &PY_TYPE_DEF(Observables), module, "Observables", 0);
          }

          void t_Observables::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "class_", make_descriptor(Observables::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "wrapfn_", make_descriptor(t_Observables::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Observables::initializeClass, 1)))
              return NULL;
            return t_Observables::wrap_Object(Observables(((t_Observables *) arg)->object.this$));
          }
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Observables::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            Observables object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Observables(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGroundMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGroundMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addInterMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addInterMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping result((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGroundMapping(a0, a1));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToGroundMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getGroundMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToGroundMapping));
          }

          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping result((jobject) NULL);

            if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInterMapping(a0, a1, a2, a3));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToSensorMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getInterMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToSensorMapping));
          }

          static PyObject *t_Observables_getNbModels(t_Observables *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbModels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbModels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *PythonRangeUnitsConverter::class$ = NULL;
            jmethodID *PythonRangeUnitsConverter::mids$ = NULL;
            bool PythonRangeUnitsConverter::live$ = false;

            jclass PythonRangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_metersToRu_84fe3cf394b0532d] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_ruToMeters_84fe3cf394b0532d] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonRangeUnitsConverter::PythonRangeUnitsConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonRangeUnitsConverter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonRangeUnitsConverter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonRangeUnitsConverter::pythonExtension(jlong a0) const
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
        namespace ndm {
          namespace tdm {
            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self);
            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args);
            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data);
            static PyGetSetDef t_PythonRangeUnitsConverter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonRangeUnitsConverter, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonRangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_PythonRangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonRangeUnitsConverter)[] = {
              { Py_tp_methods, t_PythonRangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) t_PythonRangeUnitsConverter_init_ },
              { Py_tp_getset, t_PythonRangeUnitsConverter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonRangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonRangeUnitsConverter, t_PythonRangeUnitsConverter, PythonRangeUnitsConverter);

            void t_PythonRangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonRangeUnitsConverter), &PY_TYPE_DEF(PythonRangeUnitsConverter), module, "PythonRangeUnitsConverter", 1);
            }

            void t_PythonRangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "class_", make_descriptor(PythonRangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "wrapfn_", make_descriptor(t_PythonRangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonRangeUnitsConverter::initializeClass);
              JNINativeMethod methods[] = {
                { "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_metersToRu0 },
                { "pythonDecRef", "()V", (void *) t_PythonRangeUnitsConverter_pythonDecRef1 },
                { "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_ruToMeters2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonRangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_PythonRangeUnitsConverter::wrap_Object(PythonRangeUnitsConverter(((t_PythonRangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonRangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds)
            {
              PythonRangeUnitsConverter object((jobject) NULL);

              INT_CALL(object = PythonRangeUnitsConverter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args)
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

            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "metersToRu", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("metersToRu", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "ruToMeters", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("ruToMeters", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NtripClient::class$ = NULL;
          jmethodID *NtripClient::mids$ = NULL;
          bool NtripClient::live$ = false;
          jint NtripClient::DEFAULT_MAX_RECONNECT = (jint) 0;
          jint NtripClient::DEFAULT_PORT = (jint) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY = (jdouble) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR = (jdouble) 0;
          jint NtripClient::DEFAULT_TIMEOUT = (jint) 0;

          jclass NtripClient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NtripClient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cabf0c57aa55c764] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
              mids$[mid_addObserver_9c25638e548d486f] = env->getMethodID(cls, "addObserver", "(ILjava/lang/String;Lorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_checkException_7ae3461a92a43152] = env->getMethodID(cls, "checkException", "()V");
              mids$[mid_getHost_0090f7797e403f43] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
              mids$[mid_getPort_f2f64475e4580546] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getSourceTable_ba138f2d0221dabf] = env->getMethodID(cls, "getSourceTable", "()Lorg/orekit/gnss/metric/ntrip/SourceTable;");
              mids$[mid_setFix_fabbd135f5f41ec8] = env->getMethodID(cls, "setFix", "(IIDDDDD)V");
              mids$[mid_setReconnectParameters_b05c288d5068eccb] = env->getMethodID(cls, "setReconnectParameters", "(DDI)V");
              mids$[mid_setTimeout_0a2a1ac2721c0336] = env->getMethodID(cls, "setTimeout", "(I)V");
              mids$[mid_startStreaming_a78b2d299c3aced8] = env->getMethodID(cls, "startStreaming", "(Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZ)V");
              mids$[mid_stopStreaming_0a2a1ac2721c0336] = env->getMethodID(cls, "stopStreaming", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_MAX_RECONNECT = env->getStaticIntField(cls, "DEFAULT_MAX_RECONNECT");
              DEFAULT_PORT = env->getStaticIntField(cls, "DEFAULT_PORT");
              DEFAULT_RECONNECT_DELAY = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY");
              DEFAULT_RECONNECT_DELAY_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY_FACTOR");
              DEFAULT_TIMEOUT = env->getStaticIntField(cls, "DEFAULT_TIMEOUT");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NtripClient::NtripClient(const ::java::lang::String & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cabf0c57aa55c764, a0.this$, a1)) {}

          void NtripClient::addObserver(jint a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_9c25638e548d486f], a0, a1.this$, a2.this$);
          }

          void NtripClient::checkException() const
          {
            env->callVoidMethod(this$, mids$[mid_checkException_7ae3461a92a43152]);
          }

          ::java::lang::String NtripClient::getHost() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_0090f7797e403f43]));
          }

          jint NtripClient::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_f2f64475e4580546]);
          }

          ::org::orekit::gnss::metric::ntrip::SourceTable NtripClient::getSourceTable() const
          {
            return ::org::orekit::gnss::metric::ntrip::SourceTable(env->callObjectMethod(this$, mids$[mid_getSourceTable_ba138f2d0221dabf]));
          }

          void NtripClient::setFix(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) const
          {
            env->callVoidMethod(this$, mids$[mid_setFix_fabbd135f5f41ec8], a0, a1, a2, a3, a4, a5, a6);
          }

          void NtripClient::setReconnectParameters(jdouble a0, jdouble a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setReconnectParameters_b05c288d5068eccb], a0, a1, a2);
          }

          void NtripClient::setTimeout(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeout_0a2a1ac2721c0336], a0);
          }

          void NtripClient::startStreaming(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::ntrip::Type & a1, jboolean a2, jboolean a3) const
          {
            env->callVoidMethod(this$, mids$[mid_startStreaming_a78b2d299c3aced8], a0.this$, a1.this$, a2, a3);
          }

          void NtripClient::stopStreaming(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_stopStreaming_0a2a1ac2721c0336], a0);
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
          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_checkException(t_NtripClient *self);
          static PyObject *t_NtripClient_getHost(t_NtripClient *self);
          static PyObject *t_NtripClient_getPort(t_NtripClient *self);
          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self);
          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data);
          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data);
          static PyGetSetDef t_NtripClient__fields_[] = {
            DECLARE_GET_FIELD(t_NtripClient, host),
            DECLARE_GET_FIELD(t_NtripClient, port),
            DECLARE_GET_FIELD(t_NtripClient, sourceTable),
            DECLARE_SET_FIELD(t_NtripClient, timeout),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NtripClient__methods_[] = {
            DECLARE_METHOD(t_NtripClient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, checkException, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getHost, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getPort, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getSourceTable, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, setFix, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setReconnectParameters, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setTimeout, METH_O),
            DECLARE_METHOD(t_NtripClient, startStreaming, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, stopStreaming, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NtripClient)[] = {
            { Py_tp_methods, t_NtripClient__methods_ },
            { Py_tp_init, (void *) t_NtripClient_init_ },
            { Py_tp_getset, t_NtripClient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NtripClient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NtripClient, t_NtripClient, NtripClient);

          void t_NtripClient::install(PyObject *module)
          {
            installType(&PY_TYPE(NtripClient), &PY_TYPE_DEF(NtripClient), module, "NtripClient", 0);
          }

          void t_NtripClient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "class_", make_descriptor(NtripClient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "wrapfn_", make_descriptor(t_NtripClient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "boxfn_", make_descriptor(boxObject));
            env->getClass(NtripClient::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_MAX_RECONNECT", make_descriptor(NtripClient::DEFAULT_MAX_RECONNECT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_PORT", make_descriptor(NtripClient::DEFAULT_PORT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY_FACTOR", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_TIMEOUT", make_descriptor(NtripClient::DEFAULT_TIMEOUT));
          }

          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NtripClient::initializeClass, 1)))
              return NULL;
            return t_NtripClient::wrap_Object(NtripClient(((t_NtripClient *) arg)->object.this$));
          }
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NtripClient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            NtripClient object((jobject) NULL);

            if (!parseArgs(args, "sI", &a0, &a1))
            {
              INT_CALL(object = NtripClient(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::MessageObserver a2((jobject) NULL);

            if (!parseArgs(args, "Isk", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addObserver(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_NtripClient_checkException(t_NtripClient *self)
          {
            OBJ_CALL(self->object.checkException());
            Py_RETURN_NONE;
          }

          static PyObject *t_NtripClient_getHost(t_NtripClient *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHost());
            return j2p(result);
          }

          static PyObject *t_NtripClient_getPort(t_NtripClient *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(result);
          }

          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;

            if (!parseArgs(args, "IIDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(self->object.setFix(a0, a1, a2, a3, a4, a5, a6));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFix", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jint a2;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.setReconnectParameters(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReconnectParameters", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setTimeout(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;

            if (!parseArgs(args, "sKZZ", ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.startStreaming(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "startStreaming", args);
            return NULL;
          }

          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.stopStreaming(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "stopStreaming", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHost());
            return j2p(value);
          }

          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(value);
          }

          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setTimeout(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeout", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *SimpsonIntegrator::class$ = NULL;
        jmethodID *SimpsonIntegrator::mids$ = NULL;
        bool SimpsonIntegrator::live$ = false;
        jint SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass SimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/SimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_b5a15021085cabdb] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpsonIntegrator::SimpsonIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SimpsonIntegrator::SimpsonIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        SimpsonIntegrator::SimpsonIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5a15021085cabdb, a0, a1, a2, a3)) {}
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
        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_SimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpsonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpsonIntegrator)[] = {
          { Py_tp_methods, t_SimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_SimpsonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(SimpsonIntegrator, t_SimpsonIntegrator, SimpsonIntegrator);

        void t_SimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpsonIntegrator), &PY_TYPE_DEF(SimpsonIntegrator), module, "SimpsonIntegrator", 0);
        }

        void t_SimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "class_", make_descriptor(SimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "wrapfn_", make_descriptor(t_SimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(SimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_SimpsonIntegrator::wrap_Object(SimpsonIntegrator(((t_SimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpsonIntegrator object((jobject) NULL);

              INT_CALL(object = SimpsonIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1));
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
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1, a2, a3));
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
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *OrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *OrdinaryDifferentialEquation::mids$ = NULL;
      bool OrdinaryDifferentialEquation::live$ = false;

      jclass OrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/OrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_7b8ea6f669f90156] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_0f831b4627025fee] = env->getMethodID(cls, "init", "(D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > OrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_7b8ea6f669f90156], a0, a1.this$));
      }

      jint OrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void OrdinaryDifferentialEquation::init(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_0f831b4627025fee], a0, a1.this$, a2);
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
      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self);
      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_OrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_OrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_OrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrdinaryDifferentialEquation, t_OrdinaryDifferentialEquation, OrdinaryDifferentialEquation);

      void t_OrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(OrdinaryDifferentialEquation), &PY_TYPE_DEF(OrdinaryDifferentialEquation), module, "OrdinaryDifferentialEquation", 0);
      }

      void t_OrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "class_", make_descriptor(OrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_OrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_OrdinaryDifferentialEquation::wrap_Object(OrdinaryDifferentialEquation(((t_OrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args)
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

      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data)
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
#include "org/hipparchus/special/Gamma.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Gamma::class$ = NULL;
      jmethodID *Gamma::mids$ = NULL;
      bool Gamma::live$ = false;
      jdouble Gamma::GAMMA = (jdouble) 0;
      jdouble Gamma::LANCZOS_G = (jdouble) 0;

      jclass Gamma::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Gamma");

          mids$ = new jmethodID[max_mid];
          mids$[mid_digamma_0ba5fed9597b693e] = env->getStaticMethodID(cls, "digamma", "(D)D");
          mids$[mid_digamma_d3398190482814dc] = env->getStaticMethodID(cls, "digamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_gamma_0ba5fed9597b693e] = env->getStaticMethodID(cls, "gamma", "(D)D");
          mids$[mid_gamma_d3398190482814dc] = env->getStaticMethodID(cls, "gamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_invGamma1pm1_0ba5fed9597b693e] = env->getStaticMethodID(cls, "invGamma1pm1", "(D)D");
          mids$[mid_invGamma1pm1_d3398190482814dc] = env->getStaticMethodID(cls, "invGamma1pm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_lanczos_0ba5fed9597b693e] = env->getStaticMethodID(cls, "lanczos", "(D)D");
          mids$[mid_lanczos_d3398190482814dc] = env->getStaticMethodID(cls, "lanczos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma_0ba5fed9597b693e] = env->getStaticMethodID(cls, "logGamma", "(D)D");
          mids$[mid_logGamma_d3398190482814dc] = env->getStaticMethodID(cls, "logGamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma1p_0ba5fed9597b693e] = env->getStaticMethodID(cls, "logGamma1p", "(D)D");
          mids$[mid_logGamma1p_d3398190482814dc] = env->getStaticMethodID(cls, "logGamma1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_824133ce4aec3505] = env->getStaticMethodID(cls, "regularizedGammaP", "(DD)D");
          mids$[mid_regularizedGammaP_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_804ca0a620991588] = env->getStaticMethodID(cls, "regularizedGammaP", "(DDDI)D");
          mids$[mid_regularizedGammaP_56240e5eb872ca1b] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_824133ce4aec3505] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DD)D");
          mids$[mid_regularizedGammaQ_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_804ca0a620991588] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DDDI)D");
          mids$[mid_regularizedGammaQ_56240e5eb872ca1b] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_trigamma_0ba5fed9597b693e] = env->getStaticMethodID(cls, "trigamma", "(D)D");
          mids$[mid_trigamma_d3398190482814dc] = env->getStaticMethodID(cls, "trigamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          GAMMA = env->getStaticDoubleField(cls, "GAMMA");
          LANCZOS_G = env->getStaticDoubleField(cls, "LANCZOS_G");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Gamma::digamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_digamma_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::digamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_digamma_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::gamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_gamma_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::gamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_gamma_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::invGamma1pm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_invGamma1pm1_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::invGamma1pm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_invGamma1pm1_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::lanczos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_lanczos_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::lanczos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_lanczos_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::logGamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::logGamma1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma1p_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma1p_d3398190482814dc], a0.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_804ca0a620991588], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_56240e5eb872ca1b], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_804ca0a620991588], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_56240e5eb872ca1b], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::trigamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trigamma_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::trigamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trigamma_d3398190482814dc], a0.this$));
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
      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Gamma__methods_[] = {
        DECLARE_METHOD(t_Gamma, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, digamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, gamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, invGamma1pm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, lanczos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaQ, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, trigamma, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Gamma)[] = {
        { Py_tp_methods, t_Gamma__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Gamma)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Gamma, t_Gamma, Gamma);

      void t_Gamma::install(PyObject *module)
      {
        installType(&PY_TYPE(Gamma), &PY_TYPE_DEF(Gamma), module, "Gamma", 0);
      }

      void t_Gamma::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "class_", make_descriptor(Gamma::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "wrapfn_", make_descriptor(t_Gamma::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "boxfn_", make_descriptor(boxObject));
        env->getClass(Gamma::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "GAMMA", make_descriptor(Gamma::GAMMA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "LANCZOS_G", make_descriptor(Gamma::LANCZOS_G));
      }

      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Gamma::initializeClass, 1)))
          return NULL;
        return t_Gamma::wrap_Object(Gamma(((t_Gamma *) arg)->object.this$));
      }
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Gamma::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "digamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "gamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "invGamma1pm1", args);
        return NULL;
      }

      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "lanczos", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma1p", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaP", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaQ", args);
        return NULL;
      }

      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "trigamma", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldDenseOutputModel::class$ = NULL;
      jmethodID *FieldDenseOutputModel::mids$ = NULL;
      bool FieldDenseOutputModel::live$ = false;

      jclass FieldDenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldDenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_82ba67f23ed32431] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/FieldDenseOutputModel;)V");
          mids$[mid_finish_c314ae4458a4e52a] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_e6d4d3215c30992a] = env->getMethodID(cls, "getFinalTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInitialTime_e6d4d3215c30992a] = env->getMethodID(cls, "getInitialTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInterpolatedState_05327270bfa02fcd] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_handleStep_bcb27fe1570581e2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
          mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDenseOutputModel::FieldDenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void FieldDenseOutputModel::append(const FieldDenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_82ba67f23ed32431], a0.this$);
      }

      void FieldDenseOutputModel::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_c314ae4458a4e52a], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getFinalTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFinalTime_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getInitialTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getInitialTime_e6d4d3215c30992a]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldDenseOutputModel::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05327270bfa02fcd], a0.this$));
      }

      void FieldDenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_bcb27fe1570581e2], a0.this$);
      }

      void FieldDenseOutputModel::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args);
      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args);
      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data);
      static PyGetSetDef t_FieldDenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, initialTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_FieldDenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDenseOutputModel)[] = {
        { Py_tp_methods, t_FieldDenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_FieldDenseOutputModel_init_ },
        { Py_tp_getset, t_FieldDenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDenseOutputModel, t_FieldDenseOutputModel, FieldDenseOutputModel);
      PyObject *t_FieldDenseOutputModel::wrap_Object(const FieldDenseOutputModel& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDenseOutputModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDenseOutputModel), &PY_TYPE_DEF(FieldDenseOutputModel), module, "FieldDenseOutputModel", 0);
      }

      void t_FieldDenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "class_", make_descriptor(FieldDenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "wrapfn_", make_descriptor(t_FieldDenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_FieldDenseOutputModel::wrap_Object(FieldDenseOutputModel(((t_FieldDenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        FieldDenseOutputModel object((jobject) NULL);

        INT_CALL(object = FieldDenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        FieldDenseOutputModel a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldDenseOutputModel::initializeClass, &a0, &p0, t_FieldDenseOutputModel::parameters_))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterListConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterListConsumer::mids$ = NULL;
            bool ParseToken$CenterListConsumer::live$ = false;

            jclass ParseToken$CenterListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_65de9727799c5641] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_65de9727799c5641], a0.this$);
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
            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterListConsumer, t_ParseToken$CenterListConsumer, ParseToken$CenterListConsumer);

            void t_ParseToken$CenterListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterListConsumer), &PY_TYPE_DEF(ParseToken$CenterListConsumer), module, "ParseToken$CenterListConsumer", 0);
            }

            void t_ParseToken$CenterListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "class_", make_descriptor(ParseToken$CenterListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterListConsumer::wrap_Object(ParseToken$CenterListConsumer(((t_ParseToken$CenterListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile::class$ = NULL;
        jmethodID *AttitudeEphemerisFile::mids$ = NULL;
        bool AttitudeEphemerisFile::live$ = false;

        jclass AttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map AttitudeEphemerisFile::getSatellites() const
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
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self);
        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data);
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, satellites),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile, t_AttitudeEphemerisFile, AttitudeEphemerisFile);
        PyObject *t_AttitudeEphemerisFile::wrap_Object(const AttitudeEphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile), &PY_TYPE_DEF(AttitudeEphemerisFile), module, "AttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "AttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "SatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)));
        }

        void t_AttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "class_", make_descriptor(AttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile::wrap_Object(AttitudeEphemerisFile(((t_AttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonThrustPropulsionModel::mids$ = NULL;
          bool PythonThrustPropulsionModel::live$ = false;

          jclass PythonThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getFlowRate_66a2f071e6ed0c06] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_79518d097c897d26] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_4368a5d862927c08] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_78226ca7935182ea] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_00aba28d3abe9a8c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_78989e44b99f7cc2] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustPropulsionModel::PythonThrustPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          ::java::util::List PythonThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jlong PythonThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonThrustPropulsionModel::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data);
          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustPropulsionModel, t_PythonThrustPropulsionModel, PythonThrustPropulsionModel);

          void t_PythonThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustPropulsionModel), &PY_TYPE_DEF(PythonThrustPropulsionModel), module, "PythonThrustPropulsionModel", 1);
          }

          void t_PythonThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "class_", make_descriptor(PythonThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonThrustPropulsionModel_getControl3DVectorCostType0 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonThrustPropulsionModel_getFlowRate3 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector4 },
              { "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonThrustPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonThrustPropulsionModel::wrap_Object(PythonThrustPropulsionModel(((t_PythonThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonThrustPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
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

          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data)
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

          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data)
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
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "java/lang/String.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataType::class$ = NULL;
          jmethodID *DataType::mids$ = NULL;
          bool DataType::live$ = false;
          DataType *DataType::BIT_1 = NULL;
          DataType *DataType::BIT_10 = NULL;
          DataType *DataType::BIT_12 = NULL;
          DataType *DataType::BIT_2 = NULL;
          DataType *DataType::BIT_24 = NULL;
          DataType *DataType::BIT_3 = NULL;
          DataType *DataType::BIT_32 = NULL;
          DataType *DataType::BIT_4 = NULL;
          DataType *DataType::BIT_6 = NULL;
          DataType *DataType::BIT_7 = NULL;
          DataType *DataType::BIT_8 = NULL;
          DataType *DataType::INT_10 = NULL;
          DataType *DataType::INT_11 = NULL;
          DataType *DataType::INT_14 = NULL;
          DataType *DataType::INT_15 = NULL;
          DataType *DataType::INT_16 = NULL;
          DataType *DataType::INT_17 = NULL;
          DataType *DataType::INT_18 = NULL;
          DataType *DataType::INT_19 = NULL;
          DataType *DataType::INT_20 = NULL;
          DataType *DataType::INT_21 = NULL;
          DataType *DataType::INT_22 = NULL;
          DataType *DataType::INT_23 = NULL;
          DataType *DataType::INT_24 = NULL;
          DataType *DataType::INT_25 = NULL;
          DataType *DataType::INT_26 = NULL;
          DataType *DataType::INT_27 = NULL;
          DataType *DataType::INT_30 = NULL;
          DataType *DataType::INT_31 = NULL;
          DataType *DataType::INT_32 = NULL;
          DataType *DataType::INT_34 = NULL;
          DataType *DataType::INT_35 = NULL;
          DataType *DataType::INT_38 = NULL;
          DataType *DataType::INT_6 = NULL;
          DataType *DataType::INT_8 = NULL;
          DataType *DataType::INT_9 = NULL;
          DataType *DataType::INT_S_11 = NULL;
          DataType *DataType::INT_S_22 = NULL;
          DataType *DataType::INT_S_24 = NULL;
          DataType *DataType::INT_S_27 = NULL;
          DataType *DataType::INT_S_32 = NULL;
          DataType *DataType::INT_S_5 = NULL;
          DataType *DataType::U_INT_10 = NULL;
          DataType *DataType::U_INT_11 = NULL;
          DataType *DataType::U_INT_12 = NULL;
          DataType *DataType::U_INT_13 = NULL;
          DataType *DataType::U_INT_14 = NULL;
          DataType *DataType::U_INT_16 = NULL;
          DataType *DataType::U_INT_17 = NULL;
          DataType *DataType::U_INT_18 = NULL;
          DataType *DataType::U_INT_2 = NULL;
          DataType *DataType::U_INT_20 = NULL;
          DataType *DataType::U_INT_23 = NULL;
          DataType *DataType::U_INT_24 = NULL;
          DataType *DataType::U_INT_25 = NULL;
          DataType *DataType::U_INT_26 = NULL;
          DataType *DataType::U_INT_27 = NULL;
          DataType *DataType::U_INT_3 = NULL;
          DataType *DataType::U_INT_30 = NULL;
          DataType *DataType::U_INT_32 = NULL;
          DataType *DataType::U_INT_35 = NULL;
          DataType *DataType::U_INT_36 = NULL;
          DataType *DataType::U_INT_4 = NULL;
          DataType *DataType::U_INT_5 = NULL;
          DataType *DataType::U_INT_6 = NULL;
          DataType *DataType::U_INT_7 = NULL;
          DataType *DataType::U_INT_8 = NULL;
          DataType *DataType::U_INT_9 = NULL;

          jclass DataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_decode_6212094b8c044d51] = env->getMethodID(cls, "decode", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/Long;");
              mids$[mid_valueOf_881f1d42915fe464] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/DataType;");
              mids$[mid_values_1939b679958c4330] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/DataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BIT_1 = new DataType(env->getStaticObjectField(cls, "BIT_1", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_10 = new DataType(env->getStaticObjectField(cls, "BIT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_12 = new DataType(env->getStaticObjectField(cls, "BIT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_2 = new DataType(env->getStaticObjectField(cls, "BIT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_24 = new DataType(env->getStaticObjectField(cls, "BIT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_3 = new DataType(env->getStaticObjectField(cls, "BIT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_32 = new DataType(env->getStaticObjectField(cls, "BIT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_4 = new DataType(env->getStaticObjectField(cls, "BIT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_6 = new DataType(env->getStaticObjectField(cls, "BIT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_7 = new DataType(env->getStaticObjectField(cls, "BIT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_8 = new DataType(env->getStaticObjectField(cls, "BIT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_10 = new DataType(env->getStaticObjectField(cls, "INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_11 = new DataType(env->getStaticObjectField(cls, "INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_14 = new DataType(env->getStaticObjectField(cls, "INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_15 = new DataType(env->getStaticObjectField(cls, "INT_15", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_16 = new DataType(env->getStaticObjectField(cls, "INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_17 = new DataType(env->getStaticObjectField(cls, "INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_18 = new DataType(env->getStaticObjectField(cls, "INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_19 = new DataType(env->getStaticObjectField(cls, "INT_19", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_20 = new DataType(env->getStaticObjectField(cls, "INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_21 = new DataType(env->getStaticObjectField(cls, "INT_21", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_22 = new DataType(env->getStaticObjectField(cls, "INT_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_23 = new DataType(env->getStaticObjectField(cls, "INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_24 = new DataType(env->getStaticObjectField(cls, "INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_25 = new DataType(env->getStaticObjectField(cls, "INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_26 = new DataType(env->getStaticObjectField(cls, "INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_27 = new DataType(env->getStaticObjectField(cls, "INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_30 = new DataType(env->getStaticObjectField(cls, "INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_31 = new DataType(env->getStaticObjectField(cls, "INT_31", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_32 = new DataType(env->getStaticObjectField(cls, "INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_34 = new DataType(env->getStaticObjectField(cls, "INT_34", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_35 = new DataType(env->getStaticObjectField(cls, "INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_38 = new DataType(env->getStaticObjectField(cls, "INT_38", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_6 = new DataType(env->getStaticObjectField(cls, "INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_8 = new DataType(env->getStaticObjectField(cls, "INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_9 = new DataType(env->getStaticObjectField(cls, "INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_11 = new DataType(env->getStaticObjectField(cls, "INT_S_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_22 = new DataType(env->getStaticObjectField(cls, "INT_S_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_24 = new DataType(env->getStaticObjectField(cls, "INT_S_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_27 = new DataType(env->getStaticObjectField(cls, "INT_S_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_32 = new DataType(env->getStaticObjectField(cls, "INT_S_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_5 = new DataType(env->getStaticObjectField(cls, "INT_S_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_10 = new DataType(env->getStaticObjectField(cls, "U_INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_11 = new DataType(env->getStaticObjectField(cls, "U_INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_12 = new DataType(env->getStaticObjectField(cls, "U_INT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_13 = new DataType(env->getStaticObjectField(cls, "U_INT_13", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_14 = new DataType(env->getStaticObjectField(cls, "U_INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_16 = new DataType(env->getStaticObjectField(cls, "U_INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_17 = new DataType(env->getStaticObjectField(cls, "U_INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_18 = new DataType(env->getStaticObjectField(cls, "U_INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_2 = new DataType(env->getStaticObjectField(cls, "U_INT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_20 = new DataType(env->getStaticObjectField(cls, "U_INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_23 = new DataType(env->getStaticObjectField(cls, "U_INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_24 = new DataType(env->getStaticObjectField(cls, "U_INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_25 = new DataType(env->getStaticObjectField(cls, "U_INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_26 = new DataType(env->getStaticObjectField(cls, "U_INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_27 = new DataType(env->getStaticObjectField(cls, "U_INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_3 = new DataType(env->getStaticObjectField(cls, "U_INT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_30 = new DataType(env->getStaticObjectField(cls, "U_INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_32 = new DataType(env->getStaticObjectField(cls, "U_INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_35 = new DataType(env->getStaticObjectField(cls, "U_INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_36 = new DataType(env->getStaticObjectField(cls, "U_INT_36", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_4 = new DataType(env->getStaticObjectField(cls, "U_INT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_5 = new DataType(env->getStaticObjectField(cls, "U_INT_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_6 = new DataType(env->getStaticObjectField(cls, "U_INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_7 = new DataType(env->getStaticObjectField(cls, "U_INT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_8 = new DataType(env->getStaticObjectField(cls, "U_INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_9 = new DataType(env->getStaticObjectField(cls, "U_INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::Long DataType::decode(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return ::java::lang::Long(env->callObjectMethod(this$, mids$[mid_decode_6212094b8c044d51], a0.this$));
          }

          DataType DataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_881f1d42915fe464], a0.this$));
          }

          JArray< DataType > DataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_1939b679958c4330]));
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
          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args);
          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg);
          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataType_values(PyTypeObject *type);
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data);
          static PyGetSetDef t_DataType__fields_[] = {
            DECLARE_GET_FIELD(t_DataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataType__methods_[] = {
            DECLARE_METHOD(t_DataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataType, decode, METH_O),
            DECLARE_METHOD(t_DataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataType)[] = {
            { Py_tp_methods, t_DataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataType, t_DataType, DataType);
          PyObject *t_DataType::wrap_Object(const DataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataType::install(PyObject *module)
          {
            installType(&PY_TYPE(DataType), &PY_TYPE_DEF(DataType), module, "DataType", 0);
          }

          void t_DataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "class_", make_descriptor(DataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "wrapfn_", make_descriptor(t_DataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_1", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_10", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_12", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_2", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_24", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_3", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_32", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_4", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_6", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_7", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_8", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_15", make_descriptor(t_DataType::wrap_Object(*DataType::INT_15)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_19", make_descriptor(t_DataType::wrap_Object(*DataType::INT_19)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_21", make_descriptor(t_DataType::wrap_Object(*DataType::INT_21)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_31", make_descriptor(t_DataType::wrap_Object(*DataType::INT_31)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_34", make_descriptor(t_DataType::wrap_Object(*DataType::INT_34)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_38", make_descriptor(t_DataType::wrap_Object(*DataType::INT_38)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::INT_9)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_5", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_12", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_13", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_13)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_2", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_3", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_36", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_36)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_4", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_5", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_7", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_9)));
          }

          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataType::initializeClass, 1)))
              return NULL;
            return t_DataType::wrap_Object(DataType(((t_DataType *) arg)->object.this$));
          }
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            ::java::lang::Long result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.decode(a0));
              return ::java::lang::t_Long::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "decode", arg);
            return NULL;
          }

          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::valueOf(a0));
              return t_DataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataType_values(PyTypeObject *type)
          {
            JArray< DataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::values());
            return JArray<jobject>(result.this$).wrap(t_DataType::wrap_jobject);
          }
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data)
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
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPBasedTransformProvider::class$ = NULL;
      jmethodID *PythonEOPBasedTransformProvider::mids$ = NULL;
      bool PythonEOPBasedTransformProvider::live$ = false;

      jclass PythonEOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_1266c6198e5d43dd] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_4e3921e6b145757e] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPBasedTransformProvider::PythonEOPBasedTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonEOPBasedTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonEOPBasedTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonEOPBasedTransformProvider::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self);
      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_PythonEOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPBasedTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_PythonEOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonEOPBasedTransformProvider_init_ },
        { Py_tp_getset, t_PythonEOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPBasedTransformProvider, t_PythonEOPBasedTransformProvider, PythonEOPBasedTransformProvider);

      void t_PythonEOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPBasedTransformProvider), &PY_TYPE_DEF(PythonEOPBasedTransformProvider), module, "PythonEOPBasedTransformProvider", 1);
      }

      void t_PythonEOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "class_", make_descriptor(PythonEOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "wrapfn_", make_descriptor(t_PythonEOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPBasedTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;", (void *) t_PythonEOPBasedTransformProvider_getEOPHistory0 },
          { "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;", (void *) t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1 },
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonEOPBasedTransformProvider_getTransform2 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonEOPBasedTransformProvider_getTransform3 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPBasedTransformProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonEOPBasedTransformProvider::wrap_Object(PythonEOPBasedTransformProvider(((t_PythonEOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPBasedTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonEOPBasedTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "");
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPBasedTransformProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNonInterpolatingProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPBasedTransformProvider::initializeClass, &value))
        {
          throwTypeError("getNonInterpolatingProvider", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CelestialBodyFrame::class$ = NULL;
          jmethodID *CelestialBodyFrame::mids$ = NULL;
          bool CelestialBodyFrame::live$ = false;
          CelestialBodyFrame *CelestialBodyFrame::EME2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GCRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GRC = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GTOD = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ICRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1988 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1989 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1990 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1991 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1992 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1993 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1994 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1996 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1997 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2005 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2008 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2014 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2020 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::J2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::MCI = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TDR = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TEME = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TOD = NULL;

          jclass CelestialBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CelestialBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_dcb3408f8f555629] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;)Lorg/orekit/frames/Frame;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_guessFrame_febdc9b326bc0d01] = env->getStaticMethodID(cls, "guessFrame", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_ba29a38045367343] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_parse_c08b3c7e7cd7160c] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_valueOf_c08b3c7e7cd7160c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_values_24d5b04080e3e8d4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EME2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GCRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GRC = new CelestialBodyFrame(env->getStaticObjectField(cls, "GRC", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GTOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ICRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1988 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1988", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1989 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1989", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1990 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1990", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1991 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1991", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1992 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1992", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1993 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1993", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1994 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1994", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1996 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1996", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1997 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1997", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2005 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2005", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2008 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2008", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2014 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2014", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2020 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2020", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              J2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              MCI = new CelestialBodyFrame(env->getStaticObjectField(cls, "MCI", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TDR = new CelestialBodyFrame(env->getStaticObjectField(cls, "TDR", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TEME = new CelestialBodyFrame(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame CelestialBodyFrame::getFrame(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::data::DataContext & a2) const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_dcb3408f8f555629], a0.this$, a1, a2.this$));
          }

          ::java::lang::String CelestialBodyFrame::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::java::lang::String CelestialBodyFrame::guessFrame(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessFrame_febdc9b326bc0d01], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_map_ba29a38045367343], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_c08b3c7e7cd7160c], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c08b3c7e7cd7160c], a0.this$));
          }

          JArray< CelestialBodyFrame > CelestialBodyFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CelestialBodyFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_24d5b04080e3e8d4]));
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
          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self);
          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type);
          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data);
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data);
          static PyGetSetDef t_CelestialBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_CelestialBodyFrame, name),
            DECLARE_GET_FIELD(t_CelestialBodyFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CelestialBodyFrame__methods_[] = {
            DECLARE_METHOD(t_CelestialBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getName, METH_NOARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, guessFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFrame)[] = {
            { Py_tp_methods, t_CelestialBodyFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CelestialBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CelestialBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CelestialBodyFrame, t_CelestialBodyFrame, CelestialBodyFrame);
          PyObject *t_CelestialBodyFrame::wrap_Object(const CelestialBodyFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CelestialBodyFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CelestialBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(CelestialBodyFrame), &PY_TYPE_DEF(CelestialBodyFrame), module, "CelestialBodyFrame", 0);
          }

          void t_CelestialBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "class_", make_descriptor(CelestialBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "wrapfn_", make_descriptor(t_CelestialBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(CelestialBodyFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "EME2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::EME2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GCRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GCRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GRC", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GRC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GTOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GTOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ICRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ICRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1988", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1988)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1989", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1989)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1990", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1990)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1991", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1991)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1992", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1993", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1993)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1994", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1994)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1996", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1997", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2005", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2008", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2014", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2020", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "J2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::J2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "MCI", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::MCI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TDR", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TDR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TEME", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TEME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TOD)));
          }

          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CelestialBodyFrame::initializeClass, 1)))
              return NULL;
            return t_CelestialBodyFrame::wrap_Object(CelestialBodyFrame(((t_CelestialBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CelestialBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::data::DataContext a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getFrame(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFrame", args);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::guessFrame(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessFrame", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::map(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::parse(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::valueOf(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type)
          {
            JArray< CelestialBodyFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::values());
            return JArray<jobject>(result.this$).wrap(t_CelestialBodyFrame::wrap_jobject);
          }
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LegendreRuleFactory::class$ = NULL;
          jmethodID *LegendreRuleFactory::mids$ = NULL;
          bool LegendreRuleFactory::live$ = false;

          jclass LegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LegendreRuleFactory::LegendreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreRuleFactory)[] = {
            { Py_tp_methods, t_LegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LegendreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LegendreRuleFactory, t_LegendreRuleFactory, LegendreRuleFactory);

          void t_LegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreRuleFactory), &PY_TYPE_DEF(LegendreRuleFactory), module, "LegendreRuleFactory", 0);
          }

          void t_LegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "class_", make_descriptor(LegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "wrapfn_", make_descriptor(t_LegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LegendreRuleFactory::wrap_Object(LegendreRuleFactory(((t_LegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LegendreRuleFactory object((jobject) NULL);

            INT_CALL(object = LegendreRuleFactory());
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
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence::class$ = NULL;
      jmethodID *AttitudesSequence::mids$ = NULL;
      bool AttitudesSequence::live$ = false;

      jclass AttitudesSequence::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addSwitchingCondition_0d2c16de1f34e1d0] = env->getMethodID(cls, "addSwitchingCondition", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/events/EventDetector;ZZDLorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/attitudes/AttitudesSequence$SwitchHandler;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_registerSwitchEvents_d2c685c0565d437e] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/orekit/propagation/Propagator;)V");
          mids$[mid_registerSwitchEvents_b00225cd75c7864b] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/FieldPropagator;)V");
          mids$[mid_resetActiveProvider_8109c1a27d4471d3] = env->getMethodID(cls, "resetActiveProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudesSequence::AttitudesSequence() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void AttitudesSequence::addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::events::EventDetector & a2, jboolean a3, jboolean a4, jdouble a5, const ::org::orekit::utils::AngularDerivativesFilter & a6, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler & a7) const
      {
        env->callVoidMethod(this$, mids$[mid_addSwitchingCondition_0d2c16de1f34e1d0], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$, a7.this$);
      }

      ::org::orekit::attitudes::FieldAttitude AttitudesSequence::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudesSequence::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::orekit::propagation::Propagator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_d2c685c0565d437e], a0.this$);
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::FieldPropagator & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_b00225cd75c7864b], a0.this$, a1.this$);
      }

      void AttitudesSequence::resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetActiveProvider_8109c1a27d4471d3], a0.this$);
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
      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg);

      static PyMethodDef t_AttitudesSequence__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, addSwitchingCondition, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, registerSwitchEvents, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, resetActiveProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence)[] = {
        { Py_tp_methods, t_AttitudesSequence__methods_ },
        { Py_tp_init, (void *) t_AttitudesSequence_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence, t_AttitudesSequence, AttitudesSequence);

      void t_AttitudesSequence::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence), &PY_TYPE_DEF(AttitudesSequence), module, "AttitudesSequence", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "SwitchHandler", make_descriptor(&PY_TYPE_DEF(AttitudesSequence$SwitchHandler)));
      }

      void t_AttitudesSequence::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "class_", make_descriptor(AttitudesSequence::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "wrapfn_", make_descriptor(t_AttitudesSequence::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence::wrap_Object(AttitudesSequence(((t_AttitudesSequence *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds)
      {
        AttitudesSequence object((jobject) NULL);

        INT_CALL(object = AttitudesSequence());
        self->object = object;

        return 0;
      }

      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);
        jboolean a3;
        jboolean a4;
        jdouble a5;
        ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::orekit::attitudes::AttitudesSequence$SwitchHandler a7((jobject) NULL);

        if (!parseArgs(args, "kkkZZDKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::attitudes::AttitudesSequence$SwitchHandler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a7))
        {
          OBJ_CALL(self->object.addSwitchingCondition(a0, a1, a2, a3, a4, a5, a6, a7));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSwitchingCondition", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldPropagator a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::FieldPropagator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldPropagator::parameters_))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "registerSwitchEvents", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetActiveProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetActiveProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_425debac8563c8f4] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getRotationAngles_7cdc325af0834901] = env->getMethodID(cls, "getRotationAngles", "()[D");
                  mids$[mid_getRotationRates_7cdc325af0834901] = env->getMethodID(cls, "getRotationRates", "()[D");
                  mids$[mid_hasAngles_e470b6d9e0d979db] = env->getMethodID(cls, "hasAngles", "()Z");
                  mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_isSpacecraftBodyRate_e470b6d9e0d979db] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_e470b6d9e0d979db] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInRotationAngles_50a2e0b139e80a58] = env->getMethodID(cls, "setInRotationAngles", "(Z)V");
                  mids$[mid_setIndexedRotationAngle_987a5fb872043b12] = env->getMethodID(cls, "setIndexedRotationAngle", "(ID)V");
                  mids$[mid_setIndexedRotationRate_987a5fb872043b12] = env->getMethodID(cls, "setIndexedRotationRate", "(ID)V");
                  mids$[mid_setLabeledRotationAngle_bab298509bfd5390] = env->getMethodID(cls, "setLabeledRotationAngle", "(CD)V");
                  mids$[mid_setLabeledRotationRate_bab298509bfd5390] = env->getMethodID(cls, "setLabeledRotationRate", "(CD)V");
                  mids$[mid_setRateFrameIsA_50a2e0b139e80a58] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Euler::Euler() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints Euler::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder Euler::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_425debac8563c8f4]));
              }

              JArray< jdouble > Euler::getRotationAngles() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationAngles_7cdc325af0834901]));
              }

              JArray< jdouble > Euler::getRotationRates() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationRates_7cdc325af0834901]));
              }

              jboolean Euler::hasAngles() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasAngles_e470b6d9e0d979db]);
              }

              jboolean Euler::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
              }

              jboolean Euler::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_e470b6d9e0d979db]);
              }

              jboolean Euler::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_e470b6d9e0d979db]);
              }

              void Euler::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e], a0.this$);
              }

              void Euler::setInRotationAngles(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInRotationAngles_50a2e0b139e80a58], a0);
              }

              void Euler::setIndexedRotationAngle(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationAngle_987a5fb872043b12], a0, a1);
              }

              void Euler::setIndexedRotationRate(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationRate_987a5fb872043b12], a0, a1);
              }

              void Euler::setLabeledRotationAngle(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationAngle_bab298509bfd5390], a0, a1);
              }

              void Euler::setLabeledRotationRate(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationRate_bab298509bfd5390], a0, a1);
              }

              void Euler::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_50a2e0b139e80a58], a0);
              }

              void Euler::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045Data::class$ = NULL;
              jmethodID *Rtcm1045Data::mids$ = NULL;
              bool Rtcm1045Data::live$ = false;

              jclass Rtcm1045Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGalileoDataValidityStatus_f2f64475e4580546] = env->getMethodID(cls, "getGalileoDataValidityStatus", "()I");
                  mids$[mid_getGalileoNavigationMessage_bc7800c34373e5ad] = env->getMethodID(cls, "getGalileoNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoNavigationMessage_b0fe38e2f70cd3dd] = env->getMethodID(cls, "getGalileoNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getGalileoToc", "()D");
                  mids$[mid_setGalileoDataValidityStatus_0a2a1ac2721c0336] = env->getMethodID(cls, "setGalileoDataValidityStatus", "(I)V");
                  mids$[mid_setGalileoNavigationMessage_712a4317d632ec13] = env->getMethodID(cls, "setGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
                  mids$[mid_setGalileoToc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGalileoToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045Data::Rtcm1045Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint Rtcm1045Data::getGalileoDataValidityStatus() const
              {
                return env->callIntMethod(this$, mids$[mid_getGalileoDataValidityStatus_f2f64475e4580546]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_bc7800c34373e5ad]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_b0fe38e2f70cd3dd], a0.this$));
              }

              jdouble Rtcm1045Data::getGalileoToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGalileoToc_456d9a2f64d6b28d]);
              }

              void Rtcm1045Data::setGalileoDataValidityStatus(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoDataValidityStatus_0a2a1ac2721c0336], a0);
              }

              void Rtcm1045Data::setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoNavigationMessage_712a4317d632ec13], a0.this$);
              }

              void Rtcm1045Data::setGalileoToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoToc_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args);
              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1045Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoDataValidityStatus),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoDataValidityStatus, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoDataValidityStatus, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045Data)[] = {
                { Py_tp_methods, t_Rtcm1045Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045Data_init_ },
                { Py_tp_getset, t_Rtcm1045Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1045Data, t_Rtcm1045Data, Rtcm1045Data);

              void t_Rtcm1045Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045Data), &PY_TYPE_DEF(Rtcm1045Data), module, "Rtcm1045Data", 0);
              }

              void t_Rtcm1045Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "class_", make_descriptor(Rtcm1045Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "wrapfn_", make_descriptor(t_Rtcm1045Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045Data::wrap_Object(Rtcm1045Data(((t_Rtcm1045Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1045Data object((jobject) NULL);

                INT_CALL(object = Rtcm1045Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGalileoNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGalileoNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGalileoDataValidityStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoDataValidityStatus", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGalileoNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGalileoToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGalileoDataValidityStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoDataValidityStatus", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGalileoNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGalileoNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGalileoToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoToc", arg);
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
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnIncreasing::class$ = NULL;
          jmethodID *FieldStopOnIncreasing::mids$ = NULL;
          bool FieldStopOnIncreasing::live$ = false;

          jclass FieldStopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnIncreasing::FieldStopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnIncreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args);
          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnIncreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnIncreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnIncreasing)[] = {
            { Py_tp_methods, t_FieldStopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnIncreasing_init_ },
            { Py_tp_getset, t_FieldStopOnIncreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnIncreasing, t_FieldStopOnIncreasing, FieldStopOnIncreasing);
          PyObject *t_FieldStopOnIncreasing::wrap_Object(const FieldStopOnIncreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnIncreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnIncreasing), &PY_TYPE_DEF(FieldStopOnIncreasing), module, "FieldStopOnIncreasing", 0);
          }

          void t_FieldStopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "class_", make_descriptor(FieldStopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "wrapfn_", make_descriptor(t_FieldStopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnIncreasing::wrap_Object(FieldStopOnIncreasing(((t_FieldStopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnIncreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SGP4::class$ = NULL;
          jmethodID *SGP4::mids$ = NULL;
          bool SGP4::live$ = false;

          jclass SGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3c209839d9f7d817] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_8edece06f32cbd33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_sxpInitialize_7ae3461a92a43152] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_77e0f9a1f260e2e5] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_3c209839d9f7d817, a0.this$, a1.this$, a2)) {}

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_8edece06f32cbd33, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_SGP4__methods_[] = {
            DECLARE_METHOD(t_SGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SGP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SGP4)[] = {
            { Py_tp_methods, t_SGP4__methods_ },
            { Py_tp_init, (void *) t_SGP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SGP4, t_SGP4, SGP4);

          void t_SGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SGP4), &PY_TYPE_DEF(SGP4), module, "SGP4", 0);
          }

          void t_SGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "class_", make_descriptor(SGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "wrapfn_", make_descriptor(t_SGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SGP4::initializeClass, 1)))
              return NULL;
            return t_SGP4::wrap_Object(SGP4(((t_SGP4 *) arg)->object.this$));
          }
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SGP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SGP4(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzerSelector::class$ = NULL;
            jmethodID *LexicalAnalyzerSelector::mids$ = NULL;
            bool LexicalAnalyzerSelector::live$ = false;

            jclass LexicalAnalyzerSelector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_select_a2c53fc310942aa2] = env->getStaticMethodID(cls, "select", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/utils/lexical/LexicalAnalyzer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer LexicalAnalyzerSelector::select(const ::org::orekit::data::DataSource & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer(env->callStaticObjectMethod(cls, mids$[mid_select_a2c53fc310942aa2], a0.this$));
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
            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzerSelector__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzerSelector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, select, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzerSelector)[] = {
              { Py_tp_methods, t_LexicalAnalyzerSelector__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzerSelector)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzerSelector, t_LexicalAnalyzerSelector, LexicalAnalyzerSelector);

            void t_LexicalAnalyzerSelector::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzerSelector), &PY_TYPE_DEF(LexicalAnalyzerSelector), module, "LexicalAnalyzerSelector", 0);
            }

            void t_LexicalAnalyzerSelector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "class_", make_descriptor(LexicalAnalyzerSelector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "wrapfn_", make_descriptor(t_LexicalAnalyzerSelector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzerSelector::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzerSelector::wrap_Object(LexicalAnalyzerSelector(((t_LexicalAnalyzerSelector *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzerSelector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzerSelector::select(a0));
                return ::org::orekit::files::ccsds::utils::lexical::t_LexicalAnalyzer::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "select", arg);
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
#include "org/orekit/time/PythonTimeScale.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScale::class$ = NULL;
      jmethodID *PythonTimeScale::mids$ = NULL;
      bool PythonTimeScale::live$ = false;

      jclass PythonTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScale::PythonTimeScale() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeScale::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeScale::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeScale::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self);
      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data);
      static PyGetSetDef t_PythonTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScale, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScale__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScale, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScale)[] = {
        { Py_tp_methods, t_PythonTimeScale__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScale_init_ },
        { Py_tp_getset, t_PythonTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScale, t_PythonTimeScale, PythonTimeScale);

      void t_PythonTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScale), &PY_TYPE_DEF(PythonTimeScale), module, "PythonTimeScale", 1);
      }

      void t_PythonTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "class_", make_descriptor(PythonTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "wrapfn_", make_descriptor(t_PythonTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScale::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonTimeScale_getName0 },
          { "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScale_offsetFromTAI1 },
          { "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScale_offsetFromTAI2 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScale_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScale::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScale::wrap_Object(PythonTimeScale(((t_PythonTimeScale *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScale object((jobject) NULL);

        INT_CALL(object = PythonTimeScale());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("offsetFromTAI", result);
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

      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemParser::class$ = NULL;
              jmethodID *OemParser::mids$ = NULL;
              bool OemParser::live$ = false;

              jclass OemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_6d486fddb64861be] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_720b26b998d380f3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_cd6052b624eba070] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_build_6d486fddb64861be]));
              }

              jboolean OemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean OemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean OemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_720b26b998d380f3]));
              }

              jboolean OemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean OemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean OemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_parse_cd6052b624eba070], a0.this$));
              }

              jboolean OemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean OemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean OemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void OemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
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
            namespace oem {
              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg);
              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data);
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data);
              static PyGetSetDef t_OemParser__fields_[] = {
                DECLARE_GET_FIELD(t_OemParser, header),
                DECLARE_GET_FIELD(t_OemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemParser__methods_[] = {
                DECLARE_METHOD(t_OemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, parse, METH_O),
                DECLARE_METHOD(t_OemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemParser)[] = {
                { Py_tp_methods, t_OemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OemParser, t_OemParser, OemParser);
              PyObject *t_OemParser::wrap_Object(const OemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OemParser), &PY_TYPE_DEF(OemParser), module, "OemParser", 0);
              }

              void t_OemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "class_", make_descriptor(OemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "wrapfn_", make_descriptor(t_OemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemParser::initializeClass, 1)))
                  return NULL;
                return t_OemParser::wrap_Object(OemParser(((t_OemParser *) arg)->object.this$));
              }
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
