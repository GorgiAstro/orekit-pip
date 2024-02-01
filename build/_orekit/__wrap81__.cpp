#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *NiellMappingFunctionModel::class$ = NULL;
          jmethodID *NiellMappingFunctionModel::mids$ = NULL;
          bool NiellMappingFunctionModel::live$ = false;

          jclass NiellMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/NiellMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NiellMappingFunctionModel::NiellMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          NiellMappingFunctionModel::NiellMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > NiellMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > NiellMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
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
          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_NiellMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_NiellMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NiellMappingFunctionModel)[] = {
            { Py_tp_methods, t_NiellMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_NiellMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NiellMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NiellMappingFunctionModel, t_NiellMappingFunctionModel, NiellMappingFunctionModel);

          void t_NiellMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NiellMappingFunctionModel), &PY_TYPE_DEF(NiellMappingFunctionModel), module, "NiellMappingFunctionModel", 0);
          }

          void t_NiellMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "class_", make_descriptor(NiellMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "wrapfn_", make_descriptor(t_NiellMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NiellMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_NiellMappingFunctionModel::wrap_Object(NiellMappingFunctionModel(((t_NiellMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NiellMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                NiellMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = NiellMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                NiellMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = NiellMappingFunctionModel(a0));
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

          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
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
          mids$[mid_getConvergenceChecker_ecb318336ebe4cc7] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_286bd168b7e14166] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_286bd168b7e14166] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker AbstractOptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_ecb318336ebe4cc7]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_286bd168b7e14166]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_286bd168b7e14166]));
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
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAbstractDetector::class$ = NULL;
        jmethodID *PythonAbstractDetector::mids$ = NULL;
        bool PythonAbstractDetector::live$ = false;

        jclass PythonAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_56035b1a4cf16621] = env->getMethodID(cls, "<init>", "(DDILorg/orekit/propagation/events/handlers/EventHandler;)V");
            mids$[mid_create_23ac4e704dde127b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDetector::PythonAbstractDetector(jdouble a0, jdouble a1, jint a2, const ::org::orekit::propagation::events::handlers::EventHandler & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_56035b1a4cf16621, a0, a1, a2, a3.this$)) {}

        void PythonAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractDetector::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args);
        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self);
        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data);
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDetector)[] = {
          { Py_tp_methods, t_PythonAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDetector_init_ },
          { Py_tp_getset, t_PythonAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDetector, t_PythonAbstractDetector, PythonAbstractDetector);
        PyObject *t_PythonAbstractDetector::wrap_Object(const PythonAbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDetector), &PY_TYPE_DEF(PythonAbstractDetector), module, "PythonAbstractDetector", 1);
        }

        void t_PythonAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "class_", make_descriptor(PythonAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "wrapfn_", make_descriptor(t_PythonAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;", (void *) t_PythonAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDetector::wrap_Object(PythonAbstractDetector(((t_PythonAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          ::org::orekit::propagation::events::handlers::EventHandler a3((jobject) NULL);
          PythonAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "DDIk", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(::org::orekit::propagation::events::AdaptableInterval(a0));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(::org::orekit::propagation::events::handlers::EventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
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

        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data)
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
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonDataField::class$ = NULL;
          jmethodID *PythonDataField::mids$ = NULL;
          bool PythonDataField::live$ = false;

          jclass PythonDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_booleanValue_03afc74a55086f49] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDataField::PythonDataField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonDataField::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonDataField::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonDataField::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self);
          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args);
          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data);
          static PyGetSetDef t_PythonDataField__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDataField, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDataField__methods_[] = {
            DECLARE_METHOD(t_PythonDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDataField, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDataField)[] = {
            { Py_tp_methods, t_PythonDataField__methods_ },
            { Py_tp_init, (void *) t_PythonDataField_init_ },
            { Py_tp_getset, t_PythonDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDataField, t_PythonDataField, PythonDataField);

          void t_PythonDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDataField), &PY_TYPE_DEF(PythonDataField), module, "PythonDataField", 1);
          }

          void t_PythonDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "class_", make_descriptor(PythonDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "wrapfn_", make_descriptor(t_PythonDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDataField::initializeClass);
            JNINativeMethod methods[] = {
              { "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z", (void *) t_PythonDataField_booleanValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonDataField_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDataField::initializeClass, 1)))
              return NULL;
            return t_PythonDataField::wrap_Object(PythonDataField(((t_PythonDataField *) arg)->object.this$));
          }
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds)
          {
            PythonDataField object((jobject) NULL);

            INT_CALL(object = PythonDataField());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args)
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

          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "booleanValue", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("booleanValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularAzElBuilder::class$ = NULL;
          jmethodID *AngularAzElBuilder::mids$ = NULL;
          bool AngularAzElBuilder::live$ = false;

          jclass AngularAzElBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularAzElBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0685fcbafdb39168] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_8527460da71a7bb1] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularAzEl;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularAzElBuilder::AngularAzElBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_0685fcbafdb39168, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::estimation::measurements::AngularAzEl AngularAzElBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularAzEl(env->callObjectMethod(this$, mids$[mid_build_8527460da71a7bb1], a0.this$, a1.this$));
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
          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args);
          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args);
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data);
          static PyGetSetDef t_AngularAzElBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularAzElBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularAzElBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularAzElBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularAzElBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularAzElBuilder)[] = {
            { Py_tp_methods, t_AngularAzElBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularAzElBuilder_init_ },
            { Py_tp_getset, t_AngularAzElBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularAzElBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularAzElBuilder, t_AngularAzElBuilder, AngularAzElBuilder);
          PyObject *t_AngularAzElBuilder::wrap_Object(const AngularAzElBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularAzElBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularAzElBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularAzElBuilder), &PY_TYPE_DEF(AngularAzElBuilder), module, "AngularAzElBuilder", 0);
          }

          void t_AngularAzElBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "class_", make_descriptor(AngularAzElBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "wrapfn_", make_descriptor(t_AngularAzElBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularAzElBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularAzElBuilder::wrap_Object(AngularAzElBuilder(((t_AngularAzElBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularAzElBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            AngularAzElBuilder object((jobject) NULL);

            if (!parseArgs(args, "kk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularAzElBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularAzEl result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularAzEl::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularAzElBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data)
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
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *JacobianPropagatorConverter::class$ = NULL;
        jmethodID *JacobianPropagatorConverter::mids$ = NULL;
        bool JacobianPropagatorConverter::live$ = false;

        jclass JacobianPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/JacobianPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd88d78eba1fb5d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;DI)V");
            mids$[mid_getObjectiveFunction_0a4097997512db0b] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b9638c47db64ddc7] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianPropagatorConverter::JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_fd88d78eba1fb5d5, a0.this$, a1, a2)) {}
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
        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_JacobianPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_JacobianPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianPropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianPropagatorConverter)[] = {
          { Py_tp_methods, t_JacobianPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_JacobianPropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(JacobianPropagatorConverter, t_JacobianPropagatorConverter, JacobianPropagatorConverter);

        void t_JacobianPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianPropagatorConverter), &PY_TYPE_DEF(JacobianPropagatorConverter), module, "JacobianPropagatorConverter", 0);
        }

        void t_JacobianPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "class_", make_descriptor(JacobianPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "wrapfn_", make_descriptor(t_JacobianPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_JacobianPropagatorConverter::wrap_Object(JacobianPropagatorConverter(((t_JacobianPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::NumericalPropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          JacobianPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::NumericalPropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = JacobianPropagatorConverter(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataProvider.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataProvider::class$ = NULL;
      jmethodID *PythonDataProvider::mids$ = NULL;
      bool PythonDataProvider::live$ = false;

      jclass PythonDataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataProvider::PythonDataProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonDataProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonDataProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonDataProvider::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self);
      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args);
      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data);
      static PyGetSetDef t_PythonDataProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataProvider__methods_[] = {
        DECLARE_METHOD(t_PythonDataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataProvider)[] = {
        { Py_tp_methods, t_PythonDataProvider__methods_ },
        { Py_tp_init, (void *) t_PythonDataProvider_init_ },
        { Py_tp_getset, t_PythonDataProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataProvider, t_PythonDataProvider, PythonDataProvider);

      void t_PythonDataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataProvider), &PY_TYPE_DEF(PythonDataProvider), module, "PythonDataProvider", 1);
      }

      void t_PythonDataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "class_", make_descriptor(PythonDataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "wrapfn_", make_descriptor(t_PythonDataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDataProvider_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataProvider::initializeClass, 1)))
          return NULL;
        return t_PythonDataProvider::wrap_Object(PythonDataProvider(((t_PythonDataProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonDataProvider object((jobject) NULL);

        INT_CALL(object = PythonDataProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args)
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

      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadata::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadata::mids$ = NULL;
              bool TrajectoryStateHistoryMetadata::live$ = false;
              jint TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;
              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod *TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD = NULL;

              jclass TrajectoryStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_960848fecfd8dc41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_3a61331c4c7cd805] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getCenter_540df4afb4ddb1b4] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_5c787fe19a1e0bf9] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getOrbAveraging_d2c8eb4129821f0e] = env->getMethodID(cls, "getOrbAveraging", "()Ljava/lang/String;");
                  mids$[mid_getOrbRevNum_d6ab429752e7c267] = env->getMethodID(cls, "getOrbRevNum", "()I");
                  mids$[mid_getOrbRevNumBasis_d6ab429752e7c267] = env->getMethodID(cls, "getOrbRevNumBasis", "()I");
                  mids$[mid_getPropagator_d2c8eb4129821f0e] = env->getMethodID(cls, "getPropagator", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasis_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrajBasis", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasisID_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrajBasisID", "()Ljava/lang/String;");
                  mids$[mid_getTrajFrameEpoch_80e11148db499dda] = env->getMethodID(cls, "getTrajFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajID_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrajID", "()Ljava/lang/String;");
                  mids$[mid_getTrajNextID_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrajNextID", "()Ljava/lang/String;");
                  mids$[mid_getTrajPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrajPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTrajReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getTrajReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTrajType_53d3e424bd18099f] = env->getMethodID(cls, "getTrajType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getTrajUnits_d751c1a57012b438] = env->getMethodID(cls, "getTrajUnits", "()Ljava/util/List;");
                  mids$[mid_getUseableStartTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_incrementTrajID_95277969d373e11f] = env->getStaticMethodID(cls, "incrementTrajID", "(Ljava/lang/String;)Ljava/lang/String;");
                  mids$[mid_setCenter_9fc8078d81282211] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setInterpolationDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_373a113be1fa06ae] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setOrbAveraging_105e1eadb709d9ac] = env->getMethodID(cls, "setOrbAveraging", "(Ljava/lang/String;)V");
                  mids$[mid_setOrbRevNum_8fd427ab23829bf5] = env->getMethodID(cls, "setOrbRevNum", "(I)V");
                  mids$[mid_setOrbRevNumBasis_8fd427ab23829bf5] = env->getMethodID(cls, "setOrbRevNumBasis", "(I)V");
                  mids$[mid_setPropagator_105e1eadb709d9ac] = env->getMethodID(cls, "setPropagator", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasis_105e1eadb709d9ac] = env->getMethodID(cls, "setTrajBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasisID_105e1eadb709d9ac] = env->getMethodID(cls, "setTrajBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajFrameEpoch_8497861b879c83f7] = env->getMethodID(cls, "setTrajFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTrajID_105e1eadb709d9ac] = env->getMethodID(cls, "setTrajID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajNextID_105e1eadb709d9ac] = env->getMethodID(cls, "setTrajNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setTrajPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setTrajReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTrajType_60e103afec7f4bee] = env->getMethodID(cls, "setTrajType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setTrajUnits_aa335fea495d60e0] = env->getMethodID(cls, "setTrajUnits", "(Ljava/util/List;)V");
                  mids$[mid_setUseableStartTime_8497861b879c83f7] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_8497861b879c83f7] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
                  DEFAULT_INTERPOLATION_METHOD = new ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistoryMetadata::TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_960848fecfd8dc41, a0.this$, a1.this$)) {}

              TrajectoryStateHistoryMetadata TrajectoryStateHistoryMetadata::copy(jdouble a0) const
              {
                return TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_copy_3a61331c4c7cd805], a0));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade TrajectoryStateHistoryMetadata::getCenter() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_540df4afb4ddb1b4]));
              }

              jint TrajectoryStateHistoryMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod TrajectoryStateHistoryMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_5c787fe19a1e0bf9]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getOrbAveraging() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbAveraging_d2c8eb4129821f0e]));
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNum() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNum_d6ab429752e7c267]);
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNumBasis() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNumBasis_d6ab429752e7c267]);
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getPropagator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPropagator_d2c8eb4129821f0e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasis_d2c8eb4129821f0e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasisID_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getTrajFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTrajFrameEpoch_80e11148db499dda]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajID_d2c8eb4129821f0e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajNextID_d2c8eb4129821f0e]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajPrevID_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade TrajectoryStateHistoryMetadata::getTrajReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTrajReferenceFrame_0fc1562b68204151]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryStateHistoryMetadata::getTrajType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getTrajType_53d3e424bd18099f]));
              }

              ::java::util::List TrajectoryStateHistoryMetadata::getTrajUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajUnits_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_80e11148db499dda]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::incrementTrajID(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_incrementTrajID_95277969d373e11f], a0.this$));
              }

              void TrajectoryStateHistoryMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenter_9fc8078d81282211], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_8fd427ab23829bf5], a0);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_373a113be1fa06ae], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbAveraging(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbAveraging_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNum_8fd427ab23829bf5], a0);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNumBasis(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNumBasis_8fd427ab23829bf5], a0);
              }

              void TrajectoryStateHistoryMetadata::setPropagator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPropagator_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasis_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasisID_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajFrameEpoch_8497861b879c83f7], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajID_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajNextID_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajPrevID_105e1eadb709d9ac], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajType_60e103afec7f4bee], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajUnits_aa335fea495d60e0], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_8497861b879c83f7], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_8497861b879c83f7], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::validate(jdouble a0) const
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
              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, center),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbAveraging),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNum),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNumBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, propagator),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasisID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajFrameEpoch),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajNextID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajPrevID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajReferenceFrame),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajType),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajUnits),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, copy, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getCenter, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbAveraging, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNum, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNumBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getPropagator, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasisID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajNextID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajPrevID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajUnits, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, incrementTrajID, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setCenter, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbAveraging, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNum, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNumBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setPropagator, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasisID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajFrameEpoch, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajNextID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajPrevID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajReferenceFrame, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajType, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajUnits, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadata)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistoryMetadata_init_ },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadata, t_TrajectoryStateHistoryMetadata, TrajectoryStateHistoryMetadata);

              void t_TrajectoryStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadata), &PY_TYPE_DEF(TrajectoryStateHistoryMetadata), module, "TrajectoryStateHistoryMetadata", 0);
              }

              void t_TrajectoryStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "class_", make_descriptor(TrajectoryStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(*TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadata::wrap_Object(TrajectoryStateHistoryMetadata(((t_TrajectoryStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                TrajectoryStateHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TrajectoryStateHistoryMetadata(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;
                TrajectoryStateHistoryMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_TrajectoryStateHistoryMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbAveraging());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPropagator());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasis());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasisID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajNextID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajPrevID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::incrementTrajID(a0));
                  return j2p(result);
                }

                PyErr_SetArgsError(type, "incrementTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenter(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOrbAveraging(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbAveraging", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNum", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNumBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNumBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPropagator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPropagator", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasisID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajNextID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajPrevID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setTrajType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajType", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setTrajUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajUnits", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(TrajectoryStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenter(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "center", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbAveraging());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOrbAveraging(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbAveraging", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNum());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNum", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNumBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNumBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPropagator());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPropagator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "propagator", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasis());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasisID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasisID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajNextID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajNextID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajPrevID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajPrevID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajType", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajUnits", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmWriter::class$ = NULL;
              jmethodID *OmmWriter::mids$ = NULL;
              bool OmmWriter::live$ = false;
              jdouble OmmWriter::CCSDS_OMM_VERS = (jdouble) 0;
              jint OmmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OmmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_803b88445e6f9607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OMM_VERS = env->getStaticDoubleField(cls, "CCSDS_OMM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmWriter::OmmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_803b88445e6f9607, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args);
              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data);
              static PyGetSetDef t_OmmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OmmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmWriter__methods_[] = {
                DECLARE_METHOD(t_OmmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmWriter)[] = {
                { Py_tp_methods, t_OmmWriter__methods_ },
                { Py_tp_init, (void *) t_OmmWriter_init_ },
                { Py_tp_getset, t_OmmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OmmWriter, t_OmmWriter, OmmWriter);
              PyObject *t_OmmWriter::wrap_Object(const OmmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OmmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OmmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmWriter), &PY_TYPE_DEF(OmmWriter), module, "OmmWriter", 0);
              }

              void t_OmmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "class_", make_descriptor(OmmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "wrapfn_", make_descriptor(t_OmmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "CCSDS_OMM_VERS", make_descriptor(OmmWriter::CCSDS_OMM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "KVN_PADDING_WIDTH", make_descriptor(OmmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmWriter::initializeClass, 1)))
                  return NULL;
                return t_OmmWriter::wrap_Object(OmmWriter(((t_OmmWriter *) arg)->object.this$));
              }
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OmmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OmmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::omm::PY_TYPE(Omm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data)
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficientsBLQFactory::class$ = NULL;
          jmethodID *OceanLoadingCoefficientsBLQFactory::mids$ = NULL;
          bool OceanLoadingCoefficientsBLQFactory::live$ = false;
          ::java::lang::String *OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES = NULL;

          jclass OceanLoadingCoefficientsBLQFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getCoefficients_09bcfef28733e79e] = env->getMethodID(cls, "getCoefficients", "(Ljava/lang/String;)Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;");
              mids$[mid_getSites_d751c1a57012b438] = env->getMethodID(cls, "getSites", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_BLQ_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_BLQ_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

          ::org::orekit::models::earth::displacement::OceanLoadingCoefficients OceanLoadingCoefficientsBLQFactory::getCoefficients(const ::java::lang::String & a0) const
          {
            return ::org::orekit::models::earth::displacement::OceanLoadingCoefficients(env->callObjectMethod(this$, mids$[mid_getCoefficients_09bcfef28733e79e], a0.this$));
          }

          ::java::util::List OceanLoadingCoefficientsBLQFactory::getSites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSites_d751c1a57012b438]));
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
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficientsBLQFactory__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficientsBLQFactory, sites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficientsBLQFactory__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getCoefficients, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getSites, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficientsBLQFactory)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficientsBLQFactory__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficientsBLQFactory_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficientsBLQFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficientsBLQFactory)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficientsBLQFactory, t_OceanLoadingCoefficientsBLQFactory, OceanLoadingCoefficientsBLQFactory);

          void t_OceanLoadingCoefficientsBLQFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficientsBLQFactory), &PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory), module, "OceanLoadingCoefficientsBLQFactory", 0);
          }

          void t_OceanLoadingCoefficientsBLQFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "class_", make_descriptor(OceanLoadingCoefficientsBLQFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "wrapfn_", make_descriptor(t_OceanLoadingCoefficientsBLQFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadingCoefficientsBLQFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "DEFAULT_BLQ_SUPPORTED_NAMES", make_descriptor(j2p(*OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES)));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficientsBLQFactory::wrap_Object(OceanLoadingCoefficientsBLQFactory(((t_OceanLoadingCoefficientsBLQFactory *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0, a1));
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

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.getCoefficients(a0));
              return ::org::orekit::models::earth::displacement::t_OceanLoadingCoefficients::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getCoefficients", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSites());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Gamma.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_digamma_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "digamma", "(D)D");
          mids$[mid_digamma_a3b854adede8eaaa] = env->getStaticMethodID(cls, "digamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_gamma_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "gamma", "(D)D");
          mids$[mid_gamma_a3b854adede8eaaa] = env->getStaticMethodID(cls, "gamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_invGamma1pm1_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "invGamma1pm1", "(D)D");
          mids$[mid_invGamma1pm1_a3b854adede8eaaa] = env->getStaticMethodID(cls, "invGamma1pm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_lanczos_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "lanczos", "(D)D");
          mids$[mid_lanczos_a3b854adede8eaaa] = env->getStaticMethodID(cls, "lanczos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "logGamma", "(D)D");
          mids$[mid_logGamma_a3b854adede8eaaa] = env->getStaticMethodID(cls, "logGamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma1p_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "logGamma1p", "(D)D");
          mids$[mid_logGamma1p_a3b854adede8eaaa] = env->getStaticMethodID(cls, "logGamma1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_82f92590f4247da1] = env->getStaticMethodID(cls, "regularizedGammaP", "(DD)D");
          mids$[mid_regularizedGammaP_b5ecd7df9e053968] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_4ac438d787b160b9] = env->getStaticMethodID(cls, "regularizedGammaP", "(DDDI)D");
          mids$[mid_regularizedGammaP_f906ded07111002c] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_82f92590f4247da1] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DD)D");
          mids$[mid_regularizedGammaQ_b5ecd7df9e053968] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_4ac438d787b160b9] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DDDI)D");
          mids$[mid_regularizedGammaQ_f906ded07111002c] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_trigamma_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "trigamma", "(D)D");
          mids$[mid_trigamma_a3b854adede8eaaa] = env->getStaticMethodID(cls, "trigamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

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
        return env->callStaticDoubleMethod(cls, mids$[mid_digamma_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::digamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_digamma_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::gamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_gamma_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::gamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_gamma_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::invGamma1pm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_invGamma1pm1_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::invGamma1pm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_invGamma1pm1_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::lanczos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_lanczos_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::lanczos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_lanczos_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::logGamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::logGamma1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma1p_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma1p_a3b854adede8eaaa], a0.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_4ac438d787b160b9], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_f906ded07111002c], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_4ac438d787b160b9], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_f906ded07111002c], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::trigamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trigamma_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::trigamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trigamma_a3b854adede8eaaa], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersRangeModifier::class$ = NULL;
          jmethodID *PhaseCentersRangeModifier::mids$ = NULL;
          bool PhaseCentersRangeModifier::live$ = false;

          jclass PhaseCentersRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f6a2e827b6dec38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersRangeModifier::PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f6a2e827b6dec38, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void PhaseCentersRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self);
          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersRangeModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersRangeModifier)[] = {
            { Py_tp_methods, t_PhaseCentersRangeModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersRangeModifier_init_ },
            { Py_tp_getset, t_PhaseCentersRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersRangeModifier, t_PhaseCentersRangeModifier, PhaseCentersRangeModifier);

          void t_PhaseCentersRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersRangeModifier), &PY_TYPE_DEF(PhaseCentersRangeModifier), module, "PhaseCentersRangeModifier", 0);
          }

          void t_PhaseCentersRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "class_", make_descriptor(PhaseCentersRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "wrapfn_", make_descriptor(t_PhaseCentersRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersRangeModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersRangeModifier::wrap_Object(PhaseCentersRangeModifier(((t_PhaseCentersRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASNavigationMessage::class$ = NULL;
            jmethodID *SBASNavigationMessage::mids$ = NULL;
            bool SBASNavigationMessage::live$ = false;

            jclass SBASNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAGf0_9981f74b2d109da6] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_9981f74b2d109da6] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_d6ab429752e7c267] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPropagator_570e6e91a72444e8] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_99e31c4392916504] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_ca5ca79d0cc5a090] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;DD)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_9981f74b2d109da6] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_getWeek_d6ab429752e7c267] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAGf0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAGf0", "(D)V");
                mids$[mid_setAGf1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAGf1", "(D)V");
                mids$[mid_setIODN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIODN", "(D)V");
                mids$[mid_setTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SBASNavigationMessage::SBASNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble SBASNavigationMessage::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_9981f74b2d109da6]);
            }

            jdouble SBASNavigationMessage::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_9981f74b2d109da6]);
            }

            jint SBASNavigationMessage::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_d6ab429752e7c267]);
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_570e6e91a72444e8]));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_99e31c4392916504], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4, jdouble a5) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ca5ca79d0cc5a090], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            jdouble SBASNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jdouble SBASNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_9981f74b2d109da6]);
            }

            jint SBASNavigationMessage::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_d6ab429752e7c267]);
            }

            void SBASNavigationMessage::setAGf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf0_1ad26e8c8c0cd65b], a0);
            }

            void SBASNavigationMessage::setAGf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf1_1ad26e8c8c0cd65b], a0);
            }

            void SBASNavigationMessage::setIODN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODN_1ad26e8c8c0cd65b], a0);
            }

            void SBASNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_1ad26e8c8c0cd65b], a0);
            }

            void SBASNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args);
            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data);
            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data);
            static PyGetSetDef t_SBASNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf0),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf1),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, iODN),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, propagator),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, uRA),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_SBASNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf0, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf1, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setIODN, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASNavigationMessage)[] = {
              { Py_tp_methods, t_SBASNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_SBASNavigationMessage_init_ },
              { Py_tp_getset, t_SBASNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(SBASNavigationMessage, t_SBASNavigationMessage, SBASNavigationMessage);

            void t_SBASNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASNavigationMessage), &PY_TYPE_DEF(SBASNavigationMessage), module, "SBASNavigationMessage", 0);
            }

            void t_SBASNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "class_", make_descriptor(SBASNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "wrapfn_", make_descriptor(t_SBASNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_SBASNavigationMessage::wrap_Object(SBASNavigationMessage(((t_SBASNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              SBASNavigationMessage object((jobject) NULL);

              INT_CALL(object = SBASNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
                break;
               case 6:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  jdouble a5;
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkDD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4, a5));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf0", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf1", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODN", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf0", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf1", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODN", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::SBASPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(value);
            }

            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGalileoDataValidityStatus_d6ab429752e7c267] = env->getMethodID(cls, "getGalileoDataValidityStatus", "()I");
                  mids$[mid_getGalileoNavigationMessage_371328c4ee9189ce] = env->getMethodID(cls, "getGalileoNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoNavigationMessage_62eb6e8ca002f16a] = env->getMethodID(cls, "getGalileoNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoToc_9981f74b2d109da6] = env->getMethodID(cls, "getGalileoToc", "()D");
                  mids$[mid_setGalileoDataValidityStatus_8fd427ab23829bf5] = env->getMethodID(cls, "setGalileoDataValidityStatus", "(I)V");
                  mids$[mid_setGalileoNavigationMessage_88a615ad5e35af17] = env->getMethodID(cls, "setGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
                  mids$[mid_setGalileoToc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGalileoToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045Data::Rtcm1045Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint Rtcm1045Data::getGalileoDataValidityStatus() const
              {
                return env->callIntMethod(this$, mids$[mid_getGalileoDataValidityStatus_d6ab429752e7c267]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_371328c4ee9189ce]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_62eb6e8ca002f16a], a0.this$));
              }

              jdouble Rtcm1045Data::getGalileoToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGalileoToc_9981f74b2d109da6]);
              }

              void Rtcm1045Data::setGalileoDataValidityStatus(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoDataValidityStatus_8fd427ab23829bf5], a0);
              }

              void Rtcm1045Data::setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoNavigationMessage_88a615ad5e35af17], a0.this$);
              }

              void Rtcm1045Data::setGalileoToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoToc_1ad26e8c8c0cd65b], a0);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4C::class$ = NULL;
          jmethodID *SubFrame4C::mids$ = NULL;
          bool SubFrame4C::live$ = false;
          jint SubFrame4C::NB_ERD = (jint) 0;

          jclass SubFrame4C::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4C");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getERD_d938fc64e8c6df2d] = env->getMethodID(cls, "getERD", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_ERD = env->getStaticIntField(cls, "NB_ERD");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4C::getERD(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getERD_d938fc64e8c6df2d], a0);
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
          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg);

          static PyMethodDef t_SubFrame4C__methods_[] = {
            DECLARE_METHOD(t_SubFrame4C, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, getERD, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4C)[] = {
            { Py_tp_methods, t_SubFrame4C__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4C)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4C, t_SubFrame4C, SubFrame4C);

          void t_SubFrame4C::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4C), &PY_TYPE_DEF(SubFrame4C), module, "SubFrame4C", 0);
          }

          void t_SubFrame4C::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "class_", make_descriptor(SubFrame4C::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "wrapfn_", make_descriptor(t_SubFrame4C::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4C::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "NB_ERD", make_descriptor(SubFrame4C::NB_ERD));
          }

          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4C::initializeClass, 1)))
              return NULL;
            return t_SubFrame4C::wrap_Object(SubFrame4C(((t_SubFrame4C *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4C::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getERD(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getERD", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimator::live$ = false;

        jclass SemiAnalyticalKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eae073fe11f721b0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_processMeasurements_7d4c616f81e4b6b1] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimator::SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a1, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a4) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_eae073fe11f721b0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_7d4c616f81e4b6b1], a0.this$));
        }

        void SemiAnalyticalKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
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
        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimator_init_ },
          { Py_tp_getset, t_SemiAnalyticalKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimator, t_SemiAnalyticalKalmanEstimator, SemiAnalyticalKalmanEstimator);

        void t_SemiAnalyticalKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimator), module, "SemiAnalyticalKalmanEstimator", 0);
        }

        void t_SemiAnalyticalKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "class_", make_descriptor(SemiAnalyticalKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimator::wrap_Object(SemiAnalyticalKalmanEstimator(((t_SemiAnalyticalKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a1((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a4((jobject) NULL);
          SemiAnalyticalKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SemiAnalyticalKalmanEstimator(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
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

        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data)
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
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/BigFraction.h"
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
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_31dd0998fe2402b3] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getOne_f9f39221bd88c021] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_f9f39221bd88c021] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      BigFractionField BigFractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_31dd0998fe2402b3]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getOne() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getOne_f9f39221bd88c021]));
      }

      ::java::lang::Class BigFractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getZero() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getZero_f9f39221bd88c021]));
      }

      jint BigFractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemParser::class$ = NULL;
              jmethodID *AemParser::mids$ = NULL;
              bool AemParser::live$ = false;

              jclass AemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_352880c624bcf4a1] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_6b8c194dac7b9184] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_fe00e53a07a6592a] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_build_352880c624bcf4a1]));
              }

              jboolean AemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean AemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean AemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_6b8c194dac7b9184]));
              }

              jboolean AemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean AemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean AemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_parse_fe00e53a07a6592a], a0.this$));
              }

              jboolean AemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean AemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean AemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void AemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg);
              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data);
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data);
              static PyGetSetDef t_AemParser__fields_[] = {
                DECLARE_GET_FIELD(t_AemParser, header),
                DECLARE_GET_FIELD(t_AemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemParser__methods_[] = {
                DECLARE_METHOD(t_AemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, parse, METH_O),
                DECLARE_METHOD(t_AemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemParser)[] = {
                { Py_tp_methods, t_AemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AemParser, t_AemParser, AemParser);
              PyObject *t_AemParser::wrap_Object(const AemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AemParser), &PY_TYPE_DEF(AemParser), module, "AemParser", 0);
              }

              void t_AemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "class_", make_descriptor(AemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "wrapfn_", make_descriptor(t_AemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemParser::initializeClass, 1)))
                  return NULL;
                return t_AemParser::wrap_Object(AemParser(((t_AemParser *) arg)->object.this$));
              }
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
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

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ClassicalRungeKuttaFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder, t_ClassicalRungeKuttaFieldIntegratorBuilder, ClassicalRungeKuttaFieldIntegratorBuilder);
        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder), module, "ClassicalRungeKuttaFieldIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(ClassicalRungeKuttaFieldIntegratorBuilder(((t_ClassicalRungeKuttaFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
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

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$SessionStatistics::class$ = NULL;
        jmethodID *CRD$SessionStatistics::mids$ = NULL;
        bool CRD$SessionStatistics::live$ = false;

        jclass CRD$SessionStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$SessionStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_26c12ff8629f0152] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDDI)V");
            mids$[mid_getDataQulityIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getDataQulityIndicator", "()I");
            mids$[mid_getKurtosis_9981f74b2d109da6] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getPeakMinusMean_9981f74b2d109da6] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getRms_9981f74b2d109da6] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getSkewness_9981f74b2d109da6] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$SessionStatistics::CRD$SessionStatistics(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26c12ff8629f0152, a0.this$, a1, a2, a3, a4, a5)) {}

        jint CRD$SessionStatistics::getDataQulityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataQulityIndicator_d6ab429752e7c267]);
        }

        jdouble CRD$SessionStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_9981f74b2d109da6]);
        }

        jdouble CRD$SessionStatistics::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_9981f74b2d109da6]);
        }

        jdouble CRD$SessionStatistics::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_9981f74b2d109da6]);
        }

        jdouble CRD$SessionStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$SessionStatistics::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$SessionStatistics::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$SessionStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args);
        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data);
        static PyGetSetDef t_CRD$SessionStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, dataQulityIndicator),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, kurtosis),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, rms),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, skewness),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, systemConfigurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$SessionStatistics__methods_[] = {
          DECLARE_METHOD(t_CRD$SessionStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getDataQulityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$SessionStatistics)[] = {
          { Py_tp_methods, t_CRD$SessionStatistics__methods_ },
          { Py_tp_init, (void *) t_CRD$SessionStatistics_init_ },
          { Py_tp_getset, t_CRD$SessionStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$SessionStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$SessionStatistics, t_CRD$SessionStatistics, CRD$SessionStatistics);

        void t_CRD$SessionStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$SessionStatistics), &PY_TYPE_DEF(CRD$SessionStatistics), module, "CRD$SessionStatistics", 0);
        }

        void t_CRD$SessionStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "class_", make_descriptor(CRD$SessionStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "wrapfn_", make_descriptor(t_CRD$SessionStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$SessionStatistics::initializeClass, 1)))
            return NULL;
          return t_CRD$SessionStatistics::wrap_Object(CRD$SessionStatistics(((t_CRD$SessionStatistics *) arg)->object.this$));
        }
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$SessionStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jint a5;
          CRD$SessionStatistics object((jobject) NULL);

          if (!parseArgs(args, "sDDDDI", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = CRD$SessionStatistics(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$SessionStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodFacade::class$ = NULL;
          jmethodID *OdMethodFacade::mids$ = NULL;
          bool OdMethodFacade::live$ = false;

          jclass OdMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e8b6fbd77ed6283c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/OdMethodType;Ljava/lang/String;)V");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTool_d2c8eb4129821f0e] = env->getMethodID(cls, "getTool", "()Ljava/lang/String;");
              mids$[mid_getType_14d4abc57833ba12] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_parse_c6a025084524ed8a] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodFacade::OdMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::OdMethodType & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8b6fbd77ed6283c, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::String OdMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::java::lang::String OdMethodFacade::getTool() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTool_d2c8eb4129821f0e]));
          }

          ::org::orekit::files::ccsds::definitions::OdMethodType OdMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::OdMethodType(env->callObjectMethod(this$, mids$[mid_getType_14d4abc57833ba12]));
          }

          OdMethodFacade OdMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_c6a025084524ed8a], a0.this$));
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
          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data);
          static PyGetSetDef t_OdMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodFacade, name),
            DECLARE_GET_FIELD(t_OdMethodFacade, tool),
            DECLARE_GET_FIELD(t_OdMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodFacade__methods_[] = {
            DECLARE_METHOD(t_OdMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getTool, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodFacade)[] = {
            { Py_tp_methods, t_OdMethodFacade__methods_ },
            { Py_tp_init, (void *) t_OdMethodFacade_init_ },
            { Py_tp_getset, t_OdMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OdMethodFacade, t_OdMethodFacade, OdMethodFacade);

          void t_OdMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodFacade), &PY_TYPE_DEF(OdMethodFacade), module, "OdMethodFacade", 0);
          }

          void t_OdMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "class_", make_descriptor(OdMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "wrapfn_", make_descriptor(t_OdMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodFacade::initializeClass, 1)))
              return NULL;
            return t_OdMethodFacade::wrap_Object(OdMethodFacade(((t_OdMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::OdMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            OdMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sKs", ::org::orekit::files::ccsds::definitions::OdMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_OdMethodType::parameters_, &a2))
            {
              INT_CALL(object = OdMethodFacade(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTool());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(result);
          }

          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodFacade::parse(a0));
              return t_OdMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTool());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *CommonPhysicalProperties::class$ = NULL;
          jmethodID *CommonPhysicalProperties::mids$ = NULL;
          bool CommonPhysicalProperties::live$ = false;

          jclass CommonPhysicalProperties::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/CommonPhysicalProperties");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getMaxRcs_9981f74b2d109da6] = env->getMethodID(cls, "getMaxRcs", "()D");
              mids$[mid_getMinRcs_9981f74b2d109da6] = env->getMethodID(cls, "getMinRcs", "()D");
              mids$[mid_getOebAreaAlongIntermediate_9981f74b2d109da6] = env->getMethodID(cls, "getOebAreaAlongIntermediate", "()D");
              mids$[mid_getOebAreaAlongMax_9981f74b2d109da6] = env->getMethodID(cls, "getOebAreaAlongMax", "()D");
              mids$[mid_getOebAreaAlongMin_9981f74b2d109da6] = env->getMethodID(cls, "getOebAreaAlongMin", "()D");
              mids$[mid_getOebIntermediate_9981f74b2d109da6] = env->getMethodID(cls, "getOebIntermediate", "()D");
              mids$[mid_getOebMax_9981f74b2d109da6] = env->getMethodID(cls, "getOebMax", "()D");
              mids$[mid_getOebMin_9981f74b2d109da6] = env->getMethodID(cls, "getOebMin", "()D");
              mids$[mid_getOebParentFrame_0fc1562b68204151] = env->getMethodID(cls, "getOebParentFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_getOebParentFrameEpoch_80e11148db499dda] = env->getMethodID(cls, "getOebParentFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getOebQ_c78679230082648b] = env->getMethodID(cls, "getOebQ", "()Lorg/hipparchus/complex/Quaternion;");
              mids$[mid_getRcs_9981f74b2d109da6] = env->getMethodID(cls, "getRcs", "()D");
              mids$[mid_getReflectance_9981f74b2d109da6] = env->getMethodID(cls, "getReflectance", "()D");
              mids$[mid_getVmAbsolute_9981f74b2d109da6] = env->getMethodID(cls, "getVmAbsolute", "()D");
              mids$[mid_getVmApparent_9981f74b2d109da6] = env->getMethodID(cls, "getVmApparent", "()D");
              mids$[mid_getVmApparentMax_9981f74b2d109da6] = env->getMethodID(cls, "getVmApparentMax", "()D");
              mids$[mid_getVmApparentMin_9981f74b2d109da6] = env->getMethodID(cls, "getVmApparentMin", "()D");
              mids$[mid_setMaxRcs_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxRcs", "(D)V");
              mids$[mid_setMinRcs_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinRcs", "(D)V");
              mids$[mid_setOebAreaAlongIntermediate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebAreaAlongIntermediate", "(D)V");
              mids$[mid_setOebAreaAlongMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebAreaAlongMax", "(D)V");
              mids$[mid_setOebAreaAlongMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebAreaAlongMin", "(D)V");
              mids$[mid_setOebIntermediate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebIntermediate", "(D)V");
              mids$[mid_setOebMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebMax", "(D)V");
              mids$[mid_setOebMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOebMin", "(D)V");
              mids$[mid_setOebParentFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setOebParentFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
              mids$[mid_setOebParentFrameEpoch_8497861b879c83f7] = env->getMethodID(cls, "setOebParentFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setOebQ_4320462275d66e78] = env->getMethodID(cls, "setOebQ", "(ID)V");
              mids$[mid_setRcs_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRcs", "(D)V");
              mids$[mid_setReflectance_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setReflectance", "(D)V");
              mids$[mid_setVmAbsolute_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setVmAbsolute", "(D)V");
              mids$[mid_setVmApparent_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setVmApparent", "(D)V");
              mids$[mid_setVmApparentMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setVmApparentMax", "(D)V");
              mids$[mid_setVmApparentMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setVmApparentMin", "(D)V");
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommonPhysicalProperties::CommonPhysicalProperties() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          jdouble CommonPhysicalProperties::getMaxRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxRcs_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getMinRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinRcs_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongIntermediate_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMax_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMin_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebIntermediate_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMax_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getOebMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMin_9981f74b2d109da6]);
          }

          ::org::orekit::files::ccsds::definitions::FrameFacade CommonPhysicalProperties::getOebParentFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getOebParentFrame_0fc1562b68204151]));
          }

          ::org::orekit::time::AbsoluteDate CommonPhysicalProperties::getOebParentFrameEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOebParentFrameEpoch_80e11148db499dda]));
          }

          ::org::hipparchus::complex::Quaternion CommonPhysicalProperties::getOebQ() const
          {
            return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getOebQ_c78679230082648b]));
          }

          jdouble CommonPhysicalProperties::getRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcs_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getReflectance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getReflectance_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getVmAbsolute() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmAbsolute_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getVmApparent() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparent_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMax_9981f74b2d109da6]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMin_9981f74b2d109da6]);
          }

          void CommonPhysicalProperties::setMaxRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxRcs_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setMinRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMinRcs_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongIntermediate_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMax_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMin_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebIntermediate_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMax_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMin_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrame_2c8b859a72c0094e], a0.this$);
          }

          void CommonPhysicalProperties::setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrameEpoch_8497861b879c83f7], a0.this$);
          }

          void CommonPhysicalProperties::setOebQ(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebQ_4320462275d66e78], a0, a1);
          }

          void CommonPhysicalProperties::setRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRcs_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setReflectance(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReflectance_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setVmAbsolute(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmAbsolute_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setVmApparent(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparent_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setVmApparentMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMax_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::setVmApparentMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMin_1ad26e8c8c0cd65b], a0);
          }

          void CommonPhysicalProperties::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data);
          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyGetSetDef t_CommonPhysicalProperties__fields_[] = {
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, maxRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, minRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrame),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrameEpoch),
            DECLARE_GET_FIELD(t_CommonPhysicalProperties, oebQ),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, rcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, reflectance),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmAbsolute),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparent),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMin),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommonPhysicalProperties__methods_[] = {
            DECLARE_METHOD(t_CommonPhysicalProperties, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMaxRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMinRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrame, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrameEpoch, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebQ, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getReflectance, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmAbsolute, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparent, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMaxRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMinRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrame, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrameEpoch, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebQ, METH_VARARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setReflectance, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmAbsolute, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparent, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommonPhysicalProperties)[] = {
            { Py_tp_methods, t_CommonPhysicalProperties__methods_ },
            { Py_tp_init, (void *) t_CommonPhysicalProperties_init_ },
            { Py_tp_getset, t_CommonPhysicalProperties__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommonPhysicalProperties)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(CommonPhysicalProperties, t_CommonPhysicalProperties, CommonPhysicalProperties);

          void t_CommonPhysicalProperties::install(PyObject *module)
          {
            installType(&PY_TYPE(CommonPhysicalProperties), &PY_TYPE_DEF(CommonPhysicalProperties), module, "CommonPhysicalProperties", 0);
          }

          void t_CommonPhysicalProperties::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "class_", make_descriptor(CommonPhysicalProperties::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "wrapfn_", make_descriptor(t_CommonPhysicalProperties::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommonPhysicalProperties::initializeClass, 1)))
              return NULL;
            return t_CommonPhysicalProperties::wrap_Object(CommonPhysicalProperties(((t_CommonPhysicalProperties *) arg)->object.this$));
          }
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommonPhysicalProperties::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds)
          {
            CommonPhysicalProperties object((jobject) NULL);

            INT_CALL(object = CommonPhysicalProperties());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self)
          {
            ::org::hipparchus::complex::Quaternion result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getReflectance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparent());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMaxRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMinRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMinRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrame(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrame", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrameEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrameEpoch", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setOebQ(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebQ", args);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setReflectance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReflectance", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmAbsolute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmAbsolute", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparent(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparent", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CommonPhysicalProperties), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMaxRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMinRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "minRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrame(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrame", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrameEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrameEpoch", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::hipparchus::complex::Quaternion value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
          }

          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "rcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getReflectance());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setReflectance(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "reflectance", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmAbsolute(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmAbsolute", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparent());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparent(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparent", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMin", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "java/lang/Iterable.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter::class$ = NULL;
      jmethodID *MultidimensionalCounter::mids$ = NULL;
      bool MultidimensionalCounter::live$ = false;

      jclass MultidimensionalCounter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_getCount_4c6a473f00540fd2] = env->getMethodID(cls, "getCount", "([I)I");
          mids$[mid_getCounts_adb0f0485f08dbd0] = env->getMethodID(cls, "getCounts", "(I)[I");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");
          mids$[mid_getSizes_d6f20bd740dd34cd] = env->getMethodID(cls, "getSizes", "()[I");
          mids$[mid_iterator_583b7bb7d2617813] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/MultidimensionalCounter$Iterator;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultidimensionalCounter::MultidimensionalCounter(const JArray< jint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      jint MultidimensionalCounter::getCount(const JArray< jint > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_4c6a473f00540fd2], a0.this$);
      }

      JArray< jint > MultidimensionalCounter::getCounts(jint a0) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_adb0f0485f08dbd0], a0));
      }

      jint MultidimensionalCounter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      jint MultidimensionalCounter::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_d6ab429752e7c267]);
      }

      JArray< jint > MultidimensionalCounter::getSizes() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getSizes_d6f20bd740dd34cd]));
      }

      ::org::hipparchus::util::MultidimensionalCounter$Iterator MultidimensionalCounter::iterator() const
      {
        return ::org::hipparchus::util::MultidimensionalCounter$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_583b7bb7d2617813]));
      }

      ::java::lang::String MultidimensionalCounter::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter, dimension),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, size),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, sizes),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, getCount, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getCounts, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSize, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSizes, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, iterator, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter)[] = {
        { Py_tp_methods, t_MultidimensionalCounter__methods_ },
        { Py_tp_init, (void *) t_MultidimensionalCounter_init_ },
        { Py_tp_getset, t_MultidimensionalCounter__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_MultidimensionalCounter *)) get_iterator< t_MultidimensionalCounter >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter, t_MultidimensionalCounter, MultidimensionalCounter);

      void t_MultidimensionalCounter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter), &PY_TYPE_DEF(MultidimensionalCounter), module, "MultidimensionalCounter", 0);
      }

      void t_MultidimensionalCounter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "class_", make_descriptor(MultidimensionalCounter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "wrapfn_", make_descriptor(t_MultidimensionalCounter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter::wrap_Object(MultidimensionalCounter(((t_MultidimensionalCounter *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds)
      {
        JArray< jint > a0((jobject) NULL);
        MultidimensionalCounter object((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          INT_CALL(object = MultidimensionalCounter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg)
      {
        JArray< jint > a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "[I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCounts(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getCounts", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSizes());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self)
      {
        ::org::hipparchus::util::MultidimensionalCounter$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_MultidimensionalCounter$Iterator::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MultidimensionalCounter), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSizes());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOP.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOP::class$ = NULL;
      jmethodID *DOP::mids$ = NULL;
      bool DOP::live$ = false;

      jclass DOP::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOP");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b1384d6cea6ba11] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;IDDDDD)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGdop_9981f74b2d109da6] = env->getMethodID(cls, "getGdop", "()D");
          mids$[mid_getGnssNb_d6ab429752e7c267] = env->getMethodID(cls, "getGnssNb", "()I");
          mids$[mid_getHdop_9981f74b2d109da6] = env->getMethodID(cls, "getHdop", "()D");
          mids$[mid_getLocation_bdca252cae79438c] = env->getMethodID(cls, "getLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPdop_9981f74b2d109da6] = env->getMethodID(cls, "getPdop", "()D");
          mids$[mid_getTdop_9981f74b2d109da6] = env->getMethodID(cls, "getTdop", "()D");
          mids$[mid_getVdop_9981f74b2d109da6] = env->getMethodID(cls, "getVdop", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DOP::DOP(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b1384d6cea6ba11, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

      ::org::orekit::time::AbsoluteDate DOP::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble DOP::getGdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGdop_9981f74b2d109da6]);
      }

      jint DOP::getGnssNb() const
      {
        return env->callIntMethod(this$, mids$[mid_getGnssNb_d6ab429752e7c267]);
      }

      jdouble DOP::getHdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHdop_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::GeodeticPoint DOP::getLocation() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getLocation_bdca252cae79438c]));
      }

      jdouble DOP::getPdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPdop_9981f74b2d109da6]);
      }

      jdouble DOP::getTdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdop_9981f74b2d109da6]);
      }

      jdouble DOP::getVdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdop_9981f74b2d109da6]);
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
      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DOP_getDate(t_DOP *self);
      static PyObject *t_DOP_getGdop(t_DOP *self);
      static PyObject *t_DOP_getGnssNb(t_DOP *self);
      static PyObject *t_DOP_getHdop(t_DOP *self);
      static PyObject *t_DOP_getLocation(t_DOP *self);
      static PyObject *t_DOP_getPdop(t_DOP *self);
      static PyObject *t_DOP_getTdop(t_DOP *self);
      static PyObject *t_DOP_getVdop(t_DOP *self);
      static PyObject *t_DOP_get__date(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data);
      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__location(t_DOP *self, void *data);
      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data);
      static PyGetSetDef t_DOP__fields_[] = {
        DECLARE_GET_FIELD(t_DOP, date),
        DECLARE_GET_FIELD(t_DOP, gdop),
        DECLARE_GET_FIELD(t_DOP, gnssNb),
        DECLARE_GET_FIELD(t_DOP, hdop),
        DECLARE_GET_FIELD(t_DOP, location),
        DECLARE_GET_FIELD(t_DOP, pdop),
        DECLARE_GET_FIELD(t_DOP, tdop),
        DECLARE_GET_FIELD(t_DOP, vdop),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOP__methods_[] = {
        DECLARE_METHOD(t_DOP, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGnssNb, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getHdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getLocation, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getPdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getTdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getVdop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOP)[] = {
        { Py_tp_methods, t_DOP__methods_ },
        { Py_tp_init, (void *) t_DOP_init_ },
        { Py_tp_getset, t_DOP__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOP)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOP, t_DOP, DOP);

      void t_DOP::install(PyObject *module)
      {
        installType(&PY_TYPE(DOP), &PY_TYPE_DEF(DOP), module, "DOP", 0);
      }

      void t_DOP::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "class_", make_descriptor(DOP::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "wrapfn_", make_descriptor(t_DOP::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOP::initializeClass, 1)))
          return NULL;
        return t_DOP::wrap_Object(DOP(((t_DOP *) arg)->object.this$));
      }
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOP::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        DOP object((jobject) NULL);

        if (!parseArgs(args, "kkIDDDDD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = DOP(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DOP_getDate(t_DOP *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DOP_getGdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getGnssNb(t_DOP *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGnssNb());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DOP_getHdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getLocation(t_DOP *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_DOP_getPdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getTdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getVdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_get__date(t_DOP *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGnssNb());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__location(t_DOP *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdop());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldStepEndEventState::class$ = NULL;
        jmethodID *FieldStepEndEventState::mids$ = NULL;
        bool FieldStepEndEventState::live$ = false;

        jclass FieldStepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldStepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0490fb61ed7db186] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
            mids$[mid_doEvent_bb679c793e33809e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_0c45e83e8206e2a1] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_08d37e3f77b7239d] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_30b062700dfec7e5] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEStepEndHandler;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setStepEnd_f63ca9e3185c722e] = env->getMethodID(cls, "setStepEnd", "(Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepEndEventState::FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0490fb61ed7db186, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldStepEndEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bb679c793e33809e], a0.this$));
        }

        jboolean FieldStepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_0c45e83e8206e2a1], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldStepEndEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_08d37e3f77b7239d]));
        }

        ::org::hipparchus::ode::events::FieldODEStepEndHandler FieldStepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_30b062700dfec7e5]));
        }

        void FieldStepEndEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }

        void FieldStepEndEventState::setStepEnd(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_f63ca9e3185c722e], a0.this$);
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
        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args);
        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args);
        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data);
        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data);
        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data);
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data);
        static PyGetSetDef t_FieldStepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, handler),
          DECLARE_SET_FIELD(t_FieldStepEndEventState, stepEnd),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepEndEventState__methods_[] = {
          DECLARE_METHOD(t_FieldStepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepEndEventState)[] = {
          { Py_tp_methods, t_FieldStepEndEventState__methods_ },
          { Py_tp_init, (void *) t_FieldStepEndEventState_init_ },
          { Py_tp_getset, t_FieldStepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepEndEventState, t_FieldStepEndEventState, FieldStepEndEventState);
        PyObject *t_FieldStepEndEventState::wrap_Object(const FieldStepEndEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepEndEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepEndEventState), &PY_TYPE_DEF(FieldStepEndEventState), module, "FieldStepEndEventState", 0);
        }

        void t_FieldStepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "class_", make_descriptor(FieldStepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "wrapfn_", make_descriptor(t_FieldStepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepEndEventState::initializeClass, 1)))
            return NULL;
          return t_FieldStepEndEventState::wrap_Object(FieldStepEndEventState(((t_FieldStepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldStepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
          {
            INT_CALL(object = FieldStepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args)
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

        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(value);
        }

        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbstractMultipleShooting::class$ = NULL;
      jmethodID *AbstractMultipleShooting::mids$ = NULL;
      bool AbstractMultipleShooting::live$ = false;

      jclass AbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addConstraint_e98d7b3e971b6087] = env->getMethodID(cls, "addConstraint", "(IID)V");
          mids$[mid_compute_d751c1a57012b438] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_setEpochFreedom_06c90d8be18d8afa] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
          mids$[mid_setPatchPointComponentFreedom_b3dc41fdeb98586b] = env->getMethodID(cls, "setPatchPointComponentFreedom", "(IIZ)V");
          mids$[mid_setScaleLength_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScaleLength", "(D)V");
          mids$[mid_setScaleTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScaleTime", "(D)V");
          mids$[mid_getPatchPoint_bc8abbf0245ce660] = env->getMethodID(cls, "getPatchPoint", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_computeEpochJacobianMatrix_f1fb8031f2a01da7] = env->getMethodID(cls, "computeEpochJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_updateAdditionalConstraints_9d367e34fba0a5ea] = env->getMethodID(cls, "updateAdditionalConstraints", "(I[D)V");
          mids$[mid_computeAdditionalConstraints_f7899d4480f6af2b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_bc8abbf0245ce660] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getNumberOfFreeComponents_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfFreeComponents", "()I");
          mids$[mid_getNumberOfConstraints_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
          mids$[mid_getFreeCompsMap_f192f3d23afc5e5e] = env->getMethodID(cls, "getFreeCompsMap", "()[Z");
          mids$[mid_getConstraintsMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getConstraintsMap", "()Ljava/util/Map;");
          mids$[mid_getPatchedSpacecraftState_d751c1a57012b438] = env->getMethodID(cls, "getPatchedSpacecraftState", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMultipleShooting::addConstraint(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addConstraint_e98d7b3e971b6087], a0, a1, a2);
      }

      ::java::util::List AbstractMultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_d751c1a57012b438]));
      }

      void AbstractMultipleShooting::setEpochFreedom(jint a0, jboolean a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEpochFreedom_06c90d8be18d8afa], a0, a1);
      }

      void AbstractMultipleShooting::setPatchPointComponentFreedom(jint a0, jint a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setPatchPointComponentFreedom_b3dc41fdeb98586b], a0, a1, a2);
      }

      void AbstractMultipleShooting::setScaleLength(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleLength_1ad26e8c8c0cd65b], a0);
      }

      void AbstractMultipleShooting::setScaleTime(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleTime_1ad26e8c8c0cd65b], a0);
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
      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self);
      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg);
      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractMultipleShooting__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleLength),
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_AbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, addConstraint, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, compute, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setEpochFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setPatchPointComponentFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleLength, METH_O),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleTime, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleShooting)[] = {
        { Py_tp_methods, t_AbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMultipleShooting, t_AbstractMultipleShooting, AbstractMultipleShooting);

      void t_AbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMultipleShooting), &PY_TYPE_DEF(AbstractMultipleShooting), module, "AbstractMultipleShooting", 0);
      }

      void t_AbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "class_", make_descriptor(AbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "wrapfn_", make_descriptor(t_AbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_AbstractMultipleShooting::wrap_Object(AbstractMultipleShooting(((t_AbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addConstraint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addConstraint", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }

      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jboolean a1;

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(self->object.setEpochFreedom(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEpochFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean a2;

        if (!parseArgs(args, "IIZ", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setPatchPointComponentFreedom(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setPatchPointComponentFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleLength(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleLength", arg);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleTime(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleTime", arg);
        return NULL;
      }

      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleLength(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
        return -1;
      }

      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleTime(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggersResetter::class$ = NULL;
          jmethodID *ManeuverTriggersResetter::mids$ = NULL;
          bool ManeuverTriggersResetter::live$ = false;

          jclass ManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_b69b5541e48d21c0] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_ed3fe207e6fde26f] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggersResetter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
          }

          void ManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_b69b5541e48d21c0], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState ManeuverTriggersResetter::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ed3fe207e6fde26f], a0.this$));
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
        namespace trigger {
          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg);

          static PyMethodDef t_ManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_ManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggersResetter, t_ManeuverTriggersResetter, ManeuverTriggersResetter);

          void t_ManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggersResetter), &PY_TYPE_DEF(ManeuverTriggersResetter), module, "ManeuverTriggersResetter", 0);
          }

          void t_ManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "class_", make_descriptor(ManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "wrapfn_", make_descriptor(t_ManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggersResetter::wrap_Object(ManeuverTriggersResetter(((t_ManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmMessage::class$ = NULL;
              jmethodID *SsrIgmMessage::mids$ = NULL;
              bool SsrIgmMessage::live$ = false;

              jclass SsrIgmMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_48bb09c647600811] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader;Ljava/util/List;)V");
                  mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmMessage::SsrIgmMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_48bb09c647600811, a0, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::gnss::SatelliteSystem SsrIgmMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
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
              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args);
              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self);
              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data);
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data);
              static PyGetSetDef t_SsrIgmMessage__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgmMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_SsrIgmMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmMessage__methods_[] = {
                DECLARE_METHOD(t_SsrIgmMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgmMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmMessage)[] = {
                { Py_tp_methods, t_SsrIgmMessage__methods_ },
                { Py_tp_init, (void *) t_SsrIgmMessage_init_ },
                { Py_tp_getset, t_SsrIgmMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgmMessage, t_SsrIgmMessage, SsrIgmMessage);
              PyObject *t_SsrIgmMessage::wrap_Object(const SsrIgmMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgmMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmMessage), &PY_TYPE_DEF(SsrIgmMessage), module, "SsrIgmMessage", 0);
              }

              void t_SsrIgmMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "class_", make_descriptor(SsrIgmMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "wrapfn_", make_descriptor(t_SsrIgmMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmMessage::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmMessage::wrap_Object(SsrIgmMessage(((t_SsrIgmMessage *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgmMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgmMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Max::class$ = NULL;
        jmethodID *Max::mids$ = NULL;
        bool Max::live$ = false;

        jclass Max::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Max");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Max::Max() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Max::value(jdouble a0, jdouble a1) const
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
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Max_value(t_Max *self, PyObject *args);

        static PyMethodDef t_Max__methods_[] = {
          DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
          { Py_tp_methods, t_Max__methods_ },
          { Py_tp_init, (void *) t_Max_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Max)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Max, t_Max, Max);

        void t_Max::install(PyObject *module)
        {
          installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
        }

        void t_Max::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Max::initializeClass, 1)))
            return NULL;
          return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
        }
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Max::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
        {
          Max object((jobject) NULL);

          INT_CALL(object = Max());
          self->object = object;

          return 0;
        }

        static PyObject *t_Max_value(t_Max *self, PyObject *args)
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
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
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
            mids$[mid_init$_4abd329f558403d2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction;)V");
            mids$[mid_value_2d9ee2fffcc89139] = env->getMethodID(cls, "value", "([D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianFunction::JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4abd329f558403d2, a0.this$)) {}

        JArray< JArray< jdouble > > JacobianFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_2d9ee2fffcc89139], a0.this$));
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
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Position::class$ = NULL;
      jmethodID *MathArrays$Position::mids$ = NULL;
      bool MathArrays$Position::live$ = false;
      MathArrays$Position *MathArrays$Position::HEAD = NULL;
      MathArrays$Position *MathArrays$Position::TAIL = NULL;

      jclass MathArrays$Position::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Position");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_d3b6b77601511df6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$Position;");
          mids$[mid_values_490c8e9a6e541284] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$Position;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HEAD = new MathArrays$Position(env->getStaticObjectField(cls, "HEAD", "Lorg/hipparchus/util/MathArrays$Position;"));
          TAIL = new MathArrays$Position(env->getStaticObjectField(cls, "TAIL", "Lorg/hipparchus/util/MathArrays$Position;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$Position MathArrays$Position::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$Position(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d3b6b77601511df6], a0.this$));
      }

      JArray< MathArrays$Position > MathArrays$Position::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$Position >(env->callStaticObjectMethod(cls, mids$[mid_values_490c8e9a6e541284]));
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
      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args);
      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$Position_values(PyTypeObject *type);
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data);
      static PyGetSetDef t_MathArrays$Position__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$Position, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$Position__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Position, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$Position, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Position)[] = {
        { Py_tp_methods, t_MathArrays$Position__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$Position__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Position)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$Position, t_MathArrays$Position, MathArrays$Position);
      PyObject *t_MathArrays$Position::wrap_Object(const MathArrays$Position& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$Position::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Position), &PY_TYPE_DEF(MathArrays$Position), module, "MathArrays$Position", 0);
      }

      void t_MathArrays$Position::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "class_", make_descriptor(MathArrays$Position::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "wrapfn_", make_descriptor(t_MathArrays$Position::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$Position::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "HEAD", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::HEAD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "TAIL", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::TAIL)));
      }

      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Position::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Position::wrap_Object(MathArrays$Position(((t_MathArrays$Position *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Position::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$Position result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::valueOf(a0));
          return t_MathArrays$Position::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$Position_values(PyTypeObject *type)
      {
        JArray< MathArrays$Position > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$Position::wrap_jobject);
      }
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CivilianNavigationMessage::class$ = NULL;
            jmethodID *CivilianNavigationMessage::mids$ = NULL;
            bool CivilianNavigationMessage::live$ = false;
            ::java::lang::String *CivilianNavigationMessage::CNAV = NULL;
            ::java::lang::String *CivilianNavigationMessage::CNV2 = NULL;

            jclass CivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getIscL1CA_9981f74b2d109da6] = env->getMethodID(cls, "getIscL1CA", "()D");
                mids$[mid_getIscL1CD_9981f74b2d109da6] = env->getMethodID(cls, "getIscL1CD", "()D");
                mids$[mid_getIscL1CP_9981f74b2d109da6] = env->getMethodID(cls, "getIscL1CP", "()D");
                mids$[mid_getIscL2C_9981f74b2d109da6] = env->getMethodID(cls, "getIscL2C", "()D");
                mids$[mid_getIscL5I5_9981f74b2d109da6] = env->getMethodID(cls, "getIscL5I5", "()D");
                mids$[mid_getIscL5Q5_9981f74b2d109da6] = env->getMethodID(cls, "getIscL5Q5", "()D");
                mids$[mid_getSvAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_d6ab429752e7c267] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_9981f74b2d109da6] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getUraiEd_d6ab429752e7c267] = env->getMethodID(cls, "getUraiEd", "()I");
                mids$[mid_getUraiNed0_d6ab429752e7c267] = env->getMethodID(cls, "getUraiNed0", "()I");
                mids$[mid_getUraiNed1_d6ab429752e7c267] = env->getMethodID(cls, "getUraiNed1", "()I");
                mids$[mid_getUraiNed2_d6ab429752e7c267] = env->getMethodID(cls, "getUraiNed2", "()I");
                mids$[mid_isCnv2_eee3de00fe971136] = env->getMethodID(cls, "isCnv2", "()Z");
                mids$[mid_setADot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setIscL1CA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL1CA", "(D)V");
                mids$[mid_setIscL1CD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL1CD", "(D)V");
                mids$[mid_setIscL1CP_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL1CP", "(D)V");
                mids$[mid_setIscL2C_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL2C", "(D)V");
                mids$[mid_setIscL5I5_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL5I5", "(D)V");
                mids$[mid_setIscL5Q5_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscL5Q5", "(D)V");
                mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setUraiEd_8fd427ab23829bf5] = env->getMethodID(cls, "setUraiEd", "(I)V");
                mids$[mid_setUraiNed0_8fd427ab23829bf5] = env->getMethodID(cls, "setUraiNed0", "(I)V");
                mids$[mid_setUraiNed1_8fd427ab23829bf5] = env->getMethodID(cls, "setUraiNed1", "(I)V");
                mids$[mid_setUraiNed2_8fd427ab23829bf5] = env->getMethodID(cls, "setUraiNed2", "(I)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNAV = new ::java::lang::String(env->getStaticObjectField(cls, "CNAV", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble CivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL1CA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CA_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CD_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CP_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL2C() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL2C_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL5I5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5I5_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getIscL5Q5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5Q5_9981f74b2d109da6]);
            }

            jdouble CivilianNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_9981f74b2d109da6]);
            }

            jint CivilianNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_d6ab429752e7c267]);
            }

            jdouble CivilianNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_9981f74b2d109da6]);
            }

            jint CivilianNavigationMessage::getUraiEd() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiEd_d6ab429752e7c267]);
            }

            jint CivilianNavigationMessage::getUraiNed0() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed0_d6ab429752e7c267]);
            }

            jint CivilianNavigationMessage::getUraiNed1() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed1_d6ab429752e7c267]);
            }

            jint CivilianNavigationMessage::getUraiNed2() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed2_d6ab429752e7c267]);
            }

            jboolean CivilianNavigationMessage::isCnv2() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCnv2_eee3de00fe971136]);
            }

            void CivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL1CA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CA_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CD_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CP_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL2C(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL2C_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL5I5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5I5_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setIscL5Q5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5Q5_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_8fd427ab23829bf5], a0);
            }

            void CivilianNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_1ad26e8c8c0cd65b], a0);
            }

            void CivilianNavigationMessage::setUraiEd(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiEd_8fd427ab23829bf5], a0);
            }

            void CivilianNavigationMessage::setUraiNed0(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed0_8fd427ab23829bf5], a0);
            }

            void CivilianNavigationMessage::setUraiNed1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed1_8fd427ab23829bf5], a0);
            }

            void CivilianNavigationMessage::setUraiNed2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed2_8fd427ab23829bf5], a0);
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
            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data);
            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_CivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, aDot),
              DECLARE_GET_FIELD(t_CivilianNavigationMessage, cnv2),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CA),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CP),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL2C),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5I5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5Q5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiEd),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed0),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed1),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_CivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CA, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CP, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL2C, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5I5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5Q5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiEd, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed0, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed1, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, isCnv2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CA, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CP, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL2C, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5I5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5Q5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiEd, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed0, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed1, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CivilianNavigationMessage)[] = {
              { Py_tp_methods, t_CivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(CivilianNavigationMessage, t_CivilianNavigationMessage, CivilianNavigationMessage);

            void t_CivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(CivilianNavigationMessage), &PY_TYPE_DEF(CivilianNavigationMessage), module, "CivilianNavigationMessage", 0);
            }

            void t_CivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "class_", make_descriptor(CivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "wrapfn_", make_descriptor(t_CivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(CivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNAV", make_descriptor(j2p(*CivilianNavigationMessage::CNAV)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNV2", make_descriptor(j2p(*CivilianNavigationMessage::CNV2)));
            }

            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_CivilianNavigationMessage::wrap_Object(CivilianNavigationMessage(((t_CivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL2C());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiEd());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed0());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCnv2());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CA", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CP", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL2C(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL2C", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5I5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5I5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5Q5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5Q5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiEd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiEd", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed0", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed1", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed2", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCnv2());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CA", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CP", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL2C());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL2C(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL2C", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5I5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5I5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5Q5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5Q5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiEd());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiEd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiEd", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed0());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed0", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed1());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed1", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed2());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed2", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
