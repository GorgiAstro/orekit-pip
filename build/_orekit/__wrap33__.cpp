#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *AbstractRuleFactory::class$ = NULL;
          jmethodID *AbstractRuleFactory::mids$ = NULL;
          bool AbstractRuleFactory::live$ = false;

          jclass AbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/AbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getRule_acde278e36767299] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_c3f2f38783a7b048] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/UnivariateFunction;)[D");
              mids$[mid_enforceSymmetry_ab69da052b88f50c] = env->getMethodID(cls, "enforceSymmetry", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRuleFactory::AbstractRuleFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::util::Pair AbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_acde278e36767299], a0));
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
          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg);

          static PyMethodDef t_AbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_AbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRuleFactory)[] = {
            { Py_tp_methods, t_AbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_AbstractRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRuleFactory, t_AbstractRuleFactory, AbstractRuleFactory);

          void t_AbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRuleFactory), &PY_TYPE_DEF(AbstractRuleFactory), module, "AbstractRuleFactory", 0);
          }

          void t_AbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "class_", make_descriptor(AbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "wrapfn_", make_descriptor(t_AbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_AbstractRuleFactory::wrap_Object(AbstractRuleFactory(((t_AbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            AbstractRuleFactory object((jobject) NULL);

            INT_CALL(object = AbstractRuleFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1Field::mids$ = NULL;
        bool FieldUnivariateDerivative1Field::live$ = false;

        jclass FieldUnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_b6c5666e0fb56c6c] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative1Field_d08ba09bfcc21d71] = env->getStaticMethodID(cls, "getUnivariateDerivative1Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getZero_b6c5666e0fb56c6c] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_b6c5666e0fb56c6c]));
        }

        ::java::lang::Class FieldUnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        FieldUnivariateDerivative1Field FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative1Field_d08ba09bfcc21d71], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_b6c5666e0fb56c6c]));
        }

        jint FieldUnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getUnivariateDerivative1Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1Field, t_FieldUnivariateDerivative1Field, FieldUnivariateDerivative1Field);
        PyObject *t_FieldUnivariateDerivative1Field::wrap_Object(const FieldUnivariateDerivative1Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1Field), &PY_TYPE_DEF(FieldUnivariateDerivative1Field), module, "FieldUnivariateDerivative1Field", 0);
        }

        void t_FieldUnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "class_", make_descriptor(FieldUnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1Field::wrap_Object(FieldUnivariateDerivative1Field(((t_FieldUnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(a0));
            return t_FieldUnivariateDerivative1Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative1Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiElliptic::class$ = NULL;
          jmethodID *JacobiElliptic::mids$ = NULL;
          bool JacobiElliptic::live$ = false;

          jclass JacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_04fd0666b613d2ab] = env->getMethodID(cls, "arccd", "(D)D");
              mids$[mid_arccn_04fd0666b613d2ab] = env->getMethodID(cls, "arccn", "(D)D");
              mids$[mid_arccs_04fd0666b613d2ab] = env->getMethodID(cls, "arccs", "(D)D");
              mids$[mid_arcdc_04fd0666b613d2ab] = env->getMethodID(cls, "arcdc", "(D)D");
              mids$[mid_arcdn_04fd0666b613d2ab] = env->getMethodID(cls, "arcdn", "(D)D");
              mids$[mid_arcds_04fd0666b613d2ab] = env->getMethodID(cls, "arcds", "(D)D");
              mids$[mid_arcnc_04fd0666b613d2ab] = env->getMethodID(cls, "arcnc", "(D)D");
              mids$[mid_arcnd_04fd0666b613d2ab] = env->getMethodID(cls, "arcnd", "(D)D");
              mids$[mid_arcns_04fd0666b613d2ab] = env->getMethodID(cls, "arcns", "(D)D");
              mids$[mid_arcsc_04fd0666b613d2ab] = env->getMethodID(cls, "arcsc", "(D)D");
              mids$[mid_arcsd_04fd0666b613d2ab] = env->getMethodID(cls, "arcsd", "(D)D");
              mids$[mid_arcsn_04fd0666b613d2ab] = env->getMethodID(cls, "arcsn", "(D)D");
              mids$[mid_getM_b74f83833fdad017] = env->getMethodID(cls, "getM", "()D");
              mids$[mid_valuesC_545caebfa28309a9] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarC;");
              mids$[mid_valuesD_6a4049a0051db77c] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarD;");
              mids$[mid_valuesN_222bbb96d14af314] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarN;");
              mids$[mid_valuesS_b422a8107f59c4c9] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JacobiElliptic::arccd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccd_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arccn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccn_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arccs(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccs_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcdc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdc_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcdn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdn_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcds(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcds_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcnc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnc_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcnd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnd_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcns(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcns_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcsc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsc_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcsd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsd_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::arcsn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsn_04fd0666b613d2ab], a0);
          }

          jdouble JacobiElliptic::getM() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM_b74f83833fdad017]);
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarC JacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_545caebfa28309a9], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarD JacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_6a4049a0051db77c], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarN JacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_222bbb96d14af314], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarS JacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_b422a8107f59c4c9], a0));
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
          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self);
          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data);
          static PyGetSetDef t_JacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiElliptic, m),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_JacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, arccd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccs, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcds, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcns, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_JacobiElliptic, valuesC, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesD, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesN, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesS, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiElliptic)[] = {
            { Py_tp_methods, t_JacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiElliptic, t_JacobiElliptic, JacobiElliptic);

          void t_JacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiElliptic), &PY_TYPE_DEF(JacobiElliptic), module, "JacobiElliptic", 0);
          }

          void t_JacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "class_", make_descriptor(JacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "wrapfn_", make_descriptor(t_JacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_JacobiElliptic::wrap_Object(JacobiElliptic(((t_JacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccs(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcds(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcns(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarC result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesC(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarC::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarD result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesD(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarD::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarN result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesN(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarN::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarS result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesS(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarS::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationData::class$ = NULL;
          jmethodID *ObservationData::mids$ = NULL;
          bool ObservationData::live$ = false;

          jclass ObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9af4f38a9192ac92] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/ObservationType;DII)V");
              mids$[mid_getLossOfLockIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getLossOfLockIndicator", "()I");
              mids$[mid_getObservationType_eeb5027d2516140e] = env->getMethodID(cls, "getObservationType", "()Lorg/orekit/gnss/ObservationType;");
              mids$[mid_getSignalStrength_55546ef6a647f39b] = env->getMethodID(cls, "getSignalStrength", "()I");
              mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationData::ObservationData(const ::org::orekit::gnss::ObservationType & a0, jdouble a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9af4f38a9192ac92, a0.this$, a1, a2, a3)) {}

          jint ObservationData::getLossOfLockIndicator() const
          {
            return env->callIntMethod(this$, mids$[mid_getLossOfLockIndicator_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::ObservationType ObservationData::getObservationType() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getObservationType_eeb5027d2516140e]));
          }

          jint ObservationData::getSignalStrength() const
          {
            return env->callIntMethod(this$, mids$[mid_getSignalStrength_55546ef6a647f39b]);
          }

          jdouble ObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
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
          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self);
          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self);
          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self);
          static PyObject *t_ObservationData_getValue(t_ObservationData *self);
          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data);
          static PyGetSetDef t_ObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationData, lossOfLockIndicator),
            DECLARE_GET_FIELD(t_ObservationData, observationType),
            DECLARE_GET_FIELD(t_ObservationData, signalStrength),
            DECLARE_GET_FIELD(t_ObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationData__methods_[] = {
            DECLARE_METHOD(t_ObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, getLossOfLockIndicator, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getObservationType, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getSignalStrength, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationData)[] = {
            { Py_tp_methods, t_ObservationData__methods_ },
            { Py_tp_init, (void *) t_ObservationData_init_ },
            { Py_tp_getset, t_ObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationData, t_ObservationData, ObservationData);

          void t_ObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationData), &PY_TYPE_DEF(ObservationData), module, "ObservationData", 0);
          }

          void t_ObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "class_", make_descriptor(ObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "wrapfn_", make_descriptor(t_ObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationData::initializeClass, 1)))
              return NULL;
            return t_ObservationData::wrap_Object(ObservationData(((t_ObservationData *) arg)->object.this$));
          }
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::ObservationType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jint a3;
            ObservationData object((jobject) NULL);

            if (!parseArgs(args, "KDII", ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = ObservationData(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSignalStrength());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getValue(t_ObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }

          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSignalStrength());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealMatrix::class$ = NULL;
      jmethodID *SparseRealMatrix::mids$ = NULL;
      bool SparseRealMatrix::live$ = false;

      jclass SparseRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealMatrix");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_SparseRealMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealMatrix, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealMatrix)[] = {
        { Py_tp_methods, t_SparseRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealMatrix),
        NULL
      };

      DEFINE_TYPE(SparseRealMatrix, t_SparseRealMatrix, SparseRealMatrix);

      void t_SparseRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealMatrix), &PY_TYPE_DEF(SparseRealMatrix), module, "SparseRealMatrix", 0);
      }

      void t_SparseRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "class_", make_descriptor(SparseRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "wrapfn_", make_descriptor(t_SparseRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseRealMatrix::wrap_Object(SparseRealMatrix(((t_SparseRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeCrossingDetector::class$ = NULL;
        jmethodID *LongitudeCrossingDetector::mids$ = NULL;
        bool LongitudeCrossingDetector::live$ = false;

        jclass LongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d11e39be76d848c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_2b115367b64f9286] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_79621c4db5045679] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeCrossingDetector::LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d11e39be76d848c0, a0.this$, a1)) {}

        LongitudeCrossingDetector::LongitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2b115367b64f9286, a0, a1, a2.this$, a3)) {}

        jdouble LongitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
        }

        jdouble LongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
        }

        void LongitudeCrossingDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args);
        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeCrossingDetector, t_LongitudeCrossingDetector, LongitudeCrossingDetector);
        PyObject *t_LongitudeCrossingDetector::wrap_Object(const LongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeCrossingDetector), &PY_TYPE_DEF(LongitudeCrossingDetector), module, "LongitudeCrossingDetector", 0);
        }

        void t_LongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "class_", make_descriptor(LongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "wrapfn_", make_descriptor(t_LongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeCrossingDetector::wrap_Object(LongitudeCrossingDetector(((t_LongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
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

        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/List.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateRealDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateRealDistribution::mids$ = NULL;
        bool MixtureMultivariateRealDistribution::live$ = false;

        jclass MixtureMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_a7978026a1eb93a2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_density_b060e4326765ccf1] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getComponents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_25e1757a36c4dde2] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a7978026a1eb93a2, a0.this$, a1.this$)) {}

        jdouble MixtureMultivariateRealDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_b060e4326765ccf1], a0.this$);
        }

        ::java::util::List MixtureMultivariateRealDistribution::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_e62d3bb06d56d7e3]));
        }

        void MixtureMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456], a0);
        }

        JArray< jdouble > MixtureMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_25e1757a36c4dde2]));
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
        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self);
        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, components),
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, of_, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, reseedRandomGenerator, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateRealDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateRealDistribution, t_MixtureMultivariateRealDistribution, MixtureMultivariateRealDistribution);
        PyObject *t_MixtureMultivariateRealDistribution::wrap_Object(const MixtureMultivariateRealDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateRealDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateRealDistribution), &PY_TYPE_DEF(MixtureMultivariateRealDistribution), module, "MixtureMultivariateRealDistribution", 0);
        }

        void t_MixtureMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "class_", make_descriptor(MixtureMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateRealDistribution::wrap_Object(MixtureMultivariateRealDistribution(((t_MixtureMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0, a1));
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

        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "reseedRandomGenerator", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "sample", args, 2);
        }
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedDCBS::class$ = NULL;
        jmethodID *AppliedDCBS::mids$ = NULL;
        bool AppliedDCBS::live$ = false;

        jclass AppliedDCBS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedDCBS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ffc5087441db4aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgDCBS_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProgDCBS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourceDCBS_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceDCBS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedDCBS::AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ffc5087441db4aa, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedDCBS::getProgDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgDCBS_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedDCBS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
        }

        ::java::lang::String AppliedDCBS::getSourceDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceDCBS_1c1fa1e935d6cdcf]));
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
        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data);
        static PyGetSetDef t_AppliedDCBS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedDCBS, progDCBS),
          DECLARE_GET_FIELD(t_AppliedDCBS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedDCBS, sourceDCBS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedDCBS__methods_[] = {
          DECLARE_METHOD(t_AppliedDCBS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, getProgDCBS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSourceDCBS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedDCBS)[] = {
          { Py_tp_methods, t_AppliedDCBS__methods_ },
          { Py_tp_init, (void *) t_AppliedDCBS_init_ },
          { Py_tp_getset, t_AppliedDCBS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedDCBS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedDCBS, t_AppliedDCBS, AppliedDCBS);

        void t_AppliedDCBS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedDCBS), &PY_TYPE_DEF(AppliedDCBS), module, "AppliedDCBS", 0);
        }

        void t_AppliedDCBS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "class_", make_descriptor(AppliedDCBS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "wrapfn_", make_descriptor(t_AppliedDCBS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedDCBS::initializeClass, 1)))
            return NULL;
          return t_AppliedDCBS::wrap_Object(AppliedDCBS(((t_AppliedDCBS *) arg)->object.this$));
        }
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedDCBS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedDCBS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedDCBS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgDCBS());
          return j2p(value);
        }

        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceDCBS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariatePointValuePair::class$ = NULL;
        jmethodID *UnivariatePointValuePair::mids$ = NULL;
        bool UnivariatePointValuePair::live$ = false;

        jclass UnivariatePointValuePair::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariatePointValuePair");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPoint_b74f83833fdad017] = env->getMethodID(cls, "getPoint", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePointValuePair::UnivariatePointValuePair(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble UnivariatePointValuePair::getPoint() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPoint_b74f83833fdad017]);
        }

        jdouble UnivariatePointValuePair::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
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
        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data);
        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data);
        static PyGetSetDef t_UnivariatePointValuePair__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, point),
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariatePointValuePair__methods_[] = {
          DECLARE_METHOD(t_UnivariatePointValuePair, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePointValuePair)[] = {
          { Py_tp_methods, t_UnivariatePointValuePair__methods_ },
          { Py_tp_init, (void *) t_UnivariatePointValuePair_init_ },
          { Py_tp_getset, t_UnivariatePointValuePair__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePointValuePair)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePointValuePair, t_UnivariatePointValuePair, UnivariatePointValuePair);

        void t_UnivariatePointValuePair::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePointValuePair), &PY_TYPE_DEF(UnivariatePointValuePair), module, "UnivariatePointValuePair", 0);
        }

        void t_UnivariatePointValuePair::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "class_", make_descriptor(UnivariatePointValuePair::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "wrapfn_", make_descriptor(t_UnivariatePointValuePair::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePointValuePair::initializeClass, 1)))
            return NULL;
          return t_UnivariatePointValuePair::wrap_Object(UnivariatePointValuePair(((t_UnivariatePointValuePair *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePointValuePair::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          UnivariatePointValuePair object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = UnivariatePointValuePair(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPoint());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPoint());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeMeasurement::class$ = NULL;
        jmethodID *CRD$RangeMeasurement::mids$ = NULL;
        bool CRD$RangeMeasurement::live$ = false;

        jclass CRD$RangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_85622290a07d1cb6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_init$_d9839f7b76900b24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DID)V");
            mids$[mid_init$_ce9c96f5fdc70ab3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochEvent_55546ef6a647f39b] = env->getMethodID(cls, "getEpochEvent", "()I");
            mids$[mid_getSnr_b74f83833fdad017] = env->getMethodID(cls, "getSnr", "()D");
            mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeOfFlight_b74f83833fdad017] = env->getMethodID(cls, "getTimeOfFlight", "()D");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85622290a07d1cb6, a0.this$, a1, a2)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9839f7b76900b24, a0.this$, a1, a2, a3)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce9c96f5fdc70ab3, a0.this$, a1, a2, a3, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate CRD$RangeMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jint CRD$RangeMeasurement::getEpochEvent() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochEvent_55546ef6a647f39b]);
        }

        jdouble CRD$RangeMeasurement::getSnr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSnr_b74f83833fdad017]);
        }

        ::java::lang::String CRD$RangeMeasurement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf]));
        }

        jdouble CRD$RangeMeasurement::getTimeOfFlight() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOfFlight_b74f83833fdad017]);
        }

        ::java::lang::String CRD$RangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$RangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, epochEvent),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, snr),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, timeOfFlight),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getEpochEvent, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSnr, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getTimeOfFlight, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$RangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$RangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeMeasurement, t_CRD$RangeMeasurement, CRD$RangeMeasurement);

        void t_CRD$RangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeMeasurement), &PY_TYPE_DEF(CRD$RangeMeasurement), module, "CRD$RangeMeasurement", 0);
        }

        void t_CRD$RangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "class_", make_descriptor(CRD$RangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "wrapfn_", make_descriptor(t_CRD$RangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeMeasurement::wrap_Object(CRD$RangeMeasurement(((t_CRD$RangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochEvent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSnr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochEvent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSnr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanModel::class$ = NULL;
        jmethodID *KalmanModel::mids$ = NULL;
        bool KalmanModel::live$ = false;

        jclass KalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6632607fcc043559] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getBuilders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getBuilders", "()Ljava/util/List;");
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_e37ac5ac73cc5311] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_17493e4ff0ba8a7f] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_bcc61f692c4eea8a] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_dd883423c2f99f26] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getReferenceTrajectories_17493e4ff0ba8a7f] = env->getMethodID(cls, "getReferenceTrajectories", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setReferenceTrajectories_a9690f45154b1c92] = env->getMethodID(cls, "setReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_updateReferenceTrajectories_a9690f45154b1c92] = env->getMethodID(cls, "updateReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanModel::KalmanModel(const ::java::util::List & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6632607fcc043559, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void KalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_aef7db4b13ced902], a0.this$, a1.this$);
        }

        ::java::util::List KalmanModel::getBuilders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBuilders_e62d3bb06d56d7e3]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821]));
        }

        ::org::orekit::time::AbsoluteDate KalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint KalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_e37ac5ac73cc5311]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_17493e4ff0ba8a7f]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution KalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_bcc61f692c4eea8a], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_dd883423c2f99f26], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getReferenceTrajectories() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getReferenceTrajectories_17493e4ff0ba8a7f]));
        }

        void KalmanModel::setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceTrajectories_a9690f45154b1c92], a0.this$);
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
        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self);
        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg);
        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data);
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanModel, builders),
          DECLARE_GET_FIELD(t_KalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanModel, currentDate),
          DECLARE_GET_FIELD(t_KalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanModel, estimate),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, predictedSpacecraftStates),
          DECLARE_GETSET_FIELD(t_KalmanModel, referenceTrajectories),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanModel__methods_[] = {
          DECLARE_METHOD(t_KalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getBuilders, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getReferenceTrajectories, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, setReferenceTrajectories, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanModel)[] = {
          { Py_tp_methods, t_KalmanModel__methods_ },
          { Py_tp_init, (void *) t_KalmanModel_init_ },
          { Py_tp_getset, t_KalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanModel, t_KalmanModel, KalmanModel);

        void t_KalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanModel), &PY_TYPE_DEF(KalmanModel), module, "KalmanModel", 0);
        }

        void t_KalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "class_", make_descriptor(KalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "wrapfn_", make_descriptor(t_KalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanModel::initializeClass, 1)))
            return NULL;
          return t_KalmanModel::wrap_Object(KalmanModel(((t_KalmanModel *) arg)->object.this$));
        }
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a3((jobject) NULL);
          KalmanModel object((jobject) NULL);

          if (!parseArgs(args, "KKkk", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = KalmanModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::conversion::PY_TYPE(PropagatorBuilder));
        }

        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceTrajectories());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg)
        {
          JArray< ::org::orekit::propagation::Propagator > a0((jobject) NULL);

          if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceTrajectories(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setReferenceTrajectories", arg);
          return NULL;
        }

        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceTrajectories());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data)
        {
          {
            JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
            if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceTrajectories(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceTrajectories", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionField::class$ = NULL;
      jmethodID *BigFractionField::mids$ = NULL;
      bool BigFractionField::live$ = false;

      jclass BigFractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_23be7e86283dd98a] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getOne_7369b54299dcf892] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_7369b54299dcf892] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      BigFractionField BigFractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_23be7e86283dd98a]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getOne() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getOne_7369b54299dcf892]));
      }

      ::java::lang::Class BigFractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getZero() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getZero_7369b54299dcf892]));
      }

      jint BigFractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type);
      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self);
      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data);
      static PyGetSetDef t_BigFractionField__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionField, instance),
        DECLARE_GET_FIELD(t_BigFractionField, one),
        DECLARE_GET_FIELD(t_BigFractionField, runtimeClass),
        DECLARE_GET_FIELD(t_BigFractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionField__methods_[] = {
        DECLARE_METHOD(t_BigFractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionField)[] = {
        { Py_tp_methods, t_BigFractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigFractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFractionField, t_BigFractionField, BigFractionField);

      void t_BigFractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionField), &PY_TYPE_DEF(BigFractionField), module, "BigFractionField", 0);
      }

      void t_BigFractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "class_", make_descriptor(BigFractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "wrapfn_", make_descriptor(t_BigFractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionField::initializeClass, 1)))
          return NULL;
        return t_BigFractionField::wrap_Object(BigFractionField(((t_BigFractionField *) arg)->object.this$));
      }
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type)
      {
        BigFractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionField::getInstance());
        return t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
      }

      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data)
      {
        BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *Action::class$ = NULL;
        jmethodID *Action::mids$ = NULL;
        bool Action::live$ = false;
        Action *Action::CONTINUE = NULL;
        Action *Action::RESET_DERIVATIVES = NULL;
        Action *Action::RESET_EVENTS = NULL;
        Action *Action::RESET_STATE = NULL;
        Action *Action::STOP = NULL;

        jclass Action::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/Action");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7b30ef58b669e139] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_values_e4c1431cc3cc7a0d] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CONTINUE = new Action(env->getStaticObjectField(cls, "CONTINUE", "Lorg/hipparchus/ode/events/Action;"));
            RESET_DERIVATIVES = new Action(env->getStaticObjectField(cls, "RESET_DERIVATIVES", "Lorg/hipparchus/ode/events/Action;"));
            RESET_EVENTS = new Action(env->getStaticObjectField(cls, "RESET_EVENTS", "Lorg/hipparchus/ode/events/Action;"));
            RESET_STATE = new Action(env->getStaticObjectField(cls, "RESET_STATE", "Lorg/hipparchus/ode/events/Action;"));
            STOP = new Action(env->getStaticObjectField(cls, "STOP", "Lorg/hipparchus/ode/events/Action;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Action Action::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Action(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7b30ef58b669e139], a0.this$));
        }

        JArray< Action > Action::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Action >(env->callStaticObjectMethod(cls, mids$[mid_values_e4c1431cc3cc7a0d]));
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
        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_of_(t_Action *self, PyObject *args);
        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Action_values(PyTypeObject *type);
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data);
        static PyGetSetDef t_Action__fields_[] = {
          DECLARE_GET_FIELD(t_Action, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Action__methods_[] = {
          DECLARE_METHOD(t_Action, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, of_, METH_VARARGS),
          DECLARE_METHOD(t_Action, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Action, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Action)[] = {
          { Py_tp_methods, t_Action__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Action__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Action)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Action, t_Action, Action);
        PyObject *t_Action::wrap_Object(const Action& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Action::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Action::install(PyObject *module)
        {
          installType(&PY_TYPE(Action), &PY_TYPE_DEF(Action), module, "Action", 0);
        }

        void t_Action::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "class_", make_descriptor(Action::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "wrapfn_", make_descriptor(t_Action::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "boxfn_", make_descriptor(boxObject));
          env->getClass(Action::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "CONTINUE", make_descriptor(t_Action::wrap_Object(*Action::CONTINUE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_DERIVATIVES", make_descriptor(t_Action::wrap_Object(*Action::RESET_DERIVATIVES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_EVENTS", make_descriptor(t_Action::wrap_Object(*Action::RESET_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_STATE", make_descriptor(t_Action::wrap_Object(*Action::RESET_STATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "STOP", make_descriptor(t_Action::wrap_Object(*Action::STOP)));
        }

        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Action::initializeClass, 1)))
            return NULL;
          return t_Action::wrap_Object(Action(((t_Action *) arg)->object.this$));
        }
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Action::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Action_of_(t_Action *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Action result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::Action::valueOf(a0));
            return t_Action::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Action_values(PyTypeObject *type)
        {
          JArray< Action > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::Action::values());
          return JArray<jobject>(result.this$).wrap(t_Action::wrap_jobject);
        }
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter::class$ = NULL;
              jmethodID *StreamingOemWriter::mids$ = NULL;
              bool StreamingOemWriter::live$ = false;

              jclass StreamingOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_67b99df0773558dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)V");
                  mids$[mid_init$_4d6a5fdfe5fcaad6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Z)V");
                  mids$[mid_init$_eec9264143d3c558] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;ZZ)V");
                  mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_c664b79ec95d14a1] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67b99df0773558dd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d6a5fdfe5fcaad6, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eec9264143d3c558, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5)) {}

              void StreamingOemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter StreamingOemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_c664b79ec95d14a1]));
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
              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self);
              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self);

              static PyMethodDef t_StreamingOemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter, t_StreamingOemWriter, StreamingOemWriter);

              void t_StreamingOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter), &PY_TYPE_DEF(StreamingOemWriter), module, "StreamingOemWriter", 0);
              }

              void t_StreamingOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "class_", make_descriptor(StreamingOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter::wrap_Object(StreamingOemWriter(((t_StreamingOemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    jboolean a5;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_StreamingOemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationType::class$ = NULL;
            jmethodID *ObservationType::mids$ = NULL;
            bool ObservationType::live$ = false;
            ObservationType *ObservationType::ANGLE_1 = NULL;
            ObservationType *ObservationType::ANGLE_2 = NULL;
            ObservationType *ObservationType::CARRIER_POWER = NULL;
            ObservationType *ObservationType::CLOCK_BIAS = NULL;
            ObservationType *ObservationType::CLOCK_DRIFT = NULL;
            ObservationType *ObservationType::DOPPLER_COUNT = NULL;
            ObservationType *ObservationType::DOPPLER_INSTANTANEOUS = NULL;
            ObservationType *ObservationType::DOPPLER_INTEGRATED = NULL;
            ObservationType *ObservationType::DOR = NULL;
            ObservationType *ObservationType::MAG = NULL;
            ObservationType *ObservationType::PC_N0 = NULL;
            ObservationType *ObservationType::PRESSURE = NULL;
            ObservationType *ObservationType::PR_N0 = NULL;
            ObservationType *ObservationType::RANGE = NULL;
            ObservationType *ObservationType::RCS = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_1 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_2 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_3 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_4 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_5 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::RHUMIDITY = NULL;
            ObservationType *ObservationType::STEC = NULL;
            ObservationType *ObservationType::TEMPERATURE = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::TROPO_DRY = NULL;
            ObservationType *ObservationType::TROPO_WET = NULL;
            ObservationType *ObservationType::VLBI_DELAY = NULL;

            jclass ObservationType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_b7c3708fca3923a9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_rawToSI_6d931ca20ddf48e9] = env->getMethodID(cls, "rawToSI", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_siToRaw_6d931ca20ddf48e9] = env->getMethodID(cls, "siToRaw", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_valueOf_fba48979799bc99c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");
                mids$[mid_values_2e0e613b66111033] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_1 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                ANGLE_2 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CARRIER_POWER = new ObservationType(env->getStaticObjectField(cls, "CARRIER_POWER", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_BIAS = new ObservationType(env->getStaticObjectField(cls, "CLOCK_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_DRIFT = new ObservationType(env->getStaticObjectField(cls, "CLOCK_DRIFT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_COUNT = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_COUNT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INSTANTANEOUS = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INSTANTANEOUS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INTEGRATED = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INTEGRATED", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOR = new ObservationType(env->getStaticObjectField(cls, "DOR", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                MAG = new ObservationType(env->getStaticObjectField(cls, "MAG", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PC_N0 = new ObservationType(env->getStaticObjectField(cls, "PC_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PRESSURE = new ObservationType(env->getStaticObjectField(cls, "PRESSURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PR_N0 = new ObservationType(env->getStaticObjectField(cls, "PR_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RANGE = new ObservationType(env->getStaticObjectField(cls, "RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RCS = new ObservationType(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RHUMIDITY = new ObservationType(env->getStaticObjectField(cls, "RHUMIDITY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                STEC = new ObservationType(env->getStaticObjectField(cls, "STEC", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TEMPERATURE = new ObservationType(env->getStaticObjectField(cls, "TEMPERATURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_DRY = new ObservationType(env->getStaticObjectField(cls, "TROPO_DRY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_WET = new ObservationType(env->getStaticObjectField(cls, "TROPO_WET", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                VLBI_DELAY = new ObservationType(env->getStaticObjectField(cls, "VLBI_DELAY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ObservationType::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a3, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_b7c3708fca3923a9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$);
            }

            jdouble ObservationType::rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_rawToSI_6d931ca20ddf48e9], a0.this$, a1.this$, a2.this$, a3);
            }

            jdouble ObservationType::siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_siToRaw_6d931ca20ddf48e9], a0.this$, a1.this$, a2.this$, a3);
            }

            ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fba48979799bc99c], a0.this$));
            }

            JArray< ObservationType > ObservationType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_2e0e613b66111033]));
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
            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ObservationType_values(PyTypeObject *type);
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
            static PyGetSetDef t_ObservationType__fields_[] = {
              DECLARE_GET_FIELD(t_ObservationType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationType__methods_[] = {
              DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, process, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, rawToSI, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, siToRaw, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
              { Py_tp_methods, t_ObservationType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ObservationType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
            PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ObservationType::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
            }

            void t_ObservationType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ObservationType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CARRIER_POWER", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CARRIER_POWER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_BIAS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_DRIFT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_DRIFT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_COUNT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_COUNT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INSTANTANEOUS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INSTANTANEOUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INTEGRATED", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INTEGRATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOR", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "MAG", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PC_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PC_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PRESSURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PRESSURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PR_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PR_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RANGE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RCS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RHUMIDITY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RHUMIDITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "STEC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::STEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TEMPERATURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TEMPERATURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_DRY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_DRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_WET", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_WET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "VLBI_DELAY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::VLBI_DELAY)));
            }

            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
                return NULL;
              return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
            }
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a3((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.rawToSI(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "rawToSI", args);
              return NULL;
            }

            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.siToRaw(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToRaw", args);
              return NULL;
            }

            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ObservationType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::valueOf(a0));
                return t_ObservationType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ObservationType_values(PyTypeObject *type)
            {
              JArray< ObservationType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::values());
              return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
            }
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
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
                  mids$[mid_init$_fe20320dccf187ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_d0fba019b612db04] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getAdmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getAlternateNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAlternateNames", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getCdmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getCelestialSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCelestialSource", "()Ljava/lang/String;");
                  mids$[mid_getConstellation_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getConstellation", "()Ljava/lang/String;");
                  mids$[mid_getCountry_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
                  mids$[mid_getEopSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getEopSource", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_c325492395d89b24] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getInterpMethodEOP_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpMethodEOP", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_c325492395d89b24] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_b74f83833fdad017] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getNextMessageEpoch_c325492395d89b24] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextMessageID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNextMessageID", "()Ljava/lang/String;");
                  mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getObjectType_d6ea2275c46038b6] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_getOcmDataElements_e62d3bb06d56d7e3] = env->getMethodID(cls, "getOcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getOperator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
                  mids$[mid_getOpsStatus_2ad1accfe17bcf9c] = env->getMethodID(cls, "getOpsStatus", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_getOrbitCategory_19fa1df2d5f6df19] = env->getMethodID(cls, "getOrbitCategory", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_getOriginatorAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getOwner_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOwner", "()Ljava/lang/String;");
                  mids$[mid_getPreviousMessageEpoch_c325492395d89b24] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getPreviousMessageID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPreviousMessageID", "()Ljava/lang/String;");
                  mids$[mid_getPrmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getRdmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getSclkOffsetAtEpoch_b74f83833fdad017] = env->getMethodID(cls, "getSclkOffsetAtEpoch", "()D");
                  mids$[mid_getSclkSecPerSISec_b74f83833fdad017] = env->getMethodID(cls, "getSclkSecPerSISec", "()D");
                  mids$[mid_getStartTime_c325492395d89b24] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_c325492395d89b24] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_b74f83833fdad017] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_getTdmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getTechAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechAddress", "()Ljava/lang/String;");
                  mids$[mid_getTechEmail_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechEmail", "()Ljava/lang/String;");
                  mids$[mid_getTechOrg_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechOrg", "()Ljava/lang/String;");
                  mids$[mid_getTechPOC_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechPOC", "()Ljava/lang/String;");
                  mids$[mid_getTechPhone_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechPhone", "()Ljava/lang/String;");
                  mids$[mid_getTechPosition_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTechPosition", "()Ljava/lang/String;");
                  mids$[mid_getTimeSpan_b74f83833fdad017] = env->getMethodID(cls, "getTimeSpan", "()D");
                  mids$[mid_getUt1mutcT0_b74f83833fdad017] = env->getMethodID(cls, "getUt1mutcT0", "()D");
                  mids$[mid_setAdmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setAdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setAlternateNames_0e7c3032c7c93ed3] = env->getMethodID(cls, "setAlternateNames", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_734b91ac30d5f9b4] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setCdmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setCdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setCelestialSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setCelestialSource", "(Ljava/lang/String;)V");
                  mids$[mid_setConstellation_734b91ac30d5f9b4] = env->getMethodID(cls, "setConstellation", "(Ljava/lang/String;)V");
                  mids$[mid_setCountry_734b91ac30d5f9b4] = env->getMethodID(cls, "setCountry", "(Ljava/lang/String;)V");
                  mids$[mid_setEopSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setEopSource", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_734b91ac30d5f9b4] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setInterpMethodEOP_734b91ac30d5f9b4] = env->getMethodID(cls, "setInterpMethodEOP", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_8ba9fe7a847cecad] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setNextMessageEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextMessageID_734b91ac30d5f9b4] = env->getMethodID(cls, "setNextMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectDesignator_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectType_05187042fbba2328] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                  mids$[mid_setOcmDataElements_0e7c3032c7c93ed3] = env->getMethodID(cls, "setOcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setOperator_734b91ac30d5f9b4] = env->getMethodID(cls, "setOperator", "(Ljava/lang/String;)V");
                  mids$[mid_setOpsStatus_1f63eee657c3c122] = env->getMethodID(cls, "setOpsStatus", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;)V");
                  mids$[mid_setOrbitCategory_81230c59907b9101] = env->getMethodID(cls, "setOrbitCategory", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;)V");
                  mids$[mid_setOriginatorAddress_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setOwner_734b91ac30d5f9b4] = env->getMethodID(cls, "setOwner", "(Ljava/lang/String;)V");
                  mids$[mid_setPreviousMessageEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setPreviousMessageID_734b91ac30d5f9b4] = env->getMethodID(cls, "setPreviousMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setPrmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setPrmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setRdmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setRdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setSclkOffsetAtEpoch_8ba9fe7a847cecad] = env->getMethodID(cls, "setSclkOffsetAtEpoch", "(D)V");
                  mids$[mid_setSclkSecPerSISec_8ba9fe7a847cecad] = env->getMethodID(cls, "setSclkSecPerSISec", "(D)V");
                  mids$[mid_setStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_8ba9fe7a847cecad] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_setTdmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setTdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setTechAddress_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setTechEmail_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setTechOrg_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechOrg", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPOC_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPhone_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPosition_734b91ac30d5f9b4] = env->getMethodID(cls, "setTechPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setTimeSpan_8ba9fe7a847cecad] = env->getMethodID(cls, "setTimeSpan", "(D)V");
                  mids$[mid_setUt1mutcT0_8ba9fe7a847cecad] = env->getMethodID(cls, "setUt1mutcT0", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCLK_OFFSET_AT_EPOCH = env->getStaticDoubleField(cls, "DEFAULT_SCLK_OFFSET_AT_EPOCH");
                  DEFAULT_SCLK_SEC_PER_SI_SEC = env->getStaticDoubleField(cls, "DEFAULT_SCLK_SEC_PER_SI_SEC");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmMetadata::OcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_fe20320dccf187ae, a0.this$)) {}

              OcmMetadata OcmMetadata::copy(jdouble a0) const
              {
                return OcmMetadata(env->callObjectMethod(this$, mids$[mid_copy_d0fba019b612db04], a0));
              }

              ::java::lang::String OcmMetadata::getAdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMessageLink_1c1fa1e935d6cdcf]));
              }

              ::java::util::List OcmMetadata::getAlternateNames() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlternateNames_e62d3bb06d56d7e3]));
              }

              ::java::lang::String OcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getCdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCdmMessageLink_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getCelestialSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCelestialSource_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getConstellation() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConstellation_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getCountry() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getEopSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEopSource_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_c325492395d89b24]));
              }

              ::java::lang::String OcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getInterpMethodEOP() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodEOP_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_c325492395d89b24]));
              }

              jdouble OcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_c325492395d89b24]));
              }

              ::java::lang::String OcmMetadata::getNextMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNextMessageID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType OcmMetadata::getObjectType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_d6ea2275c46038b6]));
              }

              ::java::util::List OcmMetadata::getOcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOcmDataElements_e62d3bb06d56d7e3]));
              }

              ::java::lang::String OcmMetadata::getOperator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus OcmMetadata::getOpsStatus() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus(env->callObjectMethod(this$, mids$[mid_getOpsStatus_2ad1accfe17bcf9c]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory OcmMetadata::getOrbitCategory() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory(env->callObjectMethod(this$, mids$[mid_getOrbitCategory_19fa1df2d5f6df19]));
              }

              ::java::lang::String OcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getOwner() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOwner_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getPreviousMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_c325492395d89b24]));
              }

              ::java::lang::String OcmMetadata::getPreviousMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getPrmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrmMessageLink_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getRdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRdmMessageLink_1c1fa1e935d6cdcf]));
              }

              jdouble OcmMetadata::getSclkOffsetAtEpoch() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkOffsetAtEpoch_b74f83833fdad017]);
              }

              jdouble OcmMetadata::getSclkSecPerSISec() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkSecPerSISec_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_c325492395d89b24]));
              }

              jdouble OcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_b74f83833fdad017]);
              }

              ::java::lang::String OcmMetadata::getTdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTdmMessageLink_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechAddress_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechEmail_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechOrg() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechOrg_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPOC_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPhone_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OcmMetadata::getTechPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPosition_1c1fa1e935d6cdcf]));
              }

              jdouble OcmMetadata::getTimeSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSpan_b74f83833fdad017]);
              }

              jdouble OcmMetadata::getUt1mutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getUt1mutcT0_b74f83833fdad017]);
              }

              void OcmMetadata::setAdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAdmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setAlternateNames(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlternateNames_0e7c3032c7c93ed3], a0.this$);
              }

              void OcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setCdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCdmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setCelestialSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCelestialSource_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setConstellation(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConstellation_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setCountry(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCountry_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setEopSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEopSource_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setInterpMethodEOP(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodEOP_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setNextMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageID_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectType_05187042fbba2328], a0.this$);
              }

              void OcmMetadata::setOcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOcmDataElements_0e7c3032c7c93ed3], a0.this$);
              }

              void OcmMetadata::setOperator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOperator_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOpsStatus_1f63eee657c3c122], a0.this$);
              }

              void OcmMetadata::setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCategory_81230c59907b9101], a0.this$);
              }

              void OcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setOwner(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOwner_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setPreviousMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageID_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setPrmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setRdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRdmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setSclkOffsetAtEpoch(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkOffsetAtEpoch_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::setSclkSecPerSISec(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkSecPerSISec_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_02135a6ef25adb4b], a0.this$);
              }

              void OcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::setTdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTdmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechAddress_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechEmail_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechOrg(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechOrg_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPOC_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPhone_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTechPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPosition_734b91ac30d5f9b4], a0.this$);
              }

              void OcmMetadata::setTimeSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSpan_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::setUt1mutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUt1mutcT0_8ba9fe7a847cecad], a0);
              }

              void OcmMetadata::validate(jdouble a0) const
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Header::class$ = NULL;
              jmethodID *SsrIgm04Header::mids$ = NULL;
              bool SsrIgm04Header::live$ = false;

              jclass SsrIgm04Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Header::SsrIgm04Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm04Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Header)[] = {
                { Py_tp_methods, t_SsrIgm04Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Header, t_SsrIgm04Header, SsrIgm04Header);

              void t_SsrIgm04Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Header), &PY_TYPE_DEF(SsrIgm04Header), module, "SsrIgm04Header", 0);
              }

              void t_SsrIgm04Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "class_", make_descriptor(SsrIgm04Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "wrapfn_", make_descriptor(t_SsrIgm04Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Header::wrap_Object(SsrIgm04Header(((t_SsrIgm04Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Header object((jobject) NULL);

                INT_CALL(object = SsrIgm04Header());
                self->object = object;

                return 0;
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeIonosphericDelayModifier::live$ = false;

          jclass BaseRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorIonosphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeErrorIonosphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getIonoModel_dc0fc518b17a44cd] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeIonosphericDelayModifier, t_BaseRangeIonosphericDelayModifier, BaseRangeIonosphericDelayModifier);

          void t_BaseRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeIonosphericDelayModifier), module, "BaseRangeIonosphericDelayModifier", 0);
          }

          void t_BaseRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "class_", make_descriptor(BaseRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeIonosphericDelayModifier::wrap_Object(BaseRangeIonosphericDelayModifier(((t_BaseRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "java/util/List.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer::class$ = NULL;
            jmethodID *CMAESOptimizer::mids$ = NULL;
            bool CMAESOptimizer::live$ = false;

            jclass CMAESOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_830448b61f1b293c] = env->getMethodID(cls, "<init>", "(IDZIILorg/hipparchus/random/RandomGenerator;ZLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_getStatisticsDHistory_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStatisticsDHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsFitnessHistory_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStatisticsFitnessHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsMeanHistory_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStatisticsMeanHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsSigmaHistory_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStatisticsSigmaHistory", "()Ljava/util/List;");
                mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer::CMAESOptimizer(jint a0, jdouble a1, jboolean a2, jint a3, jint a4, const ::org::hipparchus::random::RandomGenerator & a5, jboolean a6, const ::org::hipparchus::optim::ConvergenceChecker & a7) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_830448b61f1b293c, a0, a1, a2, a3, a4, a5.this$, a6, a7.this$)) {}

            ::java::util::List CMAESOptimizer::getStatisticsDHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsDHistory_e62d3bb06d56d7e3]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsFitnessHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsFitnessHistory_e62d3bb06d56d7e3]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsMeanHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsMeanHistory_e62d3bb06d56d7e3]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsSigmaHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsSigmaHistory_e62d3bb06d56d7e3]));
            }

            ::org::hipparchus::optim::PointValuePair CMAESOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args);
            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args);
            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data);
            static PyGetSetDef t_CMAESOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsDHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsFitnessHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsMeanHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsSigmaHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsDHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsFitnessHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsMeanHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsSigmaHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer)[] = {
              { Py_tp_methods, t_CMAESOptimizer__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer_init_ },
              { Py_tp_getset, t_CMAESOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer, t_CMAESOptimizer, CMAESOptimizer);
            PyObject *t_CMAESOptimizer::wrap_Object(const CMAESOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer), &PY_TYPE_DEF(CMAESOptimizer), module, "CMAESOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "PopulationSize", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$PopulationSize)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "Sigma", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$Sigma)));
            }

            void t_CMAESOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "class_", make_descriptor(CMAESOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "wrapfn_", make_descriptor(t_CMAESOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer::wrap_Object(CMAESOptimizer(((t_CMAESOptimizer *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jboolean a2;
              jint a3;
              jint a4;
              ::org::hipparchus::random::RandomGenerator a5((jobject) NULL);
              jboolean a6;
              ::org::hipparchus::optim::ConvergenceChecker a7((jobject) NULL);
              PyTypeObject **p7;
              CMAESOptimizer object((jobject) NULL);

              if (!parseArgs(args, "IDZIIkZK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = CMAESOptimizer(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CMAESOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Identity::class$ = NULL;
        jmethodID *Identity::mids$ = NULL;
        bool Identity::live$ = false;

        jclass Identity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Identity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Identity::Identity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Identity::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Identity::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Identity_value(t_Identity *self, PyObject *args);

        static PyMethodDef t_Identity__methods_[] = {
          DECLARE_METHOD(t_Identity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Identity)[] = {
          { Py_tp_methods, t_Identity__methods_ },
          { Py_tp_init, (void *) t_Identity_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Identity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Identity, t_Identity, Identity);

        void t_Identity::install(PyObject *module)
        {
          installType(&PY_TYPE(Identity), &PY_TYPE_DEF(Identity), module, "Identity", 0);
        }

        void t_Identity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "class_", make_descriptor(Identity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "wrapfn_", make_descriptor(t_Identity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Identity::initializeClass, 1)))
            return NULL;
          return t_Identity::wrap_Object(Identity(((t_Identity *) arg)->object.this$));
        }
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Identity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds)
        {
          Identity object((jobject) NULL);

          INT_CALL(object = Identity());
          self->object = object;

          return 0;
        }

        static PyObject *t_Identity_value(t_Identity *self, PyObject *args)
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
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asin::class$ = NULL;
        jmethodID *Asin::mids$ = NULL;
        bool Asin::live$ = false;

        jclass Asin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asin::Asin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Asin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asin_value(t_Asin *self, PyObject *args);

        static PyMethodDef t_Asin__methods_[] = {
          DECLARE_METHOD(t_Asin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asin)[] = {
          { Py_tp_methods, t_Asin__methods_ },
          { Py_tp_init, (void *) t_Asin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asin, t_Asin, Asin);

        void t_Asin::install(PyObject *module)
        {
          installType(&PY_TYPE(Asin), &PY_TYPE_DEF(Asin), module, "Asin", 0);
        }

        void t_Asin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "class_", make_descriptor(Asin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "wrapfn_", make_descriptor(t_Asin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asin::initializeClass, 1)))
            return NULL;
          return t_Asin::wrap_Object(Asin(((t_Asin *) arg)->object.this$));
        }
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds)
        {
          Asin object((jobject) NULL);

          INT_CALL(object = Asin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asin_value(t_Asin *self, PyObject *args)
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
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *IntegerDistribution::class$ = NULL;
      jmethodID *IntegerDistribution::mids$ = NULL;
      bool IntegerDistribution::live$ = false;

      jclass IntegerDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/IntegerDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
          mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
          mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
          mids$[mid_inverseCumulativeProbability_2af4736545087009] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
          mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
          mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");
          mids$[mid_probability_cad98089d00f8a5b] = env->getMethodID(cls, "probability", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IntegerDistribution::cumulativeProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
      }

      jdouble IntegerDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
      }

      jdouble IntegerDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
      }

      jint IntegerDistribution::getSupportLowerBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
      }

      jint IntegerDistribution::getSupportUpperBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
      }

      jint IntegerDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_2af4736545087009], a0);
      }

      jboolean IntegerDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
      }

      jdouble IntegerDistribution::logProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
      }

      jdouble IntegerDistribution::probability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
      }

      jdouble IntegerDistribution::probability(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_cad98089d00f8a5b], a0, a1);
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
      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args);
      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data);
      static PyGetSetDef t_IntegerDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalMean),
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportConnected),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IntegerDistribution__methods_[] = {
        DECLARE_METHOD(t_IntegerDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, logProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntegerDistribution)[] = {
        { Py_tp_methods, t_IntegerDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IntegerDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntegerDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntegerDistribution, t_IntegerDistribution, IntegerDistribution);

      void t_IntegerDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(IntegerDistribution), &PY_TYPE_DEF(IntegerDistribution), module, "IntegerDistribution", 0);
      }

      void t_IntegerDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "class_", make_descriptor(IntegerDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "wrapfn_", make_descriptor(t_IntegerDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntegerDistribution::initializeClass, 1)))
          return NULL;
        return t_IntegerDistribution::wrap_Object(IntegerDistribution(((t_IntegerDistribution *) arg)->object.this$));
      }
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntegerDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.logProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jdouble result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.probability(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.probability(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FilesListCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FilesListCrawler::class$ = NULL;
      jmethodID *FilesListCrawler::mids$ = NULL;
      bool FilesListCrawler::live$ = false;

      jclass FilesListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FilesListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cd2197c08d81ba59] = env->getMethodID(cls, "<init>", "([Ljava/io/File;)V");
          mids$[mid_getStream_f6aba5de8de98a58] = env->getMethodID(cls, "getStream", "(Ljava/io/File;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_f6d498f8a7299dab] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/io/File;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_a0a574defabe3b6d] = env->getMethodID(cls, "getBaseName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getCompleteName_a0a574defabe3b6d] = env->getMethodID(cls, "getCompleteName", "(Ljava/io/File;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FilesListCrawler::FilesListCrawler(const JArray< ::java::io::File > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_cd2197c08d81ba59, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args);
      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data);
      static PyGetSetDef t_FilesListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_FilesListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FilesListCrawler__methods_[] = {
        DECLARE_METHOD(t_FilesListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FilesListCrawler)[] = {
        { Py_tp_methods, t_FilesListCrawler__methods_ },
        { Py_tp_init, (void *) t_FilesListCrawler_init_ },
        { Py_tp_getset, t_FilesListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FilesListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(FilesListCrawler, t_FilesListCrawler, FilesListCrawler);
      PyObject *t_FilesListCrawler::wrap_Object(const FilesListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FilesListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FilesListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(FilesListCrawler), &PY_TYPE_DEF(FilesListCrawler), module, "FilesListCrawler", 0);
      }

      void t_FilesListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "class_", make_descriptor(FilesListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "wrapfn_", make_descriptor(t_FilesListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FilesListCrawler::initializeClass, 1)))
          return NULL;
        return t_FilesListCrawler::wrap_Object(FilesListCrawler(((t_FilesListCrawler *) arg)->object.this$));
      }
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FilesListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::io::File > a0((jobject) NULL);
        FilesListCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = FilesListCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::io::PY_TYPE(File);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *BracketingNthOrderBrentSolver::mids$ = NULL;
        bool BracketingNthOrderBrentSolver::live$ = false;

        jclass BracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_init$_96a2cf58188ee8a5] = env->getMethodID(cls, "<init>", "(DDDI)V");
            mids$[mid_getMaximalOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_solve_95e80d55b360a35f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_adfe53463c8924a7] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_56a10f62288dcd3e] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_e5c64c32be09ef5b] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jint a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jdouble a2, jint a3) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_96a2cf58188ee8a5, a0, a1, a2, a3)) {}

        jint BracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_55546ef6a647f39b]);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_95e80d55b360a35f], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_adfe53463c8924a7], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_56a10f62288dcd3e], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self);
        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_BracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_BracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_BracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_BracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketingNthOrderBrentSolver, t_BracketingNthOrderBrentSolver, BracketingNthOrderBrentSolver);
        PyObject *t_BracketingNthOrderBrentSolver::wrap_Object(const BracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketingNthOrderBrentSolver), &PY_TYPE_DEF(BracketingNthOrderBrentSolver), module, "BracketingNthOrderBrentSolver", 0);
        }

        void t_BracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "class_", make_descriptor(BracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_BracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_BracketingNthOrderBrentSolver::wrap_Object(BracketingNthOrderBrentSolver(((t_BracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketingNthOrderBrentSolver object((jobject) NULL);

              INT_CALL(object = BracketingNthOrderBrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2, a3));
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

        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketingNthOrderBrentSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Differentiation.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterFunction.h"
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
          mids$[mid_differentiate_b30e3cbadf26f1f0] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/ParameterFunction;ID)Lorg/orekit/utils/ParameterFunction;");
          mids$[mid_differentiate_882fb84cdb525bf3] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/StateFunction;ILorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DI)Lorg/orekit/utils/StateJacobian;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ParameterFunction Differentiation::differentiate(const ::org::orekit::utils::ParameterFunction & a0, jint a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::ParameterFunction(env->callStaticObjectMethod(cls, mids$[mid_differentiate_b30e3cbadf26f1f0], a0.this$, a1, a2));
      }

      ::org::orekit::utils::StateJacobian Differentiation::differentiate(const ::org::orekit::utils::StateFunction & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4, jdouble a5, jint a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::StateJacobian(env->callStaticObjectMethod(cls, mids$[mid_differentiate_882fb84cdb525bf3], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5, a6));
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
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *FDOA::class$ = NULL;
        jmethodID *FDOA::mids$ = NULL;
        bool FDOA::live$ = false;
        ::java::lang::String *FDOA::MEASUREMENT_TYPE = NULL;

        jclass FDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/FDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f7dc07d310c7e3c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_e5278a7660eeb13f] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_e5278a7660eeb13f] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDOA::FDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_f7dc07d310c7e3c4, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation FDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_e5278a7660eeb13f]));
        }

        ::org::orekit::estimation::measurements::GroundStation FDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_e5278a7660eeb13f]));
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
        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args);
        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self);
        static PyObject *t_FDOA_getSecondStation(t_FDOA *self);
        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data);
        static PyGetSetDef t_FDOA__fields_[] = {
          DECLARE_GET_FIELD(t_FDOA, primeStation),
          DECLARE_GET_FIELD(t_FDOA, secondStation),
          DECLARE_GET_FIELD(t_FDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDOA__methods_[] = {
          DECLARE_METHOD(t_FDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_FDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDOA)[] = {
          { Py_tp_methods, t_FDOA__methods_ },
          { Py_tp_init, (void *) t_FDOA_init_ },
          { Py_tp_getset, t_FDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(FDOA, t_FDOA, FDOA);
        PyObject *t_FDOA::wrap_Object(const FDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(FDOA), &PY_TYPE_DEF(FDOA), module, "FDOA", 0);
        }

        void t_FDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "class_", make_descriptor(FDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "wrapfn_", make_descriptor(t_FDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(FDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*FDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDOA::initializeClass, 1)))
            return NULL;
          return t_FDOA::wrap_Object(FDOA(((t_FDOA *) arg)->object.this$));
        }
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
          FDOA object((jobject) NULL);

          if (!parseArgs(args, "kkDkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = FDOA(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_FDOA_getSecondStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *InterSatellitesRange::class$ = NULL;
        jmethodID *InterSatellitesRange::mids$ = NULL;
        bool InterSatellitesRange::live$ = false;
        ::java::lang::String *InterSatellitesRange::MEASUREMENT_TYPE = NULL;

        jclass InterSatellitesRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/InterSatellitesRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f57a839e18c000c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZLorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_isTwoWay_9ab94ac1dc23b105] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatellitesRange::InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, jboolean a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_f57a839e18c000c5, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6)) {}

        jboolean InterSatellitesRange::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_9ab94ac1dc23b105]);
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
        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args);
        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self);
        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data);
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data);
        static PyGetSetDef t_InterSatellitesRange__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatellitesRange, twoWay),
          DECLARE_GET_FIELD(t_InterSatellitesRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatellitesRange__methods_[] = {
          DECLARE_METHOD(t_InterSatellitesRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatellitesRange, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRange)[] = {
          { Py_tp_methods, t_InterSatellitesRange__methods_ },
          { Py_tp_init, (void *) t_InterSatellitesRange_init_ },
          { Py_tp_getset, t_InterSatellitesRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatellitesRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(InterSatellitesRange, t_InterSatellitesRange, InterSatellitesRange);
        PyObject *t_InterSatellitesRange::wrap_Object(const InterSatellitesRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatellitesRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatellitesRange::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatellitesRange), &PY_TYPE_DEF(InterSatellitesRange), module, "InterSatellitesRange", 0);
        }

        void t_InterSatellitesRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "class_", make_descriptor(InterSatellitesRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "wrapfn_", make_descriptor(t_InterSatellitesRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(InterSatellitesRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatellitesRange::initializeClass, 1)))
            return NULL;
          return t_InterSatellitesRange::wrap_Object(InterSatellitesRange(((t_InterSatellitesRange *) arg)->object.this$));
        }
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatellitesRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
          jboolean a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          InterSatellitesRange object((jobject) NULL);

          if (!parseArgs(args, "kkZkDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = InterSatellitesRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
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
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map EphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader$Parser::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader$Parser::mids$ = NULL;
      bool AGILeapSecondFilesLoader$Parser::live$ = false;

      jclass AGILeapSecondFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader$Parser::AGILeapSecondFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::java::util::List AGILeapSecondFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_7b8887374449b257], a0.this$, a1.this$));
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
      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_AGILeapSecondFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader$Parser)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader$Parser, t_AGILeapSecondFilesLoader$Parser, AGILeapSecondFilesLoader$Parser);

      void t_AGILeapSecondFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader$Parser), &PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser), module, "AGILeapSecondFilesLoader$Parser", 0);
      }

      void t_AGILeapSecondFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "class_", make_descriptor(AGILeapSecondFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader$Parser::wrap_Object(AGILeapSecondFilesLoader$Parser(((t_AGILeapSecondFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        AGILeapSecondFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = AGILeapSecondFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateIonosphericDelayModifier::live$ = false;

          jclass BaseRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_dc0fc518b17a44cd] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeRateErrorIonosphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateIonosphericDelayModifier, t_BaseRangeRateIonosphericDelayModifier, BaseRangeRateIonosphericDelayModifier);

          void t_BaseRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier), module, "BaseRangeRateIonosphericDelayModifier", 0);
          }

          void t_BaseRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "class_", make_descriptor(BaseRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateIonosphericDelayModifier::wrap_Object(BaseRangeRateIonosphericDelayModifier(((t_BaseRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/errors/PythonLocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *PythonLocalizedException::class$ = NULL;
      jmethodID *PythonLocalizedException::mids$ = NULL;
      bool PythonLocalizedException::live$ = false;

      jclass PythonLocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/PythonLocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLocalizedException::PythonLocalizedException() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonLocalizedException::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonLocalizedException::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonLocalizedException::pythonExtension(jlong a0) const
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
    namespace errors {
      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self);
      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args);
      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data);
      static PyGetSetDef t_PythonLocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLocalizedException, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLocalizedException__methods_[] = {
        DECLARE_METHOD(t_PythonLocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLocalizedException, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLocalizedException)[] = {
        { Py_tp_methods, t_PythonLocalizedException__methods_ },
        { Py_tp_init, (void *) t_PythonLocalizedException_init_ },
        { Py_tp_getset, t_PythonLocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLocalizedException, t_PythonLocalizedException, PythonLocalizedException);

      void t_PythonLocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLocalizedException), &PY_TYPE_DEF(PythonLocalizedException), module, "PythonLocalizedException", 1);
      }

      void t_PythonLocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "class_", make_descriptor(PythonLocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "wrapfn_", make_descriptor(t_PythonLocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLocalizedException::initializeClass);
        JNINativeMethod methods[] = {
          { "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", (void *) t_PythonLocalizedException_getMessage0 },
          { "getParts", "()[Ljava/lang/Object;", (void *) t_PythonLocalizedException_getParts1 },
          { "getSpecifier", "()Lorg/hipparchus/exception/Localizable;", (void *) t_PythonLocalizedException_getSpecifier2 },
          { "pythonDecRef", "()V", (void *) t_PythonLocalizedException_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLocalizedException::initializeClass, 1)))
          return NULL;
        return t_PythonLocalizedException::wrap_Object(PythonLocalizedException(((t_PythonLocalizedException *) arg)->object.this$));
      }
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds)
      {
        PythonLocalizedException object((jobject) NULL);

        INT_CALL(object = PythonLocalizedException());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args)
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

      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::util::t_Locale::wrap_Object(::java::util::Locale(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMessage", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getMessage", result);
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

      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::Object > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParts", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[o", &value))
        {
          throwTypeError("getParts", result);
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

      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSpecifier", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::exception::Localizable::initializeClass, &value))
        {
          throwTypeError("getSpecifier", result);
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

      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data)
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
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ODEIntegratorBuilder::class$ = NULL;
        jmethodID *ODEIntegratorBuilder::mids$ = NULL;
        bool ODEIntegratorBuilder::live$ = false;

        jclass ODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractIntegrator ODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_ODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEIntegratorBuilder, t_ODEIntegratorBuilder, ODEIntegratorBuilder);

        void t_ODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEIntegratorBuilder), &PY_TYPE_DEF(ODEIntegratorBuilder), module, "ODEIntegratorBuilder", 0);
        }

        void t_ODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "class_", make_descriptor(ODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "wrapfn_", make_descriptor(t_ODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ODEIntegratorBuilder::wrap_Object(ODEIntegratorBuilder(((t_ODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args)
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
