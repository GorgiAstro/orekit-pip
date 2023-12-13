#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesFieldIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegrator::mids$ = NULL;
        bool ThreeEighthesFieldIntegrator::live$ = false;

        jclass ThreeEighthesFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_e5ddc535bab0525f] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegrator::ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ThreeEighthesFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
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
        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegrator, t_ThreeEighthesFieldIntegrator, ThreeEighthesFieldIntegrator);
        PyObject *t_ThreeEighthesFieldIntegrator::wrap_Object(const ThreeEighthesFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegrator), &PY_TYPE_DEF(ThreeEighthesFieldIntegrator), module, "ThreeEighthesFieldIntegrator", 0);
        }

        void t_ThreeEighthesFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "class_", make_descriptor(ThreeEighthesFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegrator::wrap_Object(ThreeEighthesFieldIntegrator(((t_ThreeEighthesFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ThreeEighthesFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ThreeEighthesFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagatorBuilder::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagatorBuilder::mids$ = NULL;
          bool GLONASSAnalyticalPropagatorBuilder::live$ = false;

          jclass GLONASSAnalyticalPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_752f6b4fdbdecce8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;)V");
              mids$[mid_init$_43713a1d84688c13] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/data/DataContext;)V");
              mids$[mid_attitudeProvider_5eb5916d3a1c42f6] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_build_a20cc0364c67b639] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
              mids$[mid_dataContext_c1ccd2f08417a7d9] = env->getMethodID(cls, "dataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_ecef_83c60995750138bf] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_eci_83c60995750138bf] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_mass_377a6df559a9f937] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_752f6b4fdbdecce8, a0.this$)) {}

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0, const ::org::orekit::data::DataContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43713a1d84688c13, a0.this$, a1.this$)) {}

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_5eb5916d3a1c42f6], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAnalyticalPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_build_a20cc0364c67b639]));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::dataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_dataContext_c1ccd2f08417a7d9], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_83c60995750138bf], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_83c60995750138bf], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::mass(jdouble a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_377a6df559a9f937], a0));
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
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GLONASSAnalyticalPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, dataContext, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagatorBuilder)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GLONASSAnalyticalPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagatorBuilder, t_GLONASSAnalyticalPropagatorBuilder, GLONASSAnalyticalPropagatorBuilder);

          void t_GLONASSAnalyticalPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagatorBuilder), &PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder), module, "GLONASSAnalyticalPropagatorBuilder", 0);
          }

          void t_GLONASSAnalyticalPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "class_", make_descriptor(GLONASSAnalyticalPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(GLONASSAnalyticalPropagatorBuilder(((t_GLONASSAnalyticalPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0, a1));
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

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.dataContext(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "dataContext", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
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
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesWave::class$ = NULL;
          jmethodID *OceanTidesWave::mids$ = NULL;
          bool OceanTidesWave::live$ = false;

          jclass OceanTidesWave::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesWave");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f8fd32a223813ce1] = env->getMethodID(cls, "<init>", "(III[[[D)V");
              mids$[mid_addContribution_743ea31a35939e91] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/data/BodiesElements;[[D[[D)V");
              mids$[mid_getDoodson_55546ef6a647f39b] = env->getMethodID(cls, "getDoodson", "()I");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesWave::OceanTidesWave(jint a0, jint a1, jint a2, const JArray< JArray< JArray< jdouble > > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8fd32a223813ce1, a0, a1, a2, a3.this$)) {}

          void OceanTidesWave::addContribution(const ::org::orekit::data::BodiesElements & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addContribution_743ea31a35939e91], a0.this$, a1.this$, a2.this$);
          }

          jint OceanTidesWave::getDoodson() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodson_55546ef6a647f39b]);
          }

          jint OceanTidesWave::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_55546ef6a647f39b]);
          }

          jint OceanTidesWave::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_55546ef6a647f39b]);
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
          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args);
          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data);
          static PyGetSetDef t_OceanTidesWave__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesWave, doodson),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxDegree),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxOrder),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesWave__methods_[] = {
            DECLARE_METHOD(t_OceanTidesWave, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, addContribution, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesWave, getDoodson, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxOrder, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesWave)[] = {
            { Py_tp_methods, t_OceanTidesWave__methods_ },
            { Py_tp_init, (void *) t_OceanTidesWave_init_ },
            { Py_tp_getset, t_OceanTidesWave__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesWave)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesWave, t_OceanTidesWave, OceanTidesWave);

          void t_OceanTidesWave::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesWave), &PY_TYPE_DEF(OceanTidesWave), module, "OceanTidesWave", 0);
          }

          void t_OceanTidesWave::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "class_", make_descriptor(OceanTidesWave::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "wrapfn_", make_descriptor(t_OceanTidesWave::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesWave::initializeClass, 1)))
              return NULL;
            return t_OceanTidesWave::wrap_Object(OceanTidesWave(((t_OceanTidesWave *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesWave::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
            OceanTidesWave object((jobject) NULL);

            if (!parseArgs(args, "III[[[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OceanTidesWave(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "k[[D[[D", ::org::orekit::data::BodiesElements::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addContribution(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addContribution", args);
            return NULL;
          }

          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodson());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodson());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservedMeasurement::class$ = NULL;
        jmethodID *ObservedMeasurement::mids$ = NULL;
        bool ObservedMeasurement::live$ = false;

        jclass ObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_d598991c5cac8ab0] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_25e1757a36c4dde2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getSatellites_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_9ab94ac1dc23b105] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_fcb96c98de6fad04] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ObservedMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_cb38ed914ba48f20], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement ObservedMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_d598991c5cac8ab0], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase ObservedMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_9347cf3b1f0dd85a], a0, a1, a2.this$));
        }

        JArray< jdouble > ObservedMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_25e1757a36c4dde2]));
        }

        jint ObservedMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        ::java::lang::String ObservedMeasurement::getMeasurementType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeasurementType_1c1fa1e935d6cdcf]));
        }

        ::java::util::List ObservedMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_e62d3bb06d56d7e3]));
        }

        ::java::util::List ObservedMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_e62d3bb06d56d7e3]));
        }

        JArray< jdouble > ObservedMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2]));
        }

        jboolean ObservedMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_9ab94ac1dc23b105]);
        }

        void ObservedMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_fcb96c98de6fad04], a0);
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
        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data);
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data);
        static PyGetSetDef t_ObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ObservedMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_ObservedMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_ObservedMeasurement, enabled),
          DECLARE_GET_FIELD(t_ObservedMeasurement, measurementType),
          DECLARE_GET_FIELD(t_ObservedMeasurement, modifiers),
          DECLARE_GET_FIELD(t_ObservedMeasurement, satellites),
          DECLARE_GET_FIELD(t_ObservedMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_ObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_ObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_ObservedMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getMeasurementType, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, setEnabled, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservedMeasurement)[] = {
          { Py_tp_methods, t_ObservedMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::ComparableMeasurement),
          NULL
        };

        DEFINE_TYPE(ObservedMeasurement, t_ObservedMeasurement, ObservedMeasurement);
        PyObject *t_ObservedMeasurement::wrap_Object(const ObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservedMeasurement), &PY_TYPE_DEF(ObservedMeasurement), module, "ObservedMeasurement", 0);
        }

        void t_ObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "class_", make_descriptor(ObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "wrapfn_", make_descriptor(t_ObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_ObservedMeasurement::wrap_Object(ObservedMeasurement(((t_ObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg)
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

        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementType());
          return j2p(result);
        }

        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementType());
          return j2p(value);
        }

        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalesFactory.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TCBScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalesFactory::class$ = NULL;
      jmethodID *TimeScalesFactory::mids$ = NULL;
      bool TimeScalesFactory::live$ = false;

      jclass TimeScalesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_1237785d9625f10b] = env->getStaticMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_e66ecc29d9b0858a] = env->getStaticMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_75a06d4a3e06af34] = env->getStaticMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_375ab849f7e3d9ee] = env->getStaticMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_a74060fc815076a7] = env->getStaticMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_935fd284aa6ccd53] = env->getStaticMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_d7fbef15a3374e78] = env->getStaticMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_f801e6f0b9a78872] = env->getStaticMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_700cdb40469496d6] = env->getStaticMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_e0443055c5547bea] = env->getStaticMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_9ccd709f9ae42bbc] = env->getStaticMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_61ba58ac615801fa] = env->getStaticMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_68d743a8c670f6cb] = env->getStaticMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getTimeScales_aca7b99124f1f289] = env->getStaticMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");
          mids$[mid_getUT1_0d98cf69977e0c28] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_246820b70f2cddeb] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_1e4acbbebd50858e] = env->getStaticMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2]);
      }

      void TimeScalesFactory::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addUTCTAIOffsetsLoader_1237785d9625f10b], a0.this$);
      }

      void TimeScalesFactory::clearUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::time::BDTScale TimeScalesFactory::getBDT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::BDTScale(env->callStaticObjectMethod(cls, mids$[mid_getBDT_e66ecc29d9b0858a]));
      }

      ::org::orekit::time::GLONASSScale TimeScalesFactory::getGLONASS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GLONASSScale(env->callStaticObjectMethod(cls, mids$[mid_getGLONASS_75a06d4a3e06af34]));
      }

      ::org::orekit::time::GMSTScale TimeScalesFactory::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GMSTScale(env->callStaticObjectMethod(cls, mids$[mid_getGMST_375ab849f7e3d9ee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScalesFactory::getGPS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GPSScale(env->callStaticObjectMethod(cls, mids$[mid_getGPS_a74060fc815076a7]));
      }

      ::org::orekit::time::GalileoScale TimeScalesFactory::getGST()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GalileoScale(env->callStaticObjectMethod(cls, mids$[mid_getGST_935fd284aa6ccd53]));
      }

      ::org::orekit::time::IRNSSScale TimeScalesFactory::getIRNSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::IRNSSScale(env->callStaticObjectMethod(cls, mids$[mid_getIRNSS_d7fbef15a3374e78]));
      }

      ::org::orekit::time::QZSSScale TimeScalesFactory::getQZSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::QZSSScale(env->callStaticObjectMethod(cls, mids$[mid_getQZSS_f801e6f0b9a78872]));
      }

      ::org::orekit::time::TAIScale TimeScalesFactory::getTAI()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TAIScale(env->callStaticObjectMethod(cls, mids$[mid_getTAI_700cdb40469496d6]));
      }

      ::org::orekit::time::TCBScale TimeScalesFactory::getTCB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCBScale(env->callStaticObjectMethod(cls, mids$[mid_getTCB_e0443055c5547bea]));
      }

      ::org::orekit::time::TCGScale TimeScalesFactory::getTCG()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCGScale(env->callStaticObjectMethod(cls, mids$[mid_getTCG_9ccd709f9ae42bbc]));
      }

      ::org::orekit::time::TDBScale TimeScalesFactory::getTDB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TDBScale(env->callStaticObjectMethod(cls, mids$[mid_getTDB_61ba58ac615801fa]));
      }

      ::org::orekit::time::TTScale TimeScalesFactory::getTT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TTScale(env->callStaticObjectMethod(cls, mids$[mid_getTT_68d743a8c670f6cb]));
      }

      ::org::orekit::time::LazyLoadedTimeScales TimeScalesFactory::getTimeScales()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::LazyLoadedTimeScales(env->callStaticObjectMethod(cls, mids$[mid_getTimeScales_aca7b99124f1f289]));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::frames::EOPHistory & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_0d98cf69977e0c28], a0.this$));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_246820b70f2cddeb], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScalesFactory::getUTC()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UTCScale(env->callStaticObjectMethod(cls, mids$[mid_getUTC_1e4acbbebd50858e]));
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
      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data);
      static PyGetSetDef t_TimeScalesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScalesFactory, bDT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gLONASS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gPS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gST),
        DECLARE_GET_FIELD(t_TimeScalesFactory, iRNSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, qZSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tAI),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCG),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tDB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, timeScales),
        DECLARE_GET_FIELD(t_TimeScalesFactory, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScalesFactory__methods_[] = {
        DECLARE_METHOD(t_TimeScalesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addUTCTAIOffsetsLoader, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, clearUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getBDT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGLONASS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGMST, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGPS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGST, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getIRNSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getQZSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTAI, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCG, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTDB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTimeScales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUT1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUTC, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalesFactory)[] = {
        { Py_tp_methods, t_TimeScalesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScalesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalesFactory, t_TimeScalesFactory, TimeScalesFactory);

      void t_TimeScalesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalesFactory), &PY_TYPE_DEF(TimeScalesFactory), module, "TimeScalesFactory", 0);
      }

      void t_TimeScalesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "class_", make_descriptor(TimeScalesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "wrapfn_", make_descriptor(t_TimeScalesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalesFactory::initializeClass, 1)))
          return NULL;
        return t_TimeScalesFactory::wrap_Object(TimeScalesFactory(((t_TimeScalesFactory *) arg)->object.this$));
      }
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::TimeScalesFactory::addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *AbstractUnivariateDifferentiableSolver::mids$ = NULL;
        bool AbstractUnivariateDifferentiableSolver::live$ = false;

        jclass AbstractUnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeObjectiveValueAndDerivative_d33302169f933b5a] = env->getMethodID(cls, "computeObjectiveValueAndDerivative", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_setup_374759125eb77000] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateDifferentiableSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateDifferentiableSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateDifferentiableSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateDifferentiableSolver, t_AbstractUnivariateDifferentiableSolver, AbstractUnivariateDifferentiableSolver);
        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_Object(const AbstractUnivariateDifferentiableSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateDifferentiableSolver), &PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver), module, "AbstractUnivariateDifferentiableSolver", 0);
        }

        void t_AbstractUnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "class_", make_descriptor(AbstractUnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateDifferentiableSolver::wrap_Object(AbstractUnivariateDifferentiableSolver(((t_AbstractUnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation$StrengthLevel::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation$StrengthLevel::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation$StrengthLevel::live$ = false;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK = NULL;

            jclass MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_1eb88851bd3d031e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_values_08d490781d442ba9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AVERAGE = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "AVERAGE", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                STRONG = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "STRONG", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                WEAK = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "WEAK", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return MarshallSolarActivityFutureEstimation$StrengthLevel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1eb88851bd3d031e], a0.this$));
            }

            JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > MarshallSolarActivityFutureEstimation$StrengthLevel::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< MarshallSolarActivityFutureEstimation$StrengthLevel >(env->callStaticObjectMethod(cls, mids$[mid_values_08d490781d442ba9]));
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
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel, t_MarshallSolarActivityFutureEstimation$StrengthLevel, MarshallSolarActivityFutureEstimation$StrengthLevel);
            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel), module, "MarshallSolarActivityFutureEstimation$StrengthLevel", 0);
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "class_", make_descriptor(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "AVERAGE", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "STRONG", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "WEAK", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(MarshallSolarActivityFutureEstimation$StrengthLevel(((t_MarshallSolarActivityFutureEstimation$StrengthLevel *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(a0));
                return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type)
            {
              JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::values());
              return JArray<jobject>(result.this$).wrap(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data)
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
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeInterpolator::class$ = NULL;
      jmethodID *TimeInterpolator::mids$ = NULL;
      bool TimeInterpolator::live$ = false;

      jclass TimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_0ccd3950902c0411] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_510d3bf17898cb55] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_b74f83833fdad017]);
      }

      jint TimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::List TimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_0ccd3950902c0411], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_510d3bf17898cb55], a0.this$, a1.this$));
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
      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data);
      static PyGetSetDef t_TimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_TimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_TimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_TimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeInterpolator)[] = {
        { Py_tp_methods, t_TimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeInterpolator, t_TimeInterpolator, TimeInterpolator);
      PyObject *t_TimeInterpolator::wrap_Object(const TimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeInterpolator), &PY_TYPE_DEF(TimeInterpolator), module, "TimeInterpolator", 0);
      }

      void t_TimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "class_", make_descriptor(TimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "wrapfn_", make_descriptor(t_TimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeInterpolator::wrap_Object(TimeInterpolator(((t_TimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSDP4::class$ = NULL;
          jmethodID *FieldSDP4::mids$ = NULL;
          bool FieldSDP4::live$ = false;

          jclass FieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_thetaG_231f48b4568f5a7b] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/FieldAbsoluteDate;)D");
              mids$[mid_sxpInitialize_8b0f7facc8a6a46e] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_1d66803ed368a800] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args);
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data);
          static PyGetSetDef t_FieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSDP4)[] = {
            { Py_tp_methods, t_FieldSDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSDP4, t_FieldSDP4, FieldSDP4);
          PyObject *t_FieldSDP4::wrap_Object(const FieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSDP4), &PY_TYPE_DEF(FieldSDP4), module, "FieldSDP4", 0);
          }

          void t_FieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "class_", make_descriptor(FieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "wrapfn_", make_descriptor(t_FieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldSDP4::wrap_Object(FieldSDP4(((t_FieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data)
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
#include "org/orekit/errors/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
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
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *NumericalPropagatorBuilder::class$ = NULL;
        jmethodID *NumericalPropagatorBuilder::mids$ = NULL;
        bool NumericalPropagatorBuilder::live$ = false;

        jclass NumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/NumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_99c6cf1555665a56] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_b869d69da460d35b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_43775e92e64180fc] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_buildLeastSquaresModel_353bfba6366969bc] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/BatchLSModel;");
            mids$[mid_buildPropagator_57f2ea8f7e2a7c1f] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/numerical/NumericalPropagator;");
            mids$[mid_copy_12bbe9991f8a10b2] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;");
            mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_a870bf0f84eaaecb] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_setMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_99c6cf1555665a56, a0.this$, a1.this$, a2.this$, a3)) {}

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b869d69da460d35b, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        void NumericalPropagatorBuilder::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_43775e92e64180fc], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::BatchLSModel NumericalPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::BatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_353bfba6366969bc], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::numerical::NumericalPropagator NumericalPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::numerical::NumericalPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_57f2ea8f7e2a7c1f], a0.this$));
        }

        NumericalPropagatorBuilder NumericalPropagatorBuilder::copy() const
        {
          return NumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_12bbe9991f8a10b2]));
        }

        ::java::util::List NumericalPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder NumericalPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_a870bf0f84eaaecb]));
        }

        jdouble NumericalPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
        }

        void NumericalPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_8ba9fe7a847cecad], a0);
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
        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data);
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_NumericalPropagatorBuilder, mass),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_NumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagatorBuilder_init_ },
          { Py_tp_getset, t_NumericalPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(NumericalPropagatorBuilder, t_NumericalPropagatorBuilder, NumericalPropagatorBuilder);

        void t_NumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagatorBuilder), &PY_TYPE_DEF(NumericalPropagatorBuilder), module, "NumericalPropagatorBuilder", 0);
        }

        void t_NumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "class_", make_descriptor(NumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_NumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagatorBuilder::wrap_Object(NumericalPropagatorBuilder(((t_NumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::BatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_BatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::numerical::t_NumericalPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          NumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_NumericalPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getPositionVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPositionVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVelocityVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocityVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_setX_8ba9fe7a847cecad] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setXdot", "(D)V");
                mids$[mid_setY_8ba9fe7a847cecad] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setYdot", "(D)V");
                mids$[mid_setZ_8ba9fe7a847cecad] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setZdot", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getPositionVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionVector_8b724f8b4fdad1a2]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getVelocityVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityVector_8b724f8b4fdad1a2]));
            }

            void StateVector::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_8ba9fe7a847cecad], a0);
            }

            void StateVector::setXdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXdot_8ba9fe7a847cecad], a0);
            }

            void StateVector::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_8ba9fe7a847cecad], a0);
            }

            void StateVector::setYdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYdot_8ba9fe7a847cecad], a0);
            }

            void StateVector::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_8ba9fe7a847cecad], a0);
            }

            void StateVector::setZdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZdot_8ba9fe7a847cecad], a0);
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getPositionVector(t_StateVector *self);
            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self);
            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data);
            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data);
            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GET_FIELD(t_StateVector, positionVector),
              DECLARE_GET_FIELD(t_StateVector, velocityVector),
              DECLARE_SET_FIELD(t_StateVector, x),
              DECLARE_SET_FIELD(t_StateVector, xdot),
              DECLARE_SET_FIELD(t_StateVector, y),
              DECLARE_SET_FIELD(t_StateVector, ydot),
              DECLARE_SET_FIELD(t_StateVector, z),
              DECLARE_SET_FIELD(t_StateVector, zdot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getPositionVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, getVelocityVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setX, METH_O),
              DECLARE_METHOD(t_StateVector, setXdot, METH_O),
              DECLARE_METHOD(t_StateVector, setY, METH_O),
              DECLARE_METHOD(t_StateVector, setYdot, METH_O),
              DECLARE_METHOD(t_StateVector, setZ, METH_O),
              DECLARE_METHOD(t_StateVector, setZdot, METH_O),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getPositionVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xdot", arg);
              return -1;
            }

            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ydot", arg);
              return -1;
            }

            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zdot", arg);
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
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *OLSMultipleLinearRegression::class$ = NULL;
        jmethodID *OLSMultipleLinearRegression::mids$ = NULL;
        bool OLSMultipleLinearRegression::live$ = false;

        jclass OLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/OLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_calculateAdjustedRSquared_b74f83833fdad017] = env->getMethodID(cls, "calculateAdjustedRSquared", "()D");
            mids$[mid_calculateHat_f77d745f2128c391] = env->getMethodID(cls, "calculateHat", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateRSquared_b74f83833fdad017] = env->getMethodID(cls, "calculateRSquared", "()D");
            mids$[mid_calculateResidualSumOfSquares_b74f83833fdad017] = env->getMethodID(cls, "calculateResidualSumOfSquares", "()D");
            mids$[mid_calculateTotalSumOfSquares_b74f83833fdad017] = env->getMethodID(cls, "calculateTotalSumOfSquares", "()D");
            mids$[mid_newSampleData_134a5d9f7619d4a2] = env->getMethodID(cls, "newSampleData", "([D[[D)V");
            mids$[mid_newSampleData_4484ad1f15b73c7a] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_newXSampleData_07adb42ffaa97d31] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_calculateBeta_3a10cc75bd070d84] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_f77d745f2128c391] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OLSMultipleLinearRegression::OLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        OLSMultipleLinearRegression::OLSMultipleLinearRegression(jdouble a0) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble OLSMultipleLinearRegression::calculateAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateAdjustedRSquared_b74f83833fdad017]);
        }

        ::org::hipparchus::linear::RealMatrix OLSMultipleLinearRegression::calculateHat() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_calculateHat_f77d745f2128c391]));
        }

        jdouble OLSMultipleLinearRegression::calculateRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateRSquared_b74f83833fdad017]);
        }

        jdouble OLSMultipleLinearRegression::calculateResidualSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateResidualSumOfSquares_b74f83833fdad017]);
        }

        jdouble OLSMultipleLinearRegression::calculateTotalSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateTotalSumOfSquares_b74f83833fdad017]);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_134a5d9f7619d4a2], a0.this$, a1.this$);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_4484ad1f15b73c7a], a0.this$, a1, a2);
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
        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_OLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_OLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateHat, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateResidualSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateTotalSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_OLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_OLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(OLSMultipleLinearRegression, t_OLSMultipleLinearRegression, OLSMultipleLinearRegression);

        void t_OLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(OLSMultipleLinearRegression), &PY_TYPE_DEF(OLSMultipleLinearRegression), module, "OLSMultipleLinearRegression", 0);
        }

        void t_OLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "class_", make_descriptor(OLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_OLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_OLSMultipleLinearRegression::wrap_Object(OLSMultipleLinearRegression(((t_OLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              OLSMultipleLinearRegression object((jobject) NULL);

              INT_CALL(object = OLSMultipleLinearRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jdouble a0;
              OLSMultipleLinearRegression object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = OLSMultipleLinearRegression(a0));
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

        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.calculateHat());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateResidualSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateTotalSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1));
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
                OBJ_CALL(self->object.newSampleData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(OLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver2::MullerSolver2() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        MullerSolver2::MullerSolver2(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        MullerSolver2::MullerSolver2(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}
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
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigReal::class$ = NULL;
      jmethodID *BigReal::mids$ = NULL;
      bool BigReal::live$ = false;
      BigReal *BigReal::ONE = NULL;
      BigReal *BigReal::ZERO = NULL;

      jclass BigReal::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigReal");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dd3f254991df5d48] = env->getMethodID(cls, "<init>", "([C)V");
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_d23ba6c655e17478] = env->getMethodID(cls, "<init>", "([CII)V");
          mids$[mid_add_b1de32a042fbe7cc] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_compareTo_95c7d95b3d60253f] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/BigReal;)I");
          mids$[mid_divide_b1de32a042fbe7cc] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getScale_55546ef6a647f39b] = env->getMethodID(cls, "getScale", "()I");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_multiply_b1de32a042fbe7cc] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_multiply_b4ff4a9d70ce8ddb] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/BigReal;");
          mids$[mid_negate_152d3c51a3e6d94d] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_reciprocal_152d3c51a3e6d94d] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_setScale_44ed599e93e8a30c] = env->getMethodID(cls, "setScale", "(I)V");
          mids$[mid_subtract_b1de32a042fbe7cc] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ONE = new BigReal(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/BigReal;"));
          ZERO = new BigReal(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/BigReal;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigReal::BigReal(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd3f254991df5d48, a0.this$)) {}

      BigReal::BigReal(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      BigReal::BigReal(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      BigReal::BigReal(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      BigReal::BigReal(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      BigReal::BigReal(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d23ba6c655e17478, a0.this$, a1, a2)) {}

      BigReal BigReal::add(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_add_b1de32a042fbe7cc], a0.this$));
      }

      jint BigReal::compareTo(const BigReal & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_95c7d95b3d60253f], a0.this$);
      }

      BigReal BigReal::divide(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_divide_b1de32a042fbe7cc], a0.this$));
      }

      jdouble BigReal::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
      }

      jboolean BigReal::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::org::hipparchus::Field BigReal::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      jdouble BigReal::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      jint BigReal::getScale() const
      {
        return env->callIntMethod(this$, mids$[mid_getScale_55546ef6a647f39b]);
      }

      jint BigReal::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      BigReal BigReal::multiply(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_b1de32a042fbe7cc], a0.this$));
      }

      BigReal BigReal::multiply(jint a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_b4ff4a9d70ce8ddb], a0));
      }

      BigReal BigReal::negate() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_negate_152d3c51a3e6d94d]));
      }

      BigReal BigReal::reciprocal() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_reciprocal_152d3c51a3e6d94d]));
      }

      void BigReal::setScale(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_44ed599e93e8a30c], a0);
      }

      BigReal BigReal::subtract(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_subtract_b1de32a042fbe7cc], a0.this$));
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
      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_doubleValue(t_BigReal *self);
      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_getField(t_BigReal *self);
      static PyObject *t_BigReal_getReal(t_BigReal *self);
      static PyObject *t_BigReal_getScale(t_BigReal *self);
      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_negate(t_BigReal *self);
      static PyObject *t_BigReal_reciprocal(t_BigReal *self);
      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data);
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data);
      static PyGetSetDef t_BigReal__fields_[] = {
        DECLARE_GET_FIELD(t_BigReal, field),
        DECLARE_GET_FIELD(t_BigReal, real),
        DECLARE_GETSET_FIELD(t_BigReal, scale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigReal__methods_[] = {
        DECLARE_METHOD(t_BigReal, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, add, METH_O),
        DECLARE_METHOD(t_BigReal, compareTo, METH_O),
        DECLARE_METHOD(t_BigReal, divide, METH_O),
        DECLARE_METHOD(t_BigReal, doubleValue, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getScale, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, setScale, METH_O),
        DECLARE_METHOD(t_BigReal, subtract, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigReal)[] = {
        { Py_tp_methods, t_BigReal__methods_ },
        { Py_tp_init, (void *) t_BigReal_init_ },
        { Py_tp_getset, t_BigReal__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigReal)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigReal, t_BigReal, BigReal);

      void t_BigReal::install(PyObject *module)
      {
        installType(&PY_TYPE(BigReal), &PY_TYPE_DEF(BigReal), module, "BigReal", 0);
      }

      void t_BigReal::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "class_", make_descriptor(BigReal::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "wrapfn_", make_descriptor(t_BigReal::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigReal::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ONE", make_descriptor(t_BigReal::wrap_Object(*BigReal::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ZERO", make_descriptor(t_BigReal::wrap_Object(*BigReal::ZERO)));
      }

      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigReal::initializeClass, 1)))
          return NULL;
        return t_BigReal::wrap_Object(BigReal(((t_BigReal *) arg)->object.this$));
      }
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigReal::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jchar > a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[C", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jchar > a0((jobject) NULL);
            jint a1;
            jint a2;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[CII", &a0, &a1, &a2))
            {
              INT_CALL(object = BigReal(a0, a1, a2));
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

      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.divide(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "divide", arg);
        return NULL;
      }

      static PyObject *t_BigReal_doubleValue(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigReal_getField(t_BigReal *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigReal_getReal(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_getScale(t_BigReal *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getScale());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigReal a0((jobject) NULL);
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "k", BigReal::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigReal_negate(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_reciprocal(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getScale());
        return PyLong_FromLong((long) value);
      }
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxEval::class$ = NULL;
      jmethodID *MaxEval::mids$ = NULL;
      bool MaxEval::live$ = false;

      jclass MaxEval::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxEval");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxEval_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEval", "()I");
          mids$[mid_unlimited_fd63f0d1032231c6] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxEval;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxEval::MaxEval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      jint MaxEval::getMaxEval() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEval_55546ef6a647f39b]);
      }

      MaxEval MaxEval::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxEval(env->callStaticObjectMethod(cls, mids$[mid_unlimited_fd63f0d1032231c6]));
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
      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self);
      static PyObject *t_MaxEval_unlimited(PyTypeObject *type);
      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data);
      static PyGetSetDef t_MaxEval__fields_[] = {
        DECLARE_GET_FIELD(t_MaxEval, maxEval),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxEval__methods_[] = {
        DECLARE_METHOD(t_MaxEval, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, getMaxEval, METH_NOARGS),
        DECLARE_METHOD(t_MaxEval, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxEval)[] = {
        { Py_tp_methods, t_MaxEval__methods_ },
        { Py_tp_init, (void *) t_MaxEval_init_ },
        { Py_tp_getset, t_MaxEval__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxEval)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxEval, t_MaxEval, MaxEval);

      void t_MaxEval::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxEval), &PY_TYPE_DEF(MaxEval), module, "MaxEval", 0);
      }

      void t_MaxEval::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "class_", make_descriptor(MaxEval::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "wrapfn_", make_descriptor(t_MaxEval::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxEval::initializeClass, 1)))
          return NULL;
        return t_MaxEval::wrap_Object(MaxEval(((t_MaxEval *) arg)->object.this$));
      }
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxEval::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxEval object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxEval(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEval());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxEval_unlimited(PyTypeObject *type)
      {
        MaxEval result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxEval::unlimited());
        return t_MaxEval::wrap_Object(result);
      }

      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEval());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoint::class$ = NULL;
      jmethodID *WeightedObservedPoint::mids$ = NULL;
      bool WeightedObservedPoint::live$ = false;

      jclass WeightedObservedPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getWeight_b74f83833fdad017] = env->getMethodID(cls, "getWeight", "()D");
          mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoint::WeightedObservedPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

      jdouble WeightedObservedPoint::getWeight() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWeight_b74f83833fdad017]);
      }

      jdouble WeightedObservedPoint::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
      }

      jdouble WeightedObservedPoint::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data);
      static PyGetSetDef t_WeightedObservedPoint__fields_[] = {
        DECLARE_GET_FIELD(t_WeightedObservedPoint, weight),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, x),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, y),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_WeightedObservedPoint__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, getWeight, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getX, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getY, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoint)[] = {
        { Py_tp_methods, t_WeightedObservedPoint__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoint_init_ },
        { Py_tp_getset, t_WeightedObservedPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoint, t_WeightedObservedPoint, WeightedObservedPoint);

      void t_WeightedObservedPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoint), &PY_TYPE_DEF(WeightedObservedPoint), module, "WeightedObservedPoint", 0);
      }

      void t_WeightedObservedPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "class_", make_descriptor(WeightedObservedPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "wrapfn_", make_descriptor(t_WeightedObservedPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoint::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoint::wrap_Object(WeightedObservedPoint(((t_WeightedObservedPoint *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        WeightedObservedPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = WeightedObservedPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWeight());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWeight());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *FieldPVCoordinatesProvider::mids$ = NULL;
      bool FieldPVCoordinatesProvider::live$ = false;

      jclass FieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_d0d70a58ee20218b] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d0d70a58ee20218b], a0.this$, a1.this$));
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
      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_FieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_FieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinatesProvider, t_FieldPVCoordinatesProvider, FieldPVCoordinatesProvider);
      PyObject *t_FieldPVCoordinatesProvider::wrap_Object(const FieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinatesProvider), &PY_TYPE_DEF(FieldPVCoordinatesProvider), module, "FieldPVCoordinatesProvider", 0);
      }

      void t_FieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "class_", make_descriptor(FieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_FieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinatesProvider::wrap_Object(FieldPVCoordinatesProvider(((t_FieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmParser::class$ = NULL;
            jmethodID *OdmParser::mids$ = NULL;
            bool OdmParser::live$ = false;

            jclass OdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSelectedMu_b74f83833fdad017] = env->getMethodID(cls, "getSelectedMu", "()D");
                mids$[mid_setMuParsed_8ba9fe7a847cecad] = env->getMethodID(cls, "setMuParsed", "(D)V");
                mids$[mid_setMuCreated_8ba9fe7a847cecad] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_getMuSet_b74f83833fdad017] = env->getMethodID(cls, "getMuSet", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate OdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_c325492395d89b24]));
            }

            jdouble OdmParser::getSelectedMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSelectedMu_b74f83833fdad017]);
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
            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args);
            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self);
            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self);
            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data);
            static PyGetSetDef t_OdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_OdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_OdmParser, selectedMu),
              DECLARE_GET_FIELD(t_OdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmParser__methods_[] = {
              DECLARE_METHOD(t_OdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_OdmParser, getSelectedMu, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmParser)[] = {
              { Py_tp_methods, t_OdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(OdmParser, t_OdmParser, OdmParser);
            PyObject *t_OdmParser::wrap_Object(const OdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_OdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_OdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmParser), &PY_TYPE_DEF(OdmParser), module, "OdmParser", 0);
            }

            void t_OdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "class_", make_descriptor(OdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "wrapfn_", make_descriptor(t_OdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmParser::initializeClass, 1)))
                return NULL;
              return t_OdmParser::wrap_Object(OdmParser(((t_OdmParser *) arg)->object.this$));
            }
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) result);
            }
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSelectedMu());
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
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince54FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegratorBuilder::DormandPrince54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegratorBuilder, t_DormandPrince54FieldIntegratorBuilder, DormandPrince54FieldIntegratorBuilder);
        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_Object(const DormandPrince54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince54FieldIntegratorBuilder), module, "DormandPrince54FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegratorBuilder::wrap_Object(DormandPrince54FieldIntegratorBuilder(((t_DormandPrince54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(DormandPrince54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemData::class$ = NULL;
              jmethodID *AemData::mids$ = NULL;
              bool AemData::live$ = false;

              jclass AemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addData_af218a95dcec5785] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedAngularCoordinates;)Z");
                  mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemData::AemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jboolean AemData::addData(const ::org::orekit::utils::TimeStampedAngularCoordinates & a0) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_af218a95dcec5785], a0.this$);
              }

              ::java::util::List AemData::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3]));
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
            namespace aem {
              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg);
              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self);
              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data);
              static PyGetSetDef t_AemData__fields_[] = {
                DECLARE_GET_FIELD(t_AemData, angularCoordinates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemData__methods_[] = {
                DECLARE_METHOD(t_AemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, addData, METH_O),
                DECLARE_METHOD(t_AemData, getAngularCoordinates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemData)[] = {
                { Py_tp_methods, t_AemData__methods_ },
                { Py_tp_init, (void *) t_AemData_init_ },
                { Py_tp_getset, t_AemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AemData, t_AemData, AemData);

              void t_AemData::install(PyObject *module)
              {
                installType(&PY_TYPE(AemData), &PY_TYPE_DEF(AemData), module, "AemData", 0);
              }

              void t_AemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "class_", make_descriptor(AemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "wrapfn_", make_descriptor(t_AemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemData::initializeClass, 1)))
                  return NULL;
                return t_AemData::wrap_Object(AemData(((t_AemData *) arg)->object.this$));
              }
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds)
              {
                AemData object((jobject) NULL);

                INT_CALL(object = AemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg)
              {
                ::org::orekit::utils::TimeStampedAngularCoordinates a0((jobject) NULL);
                jboolean result;

                if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.addData(a0));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", arg);
                return NULL;
              }

              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MultipleLinearRegression::class$ = NULL;
        jmethodID *MultipleLinearRegression::mids$ = NULL;
        bool MultipleLinearRegression::live$ = false;

        jclass MultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimateRegressandVariance_b74f83833fdad017] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_25e1757a36c4dde2] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_3b7b373db8e7887f] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateResiduals_25e1757a36c4dde2] = env->getMethodID(cls, "estimateResiduals", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble MultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_b74f83833fdad017]);
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2]));
        }

        JArray< JArray< jdouble > > MultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_3b7b373db8e7887f]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_25e1757a36c4dde2]));
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
        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self);

        static PyMethodDef t_MultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_MultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateResiduals, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultipleLinearRegression)[] = {
          { Py_tp_methods, t_MultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultipleLinearRegression, t_MultipleLinearRegression, MultipleLinearRegression);

        void t_MultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MultipleLinearRegression), &PY_TYPE_DEF(MultipleLinearRegression), module, "MultipleLinearRegression", 0);
        }

        void t_MultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "class_", make_descriptor(MultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "wrapfn_", make_descriptor(t_MultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_MultipleLinearRegression::wrap_Object(MultipleLinearRegression(((t_MultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonExtendedPVCoordinatesProvider::mids$ = NULL;
      bool PythonExtendedPVCoordinatesProvider::live$ = false;

      jclass PythonExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonExtendedPVCoordinatesProvider::PythonExtendedPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonExtendedPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonExtendedPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonExtendedPVCoordinatesProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonExtendedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonExtendedPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonExtendedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonExtendedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonExtendedPVCoordinatesProvider, t_PythonExtendedPVCoordinatesProvider, PythonExtendedPVCoordinatesProvider);

      void t_PythonExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonExtendedPVCoordinatesProvider), &PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider), module, "PythonExtendedPVCoordinatesProvider", 1);
      }

      void t_PythonExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "class_", make_descriptor(PythonExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonExtendedPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1 },
          { "pythonDecRef", "()V", (void *) t_PythonExtendedPVCoordinatesProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonExtendedPVCoordinatesProvider::wrap_Object(PythonExtendedPVCoordinatesProvider(((t_PythonExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonExtendedPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonExtendedPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data)
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
#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Abs::class$ = NULL;
        jmethodID *Abs::mids$ = NULL;
        bool Abs::live$ = false;

        jclass Abs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Abs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Abs::Abs() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Abs::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Abs::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Abs_value(t_Abs *self, PyObject *args);

        static PyMethodDef t_Abs__methods_[] = {
          DECLARE_METHOD(t_Abs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Abs)[] = {
          { Py_tp_methods, t_Abs__methods_ },
          { Py_tp_init, (void *) t_Abs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Abs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Abs, t_Abs, Abs);

        void t_Abs::install(PyObject *module)
        {
          installType(&PY_TYPE(Abs), &PY_TYPE_DEF(Abs), module, "Abs", 0);
        }

        void t_Abs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "class_", make_descriptor(Abs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "wrapfn_", make_descriptor(t_Abs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Abs::initializeClass, 1)))
            return NULL;
          return t_Abs::wrap_Object(Abs(((t_Abs *) arg)->object.this$));
        }
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Abs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds)
        {
          Abs object((jobject) NULL);

          INT_CALL(object = Abs());
          self->object = object;

          return 0;
        }

        static PyObject *t_Abs_value(t_Abs *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *InterpolationGrid::class$ = NULL;
            jmethodID *InterpolationGrid::mids$ = NULL;
            bool InterpolationGrid::live$ = false;

            jclass InterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_eaf2da2173f3569e] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > InterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_eaf2da2173f3569e], a0, a1));
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
            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args);

            static PyMethodDef t_InterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_InterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(InterpolationGrid)[] = {
              { Py_tp_methods, t_InterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(InterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(InterpolationGrid, t_InterpolationGrid, InterpolationGrid);

            void t_InterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(InterpolationGrid), &PY_TYPE_DEF(InterpolationGrid), module, "InterpolationGrid", 0);
            }

            void t_InterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "class_", make_descriptor(InterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "wrapfn_", make_descriptor(t_InterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, InterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_InterpolationGrid::wrap_Object(InterpolationGrid(((t_InterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, InterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SubCircle::class$ = NULL;
          jmethodID *SubCircle::mids$ = NULL;
          bool SubCircle::live$ = false;

          jclass SubCircle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SubCircle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ae2db4be0bbe390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubCircle::SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_6ae2db4be0bbe390, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubCircle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args);
          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args);
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data);
          static PyGetSetDef t_SubCircle__fields_[] = {
            DECLARE_GET_FIELD(t_SubCircle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubCircle__methods_[] = {
            DECLARE_METHOD(t_SubCircle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubCircle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubCircle)[] = {
            { Py_tp_methods, t_SubCircle__methods_ },
            { Py_tp_init, (void *) t_SubCircle_init_ },
            { Py_tp_getset, t_SubCircle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubCircle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubCircle, t_SubCircle, SubCircle);
          PyObject *t_SubCircle::wrap_Object(const SubCircle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubCircle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubCircle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubCircle), &PY_TYPE_DEF(SubCircle), module, "SubCircle", 0);
          }

          void t_SubCircle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "class_", make_descriptor(SubCircle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "wrapfn_", make_descriptor(t_SubCircle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubCircle::initializeClass, 1)))
              return NULL;
            return t_SubCircle::wrap_Object(SubCircle(((t_SubCircle *) arg)->object.this$));
          }
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubCircle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubCircle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubCircle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            return callSuper(PY_TYPE(SubCircle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractMessageParser::class$ = NULL;
            jmethodID *PythonAbstractMessageParser::mids$ = NULL;
            bool PythonAbstractMessageParser::live$ = false;

            jclass PythonAbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_541690f9ee81d3ad] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractMessageParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args);
            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self);
            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data);
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageParser)[] = {
              { Py_tp_methods, t_PythonAbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageParser, t_PythonAbstractMessageParser, PythonAbstractMessageParser);
            PyObject *t_PythonAbstractMessageParser::wrap_Object(const PythonAbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonAbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageParser), &PY_TYPE_DEF(PythonAbstractMessageParser), module, "PythonAbstractMessageParser", 1);
            }

            void t_PythonAbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "class_", make_descriptor(PythonAbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "wrapfn_", make_descriptor(t_PythonAbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonAbstractMessageParser_build0 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageParser_pythonDecRef1 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractMessageParser_reset2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageParser::wrap_Object(PythonAbstractMessageParser(((t_PythonAbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data)
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
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data)
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
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeExtremumDetector::class$ = NULL;
        jmethodID *LongitudeExtremumDetector::mids$ = NULL;
        bool LongitudeExtremumDetector::live$ = false;

        jclass LongitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe488c9958f1d2fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_c418d6dd4ee73383] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_95d324082d4f411b] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_8850edcbe49d7c0c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeExtremumDetector::LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fe488c9958f1d2fe, a0.this$)) {}

        LongitudeExtremumDetector::LongitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c418d6dd4ee73383, a0, a1, a2.this$)) {}

        jdouble LongitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LongitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_95d324082d4f411b]));
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
        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args);
        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self);
        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data);
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LongitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LongitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LongitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeExtremumDetector, t_LongitudeExtremumDetector, LongitudeExtremumDetector);
        PyObject *t_LongitudeExtremumDetector::wrap_Object(const LongitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeExtremumDetector), &PY_TYPE_DEF(LongitudeExtremumDetector), module, "LongitudeExtremumDetector", 0);
        }

        void t_LongitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "class_", make_descriptor(LongitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "wrapfn_", make_descriptor(t_LongitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeExtremumDetector::wrap_Object(LongitudeExtremumDetector(((t_LongitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
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

        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriver::class$ = NULL;
      jmethodID *ParameterDriver::mids$ = NULL;
      bool ParameterDriver::live$ = false;

      jclass ParameterDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3644a0740275e98a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
          mids$[mid_init$_ede0d75970ba1e8b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/TimeSpanMap;DDDD)V");
          mids$[mid_addObserver_0d369fd1d1233ad6] = env->getMethodID(cls, "addObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_addSpanAtDate_02135a6ef25adb4b] = env->getMethodID(cls, "addSpanAtDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_addSpans_d6176fd55d408ce8] = env->getMethodID(cls, "addSpans", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getMaxValue_b74f83833fdad017] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinValue_b74f83833fdad017] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getNameSpan_5b3583dbfd578a63] = env->getMethodID(cls, "getNameSpan", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
          mids$[mid_getNamesSpanMap_2f46b86c016957a0] = env->getMethodID(cls, "getNamesSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getNbOfValues_55546ef6a647f39b] = env->getMethodID(cls, "getNbOfValues", "()I");
          mids$[mid_getNormalizedValue_b74f83833fdad017] = env->getMethodID(cls, "getNormalizedValue", "()D");
          mids$[mid_getNormalizedValue_fd347811007a6ba3] = env->getMethodID(cls, "getNormalizedValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getObservers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getObservers", "()Ljava/util/List;");
          mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getReferenceValue_b74f83833fdad017] = env->getMethodID(cls, "getReferenceValue", "()D");
          mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
          mids$[mid_getTransitionDates_181973466f9ea0c5] = env->getMethodID(cls, "getTransitionDates", "()[Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_getValue_fd347811007a6ba3] = env->getMethodID(cls, "getValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValue_1a6b4946b0edd7a2] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValue_6d5abadb2f6328c2] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValueContinuousEstimation_fd347811007a6ba3] = env->getMethodID(cls, "getValueContinuousEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValueSpanMap_2f46b86c016957a0] = env->getMethodID(cls, "getValueSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getValueStepEstimation_fd347811007a6ba3] = env->getMethodID(cls, "getValueStepEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValues_25e1757a36c4dde2] = env->getMethodID(cls, "getValues", "()[D");
          mids$[mid_isContinuousEstimation_9ab94ac1dc23b105] = env->getMethodID(cls, "isContinuousEstimation", "()Z");
          mids$[mid_isSelected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSelected", "()Z");
          mids$[mid_removeObserver_0d369fd1d1233ad6] = env->getMethodID(cls, "removeObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_replaceObserver_b13cdfbcabe95c73] = env->getMethodID(cls, "replaceObserver", "(Lorg/orekit/utils/ParameterObserver;Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_setContinuousEstimation_fcb96c98de6fad04] = env->getMethodID(cls, "setContinuousEstimation", "(Z)V");
          mids$[mid_setMaxValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxValue", "(D)V");
          mids$[mid_setMinValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinValue", "(D)V");
          mids$[mid_setName_734b91ac30d5f9b4] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
          mids$[mid_setNormalizedValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setNormalizedValue", "(D)V");
          mids$[mid_setNormalizedValue_98ef3c02384a4218] = env->getMethodID(cls, "setNormalizedValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceDate_02135a6ef25adb4b] = env->getMethodID(cls, "setReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setReferenceValue", "(D)V");
          mids$[mid_setScale_8ba9fe7a847cecad] = env->getMethodID(cls, "setScale", "(D)V");
          mids$[mid_setSelected_fcb96c98de6fad04] = env->getMethodID(cls, "setSelected", "(Z)V");
          mids$[mid_setValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setValue", "(D)V");
          mids$[mid_setValue_98ef3c02384a4218] = env->getMethodID(cls, "setValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setValueSpanMap_5791d10af4720a8e] = env->getMethodID(cls, "setValueSpanMap", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3644a0740275e98a, a0.this$, a1, a2, a3, a4)) {}

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, const ::org::orekit::utils::TimeSpanMap & a1, const ::org::orekit::utils::TimeSpanMap & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ede0d75970ba1e8b, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

      void ParameterDriver::addObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addObserver_0d369fd1d1233ad6], a0.this$);
      }

      void ParameterDriver::addSpanAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpanAtDate_02135a6ef25adb4b], a0.this$);
      }

      void ParameterDriver::addSpans(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpans_d6176fd55d408ce8], a0.this$, a1.this$, a2);
      }

      jdouble ParameterDriver::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_b74f83833fdad017]);
      }

      jdouble ParameterDriver::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_b74f83833fdad017]);
      }

      ::java::lang::String ParameterDriver::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String ParameterDriver::getNameSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNameSpan_5b3583dbfd578a63], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getNamesSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getNamesSpanMap_2f46b86c016957a0]));
      }

      jint ParameterDriver::getNbOfValues() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbOfValues_55546ef6a647f39b]);
      }

      jdouble ParameterDriver::getNormalizedValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_b74f83833fdad017]);
      }

      jdouble ParameterDriver::getNormalizedValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_fd347811007a6ba3], a0.this$);
      }

      ::java::util::List ParameterDriver::getObservers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservers_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::AbsoluteDate ParameterDriver::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
      }

      jdouble ParameterDriver::getReferenceValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReferenceValue_b74f83833fdad017]);
      }

      jdouble ParameterDriver::getScale() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
      }

      JArray< ::org::orekit::time::AbsoluteDate > ParameterDriver::getTransitionDates() const
      {
        return JArray< ::org::orekit::time::AbsoluteDate >(env->callObjectMethod(this$, mids$[mid_getTransitionDates_181973466f9ea0c5]));
      }

      jdouble ParameterDriver::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
      }

      jdouble ParameterDriver::getValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_1a6b4946b0edd7a2], a0, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_6d5abadb2f6328c2], a0, a1.this$, a2.this$));
      }

      jdouble ParameterDriver::getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueContinuousEstimation_fd347811007a6ba3], a0.this$);
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getValueSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getValueSpanMap_2f46b86c016957a0]));
      }

      jdouble ParameterDriver::getValueStepEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueStepEstimation_fd347811007a6ba3], a0.this$);
      }

      JArray< jdouble > ParameterDriver::getValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_25e1757a36c4dde2]));
      }

      jboolean ParameterDriver::isContinuousEstimation() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isContinuousEstimation_9ab94ac1dc23b105]);
      }

      jboolean ParameterDriver::isSelected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSelected_9ab94ac1dc23b105]);
      }

      void ParameterDriver::removeObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeObserver_0d369fd1d1233ad6], a0.this$);
      }

      void ParameterDriver::replaceObserver(const ::org::orekit::utils::ParameterObserver & a0, const ::org::orekit::utils::ParameterObserver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_replaceObserver_b13cdfbcabe95c73], a0.this$, a1.this$);
      }

      void ParameterDriver::setContinuousEstimation(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setContinuousEstimation_fcb96c98de6fad04], a0);
      }

      void ParameterDriver::setMaxValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxValue_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setMinValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinValue_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setName(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setName_734b91ac30d5f9b4], a0.this$);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_98ef3c02384a4218], a0, a1.this$);
      }

      void ParameterDriver::setReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceDate_02135a6ef25adb4b], a0.this$);
      }

      void ParameterDriver::setReferenceValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceValue_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setScale(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setSelected(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSelected_fcb96c98de6fad04], a0);
      }

      void ParameterDriver::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_8ba9fe7a847cecad], a0);
      }

      void ParameterDriver::setValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_98ef3c02384a4218], a0, a1.this$);
      }

      void ParameterDriver::setValueSpanMap(const ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValueSpanMap_5791d10af4720a8e], a0.this$);
      }

      ::java::lang::String ParameterDriver::toString() const
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
      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data);
      static PyGetSetDef t_ParameterDriver__fields_[] = {
        DECLARE_GETSET_FIELD(t_ParameterDriver, continuousEstimation),
        DECLARE_GETSET_FIELD(t_ParameterDriver, maxValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, minValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, name),
        DECLARE_GET_FIELD(t_ParameterDriver, namesSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, nbOfValues),
        DECLARE_GETSET_FIELD(t_ParameterDriver, normalizedValue),
        DECLARE_GET_FIELD(t_ParameterDriver, observers),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceDate),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, scale),
        DECLARE_GETSET_FIELD(t_ParameterDriver, selected),
        DECLARE_GET_FIELD(t_ParameterDriver, transitionDates),
        DECLARE_GETSET_FIELD(t_ParameterDriver, value),
        DECLARE_GETSET_FIELD(t_ParameterDriver, valueSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, values),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, addObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpanAtDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpans, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getName, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNameSpan, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getNamesSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNbOfValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getObservers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getScale, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getTransitionDates, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValueSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueStepEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isContinuousEstimation, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isSelected, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, removeObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, replaceObserver, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMaxValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMinValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setName, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setReferenceDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setReferenceValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setScale, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setSelected, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setValueSpanMap, METH_O),
        DECLARE_METHOD(t_ParameterDriver, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriver)[] = {
        { Py_tp_methods, t_ParameterDriver__methods_ },
        { Py_tp_init, (void *) t_ParameterDriver_init_ },
        { Py_tp_getset, t_ParameterDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriver, t_ParameterDriver, ParameterDriver);

      void t_ParameterDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriver), &PY_TYPE_DEF(ParameterDriver), module, "ParameterDriver", 0);
      }

      void t_ParameterDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "class_", make_descriptor(ParameterDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "wrapfn_", make_descriptor(t_ParameterDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriver::wrap_Object(ParameterDriver(((t_ParameterDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeSpanMap a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sKKDDDD", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addSpanAtDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpanAtDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addSpans(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpans", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getNameSpan(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getNameSpan", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbOfValues());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormalizedValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormalizedValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterObserver));
      }

      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScale());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self)
      {
        JArray< ::org::orekit::time::AbsoluteDate > result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitionDates());
        return JArray<jobject>(result.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::Map::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1, a2));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueContinuousEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueStepEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueStepEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValues());
        return result.wrap();
      }

      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSelected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);
        ::org::orekit::utils::ParameterObserver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterObserver::initializeClass, ::org::orekit::utils::ParameterObserver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.replaceObserver(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "replaceObserver", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setContinuousEstimation(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.setName(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setReferenceValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setSelected(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSelected", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg)
      {
        ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setValueSpanMap(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValueSpanMap", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ParameterDriver), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setContinuousEstimation(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "continuousEstimation", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object.setName(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "name", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbOfValues());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormalizedValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setNormalizedValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "normalizedValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceDate(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceDate", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setReferenceValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScale());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSelected());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setSelected(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "selected", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data)
      {
        JArray< ::org::orekit::time::AbsoluteDate > value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitionDates());
        return JArray<jobject>(value.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ParameterDriver value((jobject) NULL);
          if (!parseArg(arg, "k", ParameterDriver::initializeClass, &value))
          {
            INT_CALL(self->object.setValueSpanMap(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "valueSpanMap", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValues());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffsetPointing::class$ = NULL;
      jmethodID *LofOffsetPointing::mids$ = NULL;
      bool LofOffsetPointing::live$ = false;

      jclass LofOffsetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffsetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e6ba21119b359ddd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffsetPointing::LofOffsetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_e6ba21119b359ddd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args);

      static PyMethodDef t_LofOffsetPointing__methods_[] = {
        DECLARE_METHOD(t_LofOffsetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffsetPointing)[] = {
        { Py_tp_methods, t_LofOffsetPointing__methods_ },
        { Py_tp_init, (void *) t_LofOffsetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffsetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(LofOffsetPointing, t_LofOffsetPointing, LofOffsetPointing);

      void t_LofOffsetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffsetPointing), &PY_TYPE_DEF(LofOffsetPointing), module, "LofOffsetPointing", 0);
      }

      void t_LofOffsetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "class_", make_descriptor(LofOffsetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "wrapfn_", make_descriptor(t_LofOffsetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffsetPointing::initializeClass, 1)))
          return NULL;
        return t_LofOffsetPointing::wrap_Object(LofOffsetPointing(((t_LofOffsetPointing *) arg)->object.this$));
      }
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffsetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        LofOffsetPointing object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LofOffsetPointing(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitudeRotation", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeCrossingDetector::class$ = NULL;
        jmethodID *LatitudeCrossingDetector::mids$ = NULL;
        bool LatitudeCrossingDetector::live$ = false;

        jclass LatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d11e39be76d848c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_2b115367b64f9286] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_b74f83833fdad017] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_fbbfc48b3792c004] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeCrossingDetector::LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d11e39be76d848c0, a0.this$, a1)) {}

        LatitudeCrossingDetector::LatitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2b115367b64f9286, a0, a1, a2.this$, a3)) {}

        jdouble LatitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
        }

        jdouble LatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_b74f83833fdad017]);
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
        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args);
        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeCrossingDetector, t_LatitudeCrossingDetector, LatitudeCrossingDetector);
        PyObject *t_LatitudeCrossingDetector::wrap_Object(const LatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeCrossingDetector), &PY_TYPE_DEF(LatitudeCrossingDetector), module, "LatitudeCrossingDetector", 0);
        }

        void t_LatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "class_", make_descriptor(LatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "wrapfn_", make_descriptor(t_LatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeCrossingDetector::wrap_Object(LatitudeCrossingDetector(((t_LatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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

        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticElements::class$ = NULL;
        jmethodID *GeoMagneticElements::mids$ = NULL;
        bool GeoMagneticElements::live$ = false;

        jclass GeoMagneticElements::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticElements");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDeclination_b74f83833fdad017] = env->getMethodID(cls, "getDeclination", "()D");
            mids$[mid_getFieldVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getFieldVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHorizontalIntensity_b74f83833fdad017] = env->getMethodID(cls, "getHorizontalIntensity", "()D");
            mids$[mid_getInclination_b74f83833fdad017] = env->getMethodID(cls, "getInclination", "()D");
            mids$[mid_getTotalIntensity_b74f83833fdad017] = env->getMethodID(cls, "getTotalIntensity", "()D");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticElements::GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

        jdouble GeoMagneticElements::getDeclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDeclination_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GeoMagneticElements::getFieldVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFieldVector_8b724f8b4fdad1a2]));
        }

        jdouble GeoMagneticElements::getHorizontalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHorizontalIntensity_b74f83833fdad017]);
        }

        jdouble GeoMagneticElements::getInclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInclination_b74f83833fdad017]);
        }

        jdouble GeoMagneticElements::getTotalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalIntensity_b74f83833fdad017]);
        }

        ::java::lang::String GeoMagneticElements::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args);
        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data);
        static PyGetSetDef t_GeoMagneticElements__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticElements, declination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, fieldVector),
          DECLARE_GET_FIELD(t_GeoMagneticElements, horizontalIntensity),
          DECLARE_GET_FIELD(t_GeoMagneticElements, inclination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, totalIntensity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticElements__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticElements, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, getDeclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getFieldVector, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getHorizontalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getInclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getTotalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticElements)[] = {
          { Py_tp_methods, t_GeoMagneticElements__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticElements_init_ },
          { Py_tp_getset, t_GeoMagneticElements__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticElements)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticElements, t_GeoMagneticElements, GeoMagneticElements);

        void t_GeoMagneticElements::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticElements), &PY_TYPE_DEF(GeoMagneticElements), module, "GeoMagneticElements", 0);
        }

        void t_GeoMagneticElements::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "class_", make_descriptor(GeoMagneticElements::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "wrapfn_", make_descriptor(t_GeoMagneticElements::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticElements::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticElements::wrap_Object(GeoMagneticElements(((t_GeoMagneticElements *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticElements::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          GeoMagneticElements object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            INT_CALL(object = GeoMagneticElements(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDeclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(GeoMagneticElements), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDeclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
