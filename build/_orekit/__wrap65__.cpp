#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumListConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumListConsumer::mids$ = NULL;
            bool ParseToken$EnumListConsumer::live$ = false;

            jclass ParseToken$EnumListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_aa335fea495d60e0] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_aa335fea495d60e0], a0.this$);
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
            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumListConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumListConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumListConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumListConsumer, t_ParseToken$EnumListConsumer, ParseToken$EnumListConsumer);
            PyObject *t_ParseToken$EnumListConsumer::wrap_Object(const ParseToken$EnumListConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumListConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumListConsumer), &PY_TYPE_DEF(ParseToken$EnumListConsumer), module, "ParseToken$EnumListConsumer", 0);
            }

            void t_ParseToken$EnumListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "class_", make_descriptor(ParseToken$EnumListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumListConsumer::wrap_Object(ParseToken$EnumListConsumer(((t_ParseToken$EnumListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg)
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
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data)
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
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceBlender::class$ = NULL;
      jmethodID *StateCovarianceBlender::mids$ = NULL;
      bool StateCovarianceBlender::live$ = false;

      jclass StateCovarianceBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_09140af3e4389da0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_2ffdce98ec11eef3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_09140af3e4389da0, a0.this$, a1.this$, a2.this$)) {}

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ffdce98ec11eef3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args);
      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data);
      static PyGetSetDef t_StateCovarianceBlender__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceBlender__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceBlender)[] = {
        { Py_tp_methods, t_StateCovarianceBlender__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceBlender_init_ },
        { Py_tp_getset, t_StateCovarianceBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceBlender, t_StateCovarianceBlender, StateCovarianceBlender);
      PyObject *t_StateCovarianceBlender::wrap_Object(const StateCovarianceBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceBlender), &PY_TYPE_DEF(StateCovarianceBlender), module, "StateCovarianceBlender", 0);
      }

      void t_StateCovarianceBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "class_", make_descriptor(StateCovarianceBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "wrapfn_", make_descriptor(t_StateCovarianceBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceBlender::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceBlender::wrap_Object(StateCovarianceBlender(((t_StateCovarianceBlender *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKkKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2, a3, a4));
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
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GillFieldIntegratorBuilder::class$ = NULL;
        jmethodID *GillFieldIntegratorBuilder::mids$ = NULL;
        bool GillFieldIntegratorBuilder::live$ = false;

        jclass GillFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator GillFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_GillFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_GillFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegratorBuilder, t_GillFieldIntegratorBuilder, GillFieldIntegratorBuilder);
        PyObject *t_GillFieldIntegratorBuilder::wrap_Object(const GillFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegratorBuilder), &PY_TYPE_DEF(GillFieldIntegratorBuilder), module, "GillFieldIntegratorBuilder", 0);
        }

        void t_GillFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "class_", make_descriptor(GillFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_GillFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegratorBuilder::wrap_Object(GillFieldIntegratorBuilder(((t_GillFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
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

        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(GillFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
            mids$[mid_validityEnd_80e11148db499dda] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_80e11148db499dda] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_80e11148db499dda]));
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
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnEvent::class$ = NULL;
          jmethodID *FieldStopOnEvent::mids$ = NULL;
          bool FieldStopOnEvent::live$ = false;

          jclass FieldStopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnEvent::FieldStopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args);
          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args);
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data);
          static PyGetSetDef t_FieldStopOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnEvent)[] = {
            { Py_tp_methods, t_FieldStopOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnEvent_init_ },
            { Py_tp_getset, t_FieldStopOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnEvent, t_FieldStopOnEvent, FieldStopOnEvent);
          PyObject *t_FieldStopOnEvent::wrap_Object(const FieldStopOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnEvent), &PY_TYPE_DEF(FieldStopOnEvent), module, "FieldStopOnEvent", 0);
          }

          void t_FieldStopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "class_", make_descriptor(FieldStopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "wrapfn_", make_descriptor(t_FieldStopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnEvent::wrap_Object(FieldStopOnEvent(((t_FieldStopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnEvent object((jobject) NULL);

            INT_CALL(object = FieldStopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args)
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
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data)
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
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *SaastamoinenModel::class$ = NULL;
          jmethodID *SaastamoinenModel::mids$ = NULL;
          bool SaastamoinenModel::live$ = false;
          jdouble SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD = (jdouble) 0;
          ::java::lang::String *SaastamoinenModel::DELTA_R_FILE_NAME = NULL;

          jclass SaastamoinenModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/SaastamoinenModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_85660574e101bd4c] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;)V");
              mids$[mid_init$_765ec9631049e580] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getLowElevationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getLowElevationThreshold", "()D");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_0733d9cbb2354c47] = env->getStaticMethodID(cls, "getStandardModel", "()Lorg/orekit/models/earth/troposphere/SaastamoinenModel;");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_setLowElevationThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setLowElevationThreshold", "(D)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_LOW_ELEVATION_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_LOW_ELEVATION_THRESHOLD");
              DELTA_R_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DELTA_R_FILE_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85660574e101bd4c, a0, a1, a2, a3.this$)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_765ec9631049e580, a0, a1, a2, a3.this$, a4.this$)) {}

          jdouble SaastamoinenModel::getLowElevationThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowElevationThreshold_9981f74b2d109da6]);
          }

          ::java::util::List SaastamoinenModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          SaastamoinenModel SaastamoinenModel::getStandardModel()
          {
            jclass cls = env->getClass(initializeClass);
            return SaastamoinenModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_0733d9cbb2354c47]));
          }

          ::org::hipparchus::CalculusFieldElement SaastamoinenModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble SaastamoinenModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
          }

          void SaastamoinenModel::setLowElevationThreshold(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLowElevationThreshold_1ad26e8c8c0cd65b], a0);
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
        namespace troposphere {
          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type);
          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args);
          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg);
          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data);
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data);
          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data);
          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data);
          static PyGetSetDef t_SaastamoinenModel__fields_[] = {
            DECLARE_GETSET_FIELD(t_SaastamoinenModel, lowElevationThreshold),
            DECLARE_GET_FIELD(t_SaastamoinenModel, parametersDrivers),
            DECLARE_GET_FIELD(t_SaastamoinenModel, standardModel),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SaastamoinenModel__methods_[] = {
            DECLARE_METHOD(t_SaastamoinenModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, getLowElevationThreshold, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getStandardModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_SaastamoinenModel, setLowElevationThreshold, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SaastamoinenModel)[] = {
            { Py_tp_methods, t_SaastamoinenModel__methods_ },
            { Py_tp_init, (void *) t_SaastamoinenModel_init_ },
            { Py_tp_getset, t_SaastamoinenModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SaastamoinenModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SaastamoinenModel, t_SaastamoinenModel, SaastamoinenModel);

          void t_SaastamoinenModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SaastamoinenModel), &PY_TYPE_DEF(SaastamoinenModel), module, "SaastamoinenModel", 0);
          }

          void t_SaastamoinenModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "class_", make_descriptor(SaastamoinenModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "wrapfn_", make_descriptor(t_SaastamoinenModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(SaastamoinenModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DEFAULT_LOW_ELEVATION_THRESHOLD", make_descriptor(SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DELTA_R_FILE_NAME", make_descriptor(j2p(*SaastamoinenModel::DELTA_R_FILE_NAME)));
          }

          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SaastamoinenModel::initializeClass, 1)))
              return NULL;
            return t_SaastamoinenModel::wrap_Object(SaastamoinenModel(((t_SaastamoinenModel *) arg)->object.this$));
          }
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SaastamoinenModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDs", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDsk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type)
          {
            SaastamoinenModel result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::SaastamoinenModel::getStandardModel());
            return t_SaastamoinenModel::wrap_Object(result);
          }

          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setLowElevationThreshold(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLowElevationThreshold", arg);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setLowElevationThreshold(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "lowElevationThreshold", arg);
            return -1;
          }

          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data)
          {
            SaastamoinenModel value((jobject) NULL);
            OBJ_CALL(value = self->object.getStandardModel());
            return t_SaastamoinenModel::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *IntRandomGenerator::class$ = NULL;
      jmethodID *IntRandomGenerator::mids$ = NULL;
      bool IntRandomGenerator::live$ = false;

      jclass IntRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/IntRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_e4288ba5fbf20d28] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean IntRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_e4288ba5fbf20d28], a0.this$, a1, a2);
      }

      jdouble IntRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat IntRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jint IntRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jlong IntRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
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
      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args);

      static PyMethodDef t_IntRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_IntRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextLong, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntRandomGenerator)[] = {
        { Py_tp_methods, t_IntRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::BaseRandomGenerator),
        NULL
      };

      DEFINE_TYPE(IntRandomGenerator, t_IntRandomGenerator, IntRandomGenerator);

      void t_IntRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(IntRandomGenerator), &PY_TYPE_DEF(IntRandomGenerator), module, "IntRandomGenerator", 0);
      }

      void t_IntRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "class_", make_descriptor(IntRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "wrapfn_", make_descriptor(t_IntRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_IntRandomGenerator::wrap_Object(IntRandomGenerator(((t_IntRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateMatrixFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateMatrixFunctionDifferentiator::mids$ = NULL;
        bool UnivariateMatrixFunctionDifferentiator::live$ = false;

        jclass UnivariateMatrixFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_f183e80ab489f554] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction UnivariateMatrixFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_f183e80ab489f554], a0.this$));
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
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateMatrixFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateMatrixFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateMatrixFunctionDifferentiator, t_UnivariateMatrixFunctionDifferentiator, UnivariateMatrixFunctionDifferentiator);

        void t_UnivariateMatrixFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateMatrixFunctionDifferentiator), &PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator), module, "UnivariateMatrixFunctionDifferentiator", 0);
        }

        void t_UnivariateMatrixFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "class_", make_descriptor(UnivariateMatrixFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateMatrixFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateMatrixFunctionDifferentiator::wrap_Object(UnivariateMatrixFunctionDifferentiator(((t_UnivariateMatrixFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
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
#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *AbstractCurveFitter::class$ = NULL;
      jmethodID *AbstractCurveFitter::mids$ = NULL;
      bool AbstractCurveFitter::live$ = false;

      jclass AbstractCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/AbstractCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fit_7816c47352afdb18] = env->getMethodID(cls, "fit", "(Ljava/util/Collection;)[D");
          mids$[mid_getProblem_51e01b60016ab388] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
          mids$[mid_getOptimizer_c8ae3ed53e0ae1a5] = env->getMethodID(cls, "getOptimizer", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractCurveFitter::AbstractCurveFitter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      JArray< jdouble > AbstractCurveFitter::fit(const ::java::util::Collection & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_fit_7816c47352afdb18], a0.this$));
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
      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg);

      static PyMethodDef t_AbstractCurveFitter__methods_[] = {
        DECLARE_METHOD(t_AbstractCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractCurveFitter)[] = {
        { Py_tp_methods, t_AbstractCurveFitter__methods_ },
        { Py_tp_init, (void *) t_AbstractCurveFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractCurveFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractCurveFitter, t_AbstractCurveFitter, AbstractCurveFitter);

      void t_AbstractCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractCurveFitter), &PY_TYPE_DEF(AbstractCurveFitter), module, "AbstractCurveFitter", 0);
      }

      void t_AbstractCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "class_", make_descriptor(AbstractCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "wrapfn_", make_descriptor(t_AbstractCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractCurveFitter::initializeClass, 1)))
          return NULL;
        return t_AbstractCurveFitter::wrap_Object(AbstractCurveFitter(((t_AbstractCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds)
      {
        AbstractCurveFitter object((jobject) NULL);

        INT_CALL(object = AbstractCurveFitter());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$Segment::class$ = NULL;
        jmethodID *StreamingCpfWriter$Segment::mids$ = NULL;
        bool StreamingCpfWriter$Segment::live$ = false;

        jclass StreamingCpfWriter$Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_writeEphemerisLine_8122b9a9a00e0ea0] = env->getMethodID(cls, "writeEphemerisLine", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StreamingCpfWriter$Segment::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
        }

        void StreamingCpfWriter$Segment::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_72b846eb87f3af9a], a0.this$);
        }

        void StreamingCpfWriter$Segment::writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_writeEphemerisLine_8122b9a9a00e0ea0], a0.this$);
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
        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg);

        static PyMethodDef t_StreamingCpfWriter$Segment__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, finish, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, handleStep, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, writeEphemerisLine, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$Segment)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$Segment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$Segment, t_StreamingCpfWriter$Segment, StreamingCpfWriter$Segment);

        void t_StreamingCpfWriter$Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$Segment), &PY_TYPE_DEF(StreamingCpfWriter$Segment), module, "StreamingCpfWriter$Segment", 0);
        }

        void t_StreamingCpfWriter$Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "class_", make_descriptor(StreamingCpfWriter$Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "wrapfn_", make_descriptor(t_StreamingCpfWriter$Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$Segment::wrap_Object(StreamingCpfWriter$Segment(((t_StreamingCpfWriter$Segment *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
          {
            OBJ_CALL(self->object.writeEphemerisLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "writeEphemerisLine", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultivariateOptimizer::mids$ = NULL;
      bool BaseMultivariateOptimizer::live$ = false;

      jclass BaseMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLowerBound_be783177b060994b] = env->getMethodID(cls, "getLowerBound", "()[D");
          mids$[mid_getStartPoint_be783177b060994b] = env->getMethodID(cls, "getStartPoint", "()[D");
          mids$[mid_getUpperBound_be783177b060994b] = env->getMethodID(cls, "getUpperBound", "()[D");
          mids$[mid_optimize_7c1cfcae8b9ddcfc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > BaseMultivariateOptimizer::getLowerBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLowerBound_be783177b060994b]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getStartPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStartPoint_be783177b060994b]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getUpperBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBound_be783177b060994b]));
      }

      ::java::lang::Object BaseMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_7c1cfcae8b9ddcfc], a0.this$));
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
      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, lowerBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, startPoint),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, upperBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getStartPoint, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultivariateOptimizer, t_BaseMultivariateOptimizer, BaseMultivariateOptimizer);
      PyObject *t_BaseMultivariateOptimizer::wrap_Object(const BaseMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultivariateOptimizer), &PY_TYPE_DEF(BaseMultivariateOptimizer), module, "BaseMultivariateOptimizer", 0);
      }

      void t_BaseMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "class_", make_descriptor(BaseMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultivariateOptimizer::wrap_Object(BaseMultivariateOptimizer(((t_BaseMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartPoint());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerBound());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartPoint());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperBound());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Plane::class$ = NULL;
          jmethodID *Plane::mids$ = NULL;
          bool Plane::live$ = false;

          jclass Plane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Plane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ce07cf20f467033d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_dcbb005903c9a2a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_cf8e500bc38590d2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_contains_decdc24b3aebe77a] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_copySelf_4cc621333aee53af] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_emptyHyperplane_47a89fe434c9e6a8] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_getNormal_032312bdeb3f2f93] = env->getMethodID(cls, "getNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOffset_c9d1fee7ba0bebb4] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)D");
              mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_54eca2a6b3ac81a2] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOrigin_032312bdeb3f2f93] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPointAt_702368c5a77022fb] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getU_032312bdeb3f2f93] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getV_032312bdeb3f2f93] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_99a30a324f9c6beb] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_22dacb7a9f97de0b] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_intersection_82363443c52ee488] = env->getStaticMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_2bcc33f53e55c9ae] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Z");
              mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_641dc835841c48a5] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)V");
              mids$[mid_reset_c8e9682f0daaca68] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_ff7cb6c242604316] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_rotate_915dd337be1d3918] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_7b74ee30f4dffb8d] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_8e71f2ea9c6b3602] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_d7932c1ec0f8a119] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_bf5660dd5343a17c] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_translate_5aa14249a1f4c5b0] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_wholeHyperplane_47a89fe434c9e6a8] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_wholeSpace_5af6756fe7e06329] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce07cf20f467033d, a0.this$, a1)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcbb005903c9a2a8, a0.this$, a1.this$, a2)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf8e500bc38590d2, a0.this$, a1.this$, a2.this$, a3)) {}

          jboolean Plane::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_decdc24b3aebe77a], a0.this$);
          }

          Plane Plane::copySelf() const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_copySelf_4cc621333aee53af]));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_47a89fe434c9e6a8]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getNormal() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_032312bdeb3f2f93]));
          }

          jdouble Plane::getOffset(const Plane & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_c9d1fee7ba0bebb4], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_54eca2a6b3ac81a2], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_702368c5a77022fb], a0.this$, a1));
          }

          jdouble Plane::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getU() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_99a30a324f9c6beb], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Plane::intersection(const Plane & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_intersection_22dacb7a9f97de0b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const Plane & a0, const Plane & a1, const Plane & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_intersection_82363443c52ee488], a0.this$, a1.this$, a2.this$));
          }

          jboolean Plane::isSimilarTo(const Plane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_2bcc33f53e55c9ae], a0.this$);
          }

          ::org::hipparchus::geometry::Point Plane::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
          }

          void Plane::reset(const Plane & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_641dc835841c48a5], a0.this$);
          }

          void Plane::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_c8e9682f0daaca68], a0.this$, a1.this$);
          }

          void Plane::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_ff7cb6c242604316]);
          }

          Plane Plane::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_rotate_915dd337be1d3918], a0.this$, a1.this$));
          }

          jboolean Plane::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_7b74ee30f4dffb8d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_8e71f2ea9c6b3602], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_d7932c1ec0f8a119], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_bf5660dd5343a17c], a0.this$));
          }

          Plane Plane::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_translate_5aa14249a1f4c5b0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_47a89fe434c9e6a8]));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet Plane::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_5af6756fe7e06329]));
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
          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_copySelf(t_Plane *self);
          static PyObject *t_Plane_emptyHyperplane(t_Plane *self);
          static PyObject *t_Plane_getNormal(t_Plane *self);
          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getOrigin(t_Plane *self);
          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getTolerance(t_Plane *self);
          static PyObject *t_Plane_getU(t_Plane *self);
          static PyObject *t_Plane_getV(t_Plane *self);
          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_revertSelf(t_Plane *self);
          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_wholeHyperplane(t_Plane *self);
          static PyObject *t_Plane_wholeSpace(t_Plane *self);
          static PyObject *t_Plane_get__normal(t_Plane *self, void *data);
          static PyObject *t_Plane_get__origin(t_Plane *self, void *data);
          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data);
          static PyObject *t_Plane_get__u(t_Plane *self, void *data);
          static PyObject *t_Plane_get__v(t_Plane *self, void *data);
          static PyGetSetDef t_Plane__fields_[] = {
            DECLARE_GET_FIELD(t_Plane, normal),
            DECLARE_GET_FIELD(t_Plane, origin),
            DECLARE_GET_FIELD(t_Plane, tolerance),
            DECLARE_GET_FIELD(t_Plane, u),
            DECLARE_GET_FIELD(t_Plane, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Plane__methods_[] = {
            DECLARE_METHOD(t_Plane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, contains, METH_O),
            DECLARE_METHOD(t_Plane, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getNormal, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getU, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getV, METH_NOARGS),
            DECLARE_METHOD(t_Plane, intersection, METH_VARARGS),
            DECLARE_METHOD(t_Plane, intersection_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Plane, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Plane, project, METH_O),
            DECLARE_METHOD(t_Plane, reset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, rotate, METH_VARARGS),
            DECLARE_METHOD(t_Plane, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Plane, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, translate, METH_O),
            DECLARE_METHOD(t_Plane, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Plane)[] = {
            { Py_tp_methods, t_Plane__methods_ },
            { Py_tp_init, (void *) t_Plane_init_ },
            { Py_tp_getset, t_Plane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Plane)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Plane, t_Plane, Plane);

          void t_Plane::install(PyObject *module)
          {
            installType(&PY_TYPE(Plane), &PY_TYPE_DEF(Plane), module, "Plane", 0);
          }

          void t_Plane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "class_", make_descriptor(Plane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "wrapfn_", make_descriptor(t_Plane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Plane::initializeClass, 1)))
              return NULL;
            return t_Plane::wrap_Object(Plane(((t_Plane *) arg)->object.this$));
          }
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Plane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Plane(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Plane(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                jdouble a3;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Plane(a0, a1, a2, a3));
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

          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Plane_copySelf(t_Plane *self)
          {
            Plane result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Plane::wrap_Object(result);
          }

          static PyObject *t_Plane_emptyHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_getNormal(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Plane_getOrigin(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Plane_getTolerance(t_Plane *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Plane_getU(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getV(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                Plane a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args)
          {
            Plane a0((jobject) NULL);
            Plane a1((jobject) NULL);
            Plane a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", Plane::initializeClass, Plane::initializeClass, Plane::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Plane::intersection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "intersection_", args);
            return NULL;
          }

          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg)
          {
            Plane a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Plane::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Plane_revertSelf(t_Plane *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }

          static PyObject *t_Plane_wholeHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_wholeSpace(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::wrap_Object(result);
          }

          static PyObject *t_Plane_get__normal(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__origin(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Plane_get__u(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__v(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
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
              mids$[mid_getCreationDate_80e11148db499dda] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateComponents_db63232a87504284] = env->getMethodID(cls, "getCreationDateComponents", "()Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getCreationTimeZone_d2c8eb4129821f0e] = env->getMethodID(cls, "getCreationTimeZone", "()Ljava/lang/String;");
              mids$[mid_getDoi_d2c8eb4129821f0e] = env->getMethodID(cls, "getDoi", "()Ljava/lang/String;");
              mids$[mid_getFileType_a5f8167d1760daff] = env->getMethodID(cls, "getFileType", "()Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_getFormatVersion_9981f74b2d109da6] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getLicense_d2c8eb4129821f0e] = env->getMethodID(cls, "getLicense", "()Ljava/lang/String;");
              mids$[mid_getProgramName_d2c8eb4129821f0e] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getRunByName_d2c8eb4129821f0e] = env->getMethodID(cls, "getRunByName", "()Ljava/lang/String;");
              mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getStationInformation_d2c8eb4129821f0e] = env->getMethodID(cls, "getStationInformation", "()Ljava/lang/String;");
              mids$[mid_setCreationDate_8497861b879c83f7] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateComponents_d3c621492f146ad9] = env->getMethodID(cls, "setCreationDateComponents", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_setCreationTimeZone_105e1eadb709d9ac] = env->getMethodID(cls, "setCreationTimeZone", "(Ljava/lang/String;)V");
              mids$[mid_setDoi_105e1eadb709d9ac] = env->getMethodID(cls, "setDoi", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setLicense_105e1eadb709d9ac] = env->getMethodID(cls, "setLicense", "(Ljava/lang/String;)V");
              mids$[mid_setProgramName_105e1eadb709d9ac] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setRunByName_105e1eadb709d9ac] = env->getMethodID(cls, "setRunByName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_b8157be2fa2780f9] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationInformation_105e1eadb709d9ac] = env->getMethodID(cls, "setStationInformation", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate RinexBaseHeader::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_80e11148db499dda]));
          }

          ::org::orekit::time::DateTimeComponents RinexBaseHeader::getCreationDateComponents() const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getCreationDateComponents_db63232a87504284]));
          }

          ::java::lang::String RinexBaseHeader::getCreationTimeZone() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZone_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexBaseHeader::getDoi() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDoi_d2c8eb4129821f0e]));
          }

          ::org::orekit::files::rinex::utils::RinexFileType RinexBaseHeader::getFileType() const
          {
            return ::org::orekit::files::rinex::utils::RinexFileType(env->callObjectMethod(this$, mids$[mid_getFileType_a5f8167d1760daff]));
          }

          jdouble RinexBaseHeader::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_9981f74b2d109da6]);
          }

          ::java::lang::String RinexBaseHeader::getLicense() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLicense_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexBaseHeader::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexBaseHeader::getRunByName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRunByName_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexBaseHeader::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
          }

          ::java::lang::String RinexBaseHeader::getStationInformation() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationInformation_d2c8eb4129821f0e]));
          }

          void RinexBaseHeader::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_8497861b879c83f7], a0.this$);
          }

          void RinexBaseHeader::setCreationDateComponents(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateComponents_d3c621492f146ad9], a0.this$);
          }

          void RinexBaseHeader::setCreationTimeZone(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZone_105e1eadb709d9ac], a0.this$);
          }

          void RinexBaseHeader::setDoi(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDoi_105e1eadb709d9ac], a0.this$);
          }

          void RinexBaseHeader::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_1ad26e8c8c0cd65b], a0);
          }

          void RinexBaseHeader::setLicense(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLicense_105e1eadb709d9ac], a0.this$);
          }

          void RinexBaseHeader::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_105e1eadb709d9ac], a0.this$);
          }

          void RinexBaseHeader::setRunByName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRunByName_105e1eadb709d9ac], a0.this$);
          }

          void RinexBaseHeader::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_b8157be2fa2780f9], a0.this$);
          }

          void RinexBaseHeader::setStationInformation(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationInformation_105e1eadb709d9ac], a0.this$);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStamped::class$ = NULL;
      jmethodID *TimeStamped::mids$ = NULL;
      bool TimeStamped::live$ = false;

      jclass TimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_b779e2963d2e7481] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/TimeStamped;)D");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeStamped::durationFrom(const TimeStamped & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_b779e2963d2e7481], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate TimeStamped::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
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
      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg);
      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self);
      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data);
      static PyGetSetDef t_TimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStamped, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStamped__methods_[] = {
        DECLARE_METHOD(t_TimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_TimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStamped)[] = {
        { Py_tp_methods, t_TimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStamped, t_TimeStamped, TimeStamped);

      void t_TimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStamped), &PY_TYPE_DEF(TimeStamped), module, "TimeStamped", 0);
      }

      void t_TimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "class_", make_descriptor(TimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "wrapfn_", make_descriptor(t_TimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStamped::initializeClass, 1)))
          return NULL;
        return t_TimeStamped::wrap_Object(TimeStamped(((t_TimeStamped *) arg)->object.this$));
      }
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg)
      {
        TimeStamped a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05::class$ = NULL;
              jmethodID *SsrIgm05::mids$ = NULL;
              bool SsrIgm05::live$ = false;

              jclass SsrIgm05::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c8fd3c54efdb2eae] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm05Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm05Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05::SsrIgm05(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_c8fd3c54efdb2eae, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm05::getSsrIgm05Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm05Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args);
              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self);
              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data);
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data);
              static PyGetSetDef t_SsrIgm05__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05, ssrIgm05Data),
                DECLARE_GET_FIELD(t_SsrIgm05, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm05, getSsrIgm05Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05)[] = {
                { Py_tp_methods, t_SsrIgm05__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05_init_ },
                { Py_tp_getset, t_SsrIgm05__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm05, t_SsrIgm05, SsrIgm05);
              PyObject *t_SsrIgm05::wrap_Object(const SsrIgm05& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm05::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm05::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05), &PY_TYPE_DEF(SsrIgm05), module, "SsrIgm05", 0);
              }

              void t_SsrIgm05::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "class_", make_descriptor(SsrIgm05::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "wrapfn_", make_descriptor(t_SsrIgm05::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05::wrap_Object(SsrIgm05(((t_SsrIgm05 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm05 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm05(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm05Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm05Data());
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
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimator::class$ = NULL;
        jmethodID *KalmanEstimator::mids$ = NULL;
        bool KalmanEstimator::live$ = false;

        jclass KalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_a6cfa97380122d5a] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_87799e9d173bae53] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_a6cfa97380122d5a], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_87799e9d173bae53], a0.this$));
        }

        void KalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_2002169216358a3a], a0.this$);
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
        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg);
        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_KalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimator)[] = {
          { Py_tp_methods, t_KalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(KalmanEstimator, t_KalmanEstimator, KalmanEstimator);

        void t_KalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimator), &PY_TYPE_DEF(KalmanEstimator), module, "KalmanEstimator", 0);
        }

        void t_KalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "class_", make_descriptor(KalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "wrapfn_", make_descriptor(t_KalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimator::wrap_Object(KalmanEstimator(((t_KalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
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
          mids$[mid_ellipticEccentricToMean_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticEccentricToTrue_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToEccentric_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToTrue_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToEccentric_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToMean_b5ecd7df9e053968] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToMean_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToTrue_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToEccentric_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToTrue_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToEccentric_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToMean_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToMean_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToTrue_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToEccentric_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToTrue_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToEccentric_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToMean_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToMean_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToTrue_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToEccentric_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToTrue_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToEccentric_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToMean_b5ecd7df9e053968], a0.this$, a1.this$));
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisData::class$ = NULL;
              jmethodID *RtcmEphemerisData::mids$ = NULL;
              bool RtcmEphemerisData::live$ = false;

              jclass RtcmEphemerisData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAccuracyProvider_7a7a968b26c67489] = env->getMethodID(cls, "getAccuracyProvider", "()Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;");
                  mids$[mid_getSatelliteID_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setAccuracyProvider_a7e0a29362b75c98] = env->getMethodID(cls, "setAccuracyProvider", "(Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;)V");
                  mids$[mid_setSatelliteID_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisData::RtcmEphemerisData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::gnss::metric::messages::common::AccuracyProvider RtcmEphemerisData::getAccuracyProvider() const
              {
                return ::org::orekit::gnss::metric::messages::common::AccuracyProvider(env->callObjectMethod(this$, mids$[mid_getAccuracyProvider_7a7a968b26c67489]));
              }

              jint RtcmEphemerisData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_d6ab429752e7c267]);
              }

              void RtcmEphemerisData::setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccuracyProvider_a7e0a29362b75c98], a0.this$);
              }

              void RtcmEphemerisData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_8fd427ab23829bf5], a0);
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
              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmEphemerisData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, accuracyProvider),
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisData__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, getAccuracyProvider, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, setAccuracyProvider, METH_O),
                DECLARE_METHOD(t_RtcmEphemerisData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisData)[] = {
                { Py_tp_methods, t_RtcmEphemerisData__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisData_init_ },
                { Py_tp_getset, t_RtcmEphemerisData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisData, t_RtcmEphemerisData, RtcmEphemerisData);

              void t_RtcmEphemerisData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisData), &PY_TYPE_DEF(RtcmEphemerisData), module, "RtcmEphemerisData", 0);
              }

              void t_RtcmEphemerisData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "class_", make_descriptor(RtcmEphemerisData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "wrapfn_", make_descriptor(t_RtcmEphemerisData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisData::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisData::wrap_Object(RtcmEphemerisData(((t_RtcmEphemerisData *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds)
              {
                RtcmEphemerisData object((jobject) NULL);

                INT_CALL(object = RtcmEphemerisData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(result);
              }

              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAccuracyProvider(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccuracyProvider", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(value);
              }
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccuracyProvider(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accuracyProvider", arg);
                return -1;
              }

              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *AbstractRealDistribution::class$ = NULL;
        jmethodID *AbstractRealDistribution::mids$ = NULL;
        bool AbstractRealDistribution::live$ = false;

        jclass AbstractRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/AbstractRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_82f92590f4247da1] = env->getMethodID(cls, "probability", "(DD)D");
            mids$[mid_getSolverAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getSolverAbsoluteAccuracy", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble AbstractRealDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
        }

        jdouble AbstractRealDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_82f92590f4247da1], a0, a1);
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
      namespace continuous {
        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, logDensity, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRealDistribution)[] = {
          { Py_tp_methods, t_AbstractRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRealDistribution, t_AbstractRealDistribution, AbstractRealDistribution);

        void t_AbstractRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRealDistribution), &PY_TYPE_DEF(AbstractRealDistribution), module, "AbstractRealDistribution", 0);
        }

        void t_AbstractRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "class_", make_descriptor(AbstractRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "wrapfn_", make_descriptor(t_AbstractRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractRealDistribution::wrap_Object(AbstractRealDistribution(((t_AbstractRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LevenbergMarquardtOptimizer::class$ = NULL;
            jmethodID *LevenbergMarquardtOptimizer::mids$ = NULL;
            bool LevenbergMarquardtOptimizer::live$ = false;

            jclass LevenbergMarquardtOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_edc3692668d70430] = env->getMethodID(cls, "<init>", "(DDDDD)V");
                mids$[mid_getCostRelativeTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getCostRelativeTolerance", "()D");
                mids$[mid_getInitialStepBoundFactor_9981f74b2d109da6] = env->getMethodID(cls, "getInitialStepBoundFactor", "()D");
                mids$[mid_getOrthoTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getOrthoTolerance", "()D");
                mids$[mid_getParameterRelativeTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getParameterRelativeTolerance", "()D");
                mids$[mid_getRankingThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getRankingThreshold", "()D");
                mids$[mid_optimize_45e9e6e9254f21c4] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_withCostRelativeTolerance_99697958704e6fa0] = env->getMethodID(cls, "withCostRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withInitialStepBoundFactor_99697958704e6fa0] = env->getMethodID(cls, "withInitialStepBoundFactor", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withOrthoTolerance_99697958704e6fa0] = env->getMethodID(cls, "withOrthoTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withParameterRelativeTolerance_99697958704e6fa0] = env->getMethodID(cls, "withParameterRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withRankingThreshold_99697958704e6fa0] = env->getMethodID(cls, "withRankingThreshold", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edc3692668d70430, a0, a1, a2, a3, a4)) {}

            jdouble LevenbergMarquardtOptimizer::getCostRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCostRelativeTolerance_9981f74b2d109da6]);
            }

            jdouble LevenbergMarquardtOptimizer::getInitialStepBoundFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInitialStepBoundFactor_9981f74b2d109da6]);
            }

            jdouble LevenbergMarquardtOptimizer::getOrthoTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrthoTolerance_9981f74b2d109da6]);
            }

            jdouble LevenbergMarquardtOptimizer::getParameterRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getParameterRelativeTolerance_9981f74b2d109da6]);
            }

            jdouble LevenbergMarquardtOptimizer::getRankingThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRankingThreshold_9981f74b2d109da6]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LevenbergMarquardtOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_45e9e6e9254f21c4], a0.this$));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withCostRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withCostRelativeTolerance_99697958704e6fa0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withInitialStepBoundFactor(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withInitialStepBoundFactor_99697958704e6fa0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withOrthoTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withOrthoTolerance_99697958704e6fa0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withParameterRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withParameterRelativeTolerance_99697958704e6fa0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withRankingThreshold(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withRankingThreshold_99697958704e6fa0], a0));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyGetSetDef t_LevenbergMarquardtOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, costRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, initialStepBoundFactor),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, orthoTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, parameterRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, rankingThreshold),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LevenbergMarquardtOptimizer__methods_[] = {
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getCostRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getInitialStepBoundFactor, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getOrthoTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getParameterRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getRankingThreshold, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withCostRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withInitialStepBoundFactor, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withOrthoTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withParameterRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withRankingThreshold, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LevenbergMarquardtOptimizer)[] = {
              { Py_tp_methods, t_LevenbergMarquardtOptimizer__methods_ },
              { Py_tp_init, (void *) t_LevenbergMarquardtOptimizer_init_ },
              { Py_tp_getset, t_LevenbergMarquardtOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LevenbergMarquardtOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LevenbergMarquardtOptimizer, t_LevenbergMarquardtOptimizer, LevenbergMarquardtOptimizer);

            void t_LevenbergMarquardtOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LevenbergMarquardtOptimizer), &PY_TYPE_DEF(LevenbergMarquardtOptimizer), module, "LevenbergMarquardtOptimizer", 0);
            }

            void t_LevenbergMarquardtOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "class_", make_descriptor(LevenbergMarquardtOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "wrapfn_", make_descriptor(t_LevenbergMarquardtOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 1)))
                return NULL;
              return t_LevenbergMarquardtOptimizer::wrap_Object(LevenbergMarquardtOptimizer(((t_LevenbergMarquardtOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  INT_CALL(object = LevenbergMarquardtOptimizer());
                  self->object = object;
                  break;
                }
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = LevenbergMarquardtOptimizer(a0, a1, a2, a3, a4));
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

            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withCostRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withCostRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withInitialStepBoundFactor(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withInitialStepBoundFactor", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withOrthoTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withOrthoTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withParameterRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withParameterRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withRankingThreshold(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withRankingThreshold", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRankingThreshold());
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
#include "java/lang/Boolean.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Boolean::class$ = NULL;
    jmethodID *Boolean::mids$ = NULL;
    bool Boolean::live$ = false;
    Boolean *Boolean::FALSE = NULL;
    Boolean *Boolean::TRUE = NULL;
    ::java::lang::Class *Boolean::TYPE = NULL;

    jclass Boolean::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Boolean");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
        mids$[mid_booleanValue_eee3de00fe971136] = env->getMethodID(cls, "booleanValue", "()Z");
        mids$[mid_compare_cd474d6e9545876f] = env->getStaticMethodID(cls, "compare", "(ZZ)I");
        mids$[mid_compareTo_d7ba12d6c676053e] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Boolean;)I");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBoolean_df4c65b2aede5c41] = env->getStaticMethodID(cls, "getBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_e4d60fb80a5dfcf7] = env->getStaticMethodID(cls, "hashCode", "(Z)I");
        mids$[mid_logicalAnd_d30e0f24f88aecc2] = env->getStaticMethodID(cls, "logicalAnd", "(ZZ)Z");
        mids$[mid_logicalOr_d30e0f24f88aecc2] = env->getStaticMethodID(cls, "logicalOr", "(ZZ)Z");
        mids$[mid_logicalXor_d30e0f24f88aecc2] = env->getStaticMethodID(cls, "logicalXor", "(ZZ)Z");
        mids$[mid_parseBoolean_df4c65b2aede5c41] = env->getStaticMethodID(cls, "parseBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_512646e36b2b1871] = env->getStaticMethodID(cls, "toString", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_4a2666f127f8b9bb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
        mids$[mid_valueOf_f6bd68e4fc8ad43a] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/Boolean;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FALSE = new Boolean(env->getStaticObjectField(cls, "FALSE", "Ljava/lang/Boolean;"));
        TRUE = new Boolean(env->getStaticObjectField(cls, "TRUE", "Ljava/lang/Boolean;"));
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Boolean::Boolean(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Boolean::Boolean(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

    jboolean Boolean::booleanValue() const
    {
      return env->callBooleanMethod(this$, mids$[mid_booleanValue_eee3de00fe971136]);
    }

    jint Boolean::compare(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_cd474d6e9545876f], a0, a1);
    }

    jint Boolean::compareTo(const Boolean & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_d7ba12d6c676053e], a0.this$);
    }

    jboolean Boolean::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Boolean::getBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_getBoolean_df4c65b2aede5c41], a0.this$);
    }

    jint Boolean::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Boolean::hashCode(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_e4d60fb80a5dfcf7], a0);
    }

    jboolean Boolean::logicalAnd(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalAnd_d30e0f24f88aecc2], a0, a1);
    }

    jboolean Boolean::logicalOr(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalOr_d30e0f24f88aecc2], a0, a1);
    }

    jboolean Boolean::logicalXor(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalXor_d30e0f24f88aecc2], a0, a1);
    }

    jboolean Boolean::parseBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_parseBoolean_df4c65b2aede5c41], a0.this$);
    }

    ::java::lang::String Boolean::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Boolean::toString(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_512646e36b2b1871], a0));
    }

    Boolean Boolean::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a2666f127f8b9bb], a0.this$));
    }

    Boolean Boolean::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f6bd68e4fc8ad43a], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Boolean_booleanValue(t_Boolean *self);
    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg);
    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Boolean__methods_[] = {
      DECLARE_METHOD(t_Boolean, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, booleanValue, METH_NOARGS),
      DECLARE_METHOD(t_Boolean, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, compareTo, METH_O),
      DECLARE_METHOD(t_Boolean, equals, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, getBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalAnd, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalOr, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalXor, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, parseBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, toString, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Boolean)[] = {
      { Py_tp_methods, t_Boolean__methods_ },
      { Py_tp_init, (void *) t_Boolean_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Boolean)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Boolean, t_Boolean, Boolean);

    void t_Boolean::install(PyObject *module)
    {
      installType(&PY_TYPE(Boolean), &PY_TYPE_DEF(Boolean), module, "Boolean", 0);
    }

    void t_Boolean::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "class_", make_descriptor(Boolean::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "wrapfn_", make_descriptor(unboxBoolean));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "boxfn_", make_descriptor(boxBoolean));
      env->getClass(Boolean::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "FALSE", make_descriptor(t_Boolean::wrap_Object(*Boolean::FALSE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TRUE", make_descriptor(t_Boolean::wrap_Object(*Boolean::TRUE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Boolean::TYPE)));
    }

    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Boolean::initializeClass, 1)))
        return NULL;
      return t_Boolean::wrap_Object(Boolean(((t_Boolean *) arg)->object.this$));
    }
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Boolean::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Boolean(a0));
            self->object = object;
            break;
          }
        }
        {
          jboolean a0;
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = Boolean(a0));
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

    static PyObject *t_Boolean_booleanValue(t_Boolean *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.booleanValue());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jint result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg)
    {
      Boolean a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::getBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "getBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jint result;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalAnd(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalAnd", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalOr(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalOr", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalXor(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalXor", args);
      return NULL;
    }

    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::parseBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "parseBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A1::class$ = NULL;
          jmethodID *SubFrame4A1::mids$ = NULL;
          bool SubFrame4A1::live$ = false;

          jclass SubFrame4A1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A1");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A1__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A1, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A1)[] = {
            { Py_tp_methods, t_SubFrame4A1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A1, t_SubFrame4A1, SubFrame4A1);

          void t_SubFrame4A1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A1), &PY_TYPE_DEF(SubFrame4A1), module, "SubFrame4A1", 0);
          }

          void t_SubFrame4A1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "class_", make_descriptor(SubFrame4A1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "wrapfn_", make_descriptor(t_SubFrame4A1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A1::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A1::wrap_Object(SubFrame4A1(((t_SubFrame4A1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A1::initializeClass, 0))
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CjSjCoefficient::class$ = NULL;
            jmethodID *CjSjCoefficient::mids$ = NULL;
            bool CjSjCoefficient::live$ = false;

            jclass CjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_getCj_ce4c02d583456bc9] = env->getMethodID(cls, "getCj", "(I)D");
                mids$[mid_getDcjDh_ce4c02d583456bc9] = env->getMethodID(cls, "getDcjDh", "(I)D");
                mids$[mid_getDcjDk_ce4c02d583456bc9] = env->getMethodID(cls, "getDcjDk", "(I)D");
                mids$[mid_getDsjDh_ce4c02d583456bc9] = env->getMethodID(cls, "getDsjDh", "(I)D");
                mids$[mid_getDsjDk_ce4c02d583456bc9] = env->getMethodID(cls, "getDsjDk", "(I)D");
                mids$[mid_getSj_ce4c02d583456bc9] = env->getMethodID(cls, "getSj", "(I)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CjSjCoefficient::CjSjCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

            jdouble CjSjCoefficient::getCj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCj_ce4c02d583456bc9], a0);
            }

            jdouble CjSjCoefficient::getDcjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDh_ce4c02d583456bc9], a0);
            }

            jdouble CjSjCoefficient::getDcjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDk_ce4c02d583456bc9], a0);
            }

            jdouble CjSjCoefficient::getDsjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDh_ce4c02d583456bc9], a0);
            }

            jdouble CjSjCoefficient::getDsjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDk_ce4c02d583456bc9], a0);
            }

            jdouble CjSjCoefficient::getSj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSj_ce4c02d583456bc9], a0);
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
            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg);

            static PyMethodDef t_CjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_CjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CjSjCoefficient)[] = {
              { Py_tp_methods, t_CjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_CjSjCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CjSjCoefficient, t_CjSjCoefficient, CjSjCoefficient);

            void t_CjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(CjSjCoefficient), &PY_TYPE_DEF(CjSjCoefficient), module, "CjSjCoefficient", 0);
            }

            void t_CjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "class_", make_descriptor(CjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "wrapfn_", make_descriptor(t_CjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_CjSjCoefficient::wrap_Object(CjSjCoefficient(((t_CjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              CjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CjSjCoefficient(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
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
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PhaseCenterVariationFunction::mids$ = NULL;
        bool PhaseCenterVariationFunction::live$ = false;

        jclass PhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble PhaseCenterVariationFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args);

        static PyMethodDef t_PhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PhaseCenterVariationFunction, t_PhaseCenterVariationFunction, PhaseCenterVariationFunction);

        void t_PhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PhaseCenterVariationFunction), &PY_TYPE_DEF(PhaseCenterVariationFunction), module, "PhaseCenterVariationFunction", 0);
        }

        void t_PhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "class_", make_descriptor(PhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PhaseCenterVariationFunction::wrap_Object(PhaseCenterVariationFunction(((t_PhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadataKey::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadataKey::live$ = false;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COMMENT = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ORDERING = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_TYPE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_UNITS = NULL;

              jclass OrbitCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_8368abc699891e6c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_882144603665f51b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");
                  mids$[mid_values_eb7d683725b63c72] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_CONFIDENCE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_FRAME_EPOCH = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_NEXT_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ORDERING = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ORDERING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MAX = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MIN = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_UNITS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_8368abc699891e6c], a0.this$, a1.this$, a2.this$);
              }

              OrbitCovarianceHistoryMetadataKey OrbitCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_882144603665f51b], a0.this$));
              }

              JArray< OrbitCovarianceHistoryMetadataKey > OrbitCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_eb7d683725b63c72]));
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
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadataKey, t_OrbitCovarianceHistoryMetadataKey, OrbitCovarianceHistoryMetadataKey);
              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_Object(const OrbitCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadataKey), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey), module, "OrbitCovarianceHistoryMetadataKey", 0);
              }

              void t_OrbitCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "class_", make_descriptor(OrbitCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_CONFIDENCE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_FRAME_EPOCH", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_NEXT_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ORDERING", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ORDERING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MAX", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MIN", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_UNITS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_UNITS)));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(OrbitCovarianceHistoryMetadataKey(((t_OrbitCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegratorFactory::class$ = NULL;
          jmethodID *GaussIntegratorFactory::mids$ = NULL;
          bool GaussIntegratorFactory::live$ = false;
          jint GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS = (jint) 0;

          jclass GaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_hermite_d2e2397dcb38b683] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator;");
              mids$[mid_laguerre_3cd8f3d4140e4973] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_3cd8f3d4140e4973] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_2c123b04d0dd210d] = env->getMethodID(cls, "legendre", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_3cd8f3d4140e4973] = env->getMethodID(cls, "legendreHighPrecision", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_2c123b04d0dd210d] = env->getMethodID(cls, "legendreHighPrecision", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_DECIMAL_DIGITS = env->getStaticIntField(cls, "DEFAULT_DECIMAL_DIGITS");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegratorFactory::GaussIntegratorFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          GaussIntegratorFactory::GaussIntegratorFactory(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator GaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_d2e2397dcb38b683], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_3cd8f3d4140e4973], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_3cd8f3d4140e4973], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_2c123b04d0dd210d], a0, a1, a2));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_3cd8f3d4140e4973], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_2c123b04d0dd210d], a0, a1, a2));
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
          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args);

          static PyMethodDef t_GaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_GaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendre, METH_VARARGS),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendreHighPrecision, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegratorFactory)[] = {
            { Py_tp_methods, t_GaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_GaussIntegratorFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegratorFactory, t_GaussIntegratorFactory, GaussIntegratorFactory);

          void t_GaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegratorFactory), &PY_TYPE_DEF(GaussIntegratorFactory), module, "GaussIntegratorFactory", 0);
          }

          void t_GaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "class_", make_descriptor(GaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "wrapfn_", make_descriptor(t_GaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GaussIntegratorFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "DEFAULT_DECIMAL_DIGITS", make_descriptor(GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS));
          }

          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_GaussIntegratorFactory::wrap_Object(GaussIntegratorFactory(((t_GaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GaussIntegratorFactory object((jobject) NULL);

                INT_CALL(object = GaussIntegratorFactory());
                self->object = object;
                break;
              }
             case 1:
              {
                jint a0;
                GaussIntegratorFactory object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = GaussIntegratorFactory(a0));
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

          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricGaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendreHighPrecision", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayDeque.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Cloneable.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayDeque::class$ = NULL;
    jmethodID *ArrayDeque::mids$ = NULL;
    bool ArrayDeque::live$ = false;

    jclass ArrayDeque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayDeque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_83ee235bb1e64e94] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_83ee235bb1e64e94] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd72228722c581c] = env->getMethodID(cls, "clone", "()Ljava/util/ArrayDeque;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_704a5bee58538972] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_704a5bee58538972] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_704a5bee58538972] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_72faff9b05f5ed5e] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_72faff9b05f5ed5e] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_72faff9b05f5ed5e] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_704a5bee58538972] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_704a5bee58538972] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_704a5bee58538972] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_704a5bee58538972] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_704a5bee58538972] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_704a5bee58538972] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_704a5bee58538972] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_83ee235bb1e64e94] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_704a5bee58538972] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_removeFirst_704a5bee58538972] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_72faff9b05f5ed5e] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_704a5bee58538972] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_72faff9b05f5ed5e] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayDeque::ArrayDeque() : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ArrayDeque::ArrayDeque(jint a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    ArrayDeque::ArrayDeque(const ::java::util::Collection & a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

    jboolean ArrayDeque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayDeque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    void ArrayDeque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_83ee235bb1e64e94], a0.this$);
    }

    void ArrayDeque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_83ee235bb1e64e94], a0.this$);
    }

    void ArrayDeque::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ArrayDeque ArrayDeque::clone() const
    {
      return ArrayDeque(env->callObjectMethod(this$, mids$[mid_clone_dfd72228722c581c]));
    }

    jboolean ArrayDeque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Iterator ArrayDeque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4f613ccd2f803b4b]));
    }

    ::java::lang::Object ArrayDeque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_704a5bee58538972]));
    }

    jboolean ArrayDeque::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator ArrayDeque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jboolean ArrayDeque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayDeque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayDeque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object ArrayDeque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_704a5bee58538972]));
    }

    ::java::lang::Object ArrayDeque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_704a5bee58538972]));
    }

    void ArrayDeque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_83ee235bb1e64e94], a0.this$);
    }

    ::java::lang::Object ArrayDeque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_704a5bee58538972]));
    }

    jboolean ArrayDeque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayDeque::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_704a5bee58538972]));
    }

    jboolean ArrayDeque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_704a5bee58538972]));
    }

    jboolean ArrayDeque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayDeque::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    jint ArrayDeque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Spliterator ArrayDeque::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args);
    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data);
    static PyGetSetDef t_ArrayDeque__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayDeque, empty),
      DECLARE_GET_FIELD(t_ArrayDeque, first),
      DECLARE_GET_FIELD(t_ArrayDeque, last),
      DECLARE_GET_FIELD(t_ArrayDeque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayDeque__methods_[] = {
      DECLARE_METHOD(t_ArrayDeque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, addLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, element, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, offer, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, peek, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, poll, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pop, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, push, METH_O),
      DECLARE_METHOD(t_ArrayDeque, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayDeque)[] = {
      { Py_tp_methods, t_ArrayDeque__methods_ },
      { Py_tp_init, (void *) t_ArrayDeque_init_ },
      { Py_tp_getset, t_ArrayDeque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayDeque *)) get_generic_iterator< t_ArrayDeque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayDeque)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(ArrayDeque, t_ArrayDeque, ArrayDeque);
    PyObject *t_ArrayDeque::wrap_Object(const ArrayDeque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayDeque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayDeque::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayDeque), &PY_TYPE_DEF(ArrayDeque), module, "ArrayDeque", 0);
    }

    void t_ArrayDeque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "class_", make_descriptor(ArrayDeque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "wrapfn_", make_descriptor(t_ArrayDeque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayDeque::initializeClass, 1)))
        return NULL;
      return t_ArrayDeque::wrap_Object(ArrayDeque(((t_ArrayDeque *) arg)->object.this$));
    }
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayDeque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayDeque object((jobject) NULL);

          INT_CALL(object = ArrayDeque());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayDeque(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayDeque(a0));
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

    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self)
    {
      ArrayDeque result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return t_ArrayDeque::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinates::mids$ = NULL;
      bool TimeStampedFieldPVCoordinates::live$ = false;

      jclass TimeStampedFieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_67f19636afd354be] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_fa09e46e873e726a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_0aa97ac04cede617] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_994d2e3578155e05] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_1a643e79f8e148bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c5ff1427ec3d1116] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3727e4ad54f75af6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3ce2060bf23bfdba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_22937e1c2243bbfd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e4999eef1065a80e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4979dae8269d6e84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_05488b58b8e5070e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_527134f2ef873c5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_8a2daddc92952c07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_6c4c5dbb58428c5a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_18944c3417d2fba1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d07c68156b6b32fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d7882b8b569c0f77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_57a6988f279dd38f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_5816a44d07f5b717] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_60cd0f63dd8015dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d1c86b0bd31e465b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_32a527f3c9518a1f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_35571423c15035de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_51e267ce44ff6788] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c9a341eb582f3af4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_794bbb26cedc53bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_19ac316c55ba33ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_73e2ba3fc21278cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_5766c04e4da44017] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_af1559da377c492d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_5e6c70bdd0997f96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_322ad30e77cef5ec] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_shiftedBy_a7d0251e989dd50a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_244ea083ab9940d6] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTimeStampedPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_67f19636afd354be, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fa09e46e873e726a, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0aa97ac04cede617, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_994d2e3578155e05, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1a643e79f8e148bf, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c5ff1427ec3d1116, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3727e4ad54f75af6, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3ce2060bf23bfdba, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_22937e1c2243bbfd, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e4999eef1065a80e, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4979dae8269d6e84, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_05488b58b8e5070e, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_527134f2ef873c5d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8a2daddc92952c07, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6c4c5dbb58428c5a, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_18944c3417d2fba1, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d07c68156b6b32fc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d7882b8b569c0f77, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_57a6988f279dd38f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5816a44d07f5b717, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_60cd0f63dd8015dc, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d1c86b0bd31e465b, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_32a527f3c9518a1f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_35571423c15035de, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_51e267ce44ff6788, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c9a341eb582f3af4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_794bbb26cedc53bd, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_19ac316c55ba33ef, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_73e2ba3fc21278cb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5766c04e4da44017, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_af1559da377c492d, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5e6c70bdd0997f96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldPVCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_322ad30e77cef5ec], a0));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_a7d0251e989dd50a], a0.this$));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_244ea083ab9940d6], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TimeStampedFieldPVCoordinates::toTimeStampedPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_674031698a428ce8]));
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
      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toTimeStampedPVCoordinates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinates, t_TimeStampedFieldPVCoordinates, TimeStampedFieldPVCoordinates);
      PyObject *t_TimeStampedFieldPVCoordinates::wrap_Object(const TimeStampedFieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinates), &PY_TYPE_DEF(TimeStampedFieldPVCoordinates), module, "TimeStampedFieldPVCoordinates", 0);
      }

      void t_TimeStampedFieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "class_", make_descriptor(TimeStampedFieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinates::wrap_Object(TimeStampedFieldPVCoordinates(((t_TimeStampedFieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
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
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadataKey::class$ = NULL;
              jmethodID *OcmMetadataKey::mids$ = NULL;
              bool OcmMetadataKey::live$ = false;
              OcmMetadataKey *OcmMetadataKey::ADM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::ALTERNATE_NAMES = NULL;
              OcmMetadataKey *OcmMetadataKey::CATALOG_NAME = NULL;
              OcmMetadataKey *OcmMetadataKey::CDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::CELESTIAL_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::CONSTELLATION = NULL;
              OcmMetadataKey *OcmMetadataKey::COUNTRY = NULL;
              OcmMetadataKey *OcmMetadataKey::EOP_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::EPOCH_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERP_METHOD_EOP = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_TYPE = NULL;
              OcmMetadataKey *OcmMetadataKey::OCM_DATA_ELEMENTS = NULL;
              OcmMetadataKey *OcmMetadataKey::OPERATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OPS_STATUS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORBIT_CATEGORY = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::OWNER = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::PRM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::RDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_OFFSET_AT_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_SEC_PER_SI_SEC = NULL;
              OcmMetadataKey *OcmMetadataKey::START_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::STOP_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::TAIMUTC_AT_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::TDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ORG = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::TIME_SPAN = NULL;
              OcmMetadataKey *OcmMetadataKey::UT1MUTC_AT_TZERO = NULL;

              jclass OcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_f14709dd7f59910d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;)Z");
                  mids$[mid_valueOf_1e3d1166deaef77c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");
                  mids$[mid_values_f640d15914fde6d4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ALTERNATE_NAMES = new OcmMetadataKey(env->getStaticObjectField(cls, "ALTERNATE_NAMES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CATALOG_NAME = new OcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "CDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CELESTIAL_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "CELESTIAL_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CONSTELLATION = new OcmMetadataKey(env->getStaticObjectField(cls, "CONSTELLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  COUNTRY = new OcmMetadataKey(env->getStaticObjectField(cls, "COUNTRY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EOP_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "EOP_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EPOCH_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERP_METHOD_EOP = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERP_METHOD_EOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_TYPE = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OCM_DATA_ELEMENTS = new OcmMetadataKey(env->getStaticObjectField(cls, "OCM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPERATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OPERATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPS_STATUS = new OcmMetadataKey(env->getStaticObjectField(cls, "OPS_STATUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORBIT_CATEGORY = new OcmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CATEGORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OWNER = new OcmMetadataKey(env->getStaticObjectField(cls, "OWNER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PRM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "PRM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  RDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "RDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_OFFSET_AT_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_OFFSET_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_SEC_PER_SI_SEC = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_SEC_PER_SI_SEC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  START_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  STOP_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "TDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ORG = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ORG", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TIME_SPAN = new OcmMetadataKey(env->getStaticObjectField(cls, "TIME_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  UT1MUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "UT1MUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_f14709dd7f59910d], a0.this$, a1.this$, a2.this$);
              }

              OcmMetadataKey OcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1e3d1166deaef77c], a0.this$));
              }

              JArray< OcmMetadataKey > OcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f640d15914fde6d4]));
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
              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data);
              static PyGetSetDef t_OcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadataKey)[] = {
                { Py_tp_methods, t_OcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmMetadataKey, t_OcmMetadataKey, OcmMetadataKey);
              PyObject *t_OcmMetadataKey::wrap_Object(const OcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadataKey), &PY_TYPE_DEF(OcmMetadataKey), module, "OcmMetadataKey", 0);
              }

              void t_OcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "class_", make_descriptor(OcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "wrapfn_", make_descriptor(t_OcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ADM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ALTERNATE_NAMES", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ALTERNATE_NAMES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CATALOG_NAME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CELESTIAL_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CELESTIAL_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CONSTELLATION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CONSTELLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "COUNTRY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::COUNTRY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EOP_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EOP_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERP_METHOD_EOP", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERP_METHOD_EOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_TYPE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OCM_DATA_ELEMENTS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OCM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPERATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPERATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPS_STATUS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPS_STATUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORBIT_CATEGORY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORBIT_CATEGORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OWNER", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OWNER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PRM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PRM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "RDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::RDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_OFFSET_AT_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_OFFSET_AT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_SEC_PER_SI_SEC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_SEC_PER_SI_SEC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "START_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "STOP_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TAIMUTC_AT_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ORG", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ORG)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TIME_SPAN", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TIME_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "UT1MUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::UT1MUTC_AT_TZERO)));
              }

              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadataKey::wrap_Object(OcmMetadataKey(((t_OcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::valueOf(a0));
                  return t_OcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data)
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
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *InputStreamEncodedMessage::class$ = NULL;
          jmethodID *InputStreamEncodedMessage::mids$ = NULL;
          bool InputStreamEncodedMessage::live$ = false;

          jclass InputStreamEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/InputStreamEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f4bef0679d2f8d5] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InputStreamEncodedMessage::InputStreamEncodedMessage(const ::java::io::InputStream & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_8f4bef0679d2f8d5, a0.this$)) {}
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
          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_InputStreamEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_InputStreamEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InputStreamEncodedMessage, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InputStreamEncodedMessage)[] = {
            { Py_tp_methods, t_InputStreamEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_InputStreamEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InputStreamEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(InputStreamEncodedMessage, t_InputStreamEncodedMessage, InputStreamEncodedMessage);

          void t_InputStreamEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(InputStreamEncodedMessage), &PY_TYPE_DEF(InputStreamEncodedMessage), module, "InputStreamEncodedMessage", 0);
          }

          void t_InputStreamEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "class_", make_descriptor(InputStreamEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "wrapfn_", make_descriptor(t_InputStreamEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InputStreamEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_InputStreamEncodedMessage::wrap_Object(InputStreamEncodedMessage(((t_InputStreamEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InputStreamEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::io::InputStream a0((jobject) NULL);
            InputStreamEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
            {
              INT_CALL(object = InputStreamEncodedMessage(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile::class$ = NULL;
        jmethodID *STKEphemerisFile::mids$ = NULL;
        bool STKEphemerisFile::live$ = false;

        jclass STKEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13dc0383f794fc36] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/stk/STKEphemerisFile$STKEphemeris;)V");
            mids$[mid_getSTKVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getSTKVersion", "()Ljava/lang/String;");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile::STKEphemerisFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13dc0383f794fc36, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String STKEphemerisFile::getSTKVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSTKVersion_d2c8eb4129821f0e]));
        }

        ::java::util::Map STKEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data);
        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data);
        static PyGetSetDef t_STKEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile, sTKVersion),
          DECLARE_GET_FIELD(t_STKEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, getSTKVersion, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile)[] = {
          { Py_tp_methods, t_STKEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile_init_ },
          { Py_tp_getset, t_STKEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile, t_STKEphemerisFile, STKEphemerisFile);

        void t_STKEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile), &PY_TYPE_DEF(STKEphemerisFile), module, "STKEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKCoordinateSystem", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemeris", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemerisSegment", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment)));
        }

        void t_STKEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "class_", make_descriptor(STKEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "wrapfn_", make_descriptor(t_STKEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile::wrap_Object(STKEphemerisFile(((t_STKEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris a2((jobject) NULL);
          STKEphemerisFile object((jobject) NULL);

          if (!parseArgs(args, "ssk", ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = STKEphemerisFile(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSTKVersion());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemeris));
        }

        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSTKVersion());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceKey::class$ = NULL;
            jmethodID *CartesianCovarianceKey::mids$ = NULL;
            bool CartesianCovarianceKey::live$ = false;
            CartesianCovarianceKey *CartesianCovarianceKey::COMMENT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::COV_REF_FRAME = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::EPOCH = NULL;

            jclass CartesianCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_0bf15d1aa6f3acdf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)Z");
                mids$[mid_valueOf_ab032209186096bd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");
                mids$[mid_values_85585952912af5d6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                COV_REF_FRAME = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                EPOCH = new CartesianCovarianceKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CartesianCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_0bf15d1aa6f3acdf], a0.this$, a1.this$, a2.this$);
            }

            CartesianCovarianceKey CartesianCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CartesianCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab032209186096bd], a0.this$));
            }

            JArray< CartesianCovarianceKey > CartesianCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CartesianCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_85585952912af5d6]));
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
            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data);
            static PyGetSetDef t_CartesianCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceKey)[] = {
              { Py_tp_methods, t_CartesianCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CartesianCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceKey, t_CartesianCovarianceKey, CartesianCovarianceKey);
            PyObject *t_CartesianCovarianceKey::wrap_Object(const CartesianCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CartesianCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CartesianCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceKey), &PY_TYPE_DEF(CartesianCovarianceKey), module, "CartesianCovarianceKey", 0);
            }

            void t_CartesianCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "class_", make_descriptor(CartesianCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "wrapfn_", make_descriptor(t_CartesianCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CartesianCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COMMENT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COV_REF_FRAME", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "EPOCH", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::EPOCH)));
            }

            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceKey::wrap_Object(CartesianCovarianceKey(((t_CartesianCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CartesianCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::valueOf(a0));
                return t_CartesianCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type)
            {
              JArray< CartesianCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_CartesianCovarianceKey::wrap_jobject);
            }
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
