#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader::class$ = NULL;
      jmethodID *ITRFVersionLoader::mids$ = NULL;
      bool ITRFVersionLoader::live$ = false;
      ::java::lang::String *ITRFVersionLoader::SUPPORTED_NAMES = NULL;

      jclass ITRFVersionLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getConfiguration_2cd40ae1f6a1f844] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader::ITRFVersionLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ITRFVersionLoader::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_2cd40ae1f6a1f844], a0.this$, a1));
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
      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args);

      static PyMethodDef t_ITRFVersionLoader__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader)[] = {
        { Py_tp_methods, t_ITRFVersionLoader__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader, t_ITRFVersionLoader, ITRFVersionLoader);

      void t_ITRFVersionLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader), &PY_TYPE_DEF(ITRFVersionLoader), module, "ITRFVersionLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "ITRFVersionConfiguration", make_descriptor(&PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration)));
      }

      void t_ITRFVersionLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "class_", make_descriptor(ITRFVersionLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "wrapfn_", make_descriptor(t_ITRFVersionLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersionLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "SUPPORTED_NAMES", make_descriptor(j2p(*ITRFVersionLoader::SUPPORTED_NAMES)));
      }

      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader::wrap_Object(ITRFVersionLoader(((t_ITRFVersionLoader *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ITRFVersionLoader object((jobject) NULL);

            INT_CALL(object = ITRFVersionLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ITRFVersionLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ITRFVersionLoader(a0, a1));
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

      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseOptimizer::class$ = NULL;
      jmethodID *BaseOptimizer::mids$ = NULL;
      bool BaseOptimizer::live$ = false;

      jclass BaseOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_ecb318336ebe4cc7] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getMaxIterations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_optimize_704a5bee58538972] = env->getMethodID(cls, "optimize", "()Ljava/lang/Object;");
          mids$[mid_optimize_7c1cfcae8b9ddcfc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
          mids$[mid_incrementEvaluationCount_ff7cb6c242604316] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
          mids$[mid_doOptimize_704a5bee58538972] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_incrementIterationCount_ff7cb6c242604316] = env->getMethodID(cls, "incrementIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker BaseOptimizer::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_ecb318336ebe4cc7]));
      }

      jint BaseOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      jint BaseOptimizer::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
      }

      jint BaseOptimizer::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
      }

      jint BaseOptimizer::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_d6ab429752e7c267]);
      }

      ::java::lang::Object BaseOptimizer::optimize() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_704a5bee58538972]));
      }

      ::java::lang::Object BaseOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
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
      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data);
      static PyGetSetDef t_BaseOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseOptimizer, convergenceChecker),
        DECLARE_GET_FIELD(t_BaseOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, iterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxEvaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxIterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseOptimizer, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseOptimizer)[] = {
        { Py_tp_methods, t_BaseOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseOptimizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseOptimizer, t_BaseOptimizer, BaseOptimizer);
      PyObject *t_BaseOptimizer::wrap_Object(const BaseOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseOptimizer), &PY_TYPE_DEF(BaseOptimizer), module, "BaseOptimizer", 0);
      }

      void t_BaseOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "class_", make_descriptor(BaseOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "wrapfn_", make_descriptor(t_BaseOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseOptimizer::wrap_Object(BaseOptimizer(((t_BaseOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::Object result((jobject) NULL);
            OBJ_CALL(result = self->object.optimize());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
          break;
         case 1:
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "optimize", args);
        return NULL;
      }
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocityKey::class$ = NULL;
              jmethodID *AngularVelocityKey::mids$ = NULL;
              bool AngularVelocityKey::live$ = false;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_FRAME = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_X = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Y = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Z = NULL;
              AngularVelocityKey *AngularVelocityKey::COMMENT = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_A = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_B = NULL;

              jclass AngularVelocityKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_418f55c872348021] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;)Z");
                  mids$[mid_valueOf_0cc1d611a6aa4b69] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");
                  mids$[mid_values_6e688ac3ff754291] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_X = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Y = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Z = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  COMMENT = new AngularVelocityKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_A = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_B = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AngularVelocityKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_418f55c872348021], a0.this$, a1.this$, a2.this$);
              }

              AngularVelocityKey AngularVelocityKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AngularVelocityKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0cc1d611a6aa4b69], a0.this$));
              }

              JArray< AngularVelocityKey > AngularVelocityKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AngularVelocityKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6e688ac3ff754291]));
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
              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type);
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data);
              static PyGetSetDef t_AngularVelocityKey__fields_[] = {
                DECLARE_GET_FIELD(t_AngularVelocityKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocityKey__methods_[] = {
                DECLARE_METHOD(t_AngularVelocityKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocityKey)[] = {
                { Py_tp_methods, t_AngularVelocityKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AngularVelocityKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocityKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AngularVelocityKey, t_AngularVelocityKey, AngularVelocityKey);
              PyObject *t_AngularVelocityKey::wrap_Object(const AngularVelocityKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AngularVelocityKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AngularVelocityKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocityKey), &PY_TYPE_DEF(AngularVelocityKey), module, "AngularVelocityKey", 0);
              }

              void t_AngularVelocityKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "class_", make_descriptor(AngularVelocityKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "wrapfn_", make_descriptor(t_AngularVelocityKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AngularVelocityKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_FRAME", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_X", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Y", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Z", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "COMMENT", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_A", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_B", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_B)));
              }

              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocityKey::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocityKey::wrap_Object(AngularVelocityKey(((t_AngularVelocityKey *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocityKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AngularVelocityKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::valueOf(a0));
                  return t_AngularVelocityKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type)
              {
                JArray< AngularVelocityKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::values());
                return JArray<jobject>(result.this$).wrap(t_AngularVelocityKey::wrap_jobject);
              }
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data)
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
          mids$[mid_init$_02ea6287cefc0bf8] = env->getMethodID(cls, "<init>", "([Ljava/io/File;)V");
          mids$[mid_getCompleteName_adaf6e6136190c2e] = env->getMethodID(cls, "getCompleteName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getBaseName_adaf6e6136190c2e] = env->getMethodID(cls, "getBaseName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_cb069b2521665fac] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/io/File;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_5cd7df6ab73a6f35] = env->getMethodID(cls, "getStream", "(Ljava/io/File;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FilesListCrawler::FilesListCrawler(const JArray< ::java::io::File > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_02ea6287cefc0bf8, a0.this$)) {}
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
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *OutputStream::class$ = NULL;
    jmethodID *OutputStream::mids$ = NULL;
    bool OutputStream::live$ = false;

    jclass OutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/OutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullOutputStream_4eea5cc0056e0066] = env->getStaticMethodID(cls, "nullOutputStream", "()Ljava/io/OutputStream;");
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OutputStream::OutputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    void OutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void OutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    OutputStream OutputStream::nullOutputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return OutputStream(env->callStaticObjectMethod(cls, mids$[mid_nullOutputStream_4eea5cc0056e0066]));
    }

    void OutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void OutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void OutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_OutputStream_close(t_OutputStream *self);
    static PyObject *t_OutputStream_flush(t_OutputStream *self);
    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type);
    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args);

    static PyMethodDef t_OutputStream__methods_[] = {
      DECLARE_METHOD(t_OutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, flush, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, nullOutputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OutputStream)[] = {
      { Py_tp_methods, t_OutputStream__methods_ },
      { Py_tp_init, (void *) t_OutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OutputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OutputStream, t_OutputStream, OutputStream);

    void t_OutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(OutputStream), &PY_TYPE_DEF(OutputStream), module, "OutputStream", 0);
    }

    void t_OutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "class_", make_descriptor(OutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "wrapfn_", make_descriptor(t_OutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OutputStream::initializeClass, 1)))
        return NULL;
      return t_OutputStream::wrap_Object(OutputStream(((t_OutputStream *) arg)->object.this$));
    }
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds)
    {
      OutputStream object((jobject) NULL);

      INT_CALL(object = OutputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_OutputStream_close(t_OutputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_flush(t_OutputStream *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type)
    {
      OutputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::OutputStream::nullOutputStream());
      return t_OutputStream::wrap_Object(result);
    }

    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
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
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RegionCode::class$ = NULL;
          jmethodID *RegionCode::mids$ = NULL;
          bool RegionCode::live$ = false;
          RegionCode *RegionCode::JAPAN = NULL;
          RegionCode *RegionCode::WIDE_AREA = NULL;

          jclass RegionCode::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RegionCode");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_aab98e99bc0ec49f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_values_6ccb9ac5e087a1df] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/RegionCode;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              JAPAN = new RegionCode(env->getStaticObjectField(cls, "JAPAN", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              WIDE_AREA = new RegionCode(env->getStaticObjectField(cls, "WIDE_AREA", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RegionCode RegionCode::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RegionCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aab98e99bc0ec49f], a0.this$));
          }

          JArray< RegionCode > RegionCode::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RegionCode >(env->callStaticObjectMethod(cls, mids$[mid_values_6ccb9ac5e087a1df]));
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
          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args);
          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RegionCode_values(PyTypeObject *type);
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data);
          static PyGetSetDef t_RegionCode__fields_[] = {
            DECLARE_GET_FIELD(t_RegionCode, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RegionCode__methods_[] = {
            DECLARE_METHOD(t_RegionCode, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, of_, METH_VARARGS),
            DECLARE_METHOD(t_RegionCode, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RegionCode)[] = {
            { Py_tp_methods, t_RegionCode__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RegionCode__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RegionCode)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RegionCode, t_RegionCode, RegionCode);
          PyObject *t_RegionCode::wrap_Object(const RegionCode& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RegionCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RegionCode::install(PyObject *module)
          {
            installType(&PY_TYPE(RegionCode), &PY_TYPE_DEF(RegionCode), module, "RegionCode", 0);
          }

          void t_RegionCode::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "class_", make_descriptor(RegionCode::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "wrapfn_", make_descriptor(t_RegionCode::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "boxfn_", make_descriptor(boxObject));
            env->getClass(RegionCode::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "JAPAN", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::JAPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "WIDE_AREA", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::WIDE_AREA)));
          }

          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RegionCode::initializeClass, 1)))
              return NULL;
            return t_RegionCode::wrap_Object(RegionCode(((t_RegionCode *) arg)->object.this$));
          }
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RegionCode::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RegionCode result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::valueOf(a0));
              return t_RegionCode::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RegionCode_values(PyTypeObject *type)
          {
            JArray< RegionCode > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::values());
            return JArray<jobject>(result.this$).wrap(t_RegionCode::wrap_jobject);
          }
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data)
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
#include "org/orekit/gnss/YUMAParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *YUMAParser::class$ = NULL;
      jmethodID *YUMAParser::mids$ = NULL;
      bool YUMAParser::live$ = false;

      jclass YUMAParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/YUMAParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_23ada22a1e61cacc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_d751c1a57012b438] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_d751c1a57012b438] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_ff7cb6c242604316] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YUMAParser::YUMAParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      YUMAParser::YUMAParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_23ada22a1e61cacc, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List YUMAParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_d751c1a57012b438]));
      }

      ::java::util::List YUMAParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_d751c1a57012b438]));
      }

      ::java::lang::String YUMAParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
      }

      void YUMAParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ff7cb6c242604316]);
      }

      void YUMAParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
      }

      jboolean YUMAParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self);
      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args);
      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self);
      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data);
      static PyGetSetDef t_YUMAParser__fields_[] = {
        DECLARE_GET_FIELD(t_YUMAParser, almanacs),
        DECLARE_GET_FIELD(t_YUMAParser, pRNNumbers),
        DECLARE_GET_FIELD(t_YUMAParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YUMAParser__methods_[] = {
        DECLARE_METHOD(t_YUMAParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_YUMAParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YUMAParser)[] = {
        { Py_tp_methods, t_YUMAParser__methods_ },
        { Py_tp_init, (void *) t_YUMAParser_init_ },
        { Py_tp_getset, t_YUMAParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YUMAParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(YUMAParser, t_YUMAParser, YUMAParser);

      void t_YUMAParser::install(PyObject *module)
      {
        installType(&PY_TYPE(YUMAParser), &PY_TYPE_DEF(YUMAParser), module, "YUMAParser", 0);
      }

      void t_YUMAParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "class_", make_descriptor(YUMAParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "wrapfn_", make_descriptor(t_YUMAParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YUMAParser::initializeClass, 1)))
          return NULL;
        return t_YUMAParser::wrap_Object(YUMAParser(((t_YUMAParser *) arg)->object.this$));
      }
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YUMAParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = YUMAParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = YUMAParser(a0, a1, a2));
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

      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/TreeSet.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "java/util/NavigableSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TreeSet::class$ = NULL;
    jmethodID *TreeSet::mids$ = NULL;
    bool TreeSet::live$ = false;

    jclass TreeSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TreeSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_bee08e6612998c92] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
        mids$[mid_init$_a422fab7ffe774b8] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_ceiling_05290476c26136d7] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_comparator_44d5f0105a5559b7] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_915193d823a938b2] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_first_704a5bee58538972] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_floor_05290476c26136d7] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_703a1d412bf4e2d2] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_bdde78447932d510] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_05290476c26136d7] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_last_704a5bee58538972] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_lower_05290476c26136d7] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_704a5bee58538972] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_704a5bee58538972] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_2ca9cc77d5a999da] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_76f09fa229f62b71] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_703a1d412bf4e2d2] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_bdde78447932d510] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TreeSet::TreeSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    TreeSet::TreeSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::Comparator & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_bee08e6612998c92, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::SortedSet & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_a422fab7ffe774b8, a0.this$)) {}

    jboolean TreeSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean TreeSet::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    ::java::lang::Object TreeSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_05290476c26136d7], a0.this$));
    }

    void TreeSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object TreeSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    ::java::util::Comparator TreeSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_44d5f0105a5559b7]));
    }

    jboolean TreeSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Iterator TreeSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4f613ccd2f803b4b]));
    }

    ::java::util::NavigableSet TreeSet::descendingSet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_915193d823a938b2]));
    }

    ::java::lang::Object TreeSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_704a5bee58538972]));
    }

    ::java::lang::Object TreeSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_05290476c26136d7], a0.this$));
    }

    ::java::util::SortedSet TreeSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_703a1d412bf4e2d2], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_bdde78447932d510], a0.this$, a1));
    }

    ::java::lang::Object TreeSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_05290476c26136d7], a0.this$));
    }

    jboolean TreeSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator TreeSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    ::java::lang::Object TreeSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_704a5bee58538972]));
    }

    ::java::lang::Object TreeSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object TreeSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_704a5bee58538972]));
    }

    ::java::lang::Object TreeSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_704a5bee58538972]));
    }

    jboolean TreeSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jint TreeSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Spliterator TreeSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    ::java::util::SortedSet TreeSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_2ca9cc77d5a999da], a0.this$, a1.this$));
    }

    ::java::util::NavigableSet TreeSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_76f09fa229f62b71], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet TreeSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_703a1d412bf4e2d2], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_bdde78447932d510], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args);
    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_clone(t_TreeSet *self);
    static PyObject *t_TreeSet_comparator(t_TreeSet *self);
    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self);
    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self);
    static PyObject *t_TreeSet_first(t_TreeSet *self);
    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_last(t_TreeSet *self);
    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self);
    static PyObject *t_TreeSet_pollLast(t_TreeSet *self);
    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data);
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data);
    static PyGetSetDef t_TreeSet__fields_[] = {
      DECLARE_GET_FIELD(t_TreeSet, empty),
      DECLARE_GET_FIELD(t_TreeSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TreeSet__methods_[] = {
      DECLARE_METHOD(t_TreeSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, add, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, addAll, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, ceiling, METH_O),
      DECLARE_METHOD(t_TreeSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, first, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, floor, METH_O),
      DECLARE_METHOD(t_TreeSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, higher, METH_O),
      DECLARE_METHOD(t_TreeSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, last, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, lower, METH_O),
      DECLARE_METHOD(t_TreeSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, size, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TreeSet)[] = {
      { Py_tp_methods, t_TreeSet__methods_ },
      { Py_tp_init, (void *) t_TreeSet_init_ },
      { Py_tp_getset, t_TreeSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_TreeSet *)) get_generic_iterator< t_TreeSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TreeSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(TreeSet, t_TreeSet, TreeSet);
    PyObject *t_TreeSet::wrap_Object(const TreeSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_TreeSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_TreeSet::install(PyObject *module)
    {
      installType(&PY_TYPE(TreeSet), &PY_TYPE_DEF(TreeSet), module, "TreeSet", 0);
    }

    void t_TreeSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "class_", make_descriptor(TreeSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "wrapfn_", make_descriptor(t_TreeSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TreeSet::initializeClass, 1)))
        return NULL;
      return t_TreeSet::wrap_Object(TreeSet(((t_TreeSet *) arg)->object.this$));
    }
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TreeSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          TreeSet object((jobject) NULL);

          INT_CALL(object = TreeSet());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
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

    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_TreeSet_clone(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_comparator(t_TreeSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_first(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_TreeSet_last(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_pollLast(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", args);
      return NULL;
    }
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019::class$ = NULL;
              jmethodID *Rtcm1019::mids$ = NULL;
              bool Rtcm1019::live$ = false;

              jclass Rtcm1019::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9e1ef570ec071e9a] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019::Rtcm1019(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_9e1ef570ec071e9a, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args);
              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data);
              static PyGetSetDef t_Rtcm1019__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1019, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019)[] = {
                { Py_tp_methods, t_Rtcm1019__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019_init_ },
                { Py_tp_getset, t_Rtcm1019__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1019, t_Rtcm1019, Rtcm1019);
              PyObject *t_Rtcm1019::wrap_Object(const Rtcm1019& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1019::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1019::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019), &PY_TYPE_DEF(Rtcm1019), module, "Rtcm1019", 0);
              }

              void t_Rtcm1019::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "class_", make_descriptor(Rtcm1019::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "wrapfn_", make_descriptor(t_Rtcm1019::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019::wrap_Object(Rtcm1019(((t_Rtcm1019 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data a1((jobject) NULL);
                Rtcm1019 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1019(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1019Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolatingFunction::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolatingFunction::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolatingFunction::live$ = false;

        jclass PiecewiseBicubicSplineInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3a2cd39ad5830d3b] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_isValidPoint_0fc66ee74538f12c] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_b5ecd7df9e053968] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolatingFunction::PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a2cd39ad5830d3b, a0.this$, a1.this$, a2.this$)) {}

        jboolean PiecewiseBicubicSplineInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_0fc66ee74538f12c], a0, a1);
        }

        jdouble PiecewiseBicubicSplineInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement PiecewiseBicubicSplineInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_b5ecd7df9e053968], a0.this$, a1.this$));
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
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolatingFunction, t_PiecewiseBicubicSplineInterpolatingFunction, PiecewiseBicubicSplineInterpolatingFunction);

        void t_PiecewiseBicubicSplineInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolatingFunction), module, "PiecewiseBicubicSplineInterpolatingFunction", 0);
        }

        void t_PiecewiseBicubicSplineInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "class_", make_descriptor(PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(PiecewiseBicubicSplineInterpolatingFunction(((t_PiecewiseBicubicSplineInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          PiecewiseBicubicSplineInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = PiecewiseBicubicSplineInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
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
                OBJ_CALL(result = self->object.value(a0, a1));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractGenerator::class$ = NULL;
            jmethodID *PythonAbstractGenerator::mids$ = NULL;
            bool PythonAbstractGenerator::live$ = false;

            jclass PythonAbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_da38cf1e116c8866] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_endMessage_105e1eadb709d9ac] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_startMessage_04f72a78f21743a7] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_aa335fea495d60e0] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_dbec4ebd43084884] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGenerator::PythonAbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_da38cf1e116c8866, a0.this$, a1.this$, a2, a3)) {}

            void PythonAbstractGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractGenerator::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self);
            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args);
            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data);
            static PyGetSetDef t_PythonAbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGenerator)[] = {
              { Py_tp_methods, t_PythonAbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGenerator_init_ },
              { Py_tp_getset, t_PythonAbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGenerator, t_PythonAbstractGenerator, PythonAbstractGenerator);

            void t_PythonAbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGenerator), &PY_TYPE_DEF(PythonAbstractGenerator), module, "PythonAbstractGenerator", 1);
            }

            void t_PythonAbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "class_", make_descriptor(PythonAbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "wrapfn_", make_descriptor(t_PythonAbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonAbstractGenerator_endMessage0 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonAbstractGenerator_getFormat1 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGenerator_pythonDecRef2 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonAbstractGenerator_startMessage3 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonAbstractGenerator_writeComments4 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonAbstractGenerator_writeEntry5 },
              };
              env->registerNatives(cls, methods, 6);
            }

            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGenerator::wrap_Object(PythonAbstractGenerator(((t_PythonAbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              PythonAbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGenerator(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubPlane::class$ = NULL;
          jmethodID *SubPlane::mids$ = NULL;
          bool SubPlane::live$ = false;

          jclass SubPlane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubPlane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5428b0a00a62bde3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubPlane::SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5428b0a00a62bde3, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubPlane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
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
          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args);
          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args);
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data);
          static PyGetSetDef t_SubPlane__fields_[] = {
            DECLARE_GET_FIELD(t_SubPlane, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubPlane__methods_[] = {
            DECLARE_METHOD(t_SubPlane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubPlane, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubPlane)[] = {
            { Py_tp_methods, t_SubPlane__methods_ },
            { Py_tp_init, (void *) t_SubPlane_init_ },
            { Py_tp_getset, t_SubPlane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubPlane)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubPlane, t_SubPlane, SubPlane);
          PyObject *t_SubPlane::wrap_Object(const SubPlane& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubPlane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubPlane::install(PyObject *module)
          {
            installType(&PY_TYPE(SubPlane), &PY_TYPE_DEF(SubPlane), module, "SubPlane", 0);
          }

          void t_SubPlane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "class_", make_descriptor(SubPlane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "wrapfn_", make_descriptor(t_SubPlane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubPlane::initializeClass, 1)))
              return NULL;
            return t_SubPlane::wrap_Object(SubPlane(((t_SubPlane *) arg)->object.this$));
          }
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubPlane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubPlane object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubPlane(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            return callSuper(PY_TYPE(SubPlane), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data)
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
#include "org/hipparchus/random/Well19937a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937a::class$ = NULL;
      jmethodID *Well19937a::mids$ = NULL;
      bool Well19937a::live$ = false;

      jclass Well19937a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937a::Well19937a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well19937a::Well19937a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well19937a::Well19937a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well19937a::Well19937a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well19937a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args);

      static PyMethodDef t_Well19937a__methods_[] = {
        DECLARE_METHOD(t_Well19937a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937a)[] = {
        { Py_tp_methods, t_Well19937a__methods_ },
        { Py_tp_init, (void *) t_Well19937a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937a, t_Well19937a, Well19937a);

      void t_Well19937a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937a), &PY_TYPE_DEF(Well19937a), module, "Well19937a", 0);
      }

      void t_Well19937a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "class_", make_descriptor(Well19937a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "wrapfn_", make_descriptor(t_Well19937a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937a::initializeClass, 1)))
          return NULL;
        return t_Well19937a::wrap_Object(Well19937a(((t_Well19937a *) arg)->object.this$));
      }
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937a object((jobject) NULL);

            INT_CALL(object = Well19937a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937a(a0));
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

      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateTroposphericDelayModifier::mids$ = NULL;
          bool RangeRateTroposphericDelayModifier::live$ = false;

          jclass RangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ad3d47d865414ff1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;Z)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorTroposphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateTroposphericDelayModifier::RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0, jboolean a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_ad3d47d865414ff1, a0.this$, a1)) {}

          void RangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void RangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
          }

          jdouble RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_29b53a0d2fc3b115], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_e648598eaaa5f94d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args);

          static PyMethodDef t_RangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateTroposphericDelayModifier, t_RangeRateTroposphericDelayModifier, RangeRateTroposphericDelayModifier);

          void t_RangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateTroposphericDelayModifier), &PY_TYPE_DEF(RangeRateTroposphericDelayModifier), module, "RangeRateTroposphericDelayModifier", 0);
          }

          void t_RangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "class_", make_descriptor(RangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateTroposphericDelayModifier::wrap_Object(RangeRateTroposphericDelayModifier(((t_RangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            jboolean a1;
            RangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeRateTroposphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(RangeRateTroposphericDelayModifier), (PyObject *) self, "rangeRateErrorTroposphericModel", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$RawPVProvider::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$RawPVProvider::mids$ = NULL;
      bool JPLEphemeridesLoader$RawPVProvider::live$ = false;

      jclass JPLEphemeridesLoader$RawPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawPV_37ec40ec795d4b0a] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getRawPV_6d49740a5d91eb64] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getRawPosition_8b37cafaaf55a3a5] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRawPosition_8e5aead0a4b0cc16] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_37ec40ec795d4b0a], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_6d49740a5d91eb64], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_8b37cafaaf55a3a5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_8e5aead0a4b0cc16], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);

      static PyMethodDef t_JPLEphemeridesLoader$RawPVProvider__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPV, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$RawPVProvider)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$RawPVProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$RawPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$RawPVProvider, t_JPLEphemeridesLoader$RawPVProvider, JPLEphemeridesLoader$RawPVProvider);

      void t_JPLEphemeridesLoader$RawPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$RawPVProvider), &PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider), module, "JPLEphemeridesLoader$RawPVProvider", 0);
      }

      void t_JPLEphemeridesLoader$RawPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "class_", make_descriptor(JPLEphemeridesLoader$RawPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$RawPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$RawPVProvider::wrap_Object(JPLEphemeridesLoader$RawPVProvider(((t_JPLEphemeridesLoader$RawPVProvider *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPV", args);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Data::class$ = NULL;
              jmethodID *SsrIgm02Data::mids$ = NULL;
              bool SsrIgm02Data::live$ = false;

              jclass SsrIgm02Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_9a94dcb2534bfcee] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_e6ed13e2bb347f8f] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Data::SsrIgm02Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm02Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_9a94dcb2534bfcee]));
              }

              void SsrIgm02Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_e6ed13e2bb347f8f], a0.this$);
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
              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self);
              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg);
              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data);
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm02Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm02Data, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm02Data, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Data)[] = {
                { Py_tp_methods, t_SsrIgm02Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Data_init_ },
                { Py_tp_getset, t_SsrIgm02Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Data, t_SsrIgm02Data, SsrIgm02Data);

              void t_SsrIgm02Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Data), &PY_TYPE_DEF(SsrIgm02Data), module, "SsrIgm02Data", 0);
              }

              void t_SsrIgm02Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "class_", make_descriptor(SsrIgm02Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "wrapfn_", make_descriptor(t_SsrIgm02Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Data::wrap_Object(SsrIgm02Data(((t_SsrIgm02Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Data object((jobject) NULL);

                INT_CALL(object = SsrIgm02Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg)
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

              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
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

            ::java::lang::Class *ZeisModel::class$ = NULL;
            jmethodID *ZeisModel::mids$ = NULL;
            bool ZeisModel::live$ = false;

            jclass ZeisModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ZeisModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeC2Z_f4a7c9be2f86cf2e] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)D");
                mids$[mid_computeC2Z_18ff530150c50903] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_639aa05fb2436ba0] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_614616a5f895b25b] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ZeisModel::ZeisModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_computeC2Z_f4a7c9be2f86cf2e], a0.this$);
            }

            ::org::hipparchus::CalculusFieldElement ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeC2Z_18ff530150c50903], a0.this$));
            }

            JArray< jdouble > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_639aa05fb2436ba0], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_614616a5f895b25b], a0.this$));
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
            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args);
            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args);

            static PyMethodDef t_ZeisModel__methods_[] = {
              DECLARE_METHOD(t_ZeisModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, computeC2Z, METH_VARARGS),
              DECLARE_METHOD(t_ZeisModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ZeisModel)[] = {
              { Py_tp_methods, t_ZeisModel__methods_ },
              { Py_tp_init, (void *) t_ZeisModel_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ZeisModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ZeisModel, t_ZeisModel, ZeisModel);

            void t_ZeisModel::install(PyObject *module)
            {
              installType(&PY_TYPE(ZeisModel), &PY_TYPE_DEF(ZeisModel), module, "ZeisModel", 0);
            }

            void t_ZeisModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "class_", make_descriptor(ZeisModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "wrapfn_", make_descriptor(t_ZeisModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ZeisModel::initializeClass, 1)))
                return NULL;
              return t_ZeisModel::wrap_Object(ZeisModel(((t_ZeisModel *) arg)->object.this$));
            }
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ZeisModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds)
            {
              ZeisModel object((jobject) NULL);

              INT_CALL(object = ZeisModel());
              self->object = object;

              return 0;
            }

            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  jdouble result;

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeC2Z", args);
              return NULL;
            }

            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/python/PythonSupplier.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonSupplier::class$ = NULL;
      jmethodID *PythonSupplier::mids$ = NULL;
      bool PythonSupplier::live$ = false;

      jclass PythonSupplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonSupplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_get_704a5bee58538972] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSupplier::PythonSupplier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonSupplier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonSupplier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonSupplier::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args);
      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self);
      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args);
      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data);
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data);
      static PyGetSetDef t_PythonSupplier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSupplier, self),
        DECLARE_GET_FIELD(t_PythonSupplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSupplier__methods_[] = {
        DECLARE_METHOD(t_PythonSupplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonSupplier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSupplier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSupplier)[] = {
        { Py_tp_methods, t_PythonSupplier__methods_ },
        { Py_tp_init, (void *) t_PythonSupplier_init_ },
        { Py_tp_getset, t_PythonSupplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSupplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSupplier, t_PythonSupplier, PythonSupplier);
      PyObject *t_PythonSupplier::wrap_Object(const PythonSupplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonSupplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonSupplier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSupplier), &PY_TYPE_DEF(PythonSupplier), module, "PythonSupplier", 1);
      }

      void t_PythonSupplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "class_", make_descriptor(PythonSupplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "wrapfn_", make_descriptor(t_PythonSupplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSupplier::initializeClass);
        JNINativeMethod methods[] = {
          { "get", "()Ljava/lang/Object;", (void *) t_PythonSupplier_get0 },
          { "pythonDecRef", "()V", (void *) t_PythonSupplier_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSupplier::initializeClass, 1)))
          return NULL;
        return t_PythonSupplier::wrap_Object(PythonSupplier(((t_PythonSupplier *) arg)->object.this$));
      }
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSupplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds)
      {
        PythonSupplier object((jobject) NULL);

        INT_CALL(object = PythonSupplier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args)
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

      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "get", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("get", result);
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

      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data)
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
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1Frame::class$ = NULL;
      jmethodID *L1Frame::mids$ = NULL;
      bool L1Frame::live$ = false;

      jclass L1Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a627f83556e9294] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1Frame::L1Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_6a627f83556e9294, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L1Frame__methods_[] = {
        DECLARE_METHOD(t_L1Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1Frame)[] = {
        { Py_tp_methods, t_L1Frame__methods_ },
        { Py_tp_init, (void *) t_L1Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L1Frame, t_L1Frame, L1Frame);

      void t_L1Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L1Frame), &PY_TYPE_DEF(L1Frame), module, "L1Frame", 0);
      }

      void t_L1Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "class_", make_descriptor(L1Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "wrapfn_", make_descriptor(t_L1Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1Frame::initializeClass, 1)))
          return NULL;
        return t_L1Frame::wrap_Object(L1Frame(((t_L1Frame *) arg)->object.this$));
      }
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1Frame(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
          mids$[mid_init$_d111c88970dd54da] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_9ea176630e9f7119] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_getGenerator_fb7acbed4ebdfef8] = env->getMethodID(cls, "getGenerator", "()Lorg/hipparchus/random/NormalizedRandomGenerator;");
          mids$[mid_getRank_d6ab429752e7c267] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d111c88970dd54da, a0.this$, a1, a2.this$)) {}

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, const ::org::hipparchus::random::NormalizedRandomGenerator & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ea176630e9f7119, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::hipparchus::random::NormalizedRandomGenerator CorrelatedRandomVectorGenerator::getGenerator() const
      {
        return ::org::hipparchus::random::NormalizedRandomGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_fb7acbed4ebdfef8]));
      }

      jint CorrelatedRandomVectorGenerator::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix CorrelatedRandomVectorGenerator::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_b2eebabce70526d8]));
      }

      JArray< jdouble > CorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
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
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Sphere2D::class$ = NULL;
          jmethodID *Sphere2D::mids$ = NULL;
          bool Sphere2D::live$ = false;
          jdouble Sphere2D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Sphere2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_1ad26e8c8c0cd65b] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_968130df3e040b47] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/twod/Sphere2D;");
              mids$[mid_getSubSpace_19e97269a1512723] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere2D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_1ad26e8c8c0cd65b], a0);
          }

          jint Sphere2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          Sphere2D Sphere2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_968130df3e040b47]));
          }

          ::org::hipparchus::geometry::spherical::oned::Sphere1D Sphere2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::Sphere1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_19e97269a1512723]));
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
          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self);
          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self);
          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data);
          static PyGetSetDef t_Sphere2D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere2D, dimension),
            DECLARE_GET_FIELD(t_Sphere2D, instance),
            DECLARE_GET_FIELD(t_Sphere2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere2D__methods_[] = {
            DECLARE_METHOD(t_Sphere2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere2D)[] = {
            { Py_tp_methods, t_Sphere2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere2D, t_Sphere2D, Sphere2D);

          void t_Sphere2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere2D), &PY_TYPE_DEF(Sphere2D), module, "Sphere2D", 0);
          }

          void t_Sphere2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "class_", make_descriptor(Sphere2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "wrapfn_", make_descriptor(t_Sphere2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "SMALLEST_TOLERANCE", make_descriptor(Sphere2D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere2D::initializeClass, 1)))
              return NULL;
            return t_Sphere2D::wrap_Object(Sphere2D(((t_Sphere2D *) arg)->object.this$));
          }
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::twod::Sphere2D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type)
          {
            Sphere2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Sphere2D::getInstance());
            return t_Sphere2D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data)
          {
            Sphere2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere2D::wrap_Object(value);
          }

          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
                  mids$[mid_valueOf_616a8ac0de548fee] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");
                  mids$[mid_values_51796b075b75703f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");

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
                return AcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_616a8ac0de548fee], a0.this$));
              }

              JArray< AcmElements > AcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_51796b075b75703f]));
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
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinh::class$ = NULL;
        jmethodID *Sinh::mids$ = NULL;
        bool Sinh::live$ = false;

        jclass Sinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinh::Sinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Sinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args);

        static PyMethodDef t_Sinh__methods_[] = {
          DECLARE_METHOD(t_Sinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinh)[] = {
          { Py_tp_methods, t_Sinh__methods_ },
          { Py_tp_init, (void *) t_Sinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinh, t_Sinh, Sinh);

        void t_Sinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinh), &PY_TYPE_DEF(Sinh), module, "Sinh", 0);
        }

        void t_Sinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "class_", make_descriptor(Sinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "wrapfn_", make_descriptor(t_Sinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinh::initializeClass, 1)))
            return NULL;
          return t_Sinh::wrap_Object(Sinh(((t_Sinh *) arg)->object.this$));
        }
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds)
        {
          Sinh object((jobject) NULL);

          INT_CALL(object = Sinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args)
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
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *BinomialDistribution::class$ = NULL;
        jmethodID *BinomialDistribution::mids$ = NULL;
        bool BinomialDistribution::live$ = false;

        jclass BinomialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/BinomialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfTrials_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfTrials", "()I");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialDistribution::BinomialDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

        jdouble BinomialDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jint BinomialDistribution::getNumberOfTrials() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfTrials_d6ab429752e7c267]);
        }

        jdouble BinomialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble BinomialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble BinomialDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6]);
        }

        jint BinomialDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint BinomialDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean BinomialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble BinomialDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble BinomialDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
      namespace discrete {
        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data);
        static PyGetSetDef t_BinomialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BinomialDistribution, numberOfTrials),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BinomialDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BinomialDistribution__methods_[] = {
          DECLARE_METHOD(t_BinomialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumberOfTrials, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialDistribution)[] = {
          { Py_tp_methods, t_BinomialDistribution__methods_ },
          { Py_tp_init, (void *) t_BinomialDistribution_init_ },
          { Py_tp_getset, t_BinomialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(BinomialDistribution, t_BinomialDistribution, BinomialDistribution);

        void t_BinomialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialDistribution), &PY_TYPE_DEF(BinomialDistribution), module, "BinomialDistribution", 0);
        }

        void t_BinomialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "class_", make_descriptor(BinomialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "wrapfn_", make_descriptor(t_BinomialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialDistribution::initializeClass, 1)))
            return NULL;
          return t_BinomialDistribution::wrap_Object(BinomialDistribution(((t_BinomialDistribution *) arg)->object.this$));
        }
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          BinomialDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = BinomialDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *PowerTerm::class$ = NULL;
        jmethodID *PowerTerm::mids$ = NULL;
        bool PowerTerm::live$ = false;

        jclass PowerTerm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/PowerTerm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getBase_cfb2d4edd1f80404] = env->getMethodID(cls, "getBase", "()Ljava/lang/CharSequence;");
            mids$[mid_getExponent_8e8b2db4820cf02e] = env->getMethodID(cls, "getExponent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::CharSequence PowerTerm::getBase() const
        {
          return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_getBase_cfb2d4edd1f80404]));
        }

        ::org::hipparchus::fraction::Fraction PowerTerm::getExponent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getExponent_8e8b2db4820cf02e]));
        }

        jdouble PowerTerm::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
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
    namespace utils {
      namespace units {
        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self);
        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data);
        static PyGetSetDef t_PowerTerm__fields_[] = {
          DECLARE_GET_FIELD(t_PowerTerm, base),
          DECLARE_GET_FIELD(t_PowerTerm, exponent),
          DECLARE_GET_FIELD(t_PowerTerm, scale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PowerTerm__methods_[] = {
          DECLARE_METHOD(t_PowerTerm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, getBase, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getScale, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PowerTerm)[] = {
          { Py_tp_methods, t_PowerTerm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PowerTerm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PowerTerm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PowerTerm, t_PowerTerm, PowerTerm);

        void t_PowerTerm::install(PyObject *module)
        {
          installType(&PY_TYPE(PowerTerm), &PY_TYPE_DEF(PowerTerm), module, "PowerTerm", 0);
        }

        void t_PowerTerm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "class_", make_descriptor(PowerTerm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "wrapfn_", make_descriptor(t_PowerTerm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PowerTerm::initializeClass, 1)))
            return NULL;
          return t_PowerTerm::wrap_Object(PowerTerm(((t_PowerTerm *) arg)->object.this$));
        }
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PowerTerm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self)
        {
          ::java::lang::CharSequence result((jobject) NULL);
          OBJ_CALL(result = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data)
        {
          ::java::lang::CharSequence value((jobject) NULL);
          OBJ_CALL(value = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSPhaseModifier::RelativisticClockOneWayGNSSPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSPhaseModifier, t_RelativisticClockOneWayGNSSPhaseModifier, RelativisticClockOneWayGNSSPhaseModifier);

          void t_RelativisticClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSPhaseModifier), module, "RelativisticClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticClockOneWayGNSSPhaseModifier(((t_RelativisticClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "java/text/NumberFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Number.h"
#include "java/text/ParseException.h"
#include "java/util/Currency.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *NumberFormat::class$ = NULL;
    jmethodID *NumberFormat::mids$ = NULL;
    bool NumberFormat::live$ = false;
    jint NumberFormat::FRACTION_FIELD = (jint) 0;
    jint NumberFormat::INTEGER_FIELD = (jint) 0;

    jclass NumberFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/NumberFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_e3ac8af686594d08] = env->getMethodID(cls, "format", "(D)Ljava/lang/String;");
        mids$[mid_format_7fdd1777495672ef] = env->getMethodID(cls, "format", "(J)Ljava/lang/String;");
        mids$[mid_format_bd8d8164e076ccaa] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1f446f5fe940e316] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_e857dd6f37c7fee3] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencyInstance_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getCurrencyInstance_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getInstance_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getInstance_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getIntegerInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getMaximumFractionDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getNumberInstance_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getNumberInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getNumberInstance_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getPercentInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isGroupingUsed_eee3de00fe971136] = env->getMethodID(cls, "isGroupingUsed", "()Z");
        mids$[mid_isParseIntegerOnly_eee3de00fe971136] = env->getMethodID(cls, "isParseIntegerOnly", "()Z");
        mids$[mid_parse_ab62d11a21abbc99] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
        mids$[mid_parse_5a7ce414e545ae55] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_parseObject_43b97b9c23ff173e] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
        mids$[mid_setCurrency_db8d865c2c65c553] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setGroupingUsed_b35db77cae58639e] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setParseIntegerOnly_b35db77cae58639e] = env->getMethodID(cls, "setParseIntegerOnly", "(Z)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FRACTION_FIELD = env->getStaticIntField(cls, "FRACTION_FIELD");
        INTEGER_FIELD = env->getStaticIntField(cls, "INTEGER_FIELD");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NumberFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean NumberFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String NumberFormat::format(jdouble a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_e3ac8af686594d08], a0));
    }

    ::java::lang::String NumberFormat::format(jlong a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_7fdd1777495672ef], a0));
    }

    ::java::lang::StringBuffer NumberFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_bd8d8164e076ccaa], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1f446f5fe940e316], a0, a1.this$, a2.this$));
    }

    JArray< ::java::util::Locale > NumberFormat::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
    }

    ::java::util::Currency NumberFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e857dd6f37c7fee3]));
    }

    NumberFormat NumberFormat::getCurrencyInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_525709eb5c5b5ea6]));
    }

    NumberFormat NumberFormat::getCurrencyInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_5ed382d8d7b942c5], a0.this$));
    }

    NumberFormat NumberFormat::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_525709eb5c5b5ea6]));
    }

    NumberFormat NumberFormat::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_5ed382d8d7b942c5], a0.this$));
    }

    NumberFormat NumberFormat::getIntegerInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_525709eb5c5b5ea6]));
    }

    NumberFormat NumberFormat::getIntegerInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_5ed382d8d7b942c5], a0.this$));
    }

    jint NumberFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_d6ab429752e7c267]);
    }

    jint NumberFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_d6ab429752e7c267]);
    }

    jint NumberFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_d6ab429752e7c267]);
    }

    jint NumberFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_d6ab429752e7c267]);
    }

    NumberFormat NumberFormat::getNumberInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_525709eb5c5b5ea6]));
    }

    NumberFormat NumberFormat::getNumberInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_5ed382d8d7b942c5], a0.this$));
    }

    NumberFormat NumberFormat::getPercentInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_525709eb5c5b5ea6]));
    }

    NumberFormat NumberFormat::getPercentInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_5ed382d8d7b942c5], a0.this$));
    }

    jint NumberFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean NumberFormat::isGroupingUsed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isGroupingUsed_eee3de00fe971136]);
    }

    jboolean NumberFormat::isParseIntegerOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseIntegerOnly_eee3de00fe971136]);
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_ab62d11a21abbc99], a0.this$));
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_5a7ce414e545ae55], a0.this$, a1.this$));
    }

    ::java::lang::Object NumberFormat::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_43b97b9c23ff173e], a0.this$, a1.this$));
    }

    void NumberFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_db8d865c2c65c553], a0.this$);
    }

    void NumberFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_b35db77cae58639e], a0);
    }

    void NumberFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_8fd427ab23829bf5], a0);
    }

    void NumberFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_8fd427ab23829bf5], a0);
    }

    void NumberFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_8fd427ab23829bf5], a0);
    }

    void NumberFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_8fd427ab23829bf5], a0);
    }

    void NumberFormat::setParseIntegerOnly(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseIntegerOnly_b35db77cae58639e], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self);
    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self);
    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data);
    static PyGetSetDef t_NumberFormat__fields_[] = {
      DECLARE_GET_FIELD(t_NumberFormat, availableLocales),
      DECLARE_GETSET_FIELD(t_NumberFormat, currency),
      DECLARE_GET_FIELD(t_NumberFormat, currencyInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, groupingUsed),
      DECLARE_GET_FIELD(t_NumberFormat, instance),
      DECLARE_GET_FIELD(t_NumberFormat, integerInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumIntegerDigits),
      DECLARE_GET_FIELD(t_NumberFormat, numberInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, parseIntegerOnly),
      DECLARE_GET_FIELD(t_NumberFormat, percentInstance),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NumberFormat__methods_[] = {
      DECLARE_METHOD(t_NumberFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getCurrencyInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getIntegerInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getMaximumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMaximumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getNumberInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getPercentInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, isGroupingUsed, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, isParseIntegerOnly, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, parseObject, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, setCurrency, METH_O),
      DECLARE_METHOD(t_NumberFormat, setGroupingUsed, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setParseIntegerOnly, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormat)[] = {
      { Py_tp_methods, t_NumberFormat__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NumberFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormat)[] = {
      &PY_TYPE_DEF(::java::text::Format),
      NULL
    };

    DEFINE_TYPE(NumberFormat, t_NumberFormat, NumberFormat);

    void t_NumberFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormat), &PY_TYPE_DEF(NumberFormat), module, "NumberFormat", 0);
    }

    void t_NumberFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "class_", make_descriptor(NumberFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "wrapfn_", make_descriptor(t_NumberFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "boxfn_", make_descriptor(boxObject));
      env->getClass(NumberFormat::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "FRACTION_FIELD", make_descriptor(NumberFormat::FRACTION_FIELD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "INTEGER_FIELD", make_descriptor(NumberFormat::INTEGER_FIELD));
    }

    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormat::initializeClass, 1)))
        return NULL;
      return t_NumberFormat::wrap_Object(NumberFormat(((t_NumberFormat *) arg)->object.this$));
    }
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::NumberFormat::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getCurrencyInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getIntegerInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumberInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getPercentInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isGroupingUsed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parse(a0, a1));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parse", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parseObject(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "parseObject", args, 2);
    }

    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingUsed", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseIntegerOnly(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseIntegerOnly", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isGroupingUsed());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getIntegerInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumberInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseIntegerOnly(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseIntegerOnly", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getPercentInstance());
      return t_NumberFormat::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ExpandableODE::class$ = NULL;
      jmethodID *ExpandableODE::mids$ = NULL;
      bool ExpandableODE::live$ = false;

      jclass ExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_42ef144907fee018] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_6261b1536ecfb8ff] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/SecondaryODE;)I");
          mids$[mid_computeDerivatives_bfc955188bf36f2c] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getMapper_0209d6833e7fdcb2] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
          mids$[mid_getPrimary_89f5a4343b91b929] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_init_e6ba2f1f75657f6f] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExpandableODE::ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_42ef144907fee018, a0.this$)) {}

      jint ExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_6261b1536ecfb8ff], a0.this$);
      }

      JArray< jdouble > ExpandableODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_bfc955188bf36f2c], a0, a1.this$));
      }

      ::org::hipparchus::ode::EquationsMapper ExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::EquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_0209d6833e7fdcb2]));
      }

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_89f5a4343b91b929]));
      }

      void ExpandableODE::init(const ::org::hipparchus::ode::ODEState & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_e6ba2f1f75657f6f], a0.this$, a1);
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
      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg);
      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data);
      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data);
      static PyGetSetDef t_ExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_ExpandableODE, mapper),
        DECLARE_GET_FIELD(t_ExpandableODE, primary),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExpandableODE__methods_[] = {
        DECLARE_METHOD(t_ExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExpandableODE)[] = {
        { Py_tp_methods, t_ExpandableODE__methods_ },
        { Py_tp_init, (void *) t_ExpandableODE_init_ },
        { Py_tp_getset, t_ExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ExpandableODE, t_ExpandableODE, ExpandableODE);

      void t_ExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ExpandableODE), &PY_TYPE_DEF(ExpandableODE), module, "ExpandableODE", 0);
      }

      void t_ExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "class_", make_descriptor(ExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "wrapfn_", make_descriptor(t_ExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExpandableODE::initializeClass, 1)))
          return NULL;
        return t_ExpandableODE::wrap_Object(ExpandableODE(((t_ExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
        ExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0))
        {
          INT_CALL(object = ExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::SecondaryODE a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", ::org::hipparchus::ode::SecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args)
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

      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::EquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::EquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(value);
      }

      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *Field::class$ = NULL;
    jmethodID *Field::mids$ = NULL;
    bool Field::live$ = false;

    jclass Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/Field");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getOne_f6328613456309a1] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
        mids$[mid_getZero_f6328613456309a1] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement Field::getOne() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getOne_f6328613456309a1]));
    }

    ::java::lang::Class Field::getRuntimeClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
    }

    ::org::hipparchus::FieldElement Field::getZero() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getZero_f6328613456309a1]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_of_(t_Field *self, PyObject *args);
    static PyObject *t_Field_getOne(t_Field *self);
    static PyObject *t_Field_getRuntimeClass(t_Field *self);
    static PyObject *t_Field_getZero(t_Field *self);
    static PyObject *t_Field_get__one(t_Field *self, void *data);
    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data);
    static PyObject *t_Field_get__zero(t_Field *self, void *data);
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data);
    static PyGetSetDef t_Field__fields_[] = {
      DECLARE_GET_FIELD(t_Field, one),
      DECLARE_GET_FIELD(t_Field, runtimeClass),
      DECLARE_GET_FIELD(t_Field, zero),
      DECLARE_GET_FIELD(t_Field, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Field__methods_[] = {
      DECLARE_METHOD(t_Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, of_, METH_VARARGS),
      DECLARE_METHOD(t_Field, getOne, METH_NOARGS),
      DECLARE_METHOD(t_Field, getRuntimeClass, METH_NOARGS),
      DECLARE_METHOD(t_Field, getZero, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Field)[] = {
      { Py_tp_methods, t_Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Field__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Field)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Field, t_Field, Field);
    PyObject *t_Field::wrap_Object(const Field& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Field), &PY_TYPE_DEF(Field), module, "Field", 0);
    }

    void t_Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "class_", make_descriptor(Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "wrapfn_", make_descriptor(t_Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Field::initializeClass, 1)))
        return NULL;
      return t_Field::wrap_Object(Field(((t_Field *) arg)->object.this$));
    }
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Field_of_(t_Field *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Field_getOne(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getOne());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_Field_getRuntimeClass(t_Field *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Field_getZero(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getZero());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Field_get__one(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getOne());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }

    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_Field_get__zero(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getZero());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
              mids$[mid_init$_b353d6632be7c963] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
              mids$[mid_init$_70cf68a139c55cb1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_883560a039191ab2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_init$_0696b66b91219eca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_a0575630e19e1e5c] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_c525cc6962fd7087] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeMeanState_6570fb3d6e747bd9] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeOsculatingState_c525cc6962fd7087] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_6b191a9b12c1004b] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_initialIsOsculating_eee3de00fe971136] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_ff7cb6c242604316] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_8062511934471166] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setInitialState_b193ef1b0d3797c6] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_f63ca9e3185c722e] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setMu_f63ca9e3185c722e] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setSatelliteRevolution_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_26a98b9ee89414c5] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_tolerances_6fbe6f88edd8fdc8] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_tolerances_e42a4f399e60df68] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_beforeIntegration_357211ab77703f3f] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_afterIntegration_ff7cb6c242604316] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_createMapper_ebf7e979efef9b20] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
              mids$[mid_getMainStateEquations_3bc41c7526b7eb7c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b353d6632be7c963, a0.this$, a1.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_70cf68a139c55cb1, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_883560a039191ab2, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_0696b66b91219eca, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void FieldDSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_a0575630e19e1e5c], a0.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_c525cc6962fd7087], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_6570fb3d6e747bd9], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_c525cc6962fd7087], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List FieldDSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
          }

          ::org::orekit::orbits::OrbitType FieldDSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
          }

          ::org::orekit::orbits::PositionAngleType FieldDSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
          }

          jint FieldDSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_d6ab429752e7c267]);
          }

          ::java::util::Set FieldDSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_6b191a9b12c1004b]));
          }

          jboolean FieldDSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_eee3de00fe971136]);
          }

          void FieldDSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_ff7cb6c242604316]);
          }

          void FieldDSSTPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
          }

          void FieldDSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_8062511934471166], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_b193ef1b0d3797c6], a0.this$, a1.this$);
          }

          void FieldDSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5], a0);
          }

          void FieldDSSTPropagator::setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_f63ca9e3185c722e], a0.this$);
          }

          void FieldDSSTPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_f63ca9e3185c722e], a0.this$);
          }

          void FieldDSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_8fd427ab23829bf5], a0);
          }

          void FieldDSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_26a98b9ee89414c5], a0.this$);
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_6fbe6f88edd8fdc8], a0.this$, a1.this$));
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_e42a4f399e60df68], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *YesNoUnknown::class$ = NULL;
          jmethodID *YesNoUnknown::mids$ = NULL;
          bool YesNoUnknown::live$ = false;
          YesNoUnknown *YesNoUnknown::NO = NULL;
          YesNoUnknown *YesNoUnknown::UNKOWN = NULL;
          YesNoUnknown *YesNoUnknown::YES = NULL;

          jclass YesNoUnknown::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/YesNoUnknown");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_77343c17cd88fecd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
              mids$[mid_values_4745b2960e204098] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NO = new YesNoUnknown(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              UNKOWN = new YesNoUnknown(env->getStaticObjectField(cls, "UNKOWN", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              YES = new YesNoUnknown(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          YesNoUnknown YesNoUnknown::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return YesNoUnknown(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77343c17cd88fecd], a0.this$));
          }

          JArray< YesNoUnknown > YesNoUnknown::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< YesNoUnknown >(env->callStaticObjectMethod(cls, mids$[mid_values_4745b2960e204098]));
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
          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args);
          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_YesNoUnknown_values(PyTypeObject *type);
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data);
          static PyGetSetDef t_YesNoUnknown__fields_[] = {
            DECLARE_GET_FIELD(t_YesNoUnknown, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_YesNoUnknown__methods_[] = {
            DECLARE_METHOD(t_YesNoUnknown, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, of_, METH_VARARGS),
            DECLARE_METHOD(t_YesNoUnknown, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(YesNoUnknown)[] = {
            { Py_tp_methods, t_YesNoUnknown__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_YesNoUnknown__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(YesNoUnknown)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(YesNoUnknown, t_YesNoUnknown, YesNoUnknown);
          PyObject *t_YesNoUnknown::wrap_Object(const YesNoUnknown& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_YesNoUnknown::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_YesNoUnknown::install(PyObject *module)
          {
            installType(&PY_TYPE(YesNoUnknown), &PY_TYPE_DEF(YesNoUnknown), module, "YesNoUnknown", 0);
          }

          void t_YesNoUnknown::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "class_", make_descriptor(YesNoUnknown::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "wrapfn_", make_descriptor(t_YesNoUnknown::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "boxfn_", make_descriptor(boxObject));
            env->getClass(YesNoUnknown::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "NO", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::NO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "UNKOWN", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::UNKOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "YES", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::YES)));
          }

          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, YesNoUnknown::initializeClass, 1)))
              return NULL;
            return t_YesNoUnknown::wrap_Object(YesNoUnknown(((t_YesNoUnknown *) arg)->object.this$));
          }
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, YesNoUnknown::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            YesNoUnknown result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::valueOf(a0));
              return t_YesNoUnknown::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_YesNoUnknown_values(PyTypeObject *type)
          {
            JArray< YesNoUnknown > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::values());
            return JArray<jobject>(result.this$).wrap(t_YesNoUnknown::wrap_jobject);
          }
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NetworkRecord::class$ = NULL;
          jmethodID *NetworkRecord::mids$ = NULL;
          bool NetworkRecord::live$ = false;

          jclass NetworkRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NetworkRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_eee3de00fe971136] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_6de0606d40023783] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getNetworkIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getNetworkIdentifier", "()Ljava/lang/String;");
              mids$[mid_getNetworkInfoAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getNetworkInfoAddress", "()Ljava/lang/String;");
              mids$[mid_getOperator_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getRecordType_6b1d5e4fef5a106c] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getRegistrationAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getRegistrationAddress", "()Ljava/lang/String;");
              mids$[mid_getStreamInfoAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getStreamInfoAddress", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NetworkRecord::NetworkRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          jboolean NetworkRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_eee3de00fe971136]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication NetworkRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_6de0606d40023783]));
          }

          ::java::lang::String NetworkRecord::getNetworkIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkIdentifier_d2c8eb4129821f0e]));
          }

          ::java::lang::String NetworkRecord::getNetworkInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkInfoAddress_d2c8eb4129821f0e]));
          }

          ::java::lang::String NetworkRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType NetworkRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_6b1d5e4fef5a106c]));
          }

          ::java::lang::String NetworkRecord::getRegistrationAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRegistrationAddress_d2c8eb4129821f0e]));
          }

          ::java::lang::String NetworkRecord::getStreamInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStreamInfoAddress_d2c8eb4129821f0e]));
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
          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args);
          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data);
          static PyGetSetDef t_NetworkRecord__fields_[] = {
            DECLARE_GET_FIELD(t_NetworkRecord, authentication),
            DECLARE_GET_FIELD(t_NetworkRecord, networkIdentifier),
            DECLARE_GET_FIELD(t_NetworkRecord, networkInfoAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, operator),
            DECLARE_GET_FIELD(t_NetworkRecord, recordType),
            DECLARE_GET_FIELD(t_NetworkRecord, registrationAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, streamInfoAddress),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NetworkRecord__methods_[] = {
            DECLARE_METHOD(t_NetworkRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkInfoAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_NetworkRecord, getRegistrationAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getStreamInfoAddress, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NetworkRecord)[] = {
            { Py_tp_methods, t_NetworkRecord__methods_ },
            { Py_tp_init, (void *) t_NetworkRecord_init_ },
            { Py_tp_getset, t_NetworkRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NetworkRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(NetworkRecord, t_NetworkRecord, NetworkRecord);

          void t_NetworkRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(NetworkRecord), &PY_TYPE_DEF(NetworkRecord), module, "NetworkRecord", 0);
          }

          void t_NetworkRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "class_", make_descriptor(NetworkRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "wrapfn_", make_descriptor(t_NetworkRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NetworkRecord::initializeClass, 1)))
              return NULL;
            return t_NetworkRecord::wrap_Object(NetworkRecord(((t_NetworkRecord *) arg)->object.this$));
          }
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NetworkRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            NetworkRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = NetworkRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkIdentifier());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NetworkRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegistrationAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStreamInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkIdentifier());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkInfoAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegistrationAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStreamInfoAddress());
            return j2p(value);
          }
        }
      }
    }
  }
}
