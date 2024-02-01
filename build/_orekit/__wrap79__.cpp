#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillIntegrator::class$ = NULL;
        jmethodID *GillIntegrator::mids$ = NULL;
        bool GillIntegrator::live$ = false;

        jclass GillIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_c82a39e76dc2173f] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegrator::GillIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > GillIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > GillIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > GillIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data);
        static PyGetSetDef t_GillIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillIntegrator, a),
          DECLARE_GET_FIELD(t_GillIntegrator, b),
          DECLARE_GET_FIELD(t_GillIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegrator)[] = {
          { Py_tp_methods, t_GillIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillIntegrator_init_ },
          { Py_tp_getset, t_GillIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(GillIntegrator, t_GillIntegrator, GillIntegrator);

        void t_GillIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegrator), &PY_TYPE_DEF(GillIntegrator), module, "GillIntegrator", 0);
        }

        void t_GillIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "class_", make_descriptor(GillIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "wrapfn_", make_descriptor(t_GillIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillIntegrator::wrap_Object(GillIntegrator(((t_GillIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodType::class$ = NULL;
          jmethodID *OdMethodType::mids$ = NULL;
          bool OdMethodType::live$ = false;
          OdMethodType *OdMethodType::BWLS = NULL;
          OdMethodType *OdMethodType::EKF = NULL;
          OdMethodType *OdMethodType::SF = NULL;
          OdMethodType *OdMethodType::SRIF = NULL;
          OdMethodType *OdMethodType::SSEM = NULL;

          jclass OdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_2302266ffdb97b74] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_values_e15e8adbc1722994] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BWLS = new OdMethodType(env->getStaticObjectField(cls, "BWLS", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              EKF = new OdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SF = new OdMethodType(env->getStaticObjectField(cls, "SF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SRIF = new OdMethodType(env->getStaticObjectField(cls, "SRIF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SSEM = new OdMethodType(env->getStaticObjectField(cls, "SSEM", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodType OdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2302266ffdb97b74], a0.this$));
          }

          JArray< OdMethodType > OdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_e15e8adbc1722994]));
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
          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args);
          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OdMethodType_values(PyTypeObject *type);
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data);
          static PyGetSetDef t_OdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodType__methods_[] = {
            DECLARE_METHOD(t_OdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_OdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodType)[] = {
            { Py_tp_methods, t_OdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OdMethodType, t_OdMethodType, OdMethodType);
          PyObject *t_OdMethodType::wrap_Object(const OdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodType), &PY_TYPE_DEF(OdMethodType), module, "OdMethodType", 0);
          }

          void t_OdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "class_", make_descriptor(OdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "wrapfn_", make_descriptor(t_OdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(OdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "BWLS", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::BWLS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "EKF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SRIF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SRIF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SSEM", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SSEM)));
          }

          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodType::initializeClass, 1)))
              return NULL;
            return t_OdMethodType::wrap_Object(OdMethodType(((t_OdMethodType *) arg)->object.this$));
          }
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::valueOf(a0));
              return t_OdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OdMethodType_values(PyTypeObject *type)
          {
            JArray< OdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_OdMethodType::wrap_jobject);
          }
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data)
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
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Power::class$ = NULL;
        jmethodID *Power::mids$ = NULL;
        bool Power::live$ = false;

        jclass Power::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Power");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Power::Power(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble Power::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Power::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Power_value(t_Power *self, PyObject *args);

        static PyMethodDef t_Power__methods_[] = {
          DECLARE_METHOD(t_Power, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Power)[] = {
          { Py_tp_methods, t_Power__methods_ },
          { Py_tp_init, (void *) t_Power_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Power)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Power, t_Power, Power);

        void t_Power::install(PyObject *module)
        {
          installType(&PY_TYPE(Power), &PY_TYPE_DEF(Power), module, "Power", 0);
        }

        void t_Power::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "class_", make_descriptor(Power::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "wrapfn_", make_descriptor(t_Power::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Power::initializeClass, 1)))
            return NULL;
          return t_Power::wrap_Object(Power(((t_Power *) arg)->object.this$));
        }
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Power::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Power object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Power(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Power_value(t_Power *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonJ2SquaredModel::class$ = NULL;
            jmethodID *PythonJ2SquaredModel::mids$ = NULL;
            bool PythonJ2SquaredModel::live$ = false;

            jclass PythonJ2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_639aa05fb2436ba0] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_614616a5f895b25b] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonJ2SquaredModel::PythonJ2SquaredModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonJ2SquaredModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonJ2SquaredModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonJ2SquaredModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self);
            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data);
            static PyGetSetDef t_PythonJ2SquaredModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonJ2SquaredModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonJ2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_PythonJ2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonJ2SquaredModel)[] = {
              { Py_tp_methods, t_PythonJ2SquaredModel__methods_ },
              { Py_tp_init, (void *) t_PythonJ2SquaredModel_init_ },
              { Py_tp_getset, t_PythonJ2SquaredModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonJ2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonJ2SquaredModel, t_PythonJ2SquaredModel, PythonJ2SquaredModel);

            void t_PythonJ2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonJ2SquaredModel), &PY_TYPE_DEF(PythonJ2SquaredModel), module, "PythonJ2SquaredModel", 1);
            }

            void t_PythonJ2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "class_", make_descriptor(PythonJ2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "wrapfn_", make_descriptor(t_PythonJ2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonJ2SquaredModel::initializeClass);
              JNINativeMethod methods[] = {
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0 },
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1 },
                { "pythonDecRef", "()V", (void *) t_PythonJ2SquaredModel_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonJ2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_PythonJ2SquaredModel::wrap_Object(PythonJ2SquaredModel(((t_PythonJ2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonJ2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds)
            {
              PythonJ2SquaredModel object((jobject) NULL);

              INT_CALL(object = PythonJ2SquaredModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_DSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data)
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
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractODEDetector::class$ = NULL;
        jmethodID *AbstractODEDetector::mids$ = NULL;
        bool AbstractODEDetector::live$ = false;
        jdouble AbstractODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_c9c83b182b4bb0ba] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_6b3d990c0b31c333] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_356086c80be497a8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_8fd4d30625048ab7] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_e90ba0252dc44aaf] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_468ccac183fda373] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_14dd01d73e9b764a] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/AdaptableInterval;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxIter_54211d4451263a17] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withSolver_061760a5d8d1b741] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withThreshold_468ccac183fda373] = env->getMethodID(cls, "withThreshold", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_create_557e2a0058eadc7b] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractODEDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_c9c83b182b4bb0ba], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler AbstractODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_6b3d990c0b31c333]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval AbstractODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_356086c80be497a8]));
        }

        jint AbstractODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver AbstractODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_8fd4d30625048ab7]));
        }

        void AbstractODEDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
        }

        jboolean AbstractODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        AbstractODEDetector AbstractODEDetector::withHandler(const ::org::hipparchus::ode::events::ODEEventHandler & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_e90ba0252dc44aaf], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_468ccac183fda373], a0));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_14dd01d73e9b764a], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxIter(jint a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_54211d4451263a17], a0));
        }

        AbstractODEDetector AbstractODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_061760a5d8d1b741], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withThreshold(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_468ccac183fda373], a0));
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
        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data);
        static PyGetSetDef t_AbstractODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEDetector)[] = {
          { Py_tp_methods, t_AbstractODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEDetector, t_AbstractODEDetector, AbstractODEDetector);
        PyObject *t_AbstractODEDetector::wrap_Object(const AbstractODEDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEDetector), &PY_TYPE_DEF(AbstractODEDetector), module, "AbstractODEDetector", 0);
        }

        void t_AbstractODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "class_", make_descriptor(AbstractODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "wrapfn_", make_descriptor(t_AbstractODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractODEDetector::wrap_Object(AbstractODEDetector(((t_AbstractODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::ODEEventHandler a0((jobject) NULL);
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::AdaptableInterval a0((jobject) NULL);
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *LeastSquaresTleGenerationAlgorithm::class$ = NULL;
            jmethodID *LeastSquaresTleGenerationAlgorithm::mids$ = NULL;
            bool LeastSquaresTleGenerationAlgorithm::live$ = false;
            jint LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS = (jint) 0;

            jclass LeastSquaresTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_f0e2dd0da2448f94] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_166cccd89c387fd5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_f8078c645a12d356] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_getRms_9981f74b2d109da6] = env->getMethodID(cls, "getRms", "()D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0e2dd0da2448f94, a0, a1.this$, a2.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_166cccd89c387fd5], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_f8078c645a12d356], a0.this$, a1.this$));
            }

            jdouble LeastSquaresTleGenerationAlgorithm::getRms() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRms_9981f74b2d109da6]);
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
        namespace tle {
          namespace generation {
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_LeastSquaresTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresTleGenerationAlgorithm, rms),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, generate, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, getRms, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_LeastSquaresTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_LeastSquaresTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresTleGenerationAlgorithm, t_LeastSquaresTleGenerationAlgorithm, LeastSquaresTleGenerationAlgorithm);

            void t_LeastSquaresTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresTleGenerationAlgorithm), &PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm), module, "LeastSquaresTleGenerationAlgorithm", 0);
            }

            void t_LeastSquaresTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "class_", make_descriptor(LeastSquaresTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_LeastSquaresTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(LeastSquaresTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "DEFAULT_MAX_ITERATIONS", make_descriptor(LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS));
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresTleGenerationAlgorithm::wrap_Object(LeastSquaresTleGenerationAlgorithm(((t_LeastSquaresTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = LeastSquaresTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jint a0;
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "Ikk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0, a1, a2));
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRms());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRms());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStreamReader::class$ = NULL;
    jmethodID *InputStreamReader::mids$ = NULL;
    bool InputStreamReader::live$ = false;

    jclass InputStreamReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStreamReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_8f4bef0679d2f8d5] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_init$_bec0f846e5ec73da] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getEncoding_d2c8eb4129821f0e] = env->getMethodID(cls, "getEncoding", "()Ljava/lang/String;");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_1f255a7d724a5165] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_eee3de00fe971136] = env->getMethodID(cls, "ready", "()Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_8f4bef0679d2f8d5, a0.this$)) {}

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0, const ::java::lang::String & a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_bec0f846e5ec73da, a0.this$, a1.this$)) {}

    void InputStreamReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    ::java::lang::String InputStreamReader::getEncoding() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEncoding_d2c8eb4129821f0e]));
    }

    jint InputStreamReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint InputStreamReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jboolean InputStreamReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_eee3de00fe971136]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self);
    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data);
    static PyGetSetDef t_InputStreamReader__fields_[] = {
      DECLARE_GET_FIELD(t_InputStreamReader, encoding),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_InputStreamReader__methods_[] = {
      DECLARE_METHOD(t_InputStreamReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, close, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, getEncoding, METH_NOARGS),
      DECLARE_METHOD(t_InputStreamReader, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, ready, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStreamReader)[] = {
      { Py_tp_methods, t_InputStreamReader__methods_ },
      { Py_tp_init, (void *) t_InputStreamReader_init_ },
      { Py_tp_getset, t_InputStreamReader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStreamReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(InputStreamReader, t_InputStreamReader, InputStreamReader);

    void t_InputStreamReader::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStreamReader), &PY_TYPE_DEF(InputStreamReader), module, "InputStreamReader", 0);
    }

    void t_InputStreamReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "class_", make_descriptor(InputStreamReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "wrapfn_", make_descriptor(t_InputStreamReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStreamReader::initializeClass, 1)))
        return NULL;
      return t_InputStreamReader::wrap_Object(InputStreamReader(((t_InputStreamReader *) arg)->object.this$));
    }
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStreamReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            INT_CALL(object = InputStreamReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InputStreamReader(a0, a1));
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

    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getEncoding());
      return j2p(result);
    }

    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getEncoding());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseSecantSolver::class$ = NULL;
        jmethodID *BaseSecantSolver::mids$ = NULL;
        bool BaseSecantSolver::live$ = false;

        jclass BaseSecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseSecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_264b7d79e28fc408] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_fe5bc4a065ab530b] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_solve_56efbacf041dc493] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_1290cd17e7801197] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_fb0079f6db85289e] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_264b7d79e28fc408], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_fe5bc4a065ab530b], a0, a1.this$, a2, a3, a4);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_56efbacf041dc493], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BaseSecantSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_1290cd17e7801197], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data);
        static PyGetSetDef t_BaseSecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseSecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseSecantSolver__methods_[] = {
          DECLARE_METHOD(t_BaseSecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseSecantSolver)[] = {
          { Py_tp_methods, t_BaseSecantSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseSecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseSecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BaseSecantSolver, t_BaseSecantSolver, BaseSecantSolver);
        PyObject *t_BaseSecantSolver::wrap_Object(const BaseSecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseSecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseSecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseSecantSolver), &PY_TYPE_DEF(BaseSecantSolver), module, "BaseSecantSolver", 0);
        }

        void t_BaseSecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "class_", make_descriptor(BaseSecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "wrapfn_", make_descriptor(t_BaseSecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseSecantSolver::initializeClass, 1)))
            return NULL;
          return t_BaseSecantSolver::wrap_Object(BaseSecantSolver(((t_BaseSecantSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseSecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args)
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
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
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

          return callSuper(PY_TYPE(BaseSecantSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args)
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
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
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
          mids$[mid_compose_ebab87a33ad369ad] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_compositeRotation_9224249227678983] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_compositeTranslation_c038933d1378a0bd] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_36b14e3675d8ede7] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getInverse_bfbe5d9ed8a9e205] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_5c8e6f300713559c] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_d1b42a6748e907f9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_of_60fff8a5a742947d] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_4bfdcd3b46c17e93] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_c7d28104fea4ef5c] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_93161fc49a3f70f0] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformLine_2d18eed4cd66eb61] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformLine_e2ca4ae3a4ea3c4a] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformPosition_df37e4d755ff0467] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_f577b57448bfefd2] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_df37e4d755ff0467] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_f577b57448bfefd2] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStaticTransform FieldStaticTransform::compose(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldStaticTransform & a1, const FieldStaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_ebab87a33ad369ad], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::compositeRotation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_9224249227678983], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::compositeTranslation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_c038933d1378a0bd], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_36b14e3675d8ede7], a0.this$));
      }

      FieldStaticTransform FieldStaticTransform::getInverse() const
      {
        return FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_bfbe5d9ed8a9e205]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_d1b42a6748e907f9]));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_60fff8a5a742947d], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_4bfdcd3b46c17e93], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_c7d28104fea4ef5c], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_93161fc49a3f70f0], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_2d18eed4cd66eb61], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_e2ca4ae3a4ea3c4a], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_df37e4d755ff0467], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_f577b57448bfefd2], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_df37e4d755ff0467], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_f577b57448bfefd2], a0.this$));
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitStepHandler::mids$ = NULL;
        bool PythonFieldOrekitStepHandler::live$ = false;

        jclass PythonFieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_33c76379cdb8499a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepHandler::PythonFieldOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self);
        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepHandler, t_PythonFieldOrekitStepHandler, PythonFieldOrekitStepHandler);
        PyObject *t_PythonFieldOrekitStepHandler::wrap_Object(const PythonFieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepHandler), &PY_TYPE_DEF(PythonFieldOrekitStepHandler), module, "PythonFieldOrekitStepHandler", 1);
        }

        void t_PythonFieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "class_", make_descriptor(PythonFieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V", (void *) t_PythonFieldOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepHandler::wrap_Object(PythonFieldOrekitStepHandler(((t_PythonFieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::FieldOrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractRegion::class$ = NULL;
        jmethodID *AbstractRegion::mids$ = NULL;
        bool AbstractRegion::live$ = false;

        jclass AbstractRegion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractRegion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c1549a35f56f5172] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;D)V");
            mids$[mid_applyTransform_8d90c95c02de34b1] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_buildNew_1ca75e0dc0acb302] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_checkPoint_f97c307d662f98c4] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_6135f4b23c3db50f] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_0c83c5cab31e7721] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_55f0b52ab34f789e] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_getBarycenter_e843ca29d3ae6a7a] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_9981f74b2d109da6] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_getTree_1fb787d65f399ae6] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_f2a90cc714d34154] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_a99a68d4ebd480fd] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_eee3de00fe971136] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_a99a68d4ebd480fd] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_5e847af8c64bed2a] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
            mids$[mid_setSize_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSize", "(D)V");
            mids$[mid_checkPoint_ec6ed373c47c3060] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_d7a88ff5bb68233f] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");
            mids$[mid_setBarycenter_6471499179a83603] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Vector;)V");
            mids$[mid_setBarycenter_08123e5563ae2ecd] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Point;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractRegion::AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1549a35f56f5172, a0.this$, a1)) {}

        AbstractRegion AbstractRegion::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_applyTransform_8d90c95c02de34b1], a0.this$));
        }

        AbstractRegion AbstractRegion::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_buildNew_1ca75e0dc0acb302], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_f97c307d662f98c4], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Vector & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_6135f4b23c3db50f], a0.this$));
        }

        jboolean AbstractRegion::contains(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_0c83c5cab31e7721], a0.this$);
        }

        AbstractRegion AbstractRegion::copySelf() const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_copySelf_55f0b52ab34f789e]));
        }

        ::org::hipparchus::geometry::Point AbstractRegion::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_e843ca29d3ae6a7a]));
        }

        jdouble AbstractRegion::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_9981f74b2d109da6]);
        }

        jdouble AbstractRegion::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
        }

        jdouble AbstractRegion::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree AbstractRegion::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_1fb787d65f399ae6], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane AbstractRegion::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_f2a90cc714d34154], a0.this$));
        }

        jboolean AbstractRegion::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
        }

        jboolean AbstractRegion::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_a99a68d4ebd480fd], a0.this$);
        }

        jboolean AbstractRegion::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_eee3de00fe971136]);
        }

        jboolean AbstractRegion::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_a99a68d4ebd480fd], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection AbstractRegion::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_5e847af8c64bed2a], a0.this$));
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
        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args);
        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data);
        static PyGetSetDef t_AbstractRegion__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRegion, barycenter),
          DECLARE_GET_FIELD(t_AbstractRegion, boundarySize),
          DECLARE_GET_FIELD(t_AbstractRegion, empty),
          DECLARE_GET_FIELD(t_AbstractRegion, full),
          DECLARE_GET_FIELD(t_AbstractRegion, size),
          DECLARE_GET_FIELD(t_AbstractRegion, tolerance),
          DECLARE_GET_FIELD(t_AbstractRegion, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRegion__methods_[] = {
          DECLARE_METHOD(t_AbstractRegion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractRegion, buildNew, METH_O),
          DECLARE_METHOD(t_AbstractRegion, checkPoint, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, contains, METH_O),
          DECLARE_METHOD(t_AbstractRegion, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTree, METH_O),
          DECLARE_METHOD(t_AbstractRegion, intersection, METH_O),
          DECLARE_METHOD(t_AbstractRegion, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, isFull, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRegion)[] = {
          { Py_tp_methods, t_AbstractRegion__methods_ },
          { Py_tp_init, (void *) t_AbstractRegion_init_ },
          { Py_tp_getset, t_AbstractRegion__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRegion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRegion, t_AbstractRegion, AbstractRegion);
        PyObject *t_AbstractRegion::wrap_Object(const AbstractRegion& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractRegion::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractRegion::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRegion), &PY_TYPE_DEF(AbstractRegion), module, "AbstractRegion", 0);
        }

        void t_AbstractRegion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "class_", make_descriptor(AbstractRegion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "wrapfn_", make_descriptor(t_AbstractRegion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRegion::initializeClass, 1)))
            return NULL;
          return t_AbstractRegion::wrap_Object(AbstractRegion(((t_AbstractRegion *) arg)->object.this$));
        }
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRegion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          AbstractRegion object((jobject) NULL);

          if (!parseArgs(args, "[KD", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1))
          {
            INT_CALL(object = AbstractRegion(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::Vector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self)
        {
          AbstractRegion result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile::class$ = NULL;
        jmethodID *Tile::mids$ = NULL;
        bool Tile::live$ = false;

        jclass Tile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_7e043202c789e76d] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_6d920aab27f0a3d2] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_9e72cb20adb363fb] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_9e72cb20adb363fb] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_ce4c02d583456bc9] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_d6ab429752e7c267] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_9981f74b2d109da6] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_bb268b89f4ba5b33] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_ce4c02d583456bc9] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_d6ab429752e7c267] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_9981f74b2d109da6] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_82f92590f4247da1] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_tileUpdateCompleted_ff7cb6c242604316] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint Tile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_7e043202c789e76d], a0.this$, a1.this$, a2, a3));
        }

        jdouble Tile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_6d920aab27f0a3d2], a0, a1);
        }

        jint Tile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_9e72cb20adb363fb], a0);
        }

        jint Tile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_9e72cb20adb363fb], a0);
        }

        jdouble Tile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_ce4c02d583456bc9], a0);
        }

        jint Tile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_d6ab429752e7c267]);
        }

        jdouble Tile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_9981f74b2d109da6]);
        }

        ::org::orekit::rugged::raster::Tile$Location Tile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_bb268b89f4ba5b33], a0, a1));
        }

        jdouble Tile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_ce4c02d583456bc9], a0);
        }

        jint Tile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_d6ab429752e7c267]);
        }

        jdouble Tile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_9981f74b2d109da6]);
        }

        jdouble Tile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_9981f74b2d109da6]);
        }

        jint Tile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_d6ab429752e7c267]);
        }

        jint Tile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_d6ab429752e7c267]);
        }

        jdouble Tile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_9981f74b2d109da6]);
        }

        jdouble Tile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_9981f74b2d109da6]);
        }

        jdouble Tile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_9981f74b2d109da6]);
        }

        jint Tile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_d6ab429752e7c267]);
        }

        jint Tile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_d6ab429752e7c267]);
        }

        jdouble Tile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_9981f74b2d109da6]);
        }

        jdouble Tile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_9981f74b2d109da6]);
        }

        jdouble Tile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_82f92590f4247da1], a0, a1);
        }

        void Tile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_ff7cb6c242604316]);
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
      namespace raster {
        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeRows(t_Tile *self);
        static PyObject *t_Tile_getLatitudeStep(t_Tile *self);
        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self);
        static PyObject *t_Tile_getLongitudeStep(t_Tile *self);
        static PyObject *t_Tile_getMaxElevation(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self);
        static PyObject *t_Tile_getMinElevation(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self);
        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self);
        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data);
        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data);
        static PyGetSetDef t_Tile__fields_[] = {
          DECLARE_GET_FIELD(t_Tile, latitudeRows),
          DECLARE_GET_FIELD(t_Tile, latitudeStep),
          DECLARE_GET_FIELD(t_Tile, longitudeColumns),
          DECLARE_GET_FIELD(t_Tile, longitudeStep),
          DECLARE_GET_FIELD(t_Tile, maxElevation),
          DECLARE_GET_FIELD(t_Tile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maximumLatitude),
          DECLARE_GET_FIELD(t_Tile, maximumLongitude),
          DECLARE_GET_FIELD(t_Tile, minElevation),
          DECLARE_GET_FIELD(t_Tile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minimumLatitude),
          DECLARE_GET_FIELD(t_Tile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile__methods_[] = {
          DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
          { Py_tp_methods, t_Tile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::raster::UpdatableTile),
          NULL
        };

        DEFINE_TYPE(Tile, t_Tile, Tile);

        void t_Tile::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "Location", make_descriptor(&PY_TYPE_DEF(Tile$Location)));
        }

        void t_Tile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
            return NULL;
          return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
        }
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeRows(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLatitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLongitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_250cb68cc9eeabce] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getAdmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getAdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getAlternateNames_d751c1a57012b438] = env->getMethodID(cls, "getAlternateNames", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getCdmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getCdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getCelestialSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getCelestialSource", "()Ljava/lang/String;");
                  mids$[mid_getConstellation_d2c8eb4129821f0e] = env->getMethodID(cls, "getConstellation", "()Ljava/lang/String;");
                  mids$[mid_getCountry_d2c8eb4129821f0e] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
                  mids$[mid_getEopSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getEopSource", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_80e11148db499dda] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getInterpMethodEOP_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpMethodEOP", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_80e11148db499dda] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_9981f74b2d109da6] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getNextMessageEpoch_80e11148db499dda] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextMessageID_d2c8eb4129821f0e] = env->getMethodID(cls, "getNextMessageID", "()Ljava/lang/String;");
                  mids$[mid_getObjectDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getObjectType_4afc147acbd215f9] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_getOcmDataElements_d751c1a57012b438] = env->getMethodID(cls, "getOcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getOperator_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
                  mids$[mid_getOpsStatus_90d691647ed21ffc] = env->getMethodID(cls, "getOpsStatus", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_getOrbitCategory_6b2c9b9970490924] = env->getMethodID(cls, "getOrbitCategory", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_getOriginatorAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getOwner_d2c8eb4129821f0e] = env->getMethodID(cls, "getOwner", "()Ljava/lang/String;");
                  mids$[mid_getPreviousMessageEpoch_80e11148db499dda] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getPreviousMessageID_d2c8eb4129821f0e] = env->getMethodID(cls, "getPreviousMessageID", "()Ljava/lang/String;");
                  mids$[mid_getPrmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getRdmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getRdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getSclkOffsetAtEpoch_9981f74b2d109da6] = env->getMethodID(cls, "getSclkOffsetAtEpoch", "()D");
                  mids$[mid_getSclkSecPerSISec_9981f74b2d109da6] = env->getMethodID(cls, "getSclkSecPerSISec", "()D");
                  mids$[mid_getStartTime_80e11148db499dda] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_80e11148db499dda] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_9981f74b2d109da6] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_getTdmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getTdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getTechAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechAddress", "()Ljava/lang/String;");
                  mids$[mid_getTechEmail_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechEmail", "()Ljava/lang/String;");
                  mids$[mid_getTechOrg_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechOrg", "()Ljava/lang/String;");
                  mids$[mid_getTechPOC_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechPOC", "()Ljava/lang/String;");
                  mids$[mid_getTechPhone_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechPhone", "()Ljava/lang/String;");
                  mids$[mid_getTechPosition_d2c8eb4129821f0e] = env->getMethodID(cls, "getTechPosition", "()Ljava/lang/String;");
                  mids$[mid_getTimeSpan_9981f74b2d109da6] = env->getMethodID(cls, "getTimeSpan", "()D");
                  mids$[mid_getUt1mutcT0_9981f74b2d109da6] = env->getMethodID(cls, "getUt1mutcT0", "()D");
                  mids$[mid_setAdmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setAdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setAlternateNames_aa335fea495d60e0] = env->getMethodID(cls, "setAlternateNames", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_105e1eadb709d9ac] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setCdmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setCdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setCelestialSource_105e1eadb709d9ac] = env->getMethodID(cls, "setCelestialSource", "(Ljava/lang/String;)V");
                  mids$[mid_setConstellation_105e1eadb709d9ac] = env->getMethodID(cls, "setConstellation", "(Ljava/lang/String;)V");
                  mids$[mid_setCountry_105e1eadb709d9ac] = env->getMethodID(cls, "setCountry", "(Ljava/lang/String;)V");
                  mids$[mid_setEopSource_105e1eadb709d9ac] = env->getMethodID(cls, "setEopSource", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_8497861b879c83f7] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_105e1eadb709d9ac] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setInterpMethodEOP_105e1eadb709d9ac] = env->getMethodID(cls, "setInterpMethodEOP", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_8497861b879c83f7] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setNextMessageEpoch_8497861b879c83f7] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextMessageID_105e1eadb709d9ac] = env->getMethodID(cls, "setNextMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectDesignator_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectType_f747a3e328e2d2f7] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                  mids$[mid_setOcmDataElements_aa335fea495d60e0] = env->getMethodID(cls, "setOcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setOperator_105e1eadb709d9ac] = env->getMethodID(cls, "setOperator", "(Ljava/lang/String;)V");
                  mids$[mid_setOpsStatus_082afa229c2f360e] = env->getMethodID(cls, "setOpsStatus", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;)V");
                  mids$[mid_setOrbitCategory_278a97dc23916565] = env->getMethodID(cls, "setOrbitCategory", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;)V");
                  mids$[mid_setOriginatorAddress_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setOwner_105e1eadb709d9ac] = env->getMethodID(cls, "setOwner", "(Ljava/lang/String;)V");
                  mids$[mid_setPreviousMessageEpoch_8497861b879c83f7] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setPreviousMessageID_105e1eadb709d9ac] = env->getMethodID(cls, "setPreviousMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setPrmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setPrmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setRdmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setRdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setSclkOffsetAtEpoch_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSclkOffsetAtEpoch", "(D)V");
                  mids$[mid_setSclkSecPerSISec_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSclkSecPerSISec", "(D)V");
                  mids$[mid_setStartTime_8497861b879c83f7] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_8497861b879c83f7] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_setTdmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setTdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setTechAddress_105e1eadb709d9ac] = env->getMethodID(cls, "setTechAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setTechEmail_105e1eadb709d9ac] = env->getMethodID(cls, "setTechEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setTechOrg_105e1eadb709d9ac] = env->getMethodID(cls, "setTechOrg", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPOC_105e1eadb709d9ac] = env->getMethodID(cls, "setTechPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPhone_105e1eadb709d9ac] = env->getMethodID(cls, "setTechPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPosition_105e1eadb709d9ac] = env->getMethodID(cls, "setTechPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setTimeSpan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTimeSpan", "(D)V");
                  mids$[mid_setUt1mutcT0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setUt1mutcT0", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCLK_OFFSET_AT_EPOCH = env->getStaticDoubleField(cls, "DEFAULT_SCLK_OFFSET_AT_EPOCH");
                  DEFAULT_SCLK_SEC_PER_SI_SEC = env->getStaticDoubleField(cls, "DEFAULT_SCLK_SEC_PER_SI_SEC");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmMetadata::OcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

              OcmMetadata OcmMetadata::copy(jdouble a0) const
              {
                return OcmMetadata(env->callObjectMethod(this$, mids$[mid_copy_250cb68cc9eeabce], a0));
              }

              ::java::lang::String OcmMetadata::getAdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMessageLink_d2c8eb4129821f0e]));
              }

              ::java::util::List OcmMetadata::getAlternateNames() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlternateNames_d751c1a57012b438]));
              }

              ::java::lang::String OcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getCdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCdmMessageLink_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getCelestialSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCelestialSource_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getConstellation() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConstellation_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getCountry() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getEopSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEopSource_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_80e11148db499dda]));
              }

              ::java::lang::String OcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getInterpMethodEOP() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodEOP_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_80e11148db499dda]));
              }

              jdouble OcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_80e11148db499dda]));
              }

              ::java::lang::String OcmMetadata::getNextMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNextMessageID_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType OcmMetadata::getObjectType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_4afc147acbd215f9]));
              }

              ::java::util::List OcmMetadata::getOcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOcmDataElements_d751c1a57012b438]));
              }

              ::java::lang::String OcmMetadata::getOperator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus OcmMetadata::getOpsStatus() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus(env->callObjectMethod(this$, mids$[mid_getOpsStatus_90d691647ed21ffc]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory OcmMetadata::getOrbitCategory() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory(env->callObjectMethod(this$, mids$[mid_getOrbitCategory_6b2c9b9970490924]));
              }

              ::java::lang::String OcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getOwner() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOwner_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getPreviousMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_80e11148db499dda]));
              }

              ::java::lang::String OcmMetadata::getPreviousMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageID_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getPrmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrmMessageLink_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getRdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRdmMessageLink_d2c8eb4129821f0e]));
              }

              jdouble OcmMetadata::getSclkOffsetAtEpoch() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkOffsetAtEpoch_9981f74b2d109da6]);
              }

              jdouble OcmMetadata::getSclkSecPerSISec() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkSecPerSISec_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_80e11148db499dda]));
              }

              jdouble OcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_9981f74b2d109da6]);
              }

              ::java::lang::String OcmMetadata::getTdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTdmMessageLink_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechAddress_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechEmail_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechOrg() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechOrg_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPOC_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPhone_d2c8eb4129821f0e]));
              }

              ::java::lang::String OcmMetadata::getTechPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPosition_d2c8eb4129821f0e]));
              }

              jdouble OcmMetadata::getTimeSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSpan_9981f74b2d109da6]);
              }

              jdouble OcmMetadata::getUt1mutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getUt1mutcT0_9981f74b2d109da6]);
              }

              void OcmMetadata::setAdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAdmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setAlternateNames(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlternateNames_aa335fea495d60e0], a0.this$);
              }

              void OcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setCdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCdmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setCelestialSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCelestialSource_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setConstellation(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConstellation_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setCountry(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCountry_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setEopSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEopSource_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setInterpMethodEOP(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodEOP_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setNextMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageID_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectType_f747a3e328e2d2f7], a0.this$);
              }

              void OcmMetadata::setOcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOcmDataElements_aa335fea495d60e0], a0.this$);
              }

              void OcmMetadata::setOperator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOperator_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOpsStatus_082afa229c2f360e], a0.this$);
              }

              void OcmMetadata::setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCategory_278a97dc23916565], a0.this$);
              }

              void OcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setOwner(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOwner_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setPreviousMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageID_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setPrmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setRdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRdmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setSclkOffsetAtEpoch(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkOffsetAtEpoch_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::setSclkSecPerSISec(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkSecPerSISec_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_8497861b879c83f7], a0.this$);
              }

              void OcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::setTdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTdmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechAddress_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechEmail_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechOrg(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechOrg_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPOC_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPhone_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTechPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPosition_105e1eadb709d9ac], a0.this$);
              }

              void OcmMetadata::setTimeSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSpan_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::setUt1mutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUt1mutcT0_1ad26e8c8c0cd65b], a0);
              }

              void OcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericModel::class$ = NULL;
          jmethodID *PythonIonosphericModel::mids$ = NULL;
          bool PythonIonosphericModel::live$ = false;

          jclass PythonIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_be783177b060994b] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_84f929c42eeec397] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericModel::PythonIonosphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonIonosphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonIonosphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonIonosphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace ionosphere {
          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self);
          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data);
          static PyGetSetDef t_PythonIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericModel)[] = {
            { Py_tp_methods, t_PythonIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericModel_init_ },
            { Py_tp_getset, t_PythonIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericModel, t_PythonIonosphericModel, PythonIonosphericModel);

          void t_PythonIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericModel), &PY_TYPE_DEF(PythonIonosphericModel), module, "PythonIonosphericModel", 1);
          }

          void t_PythonIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "class_", make_descriptor(PythonIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "wrapfn_", make_descriptor(t_PythonIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonIonosphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIonosphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_pathDelay3 },
              { "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D", (void *) t_PythonIonosphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericModel::wrap_Object(PythonIonosphericModel(((t_PythonIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericModel object((jobject) NULL);

            INT_CALL(object = PythonIonosphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jdouble>(a3).wrap();
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data)
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
#include "org/orekit/time/ChronologicalComparator.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *ChronologicalComparator::class$ = NULL;
      jmethodID *ChronologicalComparator::mids$ = NULL;
      bool ChronologicalComparator::live$ = false;

      jclass ChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/ChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_a17d66c61ab98915] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ChronologicalComparator::ChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      jint ChronologicalComparator::compare(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_a17d66c61ab98915], a0.this$, a1.this$);
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
      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args);

      static PyMethodDef t_ChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_ChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ChronologicalComparator)[] = {
        { Py_tp_methods, t_ChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_ChronologicalComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ChronologicalComparator, t_ChronologicalComparator, ChronologicalComparator);

      void t_ChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ChronologicalComparator), &PY_TYPE_DEF(ChronologicalComparator), module, "ChronologicalComparator", 0);
      }

      void t_ChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "class_", make_descriptor(ChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "wrapfn_", make_descriptor(t_ChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_ChronologicalComparator::wrap_Object(ChronologicalComparator(((t_ChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        ChronologicalComparator object((jobject) NULL);

        INT_CALL(object = ChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultIterativeLinearSolverEvent::class$ = NULL;
      jmethodID *DefaultIterativeLinearSolverEvent::mids$ = NULL;
      bool DefaultIterativeLinearSolverEvent::live$ = false;

      jclass DefaultIterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultIterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e62ee8819bc5609] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_init$_aafcf78acecc2e97] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_getNormOfResidual_9981f74b2d109da6] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_eee3de00fe971136] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_3e62ee8819bc5609, a0.this$, a1, a2.this$, a3.this$, a4)) {}

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, const ::org::hipparchus::linear::RealVector & a4, jdouble a5) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_aafcf78acecc2e97, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5)) {}

      jdouble DefaultIterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_92d7e8d8d3f1dfcf]));
      }

      jboolean DefaultIterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_eee3de00fe971136]);
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
      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_DefaultIterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultIterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getNormOfResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getRightHandSideVector, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getSolution, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, providesResidual, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultIterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_DefaultIterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_DefaultIterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_DefaultIterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultIterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolverEvent),
        NULL
      };

      DEFINE_TYPE(DefaultIterativeLinearSolverEvent, t_DefaultIterativeLinearSolverEvent, DefaultIterativeLinearSolverEvent);

      void t_DefaultIterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultIterativeLinearSolverEvent), &PY_TYPE_DEF(DefaultIterativeLinearSolverEvent), module, "DefaultIterativeLinearSolverEvent", 0);
      }

      void t_DefaultIterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "class_", make_descriptor(DefaultIterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_DefaultIterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_DefaultIterativeLinearSolverEvent::wrap_Object(DefaultIterativeLinearSolverEvent(((t_DefaultIterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jdouble a4;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector a4((jobject) NULL);
            jdouble a5;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormOfResidual());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getNormOfResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getResidual());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRightHandSideVector());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getRightHandSideVector", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getSolution", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.providesResidual());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "providesResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *Panel::class$ = NULL;
      jmethodID *Panel::mids$ = NULL;
      bool Panel::live$ = false;

      jclass Panel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/Panel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsorption_9981f74b2d109da6] = env->getMethodID(cls, "getAbsorption", "()D");
          mids$[mid_getArea_9981f74b2d109da6] = env->getMethodID(cls, "getArea", "()D");
          mids$[mid_getDrag_9981f74b2d109da6] = env->getMethodID(cls, "getDrag", "()D");
          mids$[mid_getLiftRatio_9981f74b2d109da6] = env->getMethodID(cls, "getLiftRatio", "()D");
          mids$[mid_getNormal_ee088fe02cdd6745] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_38283c57554889c0] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getReflection_9981f74b2d109da6] = env->getMethodID(cls, "getReflection", "()D");
          mids$[mid_isDoubleSided_eee3de00fe971136] = env->getMethodID(cls, "isDoubleSided", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Panel::getAbsorption() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsorption_9981f74b2d109da6]);
      }

      jdouble Panel::getArea() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArea_9981f74b2d109da6]);
      }

      jdouble Panel::getDrag() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDrag_9981f74b2d109da6]);
      }

      jdouble Panel::getLiftRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLiftRatio_9981f74b2d109da6]);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Panel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_ee088fe02cdd6745], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Panel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_38283c57554889c0], a0.this$));
      }

      jdouble Panel::getReflection() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReflection_9981f74b2d109da6]);
      }

      jboolean Panel::isDoubleSided() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDoubleSided_eee3de00fe971136]);
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
      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_getAbsorption(t_Panel *self);
      static PyObject *t_Panel_getArea(t_Panel *self);
      static PyObject *t_Panel_getDrag(t_Panel *self);
      static PyObject *t_Panel_getLiftRatio(t_Panel *self);
      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args);
      static PyObject *t_Panel_getReflection(t_Panel *self);
      static PyObject *t_Panel_isDoubleSided(t_Panel *self);
      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data);
      static PyObject *t_Panel_get__area(t_Panel *self, void *data);
      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data);
      static PyObject *t_Panel_get__drag(t_Panel *self, void *data);
      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data);
      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data);
      static PyGetSetDef t_Panel__fields_[] = {
        DECLARE_GET_FIELD(t_Panel, absorption),
        DECLARE_GET_FIELD(t_Panel, area),
        DECLARE_GET_FIELD(t_Panel, doubleSided),
        DECLARE_GET_FIELD(t_Panel, drag),
        DECLARE_GET_FIELD(t_Panel, liftRatio),
        DECLARE_GET_FIELD(t_Panel, reflection),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Panel__methods_[] = {
        DECLARE_METHOD(t_Panel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, getAbsorption, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getArea, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getDrag, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getLiftRatio, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getNormal, METH_VARARGS),
        DECLARE_METHOD(t_Panel, getReflection, METH_NOARGS),
        DECLARE_METHOD(t_Panel, isDoubleSided, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Panel)[] = {
        { Py_tp_methods, t_Panel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Panel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Panel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Panel, t_Panel, Panel);

      void t_Panel::install(PyObject *module)
      {
        installType(&PY_TYPE(Panel), &PY_TYPE_DEF(Panel), module, "Panel", 0);
      }

      void t_Panel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "class_", make_descriptor(Panel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "wrapfn_", make_descriptor(t_Panel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Panel::initializeClass, 1)))
          return NULL;
        return t_Panel::wrap_Object(Panel(((t_Panel *) arg)->object.this$));
      }
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Panel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Panel_getAbsorption(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsorption());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getArea(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArea());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getDrag(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDrag());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getLiftRatio(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getNormal", args);
        return NULL;
      }

      static PyObject *t_Panel_getReflection(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReflection());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_isDoubleSided(t_Panel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDoubleSided());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsorption());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__area(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArea());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDoubleSided());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Panel_get__drag(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDrag());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReflection());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Stream.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Stream::class$ = NULL;
      jmethodID *Stream::mids$ = NULL;
      bool Stream::live$ = false;

      jclass Stream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Stream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_concat_1e3d866c4700912a] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
          mids$[mid_count_42c72b98e3c2e08a] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_11e4ca8182c1933d] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/Stream;");
          mids$[mid_empty_11e4ca8182c1933d] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/Stream;");
          mids$[mid_findAny_aa56605e3771f379] = env->getMethodID(cls, "findAny", "()Ljava/util/Optional;");
          mids$[mid_findFirst_aa56605e3771f379] = env->getMethodID(cls, "findFirst", "()Ljava/util/Optional;");
          mids$[mid_generate_2f8405cc89f98235] = env->getStaticMethodID(cls, "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;");
          mids$[mid_limit_e5c29d6e72640fd8] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/Stream;");
          mids$[mid_max_62928695c6c9336f] = env->getMethodID(cls, "max", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_min_62928695c6c9336f] = env->getMethodID(cls, "min", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_of_ea5d6111543a5047] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_of_20f6511147a3e46d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_ofNullable_20f6511147a3e46d] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_skip_e5c29d6e72640fd8] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/Stream;");
          mids$[mid_sorted_11e4ca8182c1933d] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/Stream;");
          mids$[mid_sorted_9e0086f5081f1d56] = env->getMethodID(cls, "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;");
          mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Stream Stream::concat(const Stream & a0, const Stream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_concat_1e3d866c4700912a], a0.this$, a1.this$));
      }

      jlong Stream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_42c72b98e3c2e08a]);
      }

      Stream Stream::distinct() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_distinct_11e4ca8182c1933d]));
      }

      Stream Stream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_empty_11e4ca8182c1933d]));
      }

      ::java::util::Optional Stream::findAny() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findAny_aa56605e3771f379]));
      }

      ::java::util::Optional Stream::findFirst() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findFirst_aa56605e3771f379]));
      }

      Stream Stream::generate(const ::java::util::function::Supplier & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_generate_2f8405cc89f98235], a0.this$));
      }

      Stream Stream::limit(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_limit_e5c29d6e72640fd8], a0));
      }

      ::java::util::Optional Stream::max$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_max_62928695c6c9336f], a0.this$));
      }

      ::java::util::Optional Stream::min$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_min_62928695c6c9336f], a0.this$));
      }

      Stream Stream::of(const JArray< ::java::lang::Object > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_ea5d6111543a5047], a0.this$));
      }

      Stream Stream::of(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_20f6511147a3e46d], a0.this$));
      }

      Stream Stream::ofNullable(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_20f6511147a3e46d], a0.this$));
      }

      Stream Stream::skip(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_skip_e5c29d6e72640fd8], a0));
      }

      Stream Stream::sorted() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_11e4ca8182c1933d]));
      }

      Stream Stream::sorted(const ::java::util::Comparator & a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_9e0086f5081f1d56], a0.this$));
      }

      JArray< ::java::lang::Object > Stream::toArray() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_count(t_Stream *self);
      static PyObject *t_Stream_distinct(t_Stream *self);
      static PyObject *t_Stream_empty(PyTypeObject *type);
      static PyObject *t_Stream_findAny(t_Stream *self);
      static PyObject *t_Stream_findFirst(t_Stream *self);
      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_toArray(t_Stream *self);
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data);
      static PyGetSetDef t_Stream__fields_[] = {
        DECLARE_GET_FIELD(t_Stream, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Stream__methods_[] = {
        DECLARE_METHOD(t_Stream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, of_, METH_VARARGS),
        DECLARE_METHOD(t_Stream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, count, METH_NOARGS),
        DECLARE_METHOD(t_Stream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_Stream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_Stream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_Stream, generate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, limit, METH_O),
        DECLARE_METHOD(t_Stream, max, METH_O),
        DECLARE_METHOD(t_Stream, min, METH_O),
        DECLARE_METHOD(t_Stream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, ofNullable, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, skip, METH_O),
        DECLARE_METHOD(t_Stream, sorted, METH_VARARGS),
        DECLARE_METHOD(t_Stream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Stream)[] = {
        { Py_tp_methods, t_Stream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Stream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Stream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Stream, t_Stream, Stream);
      PyObject *t_Stream::wrap_Object(const Stream& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Stream::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Stream::install(PyObject *module)
      {
        installType(&PY_TYPE(Stream), &PY_TYPE_DEF(Stream), module, "Stream", 0);
      }

      void t_Stream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "class_", make_descriptor(Stream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "wrapfn_", make_descriptor(t_Stream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Stream::initializeClass, 1)))
          return NULL;
        return t_Stream::wrap_Object(Stream(((t_Stream *) arg)->object.this$));
      }
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Stream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args)
      {
        Stream a0((jobject) NULL);
        PyTypeObject **p0;
        Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Stream result((jobject) NULL);

        if (!parseArgs(args, "KK", Stream::initializeClass, Stream::initializeClass, &a0, &p0, t_Stream::parameters_, &a1, &p1, t_Stream::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::concat(a0, a1));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_Stream_count(t_Stream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Stream_distinct(t_Stream *self)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_Stream::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_empty(PyTypeObject *type)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::Stream::empty());
        return t_Stream::wrap_Object(result);
      }

      static PyObject *t_Stream_findAny(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_findFirst(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::function::Supplier a0((jobject) NULL);
        PyTypeObject **p0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::generate(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "generate", arg);
        return NULL;
      }

      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.max$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "max", arg);
        return NULL;
      }

      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.min$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "min", arg);
        return NULL;
      }

      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::Object > a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "[o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        Stream result((jobject) NULL);

        if (!parseArg(arg, "o", &a0))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::ofNullable(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ofNullable", arg);
        return NULL;
      }

      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.sorted());
            return t_Stream::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(result = self->object.sorted(a0));
              return t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sorted", args);
        return NULL;
      }

      static PyObject *t_Stream_toArray(t_Stream *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomAdaptor::class$ = NULL;
      jmethodID *RandomAdaptor::mids$ = NULL;
      bool RandomAdaptor::live$ = false;

      jclass RandomAdaptor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomAdaptor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_e4288ba5fbf20d28] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_1eaf6eb0a3f3163f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_of_2ebba00158a62d33] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Ljava/util/Random;");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomAdaptor::RandomAdaptor(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::util::Random(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

      jboolean RandomAdaptor::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_e4288ba5fbf20d28], a0.this$, a1, a2);
      }

      jdouble RandomAdaptor::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat RandomAdaptor::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jdouble RandomAdaptor::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint RandomAdaptor::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jint RandomAdaptor::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong RandomAdaptor::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
      }

      jlong RandomAdaptor::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_1eaf6eb0a3f3163f], a0);
      }

      ::java::util::Random RandomAdaptor::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Random(env->callStaticObjectMethod(cls, mids$[mid_of_2ebba00158a62d33], a0.this$));
      }

      void RandomAdaptor::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void RandomAdaptor::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void RandomAdaptor::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
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
      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args);
      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomAdaptor__fields_[] = {
        DECLARE_SET_FIELD(t_RandomAdaptor, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomAdaptor__methods_[] = {
        DECLARE_METHOD(t_RandomAdaptor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, of, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomAdaptor)[] = {
        { Py_tp_methods, t_RandomAdaptor__methods_ },
        { Py_tp_init, (void *) t_RandomAdaptor_init_ },
        { Py_tp_getset, t_RandomAdaptor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomAdaptor)[] = {
        &PY_TYPE_DEF(::java::util::Random),
        NULL
      };

      DEFINE_TYPE(RandomAdaptor, t_RandomAdaptor, RandomAdaptor);

      void t_RandomAdaptor::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomAdaptor), &PY_TYPE_DEF(RandomAdaptor), module, "RandomAdaptor", 0);
      }

      void t_RandomAdaptor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "class_", make_descriptor(RandomAdaptor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "wrapfn_", make_descriptor(t_RandomAdaptor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomAdaptor::initializeClass, 1)))
          return NULL;
        return t_RandomAdaptor::wrap_Object(RandomAdaptor(((t_RandomAdaptor *) arg)->object.this$));
      }
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomAdaptor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomAdaptor object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = RandomAdaptor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        ::java::util::Random result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomAdaptor::of(a0));
          return ::java::util::t_Random::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }

      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
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
              mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
              mids$[mid_getRate_d6ab429752e7c267] = env->getMethodID(cls, "getRate", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String StreamedMessage::getId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
          }

          jint StreamedMessage::getRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getRate_d6ab429752e7c267]);
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
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummary::class$ = NULL;
        jmethodID *StatisticalSummary::mids$ = NULL;
        bool StatisticalSummary::live$ = false;

        jclass StatisticalSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_ff5d74c4ea6f9225] = env->getStaticMethodID(cls, "aggregate", "([Lorg/hipparchus/stat/descriptive/StatisticalSummary;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_aggregate_5026ee59c02f2252] = env->getStaticMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_9981f74b2d109da6] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_9981f74b2d109da6] = env->getMethodID(cls, "getVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummary StatisticalSummary::aggregate(const JArray< StatisticalSummary > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_ff5d74c4ea6f9225], a0.this$));
        }

        StatisticalSummary StatisticalSummary::aggregate(const ::java::lang::Iterable & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_5026ee59c02f2252], a0.this$));
        }

        jdouble StatisticalSummary::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble StatisticalSummary::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble StatisticalSummary::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jlong StatisticalSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble StatisticalSummary::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_9981f74b2d109da6]);
        }

        jdouble StatisticalSummary::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
        }

        jdouble StatisticalSummary::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_9981f74b2d109da6]);
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
        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args);
        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data);
        static PyGetSetDef t_StatisticalSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummary, max),
          DECLARE_GET_FIELD(t_StatisticalSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalSummary, min),
          DECLARE_GET_FIELD(t_StatisticalSummary, n),
          DECLARE_GET_FIELD(t_StatisticalSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalSummary, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, aggregate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getVariance, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummary)[] = {
          { Py_tp_methods, t_StatisticalSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummary, t_StatisticalSummary, StatisticalSummary);

        void t_StatisticalSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummary), &PY_TYPE_DEF(StatisticalSummary), module, "StatisticalSummary", 0);
        }

        void t_StatisticalSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "class_", make_descriptor(StatisticalSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "wrapfn_", make_descriptor(t_StatisticalSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummary::wrap_Object(StatisticalSummary(((t_StatisticalSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< StatisticalSummary > a0((jobject) NULL);
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "[k", StatisticalSummary::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "aggregate", args);
          return NULL;
        }

        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1243::class$ = NULL;
              jmethodID *Rtcm1243::mids$ = NULL;
              bool Rtcm1243::live$ = false;

              jclass Rtcm1243::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1243::Rtcm1243(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args);
              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data);
              static PyGetSetDef t_Rtcm1243__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1243, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1243__methods_[] = {
                DECLARE_METHOD(t_Rtcm1243, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1243)[] = {
                { Py_tp_methods, t_Rtcm1243__methods_ },
                { Py_tp_init, (void *) t_Rtcm1243_init_ },
                { Py_tp_getset, t_Rtcm1243__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1243)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1243, t_Rtcm1243, Rtcm1243);
              PyObject *t_Rtcm1243::wrap_Object(const Rtcm1243& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1243::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1243::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1243), &PY_TYPE_DEF(Rtcm1243), module, "Rtcm1243", 0);
              }

              void t_Rtcm1243::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "class_", make_descriptor(Rtcm1243::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "wrapfn_", make_descriptor(t_Rtcm1243::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1243::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1243::wrap_Object(Rtcm1243(((t_Rtcm1243 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1243::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1243 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1243(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data)
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
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/LOFType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOFType::class$ = NULL;
      jmethodID *LOFType::mids$ = NULL;
      bool LOFType::live$ = false;
      LOFType *LOFType::EQW = NULL;
      LOFType *LOFType::LVLH = NULL;
      LOFType *LOFType::LVLH_CCSDS = NULL;
      LOFType *LOFType::LVLH_CCSDS_INERTIAL = NULL;
      LOFType *LOFType::LVLH_INERTIAL = NULL;
      LOFType *LOFType::NTW = NULL;
      LOFType *LOFType::NTW_INERTIAL = NULL;
      LOFType *LOFType::QSW = NULL;
      LOFType *LOFType::QSW_INERTIAL = NULL;
      LOFType *LOFType::TNW = NULL;
      LOFType *LOFType::TNW_INERTIAL = NULL;
      LOFType *LOFType::VNC = NULL;
      LOFType *LOFType::VNC_INERTIAL = NULL;
      LOFType *LOFType::VVLH = NULL;
      LOFType *LOFType::VVLH_INERTIAL = NULL;

      jclass LOFType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOFType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_cc3fb55bcf18d696] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_7972874aa60c5cbb] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_5554d692f1f7262c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromInertial_24d473279eeb35d9] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_d019077181b15d7c] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOFType;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_fe2c3136d84f9aa0] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOFType;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toOrbitRelativeFrame_0b1c57b4ded01423] = env->getMethodID(cls, "toOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
          mids$[mid_valueOf_87e2aee94565a158] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LOFType;");
          mids$[mid_values_9c1d3d046d18c81c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LOFType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQW = new LOFType(env->getStaticObjectField(cls, "EQW", "Lorg/orekit/frames/LOFType;"));
          LVLH = new LOFType(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          LVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          NTW = new LOFType(env->getStaticObjectField(cls, "NTW", "Lorg/orekit/frames/LOFType;"));
          NTW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          QSW = new LOFType(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/frames/LOFType;"));
          QSW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "QSW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          TNW = new LOFType(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/frames/LOFType;"));
          TNW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VNC = new LOFType(env->getStaticObjectField(cls, "VNC", "Lorg/orekit/frames/LOFType;"));
          VNC_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VVLH = new LOFType(env->getStaticObjectField(cls, "VVLH", "Lorg/orekit/frames/LOFType;"));
          VVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOFType::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_cc3fb55bcf18d696], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7972874aa60c5cbb], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_5554d692f1f7262c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_24d473279eeb35d9], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromLOF(const LOFType & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_d019077181b15d7c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOFType & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_fe2c3136d84f9aa0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame LOFType::toOrbitRelativeFrame() const
      {
        return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_toOrbitRelativeFrame_0b1c57b4ded01423]));
      }

      LOFType LOFType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_87e2aee94565a158], a0.this$));
      }

      JArray< LOFType > LOFType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_9c1d3d046d18c81c]));
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
      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_getName(t_LOFType *self);
      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self);
      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOFType_values(PyTypeObject *type);
      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data);
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data);
      static PyGetSetDef t_LOFType__fields_[] = {
        DECLARE_GET_FIELD(t_LOFType, name),
        DECLARE_GET_FIELD(t_LOFType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOFType__methods_[] = {
        DECLARE_METHOD(t_LOFType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, toOrbitRelativeFrame, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOFType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOFType)[] = {
        { Py_tp_methods, t_LOFType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOFType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOFType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LOFType, t_LOFType, LOFType);
      PyObject *t_LOFType::wrap_Object(const LOFType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LOFType::install(PyObject *module)
      {
        installType(&PY_TYPE(LOFType), &PY_TYPE_DEF(LOFType), module, "LOFType", 0);
      }

      void t_LOFType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "class_", make_descriptor(LOFType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "wrapfn_", make_descriptor(t_LOFType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LOFType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "EQW", make_descriptor(t_LOFType::wrap_Object(*LOFType::EQW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH_INERTIAL)));
      }

      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOFType::initializeClass, 1)))
          return NULL;
        return t_LOFType::wrap_Object(LOFType(((t_LOFType *) arg)->object.this$));
      }
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOFType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LOFType_getName(t_LOFType *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            LOFType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "Kk", LOFType::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, t_LOFType::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, LOFType::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, t_LOFType::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self)
      {
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbitRelativeFrame());
        return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
      }

      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LOFType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LOFType::valueOf(a0));
          return t_LOFType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LOFType_values(PyTypeObject *type)
      {
        JArray< LOFType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LOFType::values());
        return JArray<jobject>(result.this$).wrap(t_LOFType::wrap_jobject);
      }
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalPropertiesKey::class$ = NULL;
              jmethodID *AttitudePhysicalPropertiesKey::mids$ = NULL;
              bool AttitudePhysicalPropertiesKey::live$ = false;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::COMMENT = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRAG_COEFF = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRY_MASS = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXX = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IZZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::WET_MASS = NULL;

              jclass AttitudePhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_86908b8c89fe54c2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;)Z");
                  mids$[mid_valueOf_226e59004d2697c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");
                  mids$[mid_values_46423dbb6f61d53a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRAG_COEFF = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRY_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  INERTIA_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXX = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IZZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  WET_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudePhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_86908b8c89fe54c2], a0.this$, a1.this$, a2.this$);
              }

              AttitudePhysicalPropertiesKey AttitudePhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudePhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_226e59004d2697c3], a0.this$));
              }

              JArray< AttitudePhysicalPropertiesKey > AttitudePhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudePhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_46423dbb6f61d53a]));
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
              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_AttitudePhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudePhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_AttitudePhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudePhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalPropertiesKey, t_AttitudePhysicalPropertiesKey, AttitudePhysicalPropertiesKey);
              PyObject *t_AttitudePhysicalPropertiesKey::wrap_Object(const AttitudePhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudePhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudePhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalPropertiesKey), &PY_TYPE_DEF(AttitudePhysicalPropertiesKey), module, "AttitudePhysicalPropertiesKey", 0);
              }

              void t_AttitudePhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "class_", make_descriptor(AttitudePhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "wrapfn_", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudePhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "COMMENT", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRAG_COEFF", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRAG_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "INERTIA_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXX", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IZZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "WET_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalPropertiesKey::wrap_Object(AttitudePhysicalPropertiesKey(((t_AttitudePhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudePhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::valueOf(a0));
                  return t_AttitudePhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< AttitudePhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudePhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEnablingPredicate::class$ = NULL;
        jmethodID *FieldEnablingPredicate::mids$ = NULL;
        bool FieldEnablingPredicate::live$ = false;

        jclass FieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_f8fad546fff5b1a3] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldEnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_f8fad546fff5b1a3], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_FieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_FieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEnablingPredicate)[] = {
          { Py_tp_methods, t_FieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEnablingPredicate, t_FieldEnablingPredicate, FieldEnablingPredicate);
        PyObject *t_FieldEnablingPredicate::wrap_Object(const FieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEnablingPredicate), &PY_TYPE_DEF(FieldEnablingPredicate), module, "FieldEnablingPredicate", 0);
        }

        void t_FieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "class_", make_descriptor(FieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "wrapfn_", make_descriptor(t_FieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_FieldEnablingPredicate::wrap_Object(FieldEnablingPredicate(((t_FieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateFunction::class$ = NULL;
      jmethodID *FieldUnivariateFunction::mids$ = NULL;
      bool FieldUnivariateFunction::live$ = false;

      jclass FieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateFunction_12f6fa10ac5dffc5] = env->getMethodID(cls, "toCalculusFieldUnivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");
          mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateFunction::toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateFunction_12f6fa10ac5dffc5], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
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
      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, toCalculusFieldUnivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateFunction, t_FieldUnivariateFunction, FieldUnivariateFunction);

      void t_FieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateFunction), &PY_TYPE_DEF(FieldUnivariateFunction), module, "FieldUnivariateFunction", 0);
      }

      void t_FieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "class_", make_descriptor(FieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "wrapfn_", make_descriptor(t_FieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateFunction::wrap_Object(FieldUnivariateFunction(((t_FieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeader::class$ = NULL;
            jmethodID *CdmHeader::mids$ = NULL;
            bool CdmHeader::live$ = false;

            jclass CdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getMessageFor_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessageFor", "()Ljava/lang/String;");
                mids$[mid_setMessageFor_105e1eadb709d9ac] = env->getMethodID(cls, "setMessageFor", "(Ljava/lang/String;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeader::CdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::java::lang::String CdmHeader::getMessageFor() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageFor_d2c8eb4129821f0e]));
            }

            void CdmHeader::setMessageFor(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMessageFor_105e1eadb709d9ac], a0.this$);
            }

            void CdmHeader::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self);
            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg);
            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args);
            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data);
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmHeader, messageFor),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeader__methods_[] = {
              DECLARE_METHOD(t_CdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, getMessageFor, METH_NOARGS),
              DECLARE_METHOD(t_CdmHeader, setMessageFor, METH_O),
              DECLARE_METHOD(t_CdmHeader, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeader)[] = {
              { Py_tp_methods, t_CdmHeader__methods_ },
              { Py_tp_init, (void *) t_CdmHeader_init_ },
              { Py_tp_getset, t_CdmHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(CdmHeader, t_CdmHeader, CdmHeader);

            void t_CdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeader), &PY_TYPE_DEF(CdmHeader), module, "CdmHeader", 0);
            }

            void t_CdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "class_", make_descriptor(CdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "wrapfn_", make_descriptor(t_CdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeader::initializeClass, 1)))
                return NULL;
              return t_CdmHeader::wrap_Object(CdmHeader(((t_CdmHeader *) arg)->object.this$));
            }
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds)
            {
              CdmHeader object((jobject) NULL);

              INT_CALL(object = CdmHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessageFor());
              return j2p(result);
            }

            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setMessageFor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMessageFor", arg);
              return NULL;
            }

            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmHeader), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getMessageFor());
              return j2p(value);
            }
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setMessageFor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "messageFor", arg);
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
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldContinuedFraction::class$ = NULL;
      jmethodID *FieldContinuedFraction::mids$ = NULL;
      bool FieldContinuedFraction::live$ = false;

      jclass FieldContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_a3b854adede8eaaa] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_d15f4b9153503460] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_620e45e6055b3312] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_8ea15c44fce0e88b] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_b23de0cfc61f8f60] = env->getMethodID(cls, "getA", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_b23de0cfc61f8f60] = env->getMethodID(cls, "getB", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_a3b854adede8eaaa], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_d15f4b9153503460], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_620e45e6055b3312], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, jint a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_8ea15c44fce0e88b], a0.this$, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getA(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_b23de0cfc61f8f60], a0, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getB(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_b23de0cfc61f8f60], a0, a1.this$));
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
      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args);

      static PyMethodDef t_FieldContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_FieldContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, evaluate, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getB, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldContinuedFraction)[] = {
        { Py_tp_methods, t_FieldContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldContinuedFraction, t_FieldContinuedFraction, FieldContinuedFraction);

      void t_FieldContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldContinuedFraction), &PY_TYPE_DEF(FieldContinuedFraction), module, "FieldContinuedFraction", 0);
      }

      void t_FieldContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "class_", make_descriptor(FieldContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "wrapfn_", make_descriptor(t_FieldContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_FieldContinuedFraction::wrap_Object(FieldContinuedFraction(((t_FieldContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KDI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getA(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getA", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getB(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getB", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2Field::mids$ = NULL;
        bool FieldUnivariateDerivative2Field::live$ = false;

        jclass FieldUnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_4354ae7624bd9782] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative2Field_0dfce88f97cfaaab] = env->getStaticMethodID(cls, "getUnivariateDerivative2Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getZero_4354ae7624bd9782] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_4354ae7624bd9782]));
        }

        ::java::lang::Class FieldUnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        FieldUnivariateDerivative2Field FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative2Field_0dfce88f97cfaaab], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_4354ae7624bd9782]));
        }

        jint FieldUnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getUnivariateDerivative2Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2Field, t_FieldUnivariateDerivative2Field, FieldUnivariateDerivative2Field);
        PyObject *t_FieldUnivariateDerivative2Field::wrap_Object(const FieldUnivariateDerivative2Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2Field), &PY_TYPE_DEF(FieldUnivariateDerivative2Field), module, "FieldUnivariateDerivative2Field", 0);
        }

        void t_FieldUnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "class_", make_descriptor(FieldUnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2Field::wrap_Object(FieldUnivariateDerivative2Field(((t_FieldUnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(a0));
            return t_FieldUnivariateDerivative2Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative2Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonSwitchHandler::class$ = NULL;
      jmethodID *PythonSwitchHandler::mids$ = NULL;
      bool PythonSwitchHandler::live$ = false;

      jclass PythonSwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonSwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_switchOccurred_fc1e5e72098d53da] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSwitchHandler::PythonSwitchHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonSwitchHandler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonSwitchHandler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonSwitchHandler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self);
      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args);
      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data);
      static PyGetSetDef t_PythonSwitchHandler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSwitchHandler, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSwitchHandler__methods_[] = {
        DECLARE_METHOD(t_PythonSwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSwitchHandler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSwitchHandler)[] = {
        { Py_tp_methods, t_PythonSwitchHandler__methods_ },
        { Py_tp_init, (void *) t_PythonSwitchHandler_init_ },
        { Py_tp_getset, t_PythonSwitchHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSwitchHandler, t_PythonSwitchHandler, PythonSwitchHandler);

      void t_PythonSwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSwitchHandler), &PY_TYPE_DEF(PythonSwitchHandler), module, "PythonSwitchHandler", 1);
      }

      void t_PythonSwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "class_", make_descriptor(PythonSwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "wrapfn_", make_descriptor(t_PythonSwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSwitchHandler::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonSwitchHandler_pythonDecRef0 },
          { "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSwitchHandler_switchOccurred1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSwitchHandler::initializeClass, 1)))
          return NULL;
        return t_PythonSwitchHandler::wrap_Object(PythonSwitchHandler(((t_PythonSwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds)
      {
        PythonSwitchHandler object((jobject) NULL);

        INT_CALL(object = PythonSwitchHandler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args)
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

      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *o1 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a1));
        PyObject *o2 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a2));
        PyObject *result = PyObject_CallMethod(obj, "switchOccurred", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SsrUpdateInterval::class$ = NULL;
            jmethodID *SsrUpdateInterval::mids$ = NULL;
            bool SsrUpdateInterval::live$ = false;

            jclass SsrUpdateInterval::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SsrUpdateInterval");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getUpdateInterval_9981f74b2d109da6] = env->getMethodID(cls, "getUpdateInterval", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrUpdateInterval::SsrUpdateInterval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jdouble SsrUpdateInterval::getUpdateInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getUpdateInterval_9981f74b2d109da6]);
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
          namespace common {
            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self);
            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data);
            static PyGetSetDef t_SsrUpdateInterval__fields_[] = {
              DECLARE_GET_FIELD(t_SsrUpdateInterval, updateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrUpdateInterval__methods_[] = {
              DECLARE_METHOD(t_SsrUpdateInterval, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, getUpdateInterval, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrUpdateInterval)[] = {
              { Py_tp_methods, t_SsrUpdateInterval__methods_ },
              { Py_tp_init, (void *) t_SsrUpdateInterval_init_ },
              { Py_tp_getset, t_SsrUpdateInterval__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrUpdateInterval)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrUpdateInterval, t_SsrUpdateInterval, SsrUpdateInterval);

            void t_SsrUpdateInterval::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrUpdateInterval), &PY_TYPE_DEF(SsrUpdateInterval), module, "SsrUpdateInterval", 0);
            }

            void t_SsrUpdateInterval::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "class_", make_descriptor(SsrUpdateInterval::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "wrapfn_", make_descriptor(t_SsrUpdateInterval::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrUpdateInterval::initializeClass, 1)))
                return NULL;
              return t_SsrUpdateInterval::wrap_Object(SsrUpdateInterval(((t_SsrUpdateInterval *) arg)->object.this$));
            }
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrUpdateInterval::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SsrUpdateInterval object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SsrUpdateInterval(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/PythonAtmosphericRefraction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *PythonAtmosphericRefraction::class$ = NULL;
        jmethodID *PythonAtmosphericRefraction::mids$ = NULL;
        bool PythonAtmosphericRefraction::live$ = false;

        jclass PythonAtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/PythonAtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_applyCorrection_1ebaacadb4fd5fdc] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAtmosphericRefraction::PythonAtmosphericRefraction() : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAtmosphericRefraction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAtmosphericRefraction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAtmosphericRefraction::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace refraction {
        static PyObject *t_PythonAtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAtmosphericRefraction_init_(t_PythonAtmosphericRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAtmosphericRefraction_finalize(t_PythonAtmosphericRefraction *self);
        static PyObject *t_PythonAtmosphericRefraction_pythonExtension(t_PythonAtmosphericRefraction *self, PyObject *args);
        static jobject JNICALL t_PythonAtmosphericRefraction_applyCorrection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonAtmosphericRefraction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAtmosphericRefraction_get__self(t_PythonAtmosphericRefraction *self, void *data);
        static PyGetSetDef t_PythonAtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAtmosphericRefraction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_PythonAtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAtmosphericRefraction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAtmosphericRefraction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefraction)[] = {
          { Py_tp_methods, t_PythonAtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) t_PythonAtmosphericRefraction_init_ },
          { Py_tp_getset, t_PythonAtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::refraction::AtmosphericRefraction),
          NULL
        };

        DEFINE_TYPE(PythonAtmosphericRefraction, t_PythonAtmosphericRefraction, PythonAtmosphericRefraction);

        void t_PythonAtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAtmosphericRefraction), &PY_TYPE_DEF(PythonAtmosphericRefraction), module, "PythonAtmosphericRefraction", 1);
        }

        void t_PythonAtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefraction), "class_", make_descriptor(PythonAtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefraction), "wrapfn_", make_descriptor(t_PythonAtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAtmosphericRefraction::initializeClass);
          JNINativeMethod methods[] = {
            { "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;", (void *) t_PythonAtmosphericRefraction_applyCorrection0 },
            { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefraction_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_PythonAtmosphericRefraction::wrap_Object(PythonAtmosphericRefraction(((t_PythonAtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_PythonAtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAtmosphericRefraction_init_(t_PythonAtmosphericRefraction *self, PyObject *args, PyObject *kwds)
        {
          PythonAtmosphericRefraction object((jobject) NULL);

          INT_CALL(object = PythonAtmosphericRefraction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAtmosphericRefraction_finalize(t_PythonAtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAtmosphericRefraction_pythonExtension(t_PythonAtmosphericRefraction *self, PyObject *args)
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

        static jobject JNICALL t_PythonAtmosphericRefraction_applyCorrection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefraction::mids$[PythonAtmosphericRefraction::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(::org::orekit::rugged::utils::NormalizedGeodeticPoint(a2));
          PyObject *o3 = ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(::org::orekit::rugged::intersection::IntersectionAlgorithm(a3));
          PyObject *result = PyObject_CallMethod(obj, "applyCorrection", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("applyCorrection", result);
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

        static void JNICALL t_PythonAtmosphericRefraction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefraction::mids$[PythonAtmosphericRefraction::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAtmosphericRefraction::mids$[PythonAtmosphericRefraction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAtmosphericRefraction_get__self(t_PythonAtmosphericRefraction *self, void *data)
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
