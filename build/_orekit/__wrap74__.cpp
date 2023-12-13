#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *LocalizedOptimFormats::class$ = NULL;
      jmethodID *LocalizedOptimFormats::mids$ = NULL;
      bool LocalizedOptimFormats::live$ = false;
      LocalizedOptimFormats *LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::INVALID_IMPLEMENTATION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::NO_FEASIBLE_SOLUTION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TRUST_REGION_STEP_FAILED = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNBOUNDED_SOLUTION = NULL;

      jclass LocalizedOptimFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/LocalizedOptimFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_f461d0645ba4f9df] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/LocalizedOptimFormats;");
          mids$[mid_values_e1aadff530aec15a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/LocalizedOptimFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQUAL_VERTICES_IN_SIMPLEX = new LocalizedOptimFormats(env->getStaticObjectField(cls, "EQUAL_VERTICES_IN_SIMPLEX", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          INVALID_IMPLEMENTATION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "INVALID_IMPLEMENTATION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          NO_FEASIBLE_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "NO_FEASIBLE_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          SIMPLEX_NEED_ONE_POINT = new LocalizedOptimFormats(env->getStaticObjectField(cls, "SIMPLEX_NEED_ONE_POINT", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_COST_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_COST_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_ORTHOGONALITY_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_ORTHOGONALITY_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TRUST_REGION_STEP_FAILED = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TRUST_REGION_STEP_FAILED", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_SOLVE_SINGULAR_PROBLEM = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNBOUNDED_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNBOUNDED_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedOptimFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String LocalizedOptimFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      LocalizedOptimFormats LocalizedOptimFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedOptimFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f461d0645ba4f9df], a0.this$));
      }

      JArray< LocalizedOptimFormats > LocalizedOptimFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedOptimFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_e1aadff530aec15a]));
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
      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self);
      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data);
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data);
      static PyGetSetDef t_LocalizedOptimFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedOptimFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedOptimFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedOptimFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedOptimFormats)[] = {
        { Py_tp_methods, t_LocalizedOptimFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedOptimFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedOptimFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedOptimFormats, t_LocalizedOptimFormats, LocalizedOptimFormats);
      PyObject *t_LocalizedOptimFormats::wrap_Object(const LocalizedOptimFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedOptimFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedOptimFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedOptimFormats), &PY_TYPE_DEF(LocalizedOptimFormats), module, "LocalizedOptimFormats", 0);
      }

      void t_LocalizedOptimFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "class_", make_descriptor(LocalizedOptimFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "wrapfn_", make_descriptor(t_LocalizedOptimFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedOptimFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "EQUAL_VERTICES_IN_SIMPLEX", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "INVALID_IMPLEMENTATION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::INVALID_IMPLEMENTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "NO_FEASIBLE_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::NO_FEASIBLE_SOLUTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "SIMPLEX_NEED_ONE_POINT", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_COST_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_ORTHOGONALITY_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TRUST_REGION_STEP_FAILED", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TRUST_REGION_STEP_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNBOUNDED_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNBOUNDED_SOLUTION)));
      }

      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedOptimFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedOptimFormats::wrap_Object(LocalizedOptimFormats(((t_LocalizedOptimFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedOptimFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedOptimFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::valueOf(a0));
          return t_LocalizedOptimFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedOptimFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedOptimFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data)
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
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *TrapezoidIntegrator::class$ = NULL;
        jmethodID *TrapezoidIntegrator::mids$ = NULL;
        bool TrapezoidIntegrator::live$ = false;
        jint TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass TrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/TrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_5408957787adf55f] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TrapezoidIntegrator::TrapezoidIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5408957787adf55f, a0, a1, a2, a3)) {}
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
        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_TrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_TrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrapezoidIntegrator)[] = {
          { Py_tp_methods, t_TrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_TrapezoidIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(TrapezoidIntegrator, t_TrapezoidIntegrator, TrapezoidIntegrator);

        void t_TrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrapezoidIntegrator), &PY_TYPE_DEF(TrapezoidIntegrator), module, "TrapezoidIntegrator", 0);
        }

        void t_TrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "class_", make_descriptor(TrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "wrapfn_", make_descriptor(t_TrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(TrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_TrapezoidIntegrator::wrap_Object(TrapezoidIntegrator(((t_TrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              TrapezoidIntegrator object((jobject) NULL);

              INT_CALL(object = TrapezoidIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1));
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
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1, a2, a3));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedIntConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedIntConsumer::mids$ = NULL;
            bool ParseToken$IndexedIntConsumer::live$ = false;

            jclass ParseToken$IndexedIntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_3313c75e3e16c428] = env->getMethodID(cls, "accept", "(II)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedIntConsumer::accept(jint a0, jint a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_3313c75e3e16c428], a0, a1);
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
            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedIntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedIntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedIntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedIntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedIntConsumer, t_ParseToken$IndexedIntConsumer, ParseToken$IndexedIntConsumer);

            void t_ParseToken$IndexedIntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedIntConsumer), &PY_TYPE_DEF(ParseToken$IndexedIntConsumer), module, "ParseToken$IndexedIntConsumer", 0);
            }

            void t_ParseToken$IndexedIntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "class_", make_descriptor(ParseToken$IndexedIntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedIntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedIntConsumer::wrap_Object(ParseToken$IndexedIntConsumer(((t_ParseToken$IndexedIntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;

              if (!parseArgs(args, "II", &a0, &a1))
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
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SsrVtecIonosphericModel::class$ = NULL;
          jmethodID *SsrVtecIonosphericModel::mids$ = NULL;
          bool SsrVtecIonosphericModel::live$ = false;

          jclass SsrVtecIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5bafb67a92804099] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SsrVtecIonosphericModel::SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bafb67a92804099, a0.this$)) {}

          ::java::util::List SsrVtecIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self);
          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args);
          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data);
          static PyGetSetDef t_SsrVtecIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_SsrVtecIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SsrVtecIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_SsrVtecIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SsrVtecIonosphericModel)[] = {
            { Py_tp_methods, t_SsrVtecIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_SsrVtecIonosphericModel_init_ },
            { Py_tp_getset, t_SsrVtecIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SsrVtecIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SsrVtecIonosphericModel, t_SsrVtecIonosphericModel, SsrVtecIonosphericModel);

          void t_SsrVtecIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SsrVtecIonosphericModel), &PY_TYPE_DEF(SsrVtecIonosphericModel), module, "SsrVtecIonosphericModel", 0);
          }

          void t_SsrVtecIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "class_", make_descriptor(SsrVtecIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "wrapfn_", make_descriptor(t_SsrVtecIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SsrVtecIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_SsrVtecIonosphericModel::wrap_Object(SsrVtecIonosphericModel(((t_SsrVtecIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SsrVtecIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 a0((jobject) NULL);
            PyTypeObject **p0;
            SsrVtecIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201::initializeClass, &a0, &p0, ::org::orekit::gnss::metric::messages::ssr::subtype::t_SsrIm201::parameters_))
            {
              INT_CALL(object = SsrVtecIonosphericModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonFieldInterpolationGrid::class$ = NULL;
            jmethodID *PythonFieldInterpolationGrid::mids$ = NULL;
            bool PythonFieldInterpolationGrid::live$ = false;

            jclass PythonFieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_396bc2ac62d7d47a] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldInterpolationGrid::PythonFieldInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonFieldInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonFieldInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonFieldInterpolationGrid::pythonExtension(jlong a0) const
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
          namespace utilities {
            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self);
            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data);
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonFieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, self),
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonFieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonFieldInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonFieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldInterpolationGrid, t_PythonFieldInterpolationGrid, PythonFieldInterpolationGrid);
            PyObject *t_PythonFieldInterpolationGrid::wrap_Object(const PythonFieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldInterpolationGrid), &PY_TYPE_DEF(PythonFieldInterpolationGrid), module, "PythonFieldInterpolationGrid", 1);
            }

            void t_PythonFieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "class_", make_descriptor(PythonFieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "wrapfn_", make_descriptor(t_PythonFieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonFieldInterpolationGrid::wrap_Object(PythonFieldInterpolationGrid(((t_PythonFieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonFieldInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
              PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data)
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
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmData::class$ = NULL;
              jmethodID *AcmData::mids$ = NULL;
              bool AcmData::live$ = false;

              jclass AcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6ce4ddf0ec24098a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getAttitudeBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAttitudeBlocks", "()Ljava/util/List;");
                  mids$[mid_getAttitudeDeterminationBlock_adfc0fd0f6504ca8] = env->getMethodID(cls, "getAttitudeDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;");
                  mids$[mid_getCovarianceBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getPhysicBlock_3f83339f870dc50a] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;");
                  mids$[mid_getUserDefinedBlock_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmData::AcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ce4ddf0ec24098a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              ::java::util::List AcmData::getAttitudeBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeBlocks_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination AcmData::getAttitudeDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination(env->callObjectMethod(this$, mids$[mid_getAttitudeDeterminationBlock_adfc0fd0f6504ca8]));
              }

              ::java::util::List AcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_e62d3bb06d56d7e3]));
              }

              ::java::util::List AcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties AcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_3f83339f870dc50a]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined AcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_757fcfae3141e23d]));
              }

              void AcmData::validate(jdouble a0) const
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
            namespace acm {
              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self);
              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self);
              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self);
              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg);
              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data);
              static PyGetSetDef t_AcmData__fields_[] = {
                DECLARE_GET_FIELD(t_AcmData, attitudeBlocks),
                DECLARE_GET_FIELD(t_AcmData, attitudeDeterminationBlock),
                DECLARE_GET_FIELD(t_AcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_AcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_AcmData, physicBlock),
                DECLARE_GET_FIELD(t_AcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmData__methods_[] = {
                DECLARE_METHOD(t_AcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, getAttitudeBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getAttitudeDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmData)[] = {
                { Py_tp_methods, t_AcmData__methods_ },
                { Py_tp_init, (void *) t_AcmData_init_ },
                { Py_tp_getset, t_AcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmData, t_AcmData, AcmData);

              void t_AcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmData), &PY_TYPE_DEF(AcmData), module, "AcmData", 0);
              }

              void t_AcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "class_", make_descriptor(AcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "wrapfn_", make_descriptor(t_AcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmData::initializeClass, 1)))
                  return NULL;
                return t_AcmData::wrap_Object(AcmData(((t_AcmData *) arg)->object.this$));
              }
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                AcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5))
                {
                  INT_CALL(object = AcmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(result);
              }

              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovarianceHistory));
              }

              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeManeuver));
              }

              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg)
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

              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data)
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
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceKeplerianHermiteInterpolator::class$ = NULL;
      jmethodID *StateCovarianceKeplerianHermiteInterpolator::mids$ = NULL;
      bool StateCovarianceKeplerianHermiteInterpolator::live$ = false;

      jclass StateCovarianceKeplerianHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ac9d81a5646e175e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_07fdac11114440b0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_93de8e1158ca3ae4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_9c4efe655306d62f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_2513faaabed5c727] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_fbfee31331c0e07f] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_c95dd8261457f030] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_0669fc90c2a9f156] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_6e94f93e19d6364d] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::LOFType & a1) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ac9d81a5646e175e, a0.this$, a1.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_07fdac11114440b0, a0, a1.this$, a2.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_93de8e1158ca3ae4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9c4efe655306d62f, a0, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2513faaabed5c727, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::LOFType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fbfee31331c0e07f, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_c95dd8261457f030, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::Frame & a4, const ::org::orekit::orbits::OrbitType & a5, const ::org::orekit::orbits::PositionAngleType & a6) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0669fc90c2a9f156, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter StateCovarianceKeplerianHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
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
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args);
      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyGetSetDef t_StateCovarianceKeplerianHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceKeplerianHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceKeplerianHermiteInterpolator)[] = {
        { Py_tp_methods, t_StateCovarianceKeplerianHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceKeplerianHermiteInterpolator_init_ },
        { Py_tp_getset, t_StateCovarianceKeplerianHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceKeplerianHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceKeplerianHermiteInterpolator, t_StateCovarianceKeplerianHermiteInterpolator, StateCovarianceKeplerianHermiteInterpolator);
      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(const StateCovarianceKeplerianHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), &PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator), module, "StateCovarianceKeplerianHermiteInterpolator", 0);
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "class_", make_descriptor(StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "wrapfn_", make_descriptor(t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(StateCovarianceKeplerianHermiteInterpolator(((t_StateCovarianceKeplerianHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::orbits::OrbitType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::LOFType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::Frame a4((jobject) NULL);
            ::org::orekit::orbits::OrbitType a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &a5, &p5, ::org::orekit::orbits::t_OrbitType::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GNSSDate::class$ = NULL;
      jmethodID *GNSSDate::mids$ = NULL;
      bool GNSSDate::live$ = false;

      jclass GNSSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GNSSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_460e3cbac92b81c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_c2fc6034b56e038c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_de6f9a13eca5764a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_eb78c67fa56638d0] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_c372ae533369c432] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMilliInWeek_b74f83833fdad017] = env->getMethodID(cls, "getMilliInWeek", "()D");
          mids$[mid_getRolloverReference_357436921b6db81c] = env->getStaticMethodID(cls, "getRolloverReference", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getSecondsInWeek_b74f83833fdad017] = env->getMethodID(cls, "getSecondsInWeek", "()D");
          mids$[mid_getWeekNumber_55546ef6a647f39b] = env->getMethodID(cls, "getWeekNumber", "()I");
          mids$[mid_setRolloverReference_a97e9138404c69cd] = env->getStaticMethodID(cls, "setRolloverReference", "(Lorg/orekit/time/DateComponents;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_460e3cbac92b81c9, a0.this$, a1.this$)) {}

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c2fc6034b56e038c, a0.this$, a1.this$, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de6f9a13eca5764a, a0, a1, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb78c67fa56638d0, a0, a1, a2.this$, a3.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c372ae533369c432, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate GNSSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble GNSSDate::getMilliInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMilliInWeek_b74f83833fdad017]);
      }

      ::org::orekit::time::DateComponents GNSSDate::getRolloverReference()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::DateComponents(env->callStaticObjectMethod(cls, mids$[mid_getRolloverReference_357436921b6db81c]));
      }

      jdouble GNSSDate::getSecondsInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInWeek_b74f83833fdad017]);
      }

      jint GNSSDate::getWeekNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getWeekNumber_55546ef6a647f39b]);
      }

      void GNSSDate::setRolloverReference(const ::org::orekit::time::DateComponents & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setRolloverReference_a97e9138404c69cd], a0.this$);
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
      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type);
      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self);
      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data);
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data);
      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data);
      static PyGetSetDef t_GNSSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GNSSDate, date),
        DECLARE_GET_FIELD(t_GNSSDate, milliInWeek),
        DECLARE_GETSET_FIELD(t_GNSSDate, rolloverReference),
        DECLARE_GET_FIELD(t_GNSSDate, secondsInWeek),
        DECLARE_GET_FIELD(t_GNSSDate, weekNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GNSSDate__methods_[] = {
        DECLARE_METHOD(t_GNSSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getMilliInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getRolloverReference, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getSecondsInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getWeekNumber, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, setRolloverReference, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GNSSDate)[] = {
        { Py_tp_methods, t_GNSSDate__methods_ },
        { Py_tp_init, (void *) t_GNSSDate_init_ },
        { Py_tp_getset, t_GNSSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GNSSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GNSSDate, t_GNSSDate, GNSSDate);

      void t_GNSSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GNSSDate), &PY_TYPE_DEF(GNSSDate), module, "GNSSDate", 0);
      }

      void t_GNSSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "class_", make_descriptor(GNSSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "wrapfn_", make_descriptor(t_GNSSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GNSSDate::initializeClass, 1)))
          return NULL;
        return t_GNSSDate::wrap_Object(GNSSDate(((t_GNSSDate *) arg)->object.this$));
      }
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GNSSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKkk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3, &a4))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3, a4));
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

      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::GNSSDate::getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getWeekNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::GNSSDate::setRolloverReference(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setRolloverReference", arg);
        return NULL;
      }

      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
          {
            INT_CALL(self->object.setRolloverReference(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "rolloverReference", arg);
        return -1;
      }

      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getWeekNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LeastSquaresConverter::class$ = NULL;
          jmethodID *LeastSquaresConverter::mids$ = NULL;
          bool LeastSquaresConverter::live$ = false;

          jclass LeastSquaresConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f1031fef074cb1b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D)V");
              mids$[mid_init$_320ab255c7d24db5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D[D)V");
              mids$[mid_init$_43c579500c4567be] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[DLorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_value_b060e4326765ccf1] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1031fef074cb1b3, a0.this$, a1.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_320ab255c7d24db5, a0.this$, a1.this$, a2.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43c579500c4567be, a0.this$, a1.this$, a2.this$)) {}

          jdouble LeastSquaresConverter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_b060e4326765ccf1], a0.this$);
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
          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg);

          static PyMethodDef t_LeastSquaresConverter__methods_[] = {
            DECLARE_METHOD(t_LeastSquaresConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LeastSquaresConverter)[] = {
            { Py_tp_methods, t_LeastSquaresConverter__methods_ },
            { Py_tp_init, (void *) t_LeastSquaresConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LeastSquaresConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LeastSquaresConverter, t_LeastSquaresConverter, LeastSquaresConverter);

          void t_LeastSquaresConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(LeastSquaresConverter), &PY_TYPE_DEF(LeastSquaresConverter), module, "LeastSquaresConverter", 0);
          }

          void t_LeastSquaresConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "class_", make_descriptor(LeastSquaresConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "wrapfn_", make_descriptor(t_LeastSquaresConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LeastSquaresConverter::initializeClass, 1)))
              return NULL;
            return t_LeastSquaresConverter::wrap_Object(LeastSquaresConverter(((t_LeastSquaresConverter *) arg)->object.this$));
          }
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LeastSquaresConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
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

          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *Ephemeris::class$ = NULL;
        jmethodID *Ephemeris::mids$ = NULL;
        bool Ephemeris::live$ = false;

        jclass Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_33800eba82168d94] = env->getMethodID(cls, "<init>", "(Ljava/util/List;I)V");
            mids$[mid_init$_a270f372b14e8ccf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_76b7d84534d086f1] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_29c95222b0ba8aa4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_1984a4ea061303a5] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_basicPropagate_4f0008999861ca31] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_checkInputConsistency_29c95222b0ba8aa4] = env->getStaticMethodID(cls, "checkInputConsistency", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_checkStatesAndCovariancesConsistency_29c3e061cbeaa98b] = env->getStaticMethodID(cls, "checkStatesAndCovariancesConsistency", "(Ljava/util/List;Ljava/util/List;)V");
            mids$[mid_getCovariance_9a244c8ef0b05dc0] = env->getMethodID(cls, "getCovariance", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/Optional;");
            mids$[mid_getCovarianceInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getCovarianceInterpolator", "()Ljava/util/Optional;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStateInterpolator_04638ce011c1f261] = env->getMethodID(cls, "getStateInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
            mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ephemeris::Ephemeris(const ::java::util::List & a0, jint a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_33800eba82168d94, a0.this$, a1)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a270f372b14e8ccf, a0.this$, a1.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_76b7d84534d086f1, a0.this$, a1.this$, a2.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_29c95222b0ba8aa4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1984a4ea061303a5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::SpacecraftState Ephemeris::basicPropagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_basicPropagate_4f0008999861ca31], a0.this$));
        }

        void Ephemeris::checkInputConsistency(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkInputConsistency_29c95222b0ba8aa4], a0.this$, a1.this$, a2.this$, a3.this$);
        }

        void Ephemeris::checkStatesAndCovariancesConsistency(const ::java::util::List & a0, const ::java::util::List & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkStatesAndCovariancesConsistency_29c3e061cbeaa98b], a0.this$, a1.this$);
        }

        ::java::util::Optional Ephemeris::getCovariance(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovariance_9a244c8ef0b05dc0], a0.this$));
        }

        ::java::util::Optional Ephemeris::getCovarianceInterpolator() const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovarianceInterpolator_9fe5189c8c3b230d]));
        }

        ::org::orekit::frames::Frame Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::propagation::SpacecraftState Ephemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
        }

        JArray< ::java::lang::String > Ephemeris::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        ::org::orekit::time::TimeInterpolator Ephemeris::getStateInterpolator() const
        {
          return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getStateInterpolator_04638ce011c1f261]));
        }

        jboolean Ephemeris::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
        }

        void Ephemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data);
        static PyGetSetDef t_Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_Ephemeris, covarianceInterpolator),
          DECLARE_GET_FIELD(t_Ephemeris, frame),
          DECLARE_GET_FIELD(t_Ephemeris, initialState),
          DECLARE_GET_FIELD(t_Ephemeris, managedAdditionalStates),
          DECLARE_GET_FIELD(t_Ephemeris, maxDate),
          DECLARE_GET_FIELD(t_Ephemeris, minDate),
          DECLARE_GET_FIELD(t_Ephemeris, stateInterpolator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Ephemeris__methods_[] = {
          DECLARE_METHOD(t_Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, basicPropagate, METH_O),
          DECLARE_METHOD(t_Ephemeris, checkInputConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, checkStatesAndCovariancesConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, getCovariance, METH_O),
          DECLARE_METHOD(t_Ephemeris, getCovarianceInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getStateInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ephemeris)[] = {
          { Py_tp_methods, t_Ephemeris__methods_ },
          { Py_tp_init, (void *) t_Ephemeris_init_ },
          { Py_tp_getset, t_Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ephemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(Ephemeris, t_Ephemeris, Ephemeris);

        void t_Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(Ephemeris), &PY_TYPE_DEF(Ephemeris), module, "Ephemeris", 0);
        }

        void t_Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "class_", make_descriptor(Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "wrapfn_", make_descriptor(t_Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ephemeris::initializeClass, 1)))
            return NULL;
          return t_Ephemeris::wrap_Object(Ephemeris(((t_Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3, a4));
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

        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.basicPropagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "basicPropagate", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkInputConsistency(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkInputConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkStatesAndCovariancesConsistency(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkStatesAndCovariancesConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::util::Optional result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getCovariance(a0));
            return ::java::util::t_Optional::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(StateCovariance));
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self)
        {
          ::java::util::Optional result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self)
        {
          ::org::orekit::time::TimeInterpolator result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data)
        {
          ::java::util::Optional value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::TimeInterpolator value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateFunction::mids$ = NULL;
      bool CalculusFieldUnivariateFunction::live$ = false;

      jclass CalculusFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateFunction, t_CalculusFieldUnivariateFunction, CalculusFieldUnivariateFunction);
      PyObject *t_CalculusFieldUnivariateFunction::wrap_Object(const CalculusFieldUnivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateFunction), &PY_TYPE_DEF(CalculusFieldUnivariateFunction), module, "CalculusFieldUnivariateFunction", 0);
      }

      void t_CalculusFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "class_", make_descriptor(CalculusFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateFunction::wrap_Object(CalculusFieldUnivariateFunction(((t_CalculusFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *TimeSystem::class$ = NULL;
      jmethodID *TimeSystem::mids$ = NULL;
      bool TimeSystem::live$ = false;
      TimeSystem *TimeSystem::BEIDOU = NULL;
      TimeSystem *TimeSystem::GALILEO = NULL;
      TimeSystem *TimeSystem::GLONASS = NULL;
      TimeSystem *TimeSystem::GMT = NULL;
      TimeSystem *TimeSystem::GPS = NULL;
      TimeSystem *TimeSystem::IRNSS = NULL;
      TimeSystem *TimeSystem::QZSS = NULL;
      TimeSystem *TimeSystem::SBAS = NULL;
      TimeSystem *TimeSystem::TAI = NULL;
      TimeSystem *TimeSystem::UNKNOWN = NULL;
      TimeSystem *TimeSystem::UTC = NULL;

      jclass TimeSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/TimeSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getTimeScale_d429fb7b5ff8192c] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_parseOneLetterCode_da16e21e6c32114e] = env->getStaticMethodID(cls, "parseOneLetterCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTimeSystem_da16e21e6c32114e] = env->getStaticMethodID(cls, "parseTimeSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTwoLettersCode_da16e21e6c32114e] = env->getStaticMethodID(cls, "parseTwoLettersCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_valueOf_da16e21e6c32114e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_values_e10ea8986e8f1ce2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/TimeSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new TimeSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/TimeSystem;"));
          GALILEO = new TimeSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/TimeSystem;"));
          GLONASS = new TimeSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/TimeSystem;"));
          GMT = new TimeSystem(env->getStaticObjectField(cls, "GMT", "Lorg/orekit/gnss/TimeSystem;"));
          GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/TimeSystem;"));
          IRNSS = new TimeSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/TimeSystem;"));
          QZSS = new TimeSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/TimeSystem;"));
          SBAS = new TimeSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/TimeSystem;"));
          TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/gnss/TimeSystem;"));
          UNKNOWN = new TimeSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/gnss/TimeSystem;"));
          UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/gnss/TimeSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TimeSystem::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::time::TimeScale TimeSystem::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_d429fb7b5ff8192c], a0.this$));
      }

      TimeSystem TimeSystem::parseOneLetterCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseOneLetterCode_da16e21e6c32114e], a0.this$));
      }

      TimeSystem TimeSystem::parseTimeSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTimeSystem_da16e21e6c32114e], a0.this$));
      }

      TimeSystem TimeSystem::parseTwoLettersCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTwoLettersCode_da16e21e6c32114e], a0.this$));
      }

      TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_da16e21e6c32114e], a0.this$));
      }

      JArray< TimeSystem > TimeSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_e10ea8986e8f1ce2]));
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
      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self);
      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg);
      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeSystem_values(PyTypeObject *type);
      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data);
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
      static PyGetSetDef t_TimeSystem__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSystem, key),
        DECLARE_GET_FIELD(t_TimeSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSystem__methods_[] = {
        DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_TimeSystem, getTimeScale, METH_O),
        DECLARE_METHOD(t_TimeSystem, parseOneLetterCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTimeSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTwoLettersCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
        { Py_tp_methods, t_TimeSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
      PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
      }

      void t_TimeSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "BEIDOU", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GALILEO", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GLONASS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "IRNSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "QZSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SBAS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UNKNOWN", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UNKNOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
      }

      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
          return NULL;
        return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
      }
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseOneLetterCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseOneLetterCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTimeSystem(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTimeSystem", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTwoLettersCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTwoLettersCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::valueOf(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_TimeSystem_values(PyTypeObject *type)
      {
        JArray< TimeSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::values());
        return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
      }
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCycleSlipDetector::class$ = NULL;
          jmethodID *GeometryFreeCycleSlipDetector::mids$ = NULL;
          bool GeometryFreeCycleSlipDetector::live$ = false;

          jclass GeometryFreeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
              mids$[mid_manageData_e95b94a72b1c921a] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometryFreeCycleSlipDetector::GeometryFreeCycleSlipDetector(jdouble a0, jdouble a1, jint a2) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}
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
          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_GeometryFreeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCycleSlipDetector)[] = {
            { Py_tp_methods, t_GeometryFreeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_GeometryFreeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCycleSlipDetector, t_GeometryFreeCycleSlipDetector, GeometryFreeCycleSlipDetector);

          void t_GeometryFreeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCycleSlipDetector), &PY_TYPE_DEF(GeometryFreeCycleSlipDetector), module, "GeometryFreeCycleSlipDetector", 0);
          }

          void t_GeometryFreeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "class_", make_descriptor(GeometryFreeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "wrapfn_", make_descriptor(t_GeometryFreeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCycleSlipDetector::wrap_Object(GeometryFreeCycleSlipDetector(((t_GeometryFreeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            GeometryFreeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = GeometryFreeCycleSlipDetector(a0, a1, a2));
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
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LoessInterpolator::class$ = NULL;
        jmethodID *LoessInterpolator::mids$ = NULL;
        bool LoessInterpolator::live$ = false;
        jdouble LoessInterpolator::DEFAULT_ACCURACY = (jdouble) 0;
        jdouble LoessInterpolator::DEFAULT_BANDWIDTH = (jdouble) 0;
        jint LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS = (jint) 0;

        jclass LoessInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LoessInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_d2215b3b0e5c9451] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_interpolate_4b522051166e7218] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_smooth_1badeb24cd1b9588] = env->getMethodID(cls, "smooth", "([D[D)[D");
            mids$[mid_smooth_73e979d38ef87a99] = env->getMethodID(cls, "smooth", "([D[D[D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ACCURACY");
            DEFAULT_BANDWIDTH = env->getStaticDoubleField(cls, "DEFAULT_BANDWIDTH");
            DEFAULT_ROBUSTNESS_ITERS = env->getStaticIntField(cls, "DEFAULT_ROBUSTNESS_ITERS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LoessInterpolator::LoessInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2215b3b0e5c9451, a0, a1, a2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LoessInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_4b522051166e7218], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_1badeb24cd1b9588], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_73e979d38ef87a99], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args);
        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args);

        static PyMethodDef t_LoessInterpolator__methods_[] = {
          DECLARE_METHOD(t_LoessInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, interpolate, METH_VARARGS),
          DECLARE_METHOD(t_LoessInterpolator, smooth, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LoessInterpolator)[] = {
          { Py_tp_methods, t_LoessInterpolator__methods_ },
          { Py_tp_init, (void *) t_LoessInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LoessInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LoessInterpolator, t_LoessInterpolator, LoessInterpolator);

        void t_LoessInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LoessInterpolator), &PY_TYPE_DEF(LoessInterpolator), module, "LoessInterpolator", 0);
        }

        void t_LoessInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "class_", make_descriptor(LoessInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "wrapfn_", make_descriptor(t_LoessInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(LoessInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ACCURACY", make_descriptor(LoessInterpolator::DEFAULT_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_BANDWIDTH", make_descriptor(LoessInterpolator::DEFAULT_BANDWIDTH));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ROBUSTNESS_ITERS", make_descriptor(LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS));
        }

        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LoessInterpolator::initializeClass, 1)))
            return NULL;
          return t_LoessInterpolator::wrap_Object(LoessInterpolator(((t_LoessInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LoessInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LoessInterpolator object((jobject) NULL);

              INT_CALL(object = LoessInterpolator());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = LoessInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = LoessInterpolator(a0, a1, a2));
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

        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }

        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1));
                return result.wrap();
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "smooth", args);
          return NULL;
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEpochDelayCorrection_b74f83833fdad017] = env->getMethodID(cls, "getEpochDelayCorrection", "()D");
            mids$[mid_getFrequencySource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFrequencySource", "()Ljava/lang/String;");
            mids$[mid_getLocalTimingId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalTimingId", "()Ljava/lang/String;");
            mids$[mid_getTimeSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTimeSource", "()Ljava/lang/String;");
            mids$[mid_getTimer_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTimer", "()Ljava/lang/String;");
            mids$[mid_getTimerSerialNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTimerSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setEpochDelayCorrection_8ba9fe7a847cecad] = env->getMethodID(cls, "setEpochDelayCorrection", "(D)V");
            mids$[mid_setFrequencySource_734b91ac30d5f9b4] = env->getMethodID(cls, "setFrequencySource", "(Ljava/lang/String;)V");
            mids$[mid_setLocalTimingId_734b91ac30d5f9b4] = env->getMethodID(cls, "setLocalTimingId", "(Ljava/lang/String;)V");
            mids$[mid_setTimeSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setTimeSource", "(Ljava/lang/String;)V");
            mids$[mid_setTimer_734b91ac30d5f9b4] = env->getMethodID(cls, "setTimer", "(Ljava/lang/String;)V");
            mids$[mid_setTimerSerialNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setTimerSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TimingSystemConfiguration::CRDConfiguration$TimingSystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble CRDConfiguration$TimingSystemConfiguration::getEpochDelayCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochDelayCorrection_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getFrequencySource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrequencySource_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getLocalTimingId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalTimingId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimeSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSource_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimer_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimerSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimerSerialNumber_1c1fa1e935d6cdcf]));
        }

        void CRDConfiguration$TimingSystemConfiguration::setEpochDelayCorrection(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochDelayCorrection_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$TimingSystemConfiguration::setFrequencySource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFrequencySource_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setLocalTimingId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLocalTimingId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimeSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSource_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimer_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimerSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimerSerialNumber_734b91ac30d5f9b4], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toString() const
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldMultivariateVectorFunction::live$ = false;

      jclass CalculusFieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_1cc99f34da9b4a7b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_1cc99f34da9b4a7b], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateVectorFunction, t_CalculusFieldMultivariateVectorFunction, CalculusFieldMultivariateVectorFunction);
      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_Object(const CalculusFieldMultivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction), module, "CalculusFieldMultivariateVectorFunction", 0);
      }

      void t_CalculusFieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "class_", make_descriptor(CalculusFieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateVectorFunction::wrap_Object(CalculusFieldMultivariateVectorFunction(((t_CalculusFieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedPVCoordinates::mids$ = NULL;
      bool TimeStampedPVCoordinates::live$ = false;

      jclass TimeStampedPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8efeb57fde24921f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_a6070c42868c5d8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_851a055d87a1592a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_1e47dd5ffc56db57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_82104ca8525f109d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e4bf4a0667705a20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_1a989c3a0adebecc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_ce6aad1c634aaa44] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7963227a1d3edf49] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_b32704ef18d6aef9] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_2ee13d9bd10373d0] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTaylorProvider_2d5eb094f644b70b] = env->getMethodID(cls, "toTaylorProvider", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8efeb57fde24921f, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a6070c42868c5d8c, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_851a055d87a1592a, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1e47dd5ffc56db57, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_82104ca8525f109d, a0.this$, a1, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e4bf4a0667705a20, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1a989c3a0adebecc, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ce6aad1c634aaa44, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6, jdouble a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7963227a1d3edf49, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedPVCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      TimeStampedPVCoordinates TimeStampedPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_b32704ef18d6aef9], a0));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2ee13d9bd10373d0], a0.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider TimeStampedPVCoordinates::toTaylorProvider(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_2d5eb094f644b70b], a0.this$));
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
      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self);
      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toTaylorProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinates, t_TimeStampedPVCoordinates, TimeStampedPVCoordinates);

      void t_TimeStampedPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinates), &PY_TYPE_DEF(TimeStampedPVCoordinates), module, "TimeStampedPVCoordinates", 0);
      }

      void t_TimeStampedPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "class_", make_descriptor(TimeStampedPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinates::wrap_Object(TimeStampedPVCoordinates(((t_TimeStampedPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            jdouble a7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args)
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

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toTaylorProvider(a0));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toTaylorProvider", arg);
        return NULL;
      }

      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data)
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
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearEvolution::class$ = NULL;
          jmethodID *NonLinearEvolution::mids$ = NULL;
          bool NonLinearEvolution::live$ = false;

          jclass NonLinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5f7165eb5b30b8f1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentState_3a10cc75bd070d84] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_b74f83833fdad017] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_f77d745f2128c391] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NonLinearEvolution::NonLinearEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f7165eb5b30b8f1, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector NonLinearEvolution::getCurrentState() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCurrentState_3a10cc75bd070d84]));
          }

          jdouble NonLinearEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_b74f83833fdad017]);
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_f77d745f2128c391]));
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
          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data);
          static PyGetSetDef t_NonLinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentState),
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentTime),
            DECLARE_GET_FIELD(t_NonLinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_NonLinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_NonLinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearEvolution__methods_[] = {
            DECLARE_METHOD(t_NonLinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentState, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearEvolution)[] = {
            { Py_tp_methods, t_NonLinearEvolution__methods_ },
            { Py_tp_init, (void *) t_NonLinearEvolution_init_ },
            { Py_tp_getset, t_NonLinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearEvolution, t_NonLinearEvolution, NonLinearEvolution);

          void t_NonLinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearEvolution), &PY_TYPE_DEF(NonLinearEvolution), module, "NonLinearEvolution", 0);
          }

          void t_NonLinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "class_", make_descriptor(NonLinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "wrapfn_", make_descriptor(t_NonLinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearEvolution::initializeClass, 1)))
              return NULL;
            return t_NonLinearEvolution::wrap_Object(NonLinearEvolution(((t_NonLinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            NonLinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "Dkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = NonLinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *JacobianFunction::class$ = NULL;
        jmethodID *JacobianFunction::mids$ = NULL;
        bool JacobianFunction::live$ = false;

        jclass JacobianFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/JacobianFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8d561d56ecbeac9c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction;)V");
            mids$[mid_value_7e7c2ec7e6e555ee] = env->getMethodID(cls, "value", "([D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianFunction::JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d561d56ecbeac9c, a0.this$)) {}

        JArray< JArray< jdouble > > JacobianFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_7e7c2ec7e6e555ee], a0.this$));
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
        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg);

        static PyMethodDef t_JacobianFunction__methods_[] = {
          DECLARE_METHOD(t_JacobianFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianFunction)[] = {
          { Py_tp_methods, t_JacobianFunction__methods_ },
          { Py_tp_init, (void *) t_JacobianFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(JacobianFunction, t_JacobianFunction, JacobianFunction);

        void t_JacobianFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianFunction), &PY_TYPE_DEF(JacobianFunction), module, "JacobianFunction", 0);
        }

        void t_JacobianFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "class_", make_descriptor(JacobianFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "wrapfn_", make_descriptor(t_JacobianFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianFunction::initializeClass, 1)))
            return NULL;
          return t_JacobianFunction::wrap_Object(JacobianFunction(((t_JacobianFunction *) arg)->object.this$));
        }
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction a0((jobject) NULL);
          JacobianFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction::initializeClass, &a0))
          {
            INT_CALL(object = JacobianFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
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
                mids$[mid_convert2DigitsYear_0e7cf35192c3effe] = env->getStaticMethodID(cls, "convert2DigitsYear", "(I)I");
                mids$[mid_getLabel_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "getLabel", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_matchesLabel_e7bf5b93f9300a4f] = env->getStaticMethodID(cls, "matchesLabel", "(Ljava/lang/String;Ljava/lang/String;)Z");
                mids$[mid_parseComment_f2c374ea04e18089] = env->getStaticMethodID(cls, "parseComment", "(ILjava/lang/String;Lorg/orekit/files/rinex/RinexFile;)V");
                mids$[mid_parseDouble_7d79724e4f59c240] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;II)D");
                mids$[mid_parseInt_2e817907107bad64] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;II)I");
                mids$[mid_parseProgramRunByDate_29ae31375ddb62b3] = env->getStaticMethodID(cls, "parseProgramRunByDate", "(Ljava/lang/String;ILjava/lang/String;Lorg/orekit/time/TimeScales;Lorg/orekit/files/rinex/section/RinexBaseHeader;)V");
                mids$[mid_parseString_25c58a005fb431eb] = env->getStaticMethodID(cls, "parseString", "(Ljava/lang/String;II)Ljava/lang/String;");
                mids$[mid_parseVersionFileTypeSatelliteSystem_14bfb28ba8b3d689] = env->getStaticMethodID(cls, "parseVersionFileTypeSatelliteSystem", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/rinex/section/RinexBaseHeader;[D)V");

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
              return env->callStaticIntMethod(cls, mids$[mid_convert2DigitsYear_0e7cf35192c3effe], a0);
            }

            ::java::lang::String RinexUtils::getLabel(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getLabel_6f0f3576df9f75ee], a0.this$));
            }

            jboolean RinexUtils::matchesLabel(const ::java::lang::String & a0, const ::java::lang::String & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticBooleanMethod(cls, mids$[mid_matchesLabel_e7bf5b93f9300a4f], a0.this$, a1.this$);
            }

            void RinexUtils::parseComment(jint a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::RinexFile & a2)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseComment_f2c374ea04e18089], a0, a1.this$, a2.this$);
            }

            jdouble RinexUtils::parseDouble(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_7d79724e4f59c240], a0.this$, a1, a2);
            }

            jint RinexUtils::parseInt(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_parseInt_2e817907107bad64], a0.this$, a1, a2);
            }

            void RinexUtils::parseProgramRunByDate(const ::java::lang::String & a0, jint a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::files::rinex::section::RinexBaseHeader & a4)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseProgramRunByDate_29ae31375ddb62b3], a0.this$, a1, a2.this$, a3.this$, a4.this$);
            }

            ::java::lang::String RinexUtils::parseString(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_parseString_25c58a005fb431eb], a0.this$, a1, a2));
            }

            void RinexUtils::parseVersionFileTypeSatelliteSystem(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::section::RinexBaseHeader & a2, const JArray< jdouble > & a3)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseVersionFileTypeSatelliteSystem_14bfb28ba8b3d689], a0.this$, a1.this$, a2.this$, a3.this$);
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
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAdditionalStateProvider::class$ = NULL;
      jmethodID *FieldAdditionalStateProvider::mids$ = NULL;
      bool FieldAdditionalStateProvider::live$ = false;

      jclass FieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_eaf6bc2191c5b1b4] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_yields_e6d9e841ca2e035c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldAdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_eaf6bc2191c5b1b4], a0.this$));
      }

      ::java::lang::String FieldAdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      void FieldAdditionalStateProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
      }

      jboolean FieldAdditionalStateProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_e6d9e841ca2e035c], a0.this$);
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
      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self);
      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data);
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_FieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, name),
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_FieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_FieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAdditionalStateProvider, t_FieldAdditionalStateProvider, FieldAdditionalStateProvider);
      PyObject *t_FieldAdditionalStateProvider::wrap_Object(const FieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAdditionalStateProvider), &PY_TYPE_DEF(FieldAdditionalStateProvider), module, "FieldAdditionalStateProvider", 0);
      }

      void t_FieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "class_", make_descriptor(FieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_FieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_FieldAdditionalStateProvider::wrap_Object(FieldAdditionalStateProvider(((t_FieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data)
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
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerAndMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerAndMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerAndMultiplexer::live$ = false;

      jclass ConvergenceCheckerAndMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerAndMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_061aaa68e115701e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerAndMultiplexer::ConvergenceCheckerAndMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

      jboolean ConvergenceCheckerAndMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_061aaa68e115701e], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerAndMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerAndMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerAndMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerAndMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerAndMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerAndMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerAndMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerAndMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerAndMultiplexer, t_ConvergenceCheckerAndMultiplexer, ConvergenceCheckerAndMultiplexer);
      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_Object(const ConvergenceCheckerAndMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerAndMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerAndMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer), module, "ConvergenceCheckerAndMultiplexer", 0);
      }

      void t_ConvergenceCheckerAndMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "class_", make_descriptor(ConvergenceCheckerAndMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerAndMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerAndMultiplexer::wrap_Object(ConvergenceCheckerAndMultiplexer(((t_ConvergenceCheckerAndMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerAndMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerAndMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
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
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeBuilder::class$ = NULL;
      jmethodID *PythonAttitudeBuilder::mids$ = NULL;
      bool PythonAttitudeBuilder::live$ = false;

      jclass PythonAttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_build_52f3b2bb0d5542f2] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_ac690f9e371807c4] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeBuilder::PythonAttitudeBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAttitudeBuilder::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAttitudeBuilder::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAttitudeBuilder::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self);
      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data);
      static PyGetSetDef t_PythonAttitudeBuilder__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeBuilder, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeBuilder)[] = {
        { Py_tp_methods, t_PythonAttitudeBuilder__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeBuilder_init_ },
        { Py_tp_getset, t_PythonAttitudeBuilder__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeBuilder, t_PythonAttitudeBuilder, PythonAttitudeBuilder);

      void t_PythonAttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeBuilder), &PY_TYPE_DEF(PythonAttitudeBuilder), module, "PythonAttitudeBuilder", 1);
      }

      void t_PythonAttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "class_", make_descriptor(PythonAttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "wrapfn_", make_descriptor(t_PythonAttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeBuilder::initializeClass);
        JNINativeMethod methods[] = {
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeBuilder_build0 },
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeBuilder_build1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeBuilder_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeBuilder::wrap_Object(PythonAttitudeBuilder(((t_PythonAttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeBuilder object((jobject) NULL);

        INT_CALL(object = PythonAttitudeBuilder());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
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

      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedFieldAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
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

      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *AttitudeEphemerisFileWriter::mids$ = NULL;
        bool AttitudeEphemerisFileWriter::live$ = false;

        jclass AttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_7b09bd6f9cb0afe3] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");
            mids$[mid_write_50a488c23b217f54] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_7b09bd6f9cb0afe3], a0.this$, a1.this$);
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_50a488c23b217f54], a0.this$, a1.this$);
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
        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_AttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileWriter, t_AttitudeEphemerisFileWriter, AttitudeEphemerisFileWriter);

        void t_AttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileWriter), &PY_TYPE_DEF(AttitudeEphemerisFileWriter), module, "AttitudeEphemerisFileWriter", 0);
        }

        void t_AttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "class_", make_descriptor(AttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileWriter::wrap_Object(AttitudeEphemerisFileWriter(((t_AttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
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
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1243::Rtcm1243(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
#include "org/orekit/data/DataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataLoader::class$ = NULL;
      jmethodID *DataLoader::mids$ = NULL;
      bool DataLoader::live$ = false;

      jclass DataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
      }

      jboolean DataLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args);
      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self);

      static PyMethodDef t_DataLoader__methods_[] = {
        DECLARE_METHOD(t_DataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_DataLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataLoader)[] = {
        { Py_tp_methods, t_DataLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataLoader, t_DataLoader, DataLoader);

      void t_DataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(DataLoader), &PY_TYPE_DEF(DataLoader), module, "DataLoader", 0);
      }

      void t_DataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "class_", make_descriptor(DataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "wrapfn_", make_descriptor(t_DataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataLoader::initializeClass, 1)))
          return NULL;
        return t_DataLoader::wrap_Object(DataLoader(((t_DataLoader *) arg)->object.this$));
      }
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionNewtonForm::class$ = NULL;
        jmethodID *PolynomialFunctionNewtonForm::mids$ = NULL;
        bool PolynomialFunctionNewtonForm::live$ = false;

        jclass PolynomialFunctionNewtonForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_55546ef6a647f39b] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_5427cadc72cd59f7] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCenters_25e1757a36c4dde2] = env->getMethodID(cls, "getCenters", "()[D");
            mids$[mid_getCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getNewtonCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getNewtonCoefficients", "()[D");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_computeCoefficients_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeCoefficients", "()V");
            mids$[mid_verifyInputArray_b15baa0161a4e9c7] = env->getStaticMethodID(cls, "verifyInputArray", "([D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionNewtonForm::PolynomialFunctionNewtonForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

        jint PolynomialFunctionNewtonForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_55546ef6a647f39b]);
        }

        jdouble PolynomialFunctionNewtonForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_5427cadc72cd59f7], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCenters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenters_25e1757a36c4dde2]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_25e1757a36c4dde2]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getNewtonCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNewtonCoefficients_25e1757a36c4dde2]));
        }

        jdouble PolynomialFunctionNewtonForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunctionNewtonForm::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunctionNewtonForm::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace polynomials {
        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionNewtonForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, centers),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, newtonCoefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionNewtonForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCenters, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getNewtonCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionNewtonForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionNewtonForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionNewtonForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionNewtonForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionNewtonForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionNewtonForm, t_PolynomialFunctionNewtonForm, PolynomialFunctionNewtonForm);

        void t_PolynomialFunctionNewtonForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionNewtonForm), &PY_TYPE_DEF(PolynomialFunctionNewtonForm), module, "PolynomialFunctionNewtonForm", 0);
        }

        void t_PolynomialFunctionNewtonForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "class_", make_descriptor(PolynomialFunctionNewtonForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "wrapfn_", make_descriptor(t_PolynomialFunctionNewtonForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionNewtonForm::wrap_Object(PolynomialFunctionNewtonForm(((t_PolynomialFunctionNewtonForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionNewtonForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionNewtonForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenters());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewtonCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args)
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

        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenters());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewtonCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Quaternion::class$ = NULL;
      jmethodID *Quaternion::mids$ = NULL;
      bool Quaternion::live$ = false;
      Quaternion *Quaternion::I = NULL;
      Quaternion *Quaternion::IDENTITY = NULL;
      Quaternion *Quaternion::J = NULL;
      Quaternion *Quaternion::K = NULL;
      Quaternion *Quaternion::ZERO = NULL;

      jclass Quaternion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Quaternion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_d606d0c99c70c093] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
          mids$[mid_add_01ac48796580219f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_add_b69a97c51c98fa2e] = env->getStaticMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_dotProduct_24198900daf3a400] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_dotProduct_da75e7ed21a401a1] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_63b840827824f2cb] = env->getMethodID(cls, "equals", "(Lorg/hipparchus/complex/Quaternion;D)Z");
          mids$[mid_getConjugate_6890e724ec73e493] = env->getMethodID(cls, "getConjugate", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getInverse_6890e724ec73e493] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getPositivePolarForm_6890e724ec73e493] = env->getMethodID(cls, "getPositivePolarForm", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getQ0_b74f83833fdad017] = env->getMethodID(cls, "getQ0", "()D");
          mids$[mid_getQ1_b74f83833fdad017] = env->getMethodID(cls, "getQ1", "()D");
          mids$[mid_getQ2_b74f83833fdad017] = env->getMethodID(cls, "getQ2", "()D");
          mids$[mid_getQ3_b74f83833fdad017] = env->getMethodID(cls, "getQ3", "()D");
          mids$[mid_getScalarPart_b74f83833fdad017] = env->getMethodID(cls, "getScalarPart", "()D");
          mids$[mid_getVectorPart_25e1757a36c4dde2] = env->getMethodID(cls, "getVectorPart", "()[D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isPureQuaternion_716249baa52d209e] = env->getMethodID(cls, "isPureQuaternion", "(D)Z");
          mids$[mid_isUnitQuaternion_716249baa52d209e] = env->getMethodID(cls, "isUnitQuaternion", "(D)Z");
          mids$[mid_multiply_01ac48796580219f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_91809ff51dea6aaf] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_b69a97c51c98fa2e] = env->getStaticMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_normalize_6890e724ec73e493] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_01ac48796580219f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_b69a97c51c98fa2e] = env->getStaticMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Quaternion(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Quaternion;"));
          IDENTITY = new Quaternion(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/complex/Quaternion;"));
          J = new Quaternion(env->getStaticObjectField(cls, "J", "Lorg/hipparchus/complex/Quaternion;"));
          K = new Quaternion(env->getStaticObjectField(cls, "K", "Lorg/hipparchus/complex/Quaternion;"));
          ZERO = new Quaternion(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Quaternion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Quaternion::Quaternion(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      Quaternion::Quaternion(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d606d0c99c70c093, a0, a1.this$)) {}

      Quaternion::Quaternion(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

      Quaternion Quaternion::add(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_add_01ac48796580219f], a0.this$));
      }

      Quaternion Quaternion::add(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_add_b69a97c51c98fa2e], a0.this$, a1.this$));
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_24198900daf3a400], a0.this$);
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_da75e7ed21a401a1], a0.this$, a1.this$);
      }

      jboolean Quaternion::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jboolean Quaternion::equals(const Quaternion & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_63b840827824f2cb], a0.this$, a1);
      }

      Quaternion Quaternion::getConjugate() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getConjugate_6890e724ec73e493]));
      }

      Quaternion Quaternion::getInverse() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getInverse_6890e724ec73e493]));
      }

      jdouble Quaternion::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
      }

      Quaternion Quaternion::getPositivePolarForm() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getPositivePolarForm_6890e724ec73e493]));
      }

      jdouble Quaternion::getQ0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ0_b74f83833fdad017]);
      }

      jdouble Quaternion::getQ1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ1_b74f83833fdad017]);
      }

      jdouble Quaternion::getQ2() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ2_b74f83833fdad017]);
      }

      jdouble Quaternion::getQ3() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ3_b74f83833fdad017]);
      }

      jdouble Quaternion::getScalarPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScalarPart_b74f83833fdad017]);
      }

      JArray< jdouble > Quaternion::getVectorPart() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVectorPart_25e1757a36c4dde2]));
      }

      jint Quaternion::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean Quaternion::isPureQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPureQuaternion_716249baa52d209e], a0);
      }

      jboolean Quaternion::isUnitQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isUnitQuaternion_716249baa52d209e], a0);
      }

      Quaternion Quaternion::multiply(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_01ac48796580219f], a0.this$));
      }

      Quaternion Quaternion::multiply(jdouble a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_91809ff51dea6aaf], a0));
      }

      Quaternion Quaternion::multiply(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_multiply_b69a97c51c98fa2e], a0.this$, a1.this$));
      }

      Quaternion Quaternion::normalize() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_normalize_6890e724ec73e493]));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_subtract_01ac48796580219f], a0.this$));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_subtract_b69a97c51c98fa2e], a0.this$, a1.this$));
      }

      ::java::lang::String Quaternion::toString() const
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
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self);
      static PyObject *t_Quaternion_getInverse(t_Quaternion *self);
      static PyObject *t_Quaternion_getNorm(t_Quaternion *self);
      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ0(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ1(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ2(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ3(t_Quaternion *self);
      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self);
      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self);
      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_normalize(t_Quaternion *self);
      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data);
      static PyGetSetDef t_Quaternion__fields_[] = {
        DECLARE_GET_FIELD(t_Quaternion, conjugate),
        DECLARE_GET_FIELD(t_Quaternion, inverse),
        DECLARE_GET_FIELD(t_Quaternion, norm),
        DECLARE_GET_FIELD(t_Quaternion, positivePolarForm),
        DECLARE_GET_FIELD(t_Quaternion, q0),
        DECLARE_GET_FIELD(t_Quaternion, q1),
        DECLARE_GET_FIELD(t_Quaternion, q2),
        DECLARE_GET_FIELD(t_Quaternion, q3),
        DECLARE_GET_FIELD(t_Quaternion, scalarPart),
        DECLARE_GET_FIELD(t_Quaternion, vectorPart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Quaternion__methods_[] = {
        DECLARE_METHOD(t_Quaternion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, add, METH_O),
        DECLARE_METHOD(t_Quaternion, add_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, dotProduct, METH_O),
        DECLARE_METHOD(t_Quaternion, dotProduct_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, equals, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, getConjugate, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getPositivePolarForm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ0, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ1, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ2, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ3, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getScalarPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getVectorPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, isPureQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, isUnitQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, multiply_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, subtract, METH_O),
        DECLARE_METHOD(t_Quaternion, subtract_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Quaternion)[] = {
        { Py_tp_methods, t_Quaternion__methods_ },
        { Py_tp_init, (void *) t_Quaternion_init_ },
        { Py_tp_getset, t_Quaternion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Quaternion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Quaternion, t_Quaternion, Quaternion);

      void t_Quaternion::install(PyObject *module)
      {
        installType(&PY_TYPE(Quaternion), &PY_TYPE_DEF(Quaternion), module, "Quaternion", 0);
      }

      void t_Quaternion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "class_", make_descriptor(Quaternion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "wrapfn_", make_descriptor(t_Quaternion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "boxfn_", make_descriptor(boxObject));
        env->getClass(Quaternion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "I", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "IDENTITY", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::IDENTITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "J", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::J)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "K", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "ZERO", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::ZERO)));
      }

      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Quaternion::initializeClass, 1)))
          return NULL;
        return t_Quaternion::wrap_Object(Quaternion(((t_Quaternion *) arg)->object.this$));
      }
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Quaternion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Quaternion(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = Quaternion(a0, a1));
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
            jdouble a3;
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Quaternion(a0, a1, a2, a3));
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

      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::add(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "add_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::dotProduct(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "dotProduct_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 2:
          {
            Quaternion a0((jobject) NULL);
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "kD", Quaternion::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getConjugate());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getInverse(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getNorm(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getQ0(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ1(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ2(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ2());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ3(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ3());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScalarPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVectorPart());
        return result.wrap();
      }

      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isPureQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isPureQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isUnitQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isUnitQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Quaternion a0((jobject) NULL);
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "k", Quaternion::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::multiply(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "multiply_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_normalize(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::subtract(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "subtract_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getConjugate());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ2());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ3());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScalarPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVectorPart());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealLinearOperator::class$ = NULL;
      jmethodID *RealLinearOperator::mids$ = NULL;
      bool RealLinearOperator::live$ = false;

      jclass RealLinearOperator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealLinearOperator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isTransposable_9ab94ac1dc23b105] = env->getMethodID(cls, "isTransposable", "()Z");
          mids$[mid_operate_d5f1d017fd25113b] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_operateTranspose_d5f1d017fd25113b] = env->getMethodID(cls, "operateTranspose", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint RealLinearOperator::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      jint RealLinearOperator::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      jboolean RealLinearOperator::isTransposable() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isTransposable_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operateTranspose(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operateTranspose_d5f1d017fd25113b], a0.this$));
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
      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data);
      static PyGetSetDef t_RealLinearOperator__fields_[] = {
        DECLARE_GET_FIELD(t_RealLinearOperator, columnDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, rowDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, transposable),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealLinearOperator__methods_[] = {
        DECLARE_METHOD(t_RealLinearOperator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, isTransposable, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, operate, METH_O),
        DECLARE_METHOD(t_RealLinearOperator, operateTranspose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealLinearOperator)[] = {
        { Py_tp_methods, t_RealLinearOperator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealLinearOperator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealLinearOperator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealLinearOperator, t_RealLinearOperator, RealLinearOperator);

      void t_RealLinearOperator::install(PyObject *module)
      {
        installType(&PY_TYPE(RealLinearOperator), &PY_TYPE_DEF(RealLinearOperator), module, "RealLinearOperator", 0);
      }

      void t_RealLinearOperator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "class_", make_descriptor(RealLinearOperator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "wrapfn_", make_descriptor(t_RealLinearOperator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealLinearOperator::initializeClass, 1)))
          return NULL;
        return t_RealLinearOperator::wrap_Object(RealLinearOperator(((t_RealLinearOperator *) arg)->object.this$));
      }
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealLinearOperator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isTransposable());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operateTranspose(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operateTranspose", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isTransposable());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
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

              ::java::lang::Class *Rtcm1240::class$ = NULL;
              jmethodID *Rtcm1240::mids$ = NULL;
              bool Rtcm1240::live$ = false;

              jclass Rtcm1240::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1240::Rtcm1240(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args);
              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data);
              static PyGetSetDef t_Rtcm1240__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1240, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1240__methods_[] = {
                DECLARE_METHOD(t_Rtcm1240, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1240)[] = {
                { Py_tp_methods, t_Rtcm1240__methods_ },
                { Py_tp_init, (void *) t_Rtcm1240_init_ },
                { Py_tp_getset, t_Rtcm1240__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1240)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1240, t_Rtcm1240, Rtcm1240);
              PyObject *t_Rtcm1240::wrap_Object(const Rtcm1240& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1240::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1240::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1240), &PY_TYPE_DEF(Rtcm1240), module, "Rtcm1240", 0);
              }

              void t_Rtcm1240::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "class_", make_descriptor(Rtcm1240::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "wrapfn_", make_descriptor(t_Rtcm1240::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1240::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1240::wrap_Object(Rtcm1240(((t_Rtcm1240 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1240::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1240 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1240(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data)
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
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedProvider::class$ = NULL;
      jmethodID *TabulatedProvider::mids$ = NULL;
      bool TabulatedProvider::live$ = false;

      jclass TabulatedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_27d82222e71f7d6a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_64e2df2033784a10] = env->getMethodID(cls, "<init>", "(Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/attitudes/AttitudeBuilder;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedProvider::TabulatedProvider(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27d82222e71f7d6a, a0.this$, a1.this$, a2, a3.this$)) {}

      TabulatedProvider::TabulatedProvider(const ::java::util::List & a0, jint a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::attitudes::AttitudeBuilder & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64e2df2033784a10, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
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
      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args);
      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data);
      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data);
      static PyGetSetDef t_TabulatedProvider__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedProvider, maxDate),
        DECLARE_GET_FIELD(t_TabulatedProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedProvider__methods_[] = {
        DECLARE_METHOD(t_TabulatedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedProvider)[] = {
        { Py_tp_methods, t_TabulatedProvider__methods_ },
        { Py_tp_init, (void *) t_TabulatedProvider_init_ },
        { Py_tp_getset, t_TabulatedProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedProvider, t_TabulatedProvider, TabulatedProvider);

      void t_TabulatedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedProvider), &PY_TYPE_DEF(TabulatedProvider), module, "TabulatedProvider", 0);
      }

      void t_TabulatedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "class_", make_descriptor(TabulatedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "wrapfn_", make_descriptor(t_TabulatedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedProvider::initializeClass, 1)))
          return NULL;
        return t_TabulatedProvider::wrap_Object(TabulatedProvider(((t_TabulatedProvider *) arg)->object.this$));
      }
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::attitudes::AttitudeBuilder a5((jobject) NULL);
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "KIKkkk", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeBuilder::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args)
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

      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
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
              mids$[mid_init$_b7725844b852e1f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/extended/NonLinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_de0fd16eb0d97034] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ExtendedKalmanFilter::ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_b7725844b852e1f6, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate ExtendedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_de0fd16eb0d97034], a0.this$));
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
