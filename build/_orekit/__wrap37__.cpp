#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
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

        ::java::lang::Class *DormandPrince853FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince853FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince853FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegratorBuilder::DormandPrince853FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince853FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegratorBuilder, t_DormandPrince853FieldIntegratorBuilder, DormandPrince853FieldIntegratorBuilder);
        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_Object(const DormandPrince853FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder), module, "DormandPrince853FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince853FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince853FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegratorBuilder::wrap_Object(DormandPrince853FieldIntegratorBuilder(((t_DormandPrince853FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(DormandPrince853FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateFunction::class$ = NULL;
      jmethodID *MultivariateFunction::mids$ = NULL;
      bool MultivariateFunction::live$ = false;

      jclass MultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_b060e4326765ccf1] = env->getMethodID(cls, "value", "([D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateFunction::value(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_b060e4326765ccf1], a0.this$);
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
      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateFunction)[] = {
        { Py_tp_methods, t_MultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateFunction, t_MultivariateFunction, MultivariateFunction);

      void t_MultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateFunction), &PY_TYPE_DEF(MultivariateFunction), module, "MultivariateFunction", 0);
      }

      void t_MultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "class_", make_descriptor(MultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "wrapfn_", make_descriptor(t_MultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateFunction::wrap_Object(MultivariateFunction(((t_MultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonParser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonParser::class$ = NULL;
      jmethodID *PythonParser::mids$ = NULL;
      bool PythonParser::live$ = false;

      jclass PythonParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParser::PythonParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonParser::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParser_finalize(t_PythonParser *self);
      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args);
      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data);
      static PyGetSetDef t_PythonParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParser__methods_[] = {
        DECLARE_METHOD(t_PythonParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParser)[] = {
        { Py_tp_methods, t_PythonParser__methods_ },
        { Py_tp_init, (void *) t_PythonParser_init_ },
        { Py_tp_getset, t_PythonParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParser, t_PythonParser, PythonParser);

      void t_PythonParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParser), &PY_TYPE_DEF(PythonParser), module, "PythonParser", 1);
      }

      void t_PythonParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "class_", make_descriptor(PythonParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "wrapfn_", make_descriptor(t_PythonParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;", (void *) t_PythonParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParser::initializeClass, 1)))
          return NULL;
        return t_PythonParser::wrap_Object(PythonParser(((t_PythonParser *) arg)->object.this$));
      }
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds)
      {
        PythonParser object((jobject) NULL);

        INT_CALL(object = PythonParser());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParser_finalize(t_PythonParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *FieldShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *FieldShortTermEncounter2DDefinition::mids$ = NULL;
              bool FieldShortTermEncounter2DDefinition::live$ = false;

              jclass FieldShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ab08e21fdde7feba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_c7f3e83cc7e3b100] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_14ab628f8f31b5f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_b698a38885ad45d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_072038cb4e489bd9] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_072038cb4e489bd9] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_81520b552cb3fa26] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_81520b552cb3fa26] = env->getMethodID(cls, "computeMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_1d3e368d09a6f8a6] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMissDistance_81520b552cb3fa26] = env->getMethodID(cls, "computeMissDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeOtherPositionInCollisionPlane_6cf625db6271ad65] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_6cf625db6271ad65] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_d397b0a1d0379da7] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_3bf1e58d8bf42589] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/FieldPVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_81d49643ce3a3c0b] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_81520b552cb3fa26] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_1d3e368d09a6f8a6] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_e333d17d0ed875d5] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_0a337cffdfb74cd1] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getCombinedRadius_81520b552cb3fa26] = env->getMethodID(cls, "getCombinedRadius", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getEncounterFrame_b4b6e345de2c2267] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_52c9ebac01a11008] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getOtherCovariance_072038cb4e489bd9] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getReferenceAtTCA_52c9ebac01a11008] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getReferenceCovariance_072038cb4e489bd9] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getTca_fa23a4301b9c83e7] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/FieldAbsoluteDate;");
                  mids$[mid_toEncounter_e24bbfea5786df9c] = env->getMethodID(cls, "toEncounter", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab08e21fdde7feba, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7f3e83cc7e3b100, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14ab628f8f31b5f2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b698a38885ad45d3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7)) {}

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_072038cb4e489bd9]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_072038cb4e489bd9]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeCoppolaEncounterDuration_81520b552cb3fa26]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_81520b552cb3fa26]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_1d3e368d09a6f8a6], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMissDistance_81520b552cb3fa26]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_6cf625db6271ad65]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_6cf625db6271ad65]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_d397b0a1d0379da7], a0));
              }

              ::org::orekit::utils::FieldPVCoordinates FieldShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_3bf1e58d8bf42589]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_81d49643ce3a3c0b]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_81520b552cb3fa26]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_1d3e368d09a6f8a6], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0, const ::org::hipparchus::linear::FieldMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_e333d17d0ed875d5], a0.this$, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_0a337cffdfb74cd1], a0.this$, a1.this$, a2.this$, a3.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCombinedRadius_81520b552cb3fa26]));
              }

              ::org::orekit::frames::encounter::EncounterLOF FieldShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b4b6e345de2c2267]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_52c9ebac01a11008]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_072038cb4e489bd9]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_52c9ebac01a11008]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_072038cb4e489bd9]));
              }

              ::org::orekit::time::FieldAbsoluteDate FieldShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_fa23a4301b9c83e7]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition FieldShortTermEncounter2DDefinition::toEncounter() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(env->callObjectMethod(this$, mids$[mid_toEncounter_e24bbfea5786df9c]));
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
              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_FieldShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, tca),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, toEncounter, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_FieldShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_FieldShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_FieldShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldShortTermEncounter2DDefinition, t_FieldShortTermEncounter2DDefinition, FieldShortTermEncounter2DDefinition);
              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_Object(const FieldShortTermEncounter2DDefinition& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldShortTermEncounter2DDefinition), &PY_TYPE_DEF(FieldShortTermEncounter2DDefinition), module, "FieldShortTermEncounter2DDefinition", 0);
              }

              void t_FieldShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "class_", make_descriptor(FieldShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_FieldShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_FieldShortTermEncounter2DDefinition::wrap_Object(FieldShortTermEncounter2DDefinition(((t_FieldShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeMissDistance());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                  break;
                 case 4:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.getCombinedRadius());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition result((jobject) NULL);
                OBJ_CALL(result = self->object.toEncounter());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(result);
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                OBJ_CALL(value = self->object.getCombinedRadius());
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *DataQuality::class$ = NULL;
            jmethodID *DataQuality::mids$ = NULL;
            bool DataQuality::live$ = false;
            DataQuality *DataQuality::DEGRADED = NULL;
            DataQuality *DataQuality::RAW = NULL;
            DataQuality *DataQuality::VALIDATED = NULL;

            jclass DataQuality::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/DataQuality");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_a670a0d0bd9a429d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_values_4eee34d7b567d7f2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEGRADED = new DataQuality(env->getStaticObjectField(cls, "DEGRADED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                RAW = new DataQuality(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                VALIDATED = new DataQuality(env->getStaticObjectField(cls, "VALIDATED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DataQuality DataQuality::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return DataQuality(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a670a0d0bd9a429d], a0.this$));
            }

            JArray< DataQuality > DataQuality::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< DataQuality >(env->callStaticObjectMethod(cls, mids$[mid_values_4eee34d7b567d7f2]));
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
            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args);
            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_DataQuality_values(PyTypeObject *type);
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data);
            static PyGetSetDef t_DataQuality__fields_[] = {
              DECLARE_GET_FIELD(t_DataQuality, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DataQuality__methods_[] = {
              DECLARE_METHOD(t_DataQuality, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, of_, METH_VARARGS),
              DECLARE_METHOD(t_DataQuality, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DataQuality)[] = {
              { Py_tp_methods, t_DataQuality__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DataQuality__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DataQuality)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(DataQuality, t_DataQuality, DataQuality);
            PyObject *t_DataQuality::wrap_Object(const DataQuality& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_DataQuality::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_DataQuality::install(PyObject *module)
            {
              installType(&PY_TYPE(DataQuality), &PY_TYPE_DEF(DataQuality), module, "DataQuality", 0);
            }

            void t_DataQuality::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "class_", make_descriptor(DataQuality::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "wrapfn_", make_descriptor(t_DataQuality::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "boxfn_", make_descriptor(boxObject));
              env->getClass(DataQuality::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "DEGRADED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::DEGRADED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "RAW", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::RAW)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "VALIDATED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::VALIDATED)));
            }

            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DataQuality::initializeClass, 1)))
                return NULL;
              return t_DataQuality::wrap_Object(DataQuality(((t_DataQuality *) arg)->object.this$));
            }
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DataQuality::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              DataQuality result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::valueOf(a0));
                return t_DataQuality::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_DataQuality_values(PyTypeObject *type)
            {
              JArray< DataQuality > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::values());
              return JArray<jobject>(result.this$).wrap(t_DataQuality::wrap_jobject);
            }
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data)
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
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AlignmentDetector::class$ = NULL;
        jmethodID *AlignmentDetector::mids$ = NULL;
        bool AlignmentDetector::live$ = false;

        jclass AlignmentDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AlignmentDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f26039f723423f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_45fbe9bb503ae085] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_a7aae65c472927ce] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAlignAngle_b74f83833fdad017] = env->getMethodID(cls, "getAlignAngle", "()D");
            mids$[mid_getPVCoordinatesProvider_8a41319e47f3bd7c] = env->getMethodID(cls, "getPVCoordinatesProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_2b5e486a53cc56d8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AlignmentDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlignmentDetector::AlignmentDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0f26039f723423f9, a0.this$, a1.this$, a2)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_45fbe9bb503ae085, a0, a1.this$, a2.this$, a3)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, jdouble a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a7aae65c472927ce, a0, a1, a2.this$, a3)) {}

        jdouble AlignmentDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble AlignmentDetector::getAlignAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlignAngle_b74f83833fdad017]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AlignmentDetector::getPVCoordinatesProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVCoordinatesProvider_8a41319e47f3bd7c]));
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
        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args);
        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args);
        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data);
        static PyGetSetDef t_AlignmentDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AlignmentDetector, alignAngle),
          DECLARE_GET_FIELD(t_AlignmentDetector, pVCoordinatesProvider),
          DECLARE_GET_FIELD(t_AlignmentDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlignmentDetector__methods_[] = {
          DECLARE_METHOD(t_AlignmentDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, getAlignAngle, METH_NOARGS),
          DECLARE_METHOD(t_AlignmentDetector, getPVCoordinatesProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlignmentDetector)[] = {
          { Py_tp_methods, t_AlignmentDetector__methods_ },
          { Py_tp_init, (void *) t_AlignmentDetector_init_ },
          { Py_tp_getset, t_AlignmentDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlignmentDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AlignmentDetector, t_AlignmentDetector, AlignmentDetector);
        PyObject *t_AlignmentDetector::wrap_Object(const AlignmentDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlignmentDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlignmentDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AlignmentDetector), &PY_TYPE_DEF(AlignmentDetector), module, "AlignmentDetector", 0);
        }

        void t_AlignmentDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "class_", make_descriptor(AlignmentDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "wrapfn_", make_descriptor(t_AlignmentDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlignmentDetector::initializeClass, 1)))
            return NULL;
          return t_AlignmentDetector::wrap_Object(AlignmentDetector(((t_AlignmentDetector *) arg)->object.this$));
        }
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlignmentDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
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

        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AlignmentDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/TruncatingFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *TruncatingFilter::class$ = NULL;
      jmethodID *TruncatingFilter::mids$ = NULL;
      bool TruncatingFilter::live$ = false;

      jclass TruncatingFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/TruncatingFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TruncatingFilter::TruncatingFilter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ::org::orekit::data::DataSource TruncatingFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_bbc30294b1b0b691], a0.this$));
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
      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg);

      static PyMethodDef t_TruncatingFilter__methods_[] = {
        DECLARE_METHOD(t_TruncatingFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TruncatingFilter)[] = {
        { Py_tp_methods, t_TruncatingFilter__methods_ },
        { Py_tp_init, (void *) t_TruncatingFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TruncatingFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TruncatingFilter, t_TruncatingFilter, TruncatingFilter);

      void t_TruncatingFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(TruncatingFilter), &PY_TYPE_DEF(TruncatingFilter), module, "TruncatingFilter", 0);
      }

      void t_TruncatingFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "class_", make_descriptor(TruncatingFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "wrapfn_", make_descriptor(t_TruncatingFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TruncatingFilter::initializeClass, 1)))
          return NULL;
        return t_TruncatingFilter::wrap_Object(TruncatingFilter(((t_TruncatingFilter *) arg)->object.this$));
      }
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TruncatingFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        TruncatingFilter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = TruncatingFilter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4E::class$ = NULL;
          jmethodID *SubFrame4E::mids$ = NULL;
          bool SubFrame4E::live$ = false;
          jint SubFrame4E::NB_AS = (jint) 0;
          jint SubFrame4E::NB_SVH = (jint) 0;

          jclass SubFrame4E::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4E");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAntiSpoofing_0e7cf35192c3effe] = env->getMethodID(cls, "getAntiSpoofing", "(I)I");
              mids$[mid_getReserved10_55546ef6a647f39b] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReserved8_55546ef6a647f39b] = env->getMethodID(cls, "getReserved8", "()I");
              mids$[mid_getSvHealth_0e7cf35192c3effe] = env->getMethodID(cls, "getSvHealth", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_AS = env->getStaticIntField(cls, "NB_AS");
              NB_SVH = env->getStaticIntField(cls, "NB_SVH");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4E::getAntiSpoofing(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_0e7cf35192c3effe], a0);
          }

          jint SubFrame4E::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_55546ef6a647f39b]);
          }

          jint SubFrame4E::getReserved8() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved8_55546ef6a647f39b]);
          }

          jint SubFrame4E::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_0e7cf35192c3effe], a0);
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
          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args);
          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg);
          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data);
          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data);
          static PyGetSetDef t_SubFrame4E__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4E, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4E, reserved8),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4E__methods_[] = {
            DECLARE_METHOD(t_SubFrame4E, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, getAntiSpoofing, METH_VARARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved8, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getSvHealth, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4E)[] = {
            { Py_tp_methods, t_SubFrame4E__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4E__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4E)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4E, t_SubFrame4E, SubFrame4E);

          void t_SubFrame4E::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4E), &PY_TYPE_DEF(SubFrame4E), module, "SubFrame4E", 0);
          }

          void t_SubFrame4E::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "class_", make_descriptor(SubFrame4E::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "wrapfn_", make_descriptor(t_SubFrame4E::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4E::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_AS", make_descriptor(SubFrame4E::NB_AS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_SVH", make_descriptor(SubFrame4E::NB_SVH));
          }

          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4E::initializeClass, 1)))
              return NULL;
            return t_SubFrame4E::wrap_Object(SubFrame4E(((t_SubFrame4E *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4E::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getAntiSpoofing(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SubFrame4E), (PyObject *) self, "getAntiSpoofing", args, 2);
          }

          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved8());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved8());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *FieldImpulseManeuver::class$ = NULL;
        jmethodID *FieldImpulseManeuver::mids$ = NULL;
        bool FieldImpulseManeuver::live$ = false;

        jclass FieldImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/FieldImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2fe057877dc3cacd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_00e409c52b5011bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_5fa6baf09859d34e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAttitudeOverride_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_ff5ac73a7b43eddd] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getIsp_81520b552cb3fa26] = env->getMethodID(cls, "getIsp", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTrigger_e78af9d734a5fbe1] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_353131f514daeb58] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/forces/maneuvers/FieldImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2fe057877dc3cacd, a0.this$, a1.this$, a2.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_00e409c52b5011bd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5fa6baf09859d34e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::attitudes::AttitudeProvider FieldImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_331f12bb6017243b]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType FieldImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_ff5ac73a7b43eddd]));
        }

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::getIsp() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIsp_81520b552cb3fa26]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_e78af9d734a5fbe1]));
        }

        void FieldImpulseManeuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args);
        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data);
        static PyGetSetDef t_FieldImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_FieldImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldImpulseManeuver)[] = {
          { Py_tp_methods, t_FieldImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_FieldImpulseManeuver_init_ },
          { Py_tp_getset, t_FieldImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldImpulseManeuver, t_FieldImpulseManeuver, FieldImpulseManeuver);
        PyObject *t_FieldImpulseManeuver::wrap_Object(const FieldImpulseManeuver& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldImpulseManeuver), &PY_TYPE_DEF(FieldImpulseManeuver), module, "FieldImpulseManeuver", 0);
        }

        void t_FieldImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "class_", make_descriptor(FieldImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "wrapfn_", make_descriptor(t_FieldImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_FieldImpulseManeuver::wrap_Object(FieldImpulseManeuver(((t_FieldImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getIsp());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getIsp());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *EllipsoidTessellator::class$ = NULL;
          jmethodID *EllipsoidTessellator::mids$ = NULL;
          bool EllipsoidTessellator::live$ = false;

          jclass EllipsoidTessellator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/EllipsoidTessellator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3d91d49623a90bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/tessellation/TileAiming;I)V");
              mids$[mid_buildSimpleZone_784441ded7dc083f] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_buildSimpleZone_2bffb02ae52a21cd] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[[D)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_sample_847bf4854a4b83cd] = env->getMethodID(cls, "sample", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DD)Ljava/util/List;");
              mids$[mid_tessellate_f423e5687a3d6692] = env->getMethodID(cls, "tessellate", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DDDDZZ)Ljava/util/List;");
              mids$[mid_toGeodetic_1767b75db8cabb48] = env->getMethodID(cls, "toGeodetic", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EllipsoidTessellator::EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::tessellation::TileAiming & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3d91d49623a90bf, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< ::org::orekit::bodies::GeodeticPoint > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_784441ded7dc083f], a0, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< JArray< jdouble > > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_2bffb02ae52a21cd], a0, a1.this$));
          }

          ::java::util::List EllipsoidTessellator::sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_sample_847bf4854a4b83cd], a0.this$, a1, a2));
          }

          ::java::util::List EllipsoidTessellator::tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, jboolean a6) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_tessellate_f423e5687a3d6692], a0.this$, a1, a2, a3, a4, a5, a6));
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
        namespace tessellation {
          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args);
          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args);
          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args);

          static PyMethodDef t_EllipsoidTessellator__methods_[] = {
            DECLARE_METHOD(t_EllipsoidTessellator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, buildSimpleZone, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, sample, METH_VARARGS),
            DECLARE_METHOD(t_EllipsoidTessellator, tessellate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EllipsoidTessellator)[] = {
            { Py_tp_methods, t_EllipsoidTessellator__methods_ },
            { Py_tp_init, (void *) t_EllipsoidTessellator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EllipsoidTessellator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EllipsoidTessellator, t_EllipsoidTessellator, EllipsoidTessellator);

          void t_EllipsoidTessellator::install(PyObject *module)
          {
            installType(&PY_TYPE(EllipsoidTessellator), &PY_TYPE_DEF(EllipsoidTessellator), module, "EllipsoidTessellator", 0);
          }

          void t_EllipsoidTessellator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "class_", make_descriptor(EllipsoidTessellator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "wrapfn_", make_descriptor(t_EllipsoidTessellator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EllipsoidTessellator::initializeClass, 1)))
              return NULL;
            return t_EllipsoidTessellator::wrap_Object(EllipsoidTessellator(((t_EllipsoidTessellator *) arg)->object.this$));
          }
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EllipsoidTessellator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::tessellation::TileAiming a1((jobject) NULL);
            jint a2;
            EllipsoidTessellator object((jobject) NULL);

            if (!parseArgs(args, "kkI", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::tessellation::TileAiming::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EllipsoidTessellator(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< ::org::orekit::bodies::GeodeticPoint > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                JArray< JArray< jdouble > > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[[D", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "buildSimpleZone", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.sample(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sample", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jboolean a5;
            jboolean a6;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDDDDZZ", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = self->object.tessellate(a0, a1, a2, a3, a4, a5, a6));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "tessellate", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEState::class$ = NULL;
      jmethodID *ComplexODEState::mids$ = NULL;
      bool ComplexODEState::live$ = false;

      jclass ComplexODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_96bdc59640cbf139] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_ffd216bbb5a2703a] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteState_24cc06122e1087cf] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getCompleteStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_24cc06122e1087cf] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_1f034b9f28067a63] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_29207c90104b0a0b] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/complex/Complex;)[[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96bdc59640cbf139, a0, a1.this$)) {}

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ffd216bbb5a2703a, a0, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteState_24cc06122e1087cf]));
      }

      jint ComplexODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_55546ef6a647f39b]);
      }

      jint ComplexODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_24cc06122e1087cf]));
      }

      jint ComplexODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_55546ef6a647f39b]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_1f034b9f28067a63], a0));
      }

      jint ComplexODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe], a0);
      }

      jdouble ComplexODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
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
      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data);
      static PyGetSetDef t_ComplexODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEState, completeState),
        DECLARE_GET_FIELD(t_ComplexODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryState),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEState__methods_[] = {
        DECLARE_METHOD(t_ComplexODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEState)[] = {
        { Py_tp_methods, t_ComplexODEState__methods_ },
        { Py_tp_init, (void *) t_ComplexODEState_init_ },
        { Py_tp_getset, t_ComplexODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEState, t_ComplexODEState, ComplexODEState);

      void t_ComplexODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEState), &PY_TYPE_DEF(ComplexODEState), module, "ComplexODEState", 0);
      }

      void t_ComplexODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "class_", make_descriptor(ComplexODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "wrapfn_", make_descriptor(t_ComplexODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEState::initializeClass, 1)))
          return NULL;
        return t_ComplexODEState::wrap_Object(ComplexODEState(((t_ComplexODEState *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a2((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEState(a0, a1, a2));
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

      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianAnomalyUtility.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianAnomalyUtility::class$ = NULL;
      jmethodID *KeplerianAnomalyUtility::mids$ = NULL;
      bool KeplerianAnomalyUtility::live$ = false;

      jclass KeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(DD)D");
          mids$[mid_ellipticEccentricToTrue_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(DD)D");
          mids$[mid_ellipticMeanToEccentric_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(DD)D");
          mids$[mid_ellipticMeanToTrue_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(DD)D");
          mids$[mid_ellipticTrueToEccentric_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(DD)D");
          mids$[mid_ellipticTrueToMean_99e3200dafc19573] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToMean_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToTrue_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(DD)D");
          mids$[mid_hyperbolicMeanToEccentric_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(DD)D");
          mids$[mid_hyperbolicMeanToTrue_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(DD)D");
          mids$[mid_hyperbolicTrueToEccentric_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(DD)D");
          mids$[mid_hyperbolicTrueToMean_99e3200dafc19573] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToMean_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToTrue_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToEccentric_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToTrue_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToEccentric_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToMean_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToMean_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToTrue_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToEccentric_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToTrue_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToEccentric_99e3200dafc19573], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToMean_99e3200dafc19573], a0, a1);
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
      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_KeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_KeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_KeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KeplerianAnomalyUtility, t_KeplerianAnomalyUtility, KeplerianAnomalyUtility);

      void t_KeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianAnomalyUtility), &PY_TYPE_DEF(KeplerianAnomalyUtility), module, "KeplerianAnomalyUtility", 0);
      }

      void t_KeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "class_", make_descriptor(KeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_KeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_KeplerianAnomalyUtility::wrap_Object(KeplerianAnomalyUtility(((t_KeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersWriter::class$ = NULL;
            jmethodID *ODParametersWriter::mids$ = NULL;
            bool ODParametersWriter::live$ = false;

            jclass ODParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_ODParametersWriter__methods_[] = {
              DECLARE_METHOD(t_ODParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersWriter)[] = {
              { Py_tp_methods, t_ODParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(ODParametersWriter, t_ODParametersWriter, ODParametersWriter);

            void t_ODParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersWriter), &PY_TYPE_DEF(ODParametersWriter), module, "ODParametersWriter", 0);
            }

            void t_ODParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "class_", make_descriptor(ODParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "wrapfn_", make_descriptor(t_ODParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersWriter::initializeClass, 1)))
                return NULL;
              return t_ODParametersWriter::wrap_Object(ODParametersWriter(((t_ODParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
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
                  mids$[mid_init$_88c5613c82ebeb07] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019::Rtcm1019(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_88c5613c82ebeb07, a0, a1.this$)) {}
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
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractScheduler::class$ = NULL;
          jmethodID *AbstractScheduler::mids$ = NULL;
          bool AbstractScheduler::live$ = false;

          jclass AbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_3d5d4740e56d31ff] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_45574e80a4b0eb29] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_getSelector_8a390688d552ddc8] = env->getMethodID(cls, "getSelector", "()Lorg/orekit/time/DatesSelector;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_measurementIsFeasible_a35647bda2901f54] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet AbstractScheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_3d5d4740e56d31ff], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder AbstractScheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_45574e80a4b0eb29]));
          }

          ::org::orekit::time::DatesSelector AbstractScheduler::getSelector() const
          {
            return ::org::orekit::time::DatesSelector(env->callObjectMethod(this$, mids$[mid_getSelector_8a390688d552ddc8]));
          }

          void AbstractScheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
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
          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg);
          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data);
          static PyGetSetDef t_AbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractScheduler, builder),
            DECLARE_GET_FIELD(t_AbstractScheduler, selector),
            DECLARE_GET_FIELD(t_AbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_AbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractScheduler, generate, METH_O),
            DECLARE_METHOD(t_AbstractScheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, getSelector, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractScheduler)[] = {
            { Py_tp_methods, t_AbstractScheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractScheduler, t_AbstractScheduler, AbstractScheduler);
          PyObject *t_AbstractScheduler::wrap_Object(const AbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractScheduler), &PY_TYPE_DEF(AbstractScheduler), module, "AbstractScheduler", 0);
          }

          void t_AbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "class_", make_descriptor(AbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "wrapfn_", make_descriptor(t_AbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_AbstractScheduler::wrap_Object(AbstractScheduler(((t_AbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self)
          {
            ::org::orekit::time::DatesSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(result);
          }

          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args)
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
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }

          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::time::DatesSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(value);
          }
        }
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
                mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_b74f83833fdad017] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getIscL1CA_b74f83833fdad017] = env->getMethodID(cls, "getIscL1CA", "()D");
                mids$[mid_getIscL1CD_b74f83833fdad017] = env->getMethodID(cls, "getIscL1CD", "()D");
                mids$[mid_getIscL1CP_b74f83833fdad017] = env->getMethodID(cls, "getIscL1CP", "()D");
                mids$[mid_getIscL2C_b74f83833fdad017] = env->getMethodID(cls, "getIscL2C", "()D");
                mids$[mid_getIscL5I5_b74f83833fdad017] = env->getMethodID(cls, "getIscL5I5", "()D");
                mids$[mid_getIscL5Q5_b74f83833fdad017] = env->getMethodID(cls, "getIscL5Q5", "()D");
                mids$[mid_getSvAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_55546ef6a647f39b] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_b74f83833fdad017] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getUraiEd_55546ef6a647f39b] = env->getMethodID(cls, "getUraiEd", "()I");
                mids$[mid_getUraiNed0_55546ef6a647f39b] = env->getMethodID(cls, "getUraiNed0", "()I");
                mids$[mid_getUraiNed1_55546ef6a647f39b] = env->getMethodID(cls, "getUraiNed1", "()I");
                mids$[mid_getUraiNed2_55546ef6a647f39b] = env->getMethodID(cls, "getUraiNed2", "()I");
                mids$[mid_isCnv2_9ab94ac1dc23b105] = env->getMethodID(cls, "isCnv2", "()Z");
                mids$[mid_setADot_8ba9fe7a847cecad] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setIscL1CA_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL1CA", "(D)V");
                mids$[mid_setIscL1CD_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL1CD", "(D)V");
                mids$[mid_setIscL1CP_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL1CP", "(D)V");
                mids$[mid_setIscL2C_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL2C", "(D)V");
                mids$[mid_setIscL5I5_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL5I5", "(D)V");
                mids$[mid_setIscL5Q5_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscL5Q5", "(D)V");
                mids$[mid_setSvAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_8ba9fe7a847cecad] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setUraiEd_44ed599e93e8a30c] = env->getMethodID(cls, "setUraiEd", "(I)V");
                mids$[mid_setUraiNed0_44ed599e93e8a30c] = env->getMethodID(cls, "setUraiNed0", "(I)V");
                mids$[mid_setUraiNed1_44ed599e93e8a30c] = env->getMethodID(cls, "setUraiNed1", "(I)V");
                mids$[mid_setUraiNed2_44ed599e93e8a30c] = env->getMethodID(cls, "setUraiNed2", "(I)V");

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
              return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL1CA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CA_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CD_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CP_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL2C() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL2C_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL5I5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5I5_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getIscL5Q5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5Q5_b74f83833fdad017]);
            }

            jdouble CivilianNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_b74f83833fdad017]);
            }

            jint CivilianNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_55546ef6a647f39b]);
            }

            jdouble CivilianNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_b74f83833fdad017]);
            }

            jint CivilianNavigationMessage::getUraiEd() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiEd_55546ef6a647f39b]);
            }

            jint CivilianNavigationMessage::getUraiNed0() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed0_55546ef6a647f39b]);
            }

            jint CivilianNavigationMessage::getUraiNed1() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed1_55546ef6a647f39b]);
            }

            jint CivilianNavigationMessage::getUraiNed2() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed2_55546ef6a647f39b]);
            }

            jboolean CivilianNavigationMessage::isCnv2() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCnv2_9ab94ac1dc23b105]);
            }

            void CivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL1CA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CA_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CD_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CP_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL2C(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL2C_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL5I5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5I5_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setIscL5Q5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5Q5_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_44ed599e93e8a30c], a0);
            }

            void CivilianNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_8ba9fe7a847cecad], a0);
            }

            void CivilianNavigationMessage::setUraiEd(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiEd_44ed599e93e8a30c], a0);
            }

            void CivilianNavigationMessage::setUraiNed0(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed0_44ed599e93e8a30c], a0);
            }

            void CivilianNavigationMessage::setUraiNed1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed1_44ed599e93e8a30c], a0);
            }

            void CivilianNavigationMessage::setUraiNed2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed2_44ed599e93e8a30c], a0);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitFamily::class$ = NULL;
      jmethodID *LibrationOrbitFamily::mids$ = NULL;
      bool LibrationOrbitFamily::live$ = false;
      LibrationOrbitFamily *LibrationOrbitFamily::NORTHERN = NULL;
      LibrationOrbitFamily *LibrationOrbitFamily::SOUTHERN = NULL;

      jclass LibrationOrbitFamily::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitFamily");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_d076872493e39848] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitFamily;");
          mids$[mid_values_3f279659baadac87] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitFamily;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "NORTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          SOUTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "SOUTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitFamily LibrationOrbitFamily::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitFamily(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d076872493e39848], a0.this$));
      }

      JArray< LibrationOrbitFamily > LibrationOrbitFamily::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitFamily >(env->callStaticObjectMethod(cls, mids$[mid_values_3f279659baadac87]));
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
      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data);
      static PyGetSetDef t_LibrationOrbitFamily__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitFamily, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitFamily__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitFamily, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitFamily, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitFamily)[] = {
        { Py_tp_methods, t_LibrationOrbitFamily__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitFamily__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitFamily)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitFamily, t_LibrationOrbitFamily, LibrationOrbitFamily);
      PyObject *t_LibrationOrbitFamily::wrap_Object(const LibrationOrbitFamily& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitFamily::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitFamily::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitFamily), &PY_TYPE_DEF(LibrationOrbitFamily), module, "LibrationOrbitFamily", 0);
      }

      void t_LibrationOrbitFamily::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "class_", make_descriptor(LibrationOrbitFamily::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "wrapfn_", make_descriptor(t_LibrationOrbitFamily::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitFamily::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "NORTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::NORTHERN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "SOUTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::SOUTHERN)));
      }

      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitFamily::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitFamily::wrap_Object(LibrationOrbitFamily(((t_LibrationOrbitFamily *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitFamily::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitFamily result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::valueOf(a0));
          return t_LibrationOrbitFamily::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitFamily > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitFamily::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation$Predefined::class$ = NULL;
      jmethodID *HelmertTransformation$Predefined::mids$ = NULL;
      bool HelmertTransformation$Predefined::live$ = false;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014 = NULL;

      jclass HelmertTransformation$Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation$Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createTransformedITRF_fcaa873d7a925322] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_createTransformedITRF_eec78388a944cd82] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getDestination_8bcdfad365f6d36a] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_8bcdfad365f6d36a] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getTransformation_c35844ad436bf6ad] = env->getMethodID(cls, "getTransformation", "()Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_getTransformation_a7295ba5220485f5] = env->getMethodID(cls, "getTransformation", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_selectPredefined_3fe0e3a93eec16df] = env->getStaticMethodID(cls, "selectPredefined", "(II)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_valueOf_561b63cf182d7094] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_values_585b558730d6c9b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/HelmertTransformation$Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_2008_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2014 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2014", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_fcaa873d7a925322], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_eec78388a944cd82], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_8bcdfad365f6d36a]));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_8bcdfad365f6d36a]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation() const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_c35844ad436bf6ad]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_a7295ba5220485f5], a0.this$));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::selectPredefined(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_selectPredefined_3fe0e3a93eec16df], a0, a1));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_561b63cf182d7094], a0.this$));
      }

      JArray< HelmertTransformation$Predefined > HelmertTransformation$Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< HelmertTransformation$Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_585b558730d6c9b4]));
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
      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type);
      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data);
      static PyGetSetDef t_HelmertTransformation$Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, destination),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, origin),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, transformation),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation$Predefined__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation$Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, createTransformedITRF, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getTransformation, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, selectPredefined, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation$Predefined)[] = {
        { Py_tp_methods, t_HelmertTransformation$Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_HelmertTransformation$Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation$Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation$Predefined, t_HelmertTransformation$Predefined, HelmertTransformation$Predefined);
      PyObject *t_HelmertTransformation$Predefined::wrap_Object(const HelmertTransformation$Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_HelmertTransformation$Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_HelmertTransformation$Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation$Predefined), &PY_TYPE_DEF(HelmertTransformation$Predefined), module, "HelmertTransformation$Predefined", 0);
      }

      void t_HelmertTransformation$Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "class_", make_descriptor(HelmertTransformation$Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "wrapfn_", make_descriptor(t_HelmertTransformation$Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(HelmertTransformation$Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2014", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014)));
      }

      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation$Predefined::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation$Predefined::wrap_Object(HelmertTransformation$Predefined(((t_HelmertTransformation$Predefined *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation$Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ksk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "createTransformedITRF", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransformation());
            return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransformation(a0));
              return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformation", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::selectPredefined(a0, a1));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "selectPredefined", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::valueOf(a0));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type)
      {
        JArray< HelmertTransformation$Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_HelmertTransformation$Predefined::wrap_jobject);
      }
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::HelmertTransformation value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformation());
        return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter::class$ = NULL;
      jmethodID *GaussianCurveFitter::mids$ = NULL;
      bool GaussianCurveFitter::live$ = false;

      jclass GaussianCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_c4a3c59448b4f3a1] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withMaxIterations_5f0fdbad8d4c6754] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withStartPoint_642cc87d45a2b1a5] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_getProblem_067ae4e9e4e5b47a] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter GaussianCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return GaussianCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_c4a3c59448b4f3a1]));
      }

      GaussianCurveFitter GaussianCurveFitter::withMaxIterations(jint a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_5f0fdbad8d4c6754], a0));
      }

      GaussianCurveFitter GaussianCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_642cc87d45a2b1a5], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type);
      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg);

      static PyMethodDef t_GaussianCurveFitter__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_GaussianCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter)[] = {
        { Py_tp_methods, t_GaussianCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter, t_GaussianCurveFitter, GaussianCurveFitter);

      void t_GaussianCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter), &PY_TYPE_DEF(GaussianCurveFitter), module, "GaussianCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser)));
      }

      void t_GaussianCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "class_", make_descriptor(GaussianCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "wrapfn_", make_descriptor(t_GaussianCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter::wrap_Object(GaussianCurveFitter(((t_GaussianCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type)
      {
        GaussianCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::GaussianCurveFitter::create());
        return t_GaussianCurveFitter::wrap_Object(result);
      }

      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg)
      {
        jint a0;
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFieldIntegratorBuilder::live$ = false;

        jclass AbstractFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_95fca721ff63137c] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractFieldIntegratorBuilder::AbstractFieldIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_95fca721ff63137c], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AbstractFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AbstractFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldIntegratorBuilder, t_AbstractFieldIntegratorBuilder, AbstractFieldIntegratorBuilder);
        PyObject *t_AbstractFieldIntegratorBuilder::wrap_Object(const AbstractFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFieldIntegratorBuilder), module, "AbstractFieldIntegratorBuilder", 0);
        }

        void t_AbstractFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "class_", make_descriptor(AbstractFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldIntegratorBuilder::wrap_Object(AbstractFieldIntegratorBuilder(((t_AbstractFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          AbstractFieldIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = AbstractFieldIntegratorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoading::class$ = NULL;
          jmethodID *OceanLoading::mids$ = NULL;
          bool OceanLoading::live$ = false;

          jclass OceanLoading::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoading");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_00ff291b7fe1d773] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;)V");
              mids$[mid_displacement_729c7f08824f83c6] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoading::OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00ff291b7fe1d773, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanLoading::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_729c7f08824f83c6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args);

          static PyMethodDef t_OceanLoading__methods_[] = {
            DECLARE_METHOD(t_OceanLoading, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoading)[] = {
            { Py_tp_methods, t_OceanLoading__methods_ },
            { Py_tp_init, (void *) t_OceanLoading_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoading)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoading, t_OceanLoading, OceanLoading);

          void t_OceanLoading::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoading), &PY_TYPE_DEF(OceanLoading), module, "OceanLoading", 0);
          }

          void t_OceanLoading::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "class_", make_descriptor(OceanLoading::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "wrapfn_", make_descriptor(t_OceanLoading::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoading::initializeClass, 1)))
              return NULL;
            return t_OceanLoading::wrap_Object(OceanLoading(((t_OceanLoading *) arg)->object.this$));
          }
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoading::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients a1((jobject) NULL);
            OceanLoading object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::displacement::OceanLoadingCoefficients::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OceanLoading(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonGNSSAttitudeProvider::mids$ = NULL;
        bool PythonGNSSAttitudeProvider::live$ = false;

        jclass PythonGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_validityEnd_c325492395d89b24] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_c325492395d89b24] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGNSSAttitudeProvider::PythonGNSSAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self);
        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGNSSAttitudeProvider, t_PythonGNSSAttitudeProvider, PythonGNSSAttitudeProvider);

        void t_PythonGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGNSSAttitudeProvider), &PY_TYPE_DEF(PythonGNSSAttitudeProvider), module, "PythonGNSSAttitudeProvider", 1);
        }

        void t_PythonGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "class_", make_descriptor(PythonGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude0 },
            { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude1 },
            { "pythonDecRef", "()V", (void *) t_PythonGNSSAttitudeProvider_pythonDecRef2 },
            { "validityEnd", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityEnd3 },
            { "validityStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityStart4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonGNSSAttitudeProvider::wrap_Object(PythonGNSSAttitudeProvider(((t_PythonGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonGNSSAttitudeProvider object((jobject) NULL);

          INT_CALL(object = PythonGNSSAttitudeProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::Attitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityEnd", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityEnd", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityStart", result);
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

        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data)
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
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolver::class$ = NULL;
        jmethodID *UnivariateSolver::mids$ = NULL;
        bool UnivariateSolver::live$ = false;

        jclass UnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolver");

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
        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolver)[] = {
          { Py_tp_methods, t_UnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateSolver, t_UnivariateSolver, UnivariateSolver);

        void t_UnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolver), &PY_TYPE_DEF(UnivariateSolver), module, "UnivariateSolver", 0);
        }

        void t_UnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "class_", make_descriptor(UnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "wrapfn_", make_descriptor(t_UnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolver::wrap_Object(UnivariateSolver(((t_UnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$FrameConsumer::class$ = NULL;
            jmethodID *ParseToken$FrameConsumer::mids$ = NULL;
            bool ParseToken$FrameConsumer::live$ = false;

            jclass ParseToken$FrameConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4755133c5c4c59be] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$FrameConsumer::accept(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4755133c5c4c59be], a0.this$);
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
            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$FrameConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$FrameConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$FrameConsumer)[] = {
              { Py_tp_methods, t_ParseToken$FrameConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$FrameConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$FrameConsumer, t_ParseToken$FrameConsumer, ParseToken$FrameConsumer);

            void t_ParseToken$FrameConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$FrameConsumer), &PY_TYPE_DEF(ParseToken$FrameConsumer), module, "ParseToken$FrameConsumer", 0);
            }

            void t_ParseToken$FrameConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "class_", make_descriptor(ParseToken$FrameConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "wrapfn_", make_descriptor(t_ParseToken$FrameConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$FrameConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$FrameConsumer::wrap_Object(ParseToken$FrameConsumer(((t_ParseToken$FrameConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$FrameConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
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
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D::class$ = NULL;
          jmethodID *Sphere1D::mids$ = NULL;
          bool Sphere1D::live$ = false;
          jdouble Sphere1D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_8ba9fe7a847cecad] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_198c463f919fa90a] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");
              mids$[mid_getSubSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere1D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_8ba9fe7a847cecad], a0);
          }

          jint Sphere1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          Sphere1D Sphere1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_198c463f919fa90a]));
          }

          ::org::hipparchus::geometry::Space Sphere1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_9afbccb68c8e9ef8]));
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
        namespace oned {
          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self);
          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self);
          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data);
          static PyGetSetDef t_Sphere1D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere1D, dimension),
            DECLARE_GET_FIELD(t_Sphere1D, instance),
            DECLARE_GET_FIELD(t_Sphere1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere1D__methods_[] = {
            DECLARE_METHOD(t_Sphere1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D)[] = {
            { Py_tp_methods, t_Sphere1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere1D, t_Sphere1D, Sphere1D);

          void t_Sphere1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D), &PY_TYPE_DEF(Sphere1D), module, "Sphere1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Sphere1D$NoSubSpaceException)));
          }

          void t_Sphere1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "class_", make_descriptor(Sphere1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "wrapfn_", make_descriptor(t_Sphere1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "SMALLEST_TOLERANCE", make_descriptor(Sphere1D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D::initializeClass, 1)))
              return NULL;
            return t_Sphere1D::wrap_Object(Sphere1D(((t_Sphere1D *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::oned::Sphere1D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type)
          {
            Sphere1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::Sphere1D::getInstance());
            return t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data)
          {
            Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere1D::wrap_Object(value);
          }

          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence$SwitchHandler::class$ = NULL;
      jmethodID *AttitudesSequence$SwitchHandler::mids$ = NULL;
      bool AttitudesSequence$SwitchHandler::live$ = false;

      jclass AttitudesSequence$SwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence$SwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_switchOccurred_25e281172b0c00c1] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AttitudesSequence$SwitchHandler::switchOccurred(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::SpacecraftState & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_switchOccurred_25e281172b0c00c1], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args);

      static PyMethodDef t_AttitudesSequence$SwitchHandler__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, switchOccurred, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence$SwitchHandler)[] = {
        { Py_tp_methods, t_AttitudesSequence$SwitchHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence$SwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence$SwitchHandler, t_AttitudesSequence$SwitchHandler, AttitudesSequence$SwitchHandler);

      void t_AttitudesSequence$SwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence$SwitchHandler), &PY_TYPE_DEF(AttitudesSequence$SwitchHandler), module, "AttitudesSequence$SwitchHandler", 0);
      }

      void t_AttitudesSequence$SwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "class_", make_descriptor(AttitudesSequence$SwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "wrapfn_", make_descriptor(t_AttitudesSequence$SwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence$SwitchHandler::wrap_Object(AttitudesSequence$SwitchHandler(((t_AttitudesSequence$SwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState a2((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.switchOccurred(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "switchOccurred", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldDecompositionSolver::class$ = NULL;
      jmethodID *FieldDecompositionSolver::mids$ = NULL;
      bool FieldDecompositionSolver::live$ = false;

      jclass FieldDecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldDecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_81d49643ce3a3c0b] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_9ab94ac1dc23b105] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_e74c5d5fdc2ea025] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_solve_0c912ec1e9dd9ed7] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint FieldDecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_81d49643ce3a3c0b]));
      }

      jint FieldDecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      jboolean FieldDecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_solve_e74c5d5fdc2ea025], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_solve_0c912ec1e9dd9ed7], a0.this$));
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
      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data);
      static PyGetSetDef t_FieldDecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, rowDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_FieldDecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDecompositionSolver)[] = {
        { Py_tp_methods, t_FieldDecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldDecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDecompositionSolver, t_FieldDecompositionSolver, FieldDecompositionSolver);
      PyObject *t_FieldDecompositionSolver::wrap_Object(const FieldDecompositionSolver& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDecompositionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDecompositionSolver), &PY_TYPE_DEF(FieldDecompositionSolver), module, "FieldDecompositionSolver", 0);
      }

      void t_FieldDecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "class_", make_descriptor(FieldDecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "wrapfn_", make_descriptor(t_FieldDecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_FieldDecompositionSolver::wrap_Object(FieldDecompositionSolver(((t_FieldDecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *SimpleRatioAmbiguityAcceptance::class$ = NULL;
          jmethodID *SimpleRatioAmbiguityAcceptance::mids$ = NULL;
          bool SimpleRatioAmbiguityAcceptance::live$ = false;

          jclass SimpleRatioAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_accept_77098f4ed257d870] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_55546ef6a647f39b] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleRatioAmbiguityAcceptance::SimpleRatioAmbiguityAcceptance(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution SimpleRatioAmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_77098f4ed257d870], a0.this$));
          }

          jint SimpleRatioAmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_55546ef6a647f39b]);
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
          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self);

          static PyMethodDef t_SimpleRatioAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleRatioAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_SimpleRatioAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_SimpleRatioAmbiguityAcceptance_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleRatioAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleRatioAmbiguityAcceptance, t_SimpleRatioAmbiguityAcceptance, SimpleRatioAmbiguityAcceptance);

          void t_SimpleRatioAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleRatioAmbiguityAcceptance), &PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance), module, "SimpleRatioAmbiguityAcceptance", 0);
          }

          void t_SimpleRatioAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "class_", make_descriptor(SimpleRatioAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "wrapfn_", make_descriptor(t_SimpleRatioAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_SimpleRatioAmbiguityAcceptance::wrap_Object(SimpleRatioAmbiguityAcceptance(((t_SimpleRatioAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            SimpleRatioAmbiguityAcceptance object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = SimpleRatioAmbiguityAcceptance(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIF::class$ = NULL;
        jmethodID *GPSBlockIIF::mids$ = NULL;
        bool GPSBlockIIF::live$ = false;
        jdouble GPSBlockIIF::DEFAULT_YAW_BIAS = (jdouble) 0;
        jdouble GPSBlockIIF::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6b8ff91f4322d951] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIF::GPSBlockIIF(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_6b8ff91f4322d951, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}
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
        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIF__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIF, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIF)[] = {
          { Py_tp_methods, t_GPSBlockIIF__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIF_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIF)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIF, t_GPSBlockIIF, GPSBlockIIF);

        void t_GPSBlockIIF::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIF), &PY_TYPE_DEF(GPSBlockIIF), module, "GPSBlockIIF", 0);
        }

        void t_GPSBlockIIF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "class_", make_descriptor(GPSBlockIIF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "wrapfn_", make_descriptor(t_GPSBlockIIF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIF::DEFAULT_YAW_BIAS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIF::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIF::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIF::wrap_Object(GPSBlockIIF(((t_GPSBlockIIF *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIF object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIF(a0, a1, a2, a3, a4, a5));
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
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencySmoother::class$ = NULL;
          jmethodID *DualFrequencySmoother::mids$ = NULL;
          bool DualFrequencySmoother::live$ = false;

          jclass DualFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
              mids$[mid_copyObservationData_5627f6437b3ab888] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_1ed4e8277b5c5099] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter;");
              mids$[mid_filterDataSet_6eed97de121df5d2] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_f21c52aaf6a29827] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_f21c52aaf6a29827] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencySmoother::DualFrequencySmoother(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_5627f6437b3ab888], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter DualFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, const ::org::orekit::gnss::SatelliteSystem & a3) const
          {
            return ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_1ed4e8277b5c5099], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          void DualFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3, const ::org::orekit::gnss::ObservationType & a4) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_6eed97de121df5d2], a0.this$, a1.this$, a2, a3.this$, a4.this$);
          }

          ::java::util::HashMap DualFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_f21c52aaf6a29827]));
          }

          ::java::util::HashMap DualFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_f21c52aaf6a29827]));
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
        namespace filtering {
          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data);
          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data);
          static PyGetSetDef t_DualFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_DualFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_DualFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_DualFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencySmoother)[] = {
            { Py_tp_methods, t_DualFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_DualFrequencySmoother_init_ },
            { Py_tp_getset, t_DualFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DualFrequencySmoother, t_DualFrequencySmoother, DualFrequencySmoother);

          void t_DualFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencySmoother), &PY_TYPE_DEF(DualFrequencySmoother), module, "DualFrequencySmoother", 0);
          }

          void t_DualFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "class_", make_descriptor(DualFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "wrapfn_", make_descriptor(t_DualFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_DualFrequencySmoother::wrap_Object(DualFrequencySmoother(((t_DualFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jint a1;
            DualFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = DualFrequencySmoother(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::filtering::t_DualFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::gnss::ObservationType a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "KKIKK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_, &a4, &p4, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(DualFrequencyHatchFilter));
          }

          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GillIntegratorBuilder::class$ = NULL;
        jmethodID *GillIntegratorBuilder::mids$ = NULL;
        bool GillIntegratorBuilder::live$ = false;

        jclass GillIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegratorBuilder::GillIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator GillIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GillIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GillIntegratorBuilder, t_GillIntegratorBuilder, GillIntegratorBuilder);

        void t_GillIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegratorBuilder), &PY_TYPE_DEF(GillIntegratorBuilder), module, "GillIntegratorBuilder", 0);
        }

        void t_GillIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "class_", make_descriptor(GillIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "wrapfn_", make_descriptor(t_GillIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillIntegratorBuilder::wrap_Object(GillIntegratorBuilder(((t_GillIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sinc.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinc::class$ = NULL;
        jmethodID *Sinc::mids$ = NULL;
        bool Sinc::live$ = false;

        jclass Sinc::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinc");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinc::Sinc() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        Sinc::Sinc(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

        jdouble Sinc::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinc::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args);

        static PyMethodDef t_Sinc__methods_[] = {
          DECLARE_METHOD(t_Sinc, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinc)[] = {
          { Py_tp_methods, t_Sinc__methods_ },
          { Py_tp_init, (void *) t_Sinc_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinc)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinc, t_Sinc, Sinc);

        void t_Sinc::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinc), &PY_TYPE_DEF(Sinc), module, "Sinc", 0);
        }

        void t_Sinc::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "class_", make_descriptor(Sinc::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "wrapfn_", make_descriptor(t_Sinc::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinc::initializeClass, 1)))
            return NULL;
          return t_Sinc::wrap_Object(Sinc(((t_Sinc *) arg)->object.this$));
        }
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinc::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sinc object((jobject) NULL);

              INT_CALL(object = Sinc());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              Sinc object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = Sinc(a0));
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

        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args)
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
