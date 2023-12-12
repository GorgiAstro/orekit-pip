#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractMeasurementBuilder::class$ = NULL;
          jmethodID *PythonAbstractMeasurementBuilder::mids$ = NULL;
          bool PythonAbstractMeasurementBuilder::live$ = false;

          jclass PythonAbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8468e98590cd7e4e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;[D[D[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_init$_e10682339646f739] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DD[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_9bd3ff0754feb0c8] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getBaseWeight_a53a7513ecedada2] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getEnd_7a97f7e149e79afb] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getNoise_a53a7513ecedada2] = env->getMethodID(cls, "getNoise", "()[D");
              mids$[mid_getSatellites_b8c09fefa9db3b83] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_8468e98590cd7e4e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_e10682339646f739, a0.this$, a1, a2, a3.this$)) {}

          void PythonAbstractMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getBaseWeight() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_a53a7513ecedada2]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getEnd() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_7a97f7e149e79afb]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getNoise() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNoise_a53a7513ecedada2]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > PythonAbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_b8c09fefa9db3b83]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getStart() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getTheoreticalStandardDeviation() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2]));
          }

          jlong PythonAbstractMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, baseWeight),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, end),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, noise),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, start),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, theoreticalStandardDeviation),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getBaseWeight, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getNoise, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getSatellites, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getStart, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getTheoreticalStandardDeviation, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractMeasurementBuilder, t_PythonAbstractMeasurementBuilder, PythonAbstractMeasurementBuilder);
          PyObject *t_PythonAbstractMeasurementBuilder::wrap_Object(const PythonAbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractMeasurementBuilder), &PY_TYPE_DEF(PythonAbstractMeasurementBuilder), module, "PythonAbstractMeasurementBuilder", 1);
          }

          void t_PythonAbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "class_", make_descriptor(PythonAbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonAbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonAbstractMeasurementBuilder_build0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurementBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractMeasurementBuilder::wrap_Object(PythonAbstractMeasurementBuilder(((t_PythonAbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "k[D[D[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "kDD[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseWeight());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNoise());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSatellites());
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
            }

            return callSuper(PY_TYPE(PythonAbstractMeasurementBuilder), (PyObject *) self, "getSatellites", args, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
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

          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseWeight());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNoise());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBody::class$ = NULL;
      jmethodID *PythonCelestialBody::mids$ = NULL;
      bool PythonCelestialBody::live$ = false;

      jclass PythonCelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyOrientedFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_557b8123390d8d0c] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_toFieldPVCoordinatesProvider_cdcdbddb8a8cc591] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBody::PythonCelestialBody() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonCelestialBody::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonCelestialBody::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonCelestialBody::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self);
      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data);
      static PyGetSetDef t_PythonCelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBody, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBody__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBody, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBody)[] = {
        { Py_tp_methods, t_PythonCelestialBody__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBody_init_ },
        { Py_tp_getset, t_PythonCelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBody)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBody, t_PythonCelestialBody, PythonCelestialBody);

      void t_PythonCelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBody), &PY_TYPE_DEF(PythonCelestialBody), module, "PythonCelestialBody", 1);
      }

      void t_PythonCelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "class_", make_descriptor(PythonCelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "wrapfn_", make_descriptor(t_PythonCelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBody::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getBodyOrientedFrame0 },
          { "getGM", "()D", (void *) t_PythonCelestialBody_getGM1 },
          { "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getInertiallyOrientedFrame2 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonCelestialBody_getName3 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates4 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates5 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBody_pythonDecRef6 },
          { "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;", (void *) t_PythonCelestialBody_toFieldPVCoordinatesProvider7 },
        };
        env->registerNatives(cls, methods, 8);
      }

      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBody::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBody::wrap_Object(PythonCelestialBody(((t_PythonCelestialBody *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBody object((jobject) NULL);

        INT_CALL(object = PythonCelestialBody());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyOrientedFrame", result);
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

      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getGM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getGM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInertiallyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getInertiallyOrientedFrame", result);
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

      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "toFieldPVCoordinatesProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, &value))
        {
          throwTypeError("toFieldPVCoordinatesProvider", result);
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

      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data)
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
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Boolean.h"
#include "java/lang/Object.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction::class$ = NULL;
      jmethodID *Fraction::mids$ = NULL;
      bool Fraction::live$ = false;
      Fraction *Fraction::FOUR_FIFTHS = NULL;
      Fraction *Fraction::MINUS_ONE = NULL;
      Fraction *Fraction::ONE = NULL;
      Fraction *Fraction::ONE_FIFTH = NULL;
      Fraction *Fraction::ONE_HALF = NULL;
      Fraction *Fraction::ONE_QUARTER = NULL;
      Fraction *Fraction::ONE_THIRD = NULL;
      Fraction *Fraction::THREE_FIFTHS = NULL;
      Fraction *Fraction::THREE_QUARTERS = NULL;
      Fraction *Fraction::TWO = NULL;
      Fraction *Fraction::TWO_FIFTHS = NULL;
      Fraction *Fraction::TWO_QUARTERS = NULL;
      Fraction *Fraction::TWO_THIRDS = NULL;
      Fraction *Fraction::ZERO = NULL;

      jclass Fraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_78ed58163a805805] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_cd77e6d012ea5cc3] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_d5f28efe59a8e670] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_compareTo_e8d020c2580961b3] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/Fraction;)I");
          mids$[mid_convergent_4cef17945da86adb] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/Fraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_9f7d72ee529fa4ce] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_cd77e6d012ea5cc3] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_divide_d5f28efe59a8e670] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominator_412668abc8d889e9] = env->getMethodID(cls, "getDenominator", "()I");
          mids$[mid_getField_1840755d7868de7a] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getNumerator_412668abc8d889e9] = env->getMethodID(cls, "getNumerator", "()I");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_6bc81349e4597c3b] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_89b302893bdbe1f1] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_cd77e6d012ea5cc3] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_multiply_d5f28efe59a8e670] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_negate_78ed58163a805805] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_percentageValue_557b8123390d8d0c] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_reciprocal_78ed58163a805805] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_signum_412668abc8d889e9] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_cd77e6d012ea5cc3] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_subtract_d5f28efe59a8e670] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new Fraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          MINUS_ONE = new Fraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE = new Fraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_FIFTH = new Fraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_HALF = new Fraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_QUARTER = new Fraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_THIRD = new Fraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_FIFTHS = new Fraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_QUARTERS = new Fraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO = new Fraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_FIFTHS = new Fraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_QUARTERS = new Fraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_THIRDS = new Fraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/Fraction;"));
          ZERO = new Fraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/Fraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Fraction::Fraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      Fraction::Fraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Fraction::Fraction(jdouble a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

      Fraction::Fraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      Fraction::Fraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

      Fraction Fraction::abs() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_abs_78ed58163a805805]));
      }

      Fraction Fraction::add(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_cd77e6d012ea5cc3], a0.this$));
      }

      Fraction Fraction::add(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_d5f28efe59a8e670], a0));
      }

      jint Fraction::compareTo(const Fraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_e8d020c2580961b3], a0.this$);
      }

      ::org::hipparchus::util::Pair Fraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::Fraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_4cef17945da86adb], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream Fraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_9f7d72ee529fa4ce], a0, a1));
      }

      Fraction Fraction::divide(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_cd77e6d012ea5cc3], a0.this$));
      }

      Fraction Fraction::divide(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_d5f28efe59a8e670], a0));
      }

      jdouble Fraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
      }

      jboolean Fraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jfloat Fraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
      }

      jint Fraction::getDenominator() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominator_412668abc8d889e9]);
      }

      ::org::hipparchus::fraction::FractionField Fraction::getField() const
      {
        return ::org::hipparchus::fraction::FractionField(env->callObjectMethod(this$, mids$[mid_getField_1840755d7868de7a]));
      }

      jint Fraction::getNumerator() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumerator_412668abc8d889e9]);
      }

      jdouble Fraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      Fraction Fraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Fraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_6bc81349e4597c3b], a0, a1));
      }

      jint Fraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jint Fraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
      }

      jboolean Fraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_89b302893bdbe1f1]);
      }

      jlong Fraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
      }

      Fraction Fraction::multiply(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_cd77e6d012ea5cc3], a0.this$));
      }

      Fraction Fraction::multiply(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_d5f28efe59a8e670], a0));
      }

      Fraction Fraction::negate() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_negate_78ed58163a805805]));
      }

      jdouble Fraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_557b8123390d8d0c]);
      }

      Fraction Fraction::reciprocal() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_reciprocal_78ed58163a805805]));
      }

      jint Fraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_412668abc8d889e9]);
      }

      Fraction Fraction::subtract(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_cd77e6d012ea5cc3], a0.this$));
      }

      Fraction Fraction::subtract(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_d5f28efe59a8e670], a0));
      }

      ::java::lang::String Fraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Fraction_abs(t_Fraction *self);
      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg);
      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_getDenominator(t_Fraction *self);
      static PyObject *t_Fraction_getField(t_Fraction *self);
      static PyObject *t_Fraction_getNumerator(t_Fraction *self);
      static PyObject *t_Fraction_getReal(t_Fraction *self);
      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_isInteger(t_Fraction *self);
      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_negate(t_Fraction *self);
      static PyObject *t_Fraction_percentageValue(t_Fraction *self);
      static PyObject *t_Fraction_reciprocal(t_Fraction *self);
      static PyObject *t_Fraction_signum(t_Fraction *self);
      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data);
      static PyGetSetDef t_Fraction__fields_[] = {
        DECLARE_GET_FIELD(t_Fraction, denominator),
        DECLARE_GET_FIELD(t_Fraction, field),
        DECLARE_GET_FIELD(t_Fraction, integer),
        DECLARE_GET_FIELD(t_Fraction, numerator),
        DECLARE_GET_FIELD(t_Fraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Fraction__methods_[] = {
        DECLARE_METHOD(t_Fraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, add, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, compareTo, METH_O),
        DECLARE_METHOD(t_Fraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, getDenominator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getNumerator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction)[] = {
        { Py_tp_methods, t_Fraction__methods_ },
        { Py_tp_init, (void *) t_Fraction_init_ },
        { Py_tp_getset, t_Fraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Fraction, t_Fraction, Fraction);

      void t_Fraction::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction), &PY_TYPE_DEF(Fraction), module, "Fraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(Fraction$ConvergenceTest)));
      }

      void t_Fraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "class_", make_descriptor(Fraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "wrapfn_", make_descriptor(t_Fraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(Fraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "FOUR_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "MINUS_ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_FIFTH", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_HALF", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_QUARTER", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_THIRD", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_THIRDS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ZERO", make_descriptor(t_Fraction::wrap_Object(*Fraction::ZERO)));
      }

      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction::initializeClass, 1)))
          return NULL;
        return t_Fraction::wrap_Object(Fraction(((t_Fraction *) arg)->object.this$));
      }
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = Fraction(a0, a1, a2));
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

      static PyObject *t_Fraction_abs(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg)
      {
        Fraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::Fraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::Fraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Fraction_getDenominator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getField(t_Fraction *self)
      {
        ::org::hipparchus::fraction::FractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(result);
      }

      static PyObject *t_Fraction_getNumerator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumerator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getReal(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        Fraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::getReducedFraction(a0, a1));
          return t_Fraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Fraction_isInteger(t_Fraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Fraction_negate(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_percentageValue(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_reciprocal(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_signum(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data)
      {
        ::org::hipparchus::fraction::FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(value);
      }

      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumerator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonFieldAdditionalStateProvider::mids$ = NULL;
      bool PythonFieldAdditionalStateProvider::live$ = false;

      jclass PythonFieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_00d4758be4cee3ce] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_4fda3059ab91dbfe] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
          mids$[mid_yield__4fda3059ab91dbfe] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAdditionalStateProvider::PythonFieldAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }

      jboolean PythonFieldAdditionalStateProvider::yield(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_4fda3059ab91dbfe], a0.this$);
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
      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self);
      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonFieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonFieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonFieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldAdditionalStateProvider, t_PythonFieldAdditionalStateProvider, PythonFieldAdditionalStateProvider);
      PyObject *t_PythonFieldAdditionalStateProvider::wrap_Object(const PythonFieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAdditionalStateProvider), &PY_TYPE_DEF(PythonFieldAdditionalStateProvider), module, "PythonFieldAdditionalStateProvider", 1);
      }

      void t_PythonFieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "class_", make_descriptor(PythonFieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAdditionalStateProvider::wrap_Object(PythonFieldAdditionalStateProvider(((t_PythonFieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data)
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
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonMatricesHarvester::class$ = NULL;
      jmethodID *PythonMatricesHarvester::mids$ = NULL;
      bool PythonMatricesHarvester::live$ = false;

      jclass PythonMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_setReferenceState_8655761ebf04b503] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMatricesHarvester::PythonMatricesHarvester() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonMatricesHarvester::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self);
      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args);
      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMatricesHarvester, t_PythonMatricesHarvester, PythonMatricesHarvester);

      void t_PythonMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMatricesHarvester), &PY_TYPE_DEF(PythonMatricesHarvester), module, "PythonMatricesHarvester", 1);
      }

      void t_PythonMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "class_", make_descriptor(PythonMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "wrapfn_", make_descriptor(t_PythonMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonMatricesHarvester_getJacobiansColumnsNames0 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonMatricesHarvester_getOrbitType1 },
          { "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getParametersJacobian2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonMatricesHarvester_getPositionAngleType3 },
          { "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getStateTransitionMatrix4 },
          { "pythonDecRef", "()V", (void *) t_PythonMatricesHarvester_pythonDecRef5 },
          { "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMatricesHarvester_setReferenceState6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonMatricesHarvester::wrap_Object(PythonMatricesHarvester(((t_PythonMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        PythonMatricesHarvester object((jobject) NULL);

        INT_CALL(object = PythonMatricesHarvester());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args)
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

      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParametersJacobian", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getParametersJacobian", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStateTransitionMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getStateTransitionMatrix", result);
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

      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "setReferenceState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data)
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
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftState::class$ = NULL;
      jmethodID *FieldSpacecraftState::mids$ = NULL;
      bool FieldSpacecraftState::live$ = false;

      jclass FieldSpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2d20453f9d4070ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_b23b4beb836cb24f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_60dae2f60527f1de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_76c59fe4cedf12a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_4b07aa6d46139490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_ce93a6fc545a9408] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_3eb29dfb1c2ec9c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_init$_676b80212ae6696e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_3c33d294127abff3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_004e06f041a9576a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_13cfd2bb5388e8f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_bc5f4860f5871754] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_0859c431414bd472] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_21f94de1a930c2cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_ec4f8480b982fa6d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_ec7945892d7aa18c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_fc1e6b55dc103e38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_8526a985a8e4edee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_addAdditionalState_8bf5629e671d4837] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_8bf5629e671d4837] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_b66c84a5711243d5] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAbsPVA_02ac8b3d3296d86b] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_4acd5b0987a64fc1] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStateDerivative_4acd5b0987a64fc1] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStatesDerivatives_e712b7d773a9bf41] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_e712b7d773a9bf41] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAttitude_d8ea1d6982badd1f] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_613c8f46c659f636] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMass_613c8f46c659f636] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_613c8f46c659f636] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOrbit_507d8b7ad2a799b5] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_getPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_52ae651ad18178ce] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_2d64addf4c3391d9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_b026e433cf2ed2d1] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hasAdditionalState_fd2162b8a05a22fe] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_fd2162b8a05a22fe] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_89b302893bdbe1f1] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_e65c3bf3f12bf1f5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_shiftedBy_dfd841722f9e8400] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_toSpacecraftState_15e85d5301b90ef8] = env->getMethodID(cls, "toSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_fe2c5c7bc73a25b6] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_88fa1fad93ade5d3] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d20453f9d4070ae, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b23b4beb836cb24f, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60dae2f60527f1de, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76c59fe4cedf12a3, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b07aa6d46139490, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce93a6fc545a9408, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::SpacecraftState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3eb29dfb1c2ec9c1, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_676b80212ae6696e, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c33d294127abff3, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_004e06f041a9576a, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13cfd2bb5388e8f8, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc5f4860f5871754, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0859c431414bd472, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21f94de1a930c2cd, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec4f8480b982fa6d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec7945892d7aa18c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc1e6b55dc103e38, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8526a985a8e4edee, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState FieldSpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_8bf5629e671d4837], a0.this$, a1.this$));
      }

      FieldSpacecraftState FieldSpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_8bf5629e671d4837], a0.this$, a1.this$));
      }

      void FieldSpacecraftState::ensureCompatibleAdditionalStates(const FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_b66c84a5711243d5], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::orekit::utils::FieldAbsolutePVCoordinates FieldSpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_02ac8b3d3296d86b]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_4acd5b0987a64fc1], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_4acd5b0987a64fc1], a0.this$));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_e712b7d773a9bf41]));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_e712b7d773a9bf41]));
      }

      ::org::orekit::attitudes::FieldAttitude FieldSpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d8ea1d6982badd1f]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldSpacecraftState::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMass() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMass_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_613c8f46c659f636]));
      }

      ::org::orekit::orbits::FieldOrbit FieldSpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_507d8b7ad2a799b5]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_232470f1b769250c]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_52ae651ad18178ce], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b026e433cf2ed2d1], a0.this$));
      }

      jboolean FieldSpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_fd2162b8a05a22fe], a0.this$);
      }

      jboolean FieldSpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_fd2162b8a05a22fe], a0.this$);
      }

      jboolean FieldSpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_89b302893bdbe1f1]);
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(jdouble a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_e65c3bf3f12bf1f5], a0));
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_dfd841722f9e8400], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState FieldSpacecraftState::toSpacecraftState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_toSpacecraftState_15e85d5301b90ef8]));
      }

      ::org::orekit::frames::FieldStaticTransform FieldSpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_fe2c5c7bc73a25b6]));
      }

      ::java::lang::String FieldSpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::orekit::frames::FieldTransform FieldSpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_toTransform_88fa1fad93ade5d3]));
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
      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args);
      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data);
      static PyGetSetDef t_FieldSpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftState, a),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, attitude),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, date),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, e),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, frame),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, i),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lE),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lM),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lv),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mass),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mu),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbit),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, position),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftState__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toSpacecraftState, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftState)[] = {
        { Py_tp_methods, t_FieldSpacecraftState__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftState_init_ },
        { Py_tp_getset, t_FieldSpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftState, t_FieldSpacecraftState, FieldSpacecraftState);
      PyObject *t_FieldSpacecraftState::wrap_Object(const FieldSpacecraftState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftState), &PY_TYPE_DEF(FieldSpacecraftState), module, "FieldSpacecraftState", 0);
      }

      void t_FieldSpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "class_", make_descriptor(FieldSpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "wrapfn_", make_descriptor(t_FieldSpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftState::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftState::wrap_Object(FieldSpacecraftState(((t_FieldSpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg)
      {
        FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldSpacecraftState::initializeClass, &a0, &p0, t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self)
      {
        ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMass());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self)
      {
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.toSpacecraftState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMass());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFile::class$ = NULL;
        jmethodID *PythonEphemerisFile::mids$ = NULL;
        bool PythonEphemerisFile::live$ = false;

        jclass PythonEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFile::PythonEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEphemerisFile::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self);
        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFile)[] = {
          { Py_tp_methods, t_PythonEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFile_init_ },
          { Py_tp_getset, t_PythonEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFile, t_PythonEphemerisFile, PythonEphemerisFile);

        void t_PythonEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFile), &PY_TYPE_DEF(PythonEphemerisFile), module, "PythonEphemerisFile", 1);
        }

        void t_PythonEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "class_", make_descriptor(PythonEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "wrapfn_", make_descriptor(t_PythonEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFile::wrap_Object(PythonEphemerisFile(((t_PythonEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlLexicalAnalyzer::class$ = NULL;
            jmethodID *XmlLexicalAnalyzer::mids$ = NULL;
            bool XmlLexicalAnalyzer::live$ = false;

            jclass XmlLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_562a84d0b1d0d772] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_dc31073a650e82af] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlLexicalAnalyzer::XmlLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_562a84d0b1d0d772, a0.this$)) {}

            ::java::lang::Object XmlLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_dc31073a650e82af], a0.this$));
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
            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_XmlLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_XmlLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlLexicalAnalyzer)[] = {
              { Py_tp_methods, t_XmlLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_XmlLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlLexicalAnalyzer, t_XmlLexicalAnalyzer, XmlLexicalAnalyzer);

            void t_XmlLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlLexicalAnalyzer), &PY_TYPE_DEF(XmlLexicalAnalyzer), module, "XmlLexicalAnalyzer", 0);
            }

            void t_XmlLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "class_", make_descriptor(XmlLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "wrapfn_", make_descriptor(t_XmlLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_XmlLexicalAnalyzer::wrap_Object(XmlLexicalAnalyzer(((t_XmlLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              XmlLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = XmlLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Floor::class$ = NULL;
        jmethodID *Floor::mids$ = NULL;
        bool Floor::live$ = false;

        jclass Floor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Floor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Floor::Floor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Floor::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Floor::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Floor_value(t_Floor *self, PyObject *args);

        static PyMethodDef t_Floor__methods_[] = {
          DECLARE_METHOD(t_Floor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Floor)[] = {
          { Py_tp_methods, t_Floor__methods_ },
          { Py_tp_init, (void *) t_Floor_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Floor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Floor, t_Floor, Floor);

        void t_Floor::install(PyObject *module)
        {
          installType(&PY_TYPE(Floor), &PY_TYPE_DEF(Floor), module, "Floor", 0);
        }

        void t_Floor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "class_", make_descriptor(Floor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "wrapfn_", make_descriptor(t_Floor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Floor::initializeClass, 1)))
            return NULL;
          return t_Floor::wrap_Object(Floor(((t_Floor *) arg)->object.this$));
        }
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Floor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds)
        {
          Floor object((jobject) NULL);

          INT_CALL(object = Floor());
          self->object = object;

          return 0;
        }

        static PyObject *t_Floor_value(t_Floor *self, PyObject *args)
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
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ$BesselJResult::class$ = NULL;
      jmethodID *BesselJ$BesselJResult::mids$ = NULL;
      bool BesselJ$BesselJResult::live$ = false;

      jclass BesselJ$BesselJResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ$BesselJResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3496521775f3fd31] = env->getMethodID(cls, "<init>", "([DI)V");
          mids$[mid_getVals_a53a7513ecedada2] = env->getMethodID(cls, "getVals", "()[D");
          mids$[mid_getnVals_412668abc8d889e9] = env->getMethodID(cls, "getnVals", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ$BesselJResult::BesselJ$BesselJResult(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3496521775f3fd31, a0.this$, a1)) {}

      JArray< jdouble > BesselJ$BesselJResult::getVals() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVals_a53a7513ecedada2]));
      }

      jint BesselJ$BesselJResult::getnVals() const
      {
        return env->callIntMethod(this$, mids$[mid_getnVals_412668abc8d889e9]);
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
      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data);
      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data);
      static PyGetSetDef t_BesselJ$BesselJResult__fields_[] = {
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, nVals),
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, vals),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BesselJ$BesselJResult__methods_[] = {
        DECLARE_METHOD(t_BesselJ$BesselJResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getVals, METH_NOARGS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getnVals, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ$BesselJResult)[] = {
        { Py_tp_methods, t_BesselJ$BesselJResult__methods_ },
        { Py_tp_init, (void *) t_BesselJ$BesselJResult_init_ },
        { Py_tp_getset, t_BesselJ$BesselJResult__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ$BesselJResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ$BesselJResult, t_BesselJ$BesselJResult, BesselJ$BesselJResult);

      void t_BesselJ$BesselJResult::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ$BesselJResult), &PY_TYPE_DEF(BesselJ$BesselJResult), module, "BesselJ$BesselJResult", 0);
      }

      void t_BesselJ$BesselJResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "class_", make_descriptor(BesselJ$BesselJResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "wrapfn_", make_descriptor(t_BesselJ$BesselJResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ$BesselJResult::initializeClass, 1)))
          return NULL;
        return t_BesselJ$BesselJResult::wrap_Object(BesselJ$BesselJResult(((t_BesselJ$BesselJResult *) arg)->object.this$));
      }
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ$BesselJResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        BesselJ$BesselJResult object((jobject) NULL);

        if (!parseArgs(args, "[DI", &a0, &a1))
        {
          INT_CALL(object = BesselJ$BesselJResult(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVals());
        return result.wrap();
      }

      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getnVals());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getnVals());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVals());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultiStartMultivariateOptimizer::class$ = NULL;
          jmethodID *MultiStartMultivariateOptimizer::mids$ = NULL;
          bool MultiStartMultivariateOptimizer::live$ = false;

          jclass MultiStartMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c37061ecdb337b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
              mids$[mid_getOptima_80ecb9f5bff58fab] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_store_45c1422479aa96f0] = env->getMethodID(cls, "store", "(Lorg/hipparchus/optim/PointValuePair;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiStartMultivariateOptimizer::MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_c37061ecdb337b1c, a0.this$, a1, a2.this$)) {}

          JArray< ::org::hipparchus::optim::PointValuePair > MultiStartMultivariateOptimizer::getOptima() const
          {
            return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_80ecb9f5bff58fab]));
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
          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultiStartMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, optima),
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiStartMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, getOptima, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiStartMultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultiStartMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) t_MultiStartMultivariateOptimizer_init_ },
            { Py_tp_getset, t_MultiStartMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiStartMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultiStartMultivariateOptimizer, t_MultiStartMultivariateOptimizer, MultiStartMultivariateOptimizer);
          PyObject *t_MultiStartMultivariateOptimizer::wrap_Object(const MultiStartMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultiStartMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiStartMultivariateOptimizer), &PY_TYPE_DEF(MultiStartMultivariateOptimizer), module, "MultiStartMultivariateOptimizer", 0);
          }

          void t_MultiStartMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "class_", make_descriptor(MultiStartMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultiStartMultivariateOptimizer::wrap_Object(MultiStartMultivariateOptimizer(((t_MultiStartMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
            MultiStartMultivariateOptimizer object((jobject) NULL);

            if (!parseArgs(args, "KIk", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2))
            {
              INT_CALL(object = MultiStartMultivariateOptimizer(a0, a1, a2));
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

          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOptima());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            return callSuper(PY_TYPE(MultiStartMultivariateOptimizer), (PyObject *) self, "getOptima", args, 2);
          }
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
            OBJ_CALL(value = self->object.getOptima());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Header::class$ = NULL;
              jmethodID *SsrIm201Header::mids$ = NULL;
              bool SsrIm201Header::live$ = false;

              jclass SsrIm201Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfIonosphericLayers_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfIonosphericLayers", "()I");
                  mids$[mid_getVtecQualityIndicator_557b8123390d8d0c] = env->getMethodID(cls, "getVtecQualityIndicator", "()D");
                  mids$[mid_setNumberOfIonosphericLayers_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfIonosphericLayers", "(I)V");
                  mids$[mid_setVtecQualityIndicator_10f281d777284cea] = env->getMethodID(cls, "setVtecQualityIndicator", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Header::SsrIm201Header() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIm201Header::getNumberOfIonosphericLayers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfIonosphericLayers_412668abc8d889e9]);
              }

              jdouble SsrIm201Header::getVtecQualityIndicator() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getVtecQualityIndicator_557b8123390d8d0c]);
              }

              void SsrIm201Header::setNumberOfIonosphericLayers(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfIonosphericLayers_a3da1a935cb37f7b], a0);
              }

              void SsrIm201Header::setVtecQualityIndicator(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setVtecQualityIndicator_10f281d777284cea], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Header, numberOfIonosphericLayers),
                DECLARE_GETSET_FIELD(t_SsrIm201Header, vtecQualityIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Header__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, getNumberOfIonosphericLayers, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, getVtecQualityIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, setNumberOfIonosphericLayers, METH_O),
                DECLARE_METHOD(t_SsrIm201Header, setVtecQualityIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Header)[] = {
                { Py_tp_methods, t_SsrIm201Header__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Header_init_ },
                { Py_tp_getset, t_SsrIm201Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIm201Header, t_SsrIm201Header, SsrIm201Header);

              void t_SsrIm201Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Header), &PY_TYPE_DEF(SsrIm201Header), module, "SsrIm201Header", 0);
              }

              void t_SsrIm201Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "class_", make_descriptor(SsrIm201Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "wrapfn_", make_descriptor(t_SsrIm201Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Header::wrap_Object(SsrIm201Header(((t_SsrIm201Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Header object((jobject) NULL);

                INT_CALL(object = SsrIm201Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfIonosphericLayers(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfIonosphericLayers", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setVtecQualityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setVtecQualityIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfIonosphericLayers(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfIonosphericLayers", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setVtecQualityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "vtecQualityIndicator", arg);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2Field::class$ = NULL;
        jmethodID *UnivariateDerivative2Field::mids$ = NULL;
        bool UnivariateDerivative2Field::live$ = false;

        jclass UnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_6b368213087be900] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getOne_7cbeead5edd31cdd] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_7cbeead5edd31cdd] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        UnivariateDerivative2Field UnivariateDerivative2Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_6b368213087be900]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_7cbeead5edd31cdd]));
        }

        ::java::lang::Class UnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_7cbeead5edd31cdd]));
        }

        jint UnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2Field, t_UnivariateDerivative2Field, UnivariateDerivative2Field);

        void t_UnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2Field), &PY_TYPE_DEF(UnivariateDerivative2Field), module, "UnivariateDerivative2Field", 0);
        }

        void t_UnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "class_", make_descriptor(UnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "wrapfn_", make_descriptor(t_UnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2Field::wrap_Object(UnivariateDerivative2Field(((t_UnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative2Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field::getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
        }

        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data)
        {
          UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory$DSField::class$ = NULL;
        jmethodID *DSFactory$DSField::mids$ = NULL;
        bool DSFactory$DSField::live$ = false;

        jclass DSFactory$DSField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory$DSField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_9f40c2a430225d38] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getPi_9f40c2a430225d38] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_9f40c2a430225d38] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean DSFactory$DSField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_9f40c2a430225d38]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_9f40c2a430225d38]));
        }

        ::java::lang::Class DSFactory$DSField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_9f40c2a430225d38]));
        }

        jint DSFactory$DSField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data);
        static PyGetSetDef t_DSFactory$DSField__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory$DSField, one),
          DECLARE_GET_FIELD(t_DSFactory$DSField, pi),
          DECLARE_GET_FIELD(t_DSFactory$DSField, runtimeClass),
          DECLARE_GET_FIELD(t_DSFactory$DSField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory$DSField__methods_[] = {
          DECLARE_METHOD(t_DSFactory$DSField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, equals, METH_VARARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory$DSField)[] = {
          { Py_tp_methods, t_DSFactory$DSField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSFactory$DSField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory$DSField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory$DSField, t_DSFactory$DSField, DSFactory$DSField);

        void t_DSFactory$DSField::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory$DSField), &PY_TYPE_DEF(DSFactory$DSField), module, "DSFactory$DSField", 0);
        }

        void t_DSFactory$DSField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "class_", make_descriptor(DSFactory$DSField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "wrapfn_", make_descriptor(t_DSFactory$DSField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory$DSField::initializeClass, 1)))
            return NULL;
          return t_DSFactory$DSField::wrap_Object(DSFactory$DSField(((t_DSFactory$DSField *) arg)->object.this$));
        }
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory$DSField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_a4c150de9c0b12f3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/stk/STKEphemerisFile$STKEphemeris;)V");
            mids$[mid_getSTKVersion_3cffd47377eca18a] = env->getMethodID(cls, "getSTKVersion", "()Ljava/lang/String;");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile::STKEphemerisFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a4c150de9c0b12f3, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String STKEphemerisFile::getSTKVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSTKVersion_3cffd47377eca18a]));
        }

        ::java::util::Map STKEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader::class$ = NULL;
            jmethodID *SOLFSMYDataLoader::mids$ = NULL;
            bool SOLFSMYDataLoader::live$ = false;

            jclass SOLFSMYDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_c6b6a992db588a51] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader::SOLFSMYDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

            ::java::util::SortedSet SOLFSMYDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6b6a992db588a51]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
            }

            void SOLFSMYDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
            }

            jboolean SOLFSMYDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args);
            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, dataSet),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, maxDate),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader, t_SOLFSMYDataLoader, SOLFSMYDataLoader);

            void t_SOLFSMYDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader), &PY_TYPE_DEF(SOLFSMYDataLoader), module, "SOLFSMYDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters)));
            }

            void t_SOLFSMYDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "class_", make_descriptor(SOLFSMYDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader::wrap_Object(SOLFSMYDataLoader(((t_SOLFSMYDataLoader *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              SOLFSMYDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = SOLFSMYDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(SOLFSMYDataLoader$LineParameters));
            }

            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args)
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

            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_cdcad1dd6e5e97de] = env->getMethodID(cls, "<init>", "(DDILorg/orekit/propagation/events/handlers/EventHandler;)V");
            mids$[mid_create_dfefb60c85fe348c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDetector::PythonAbstractDetector(jdouble a0, jdouble a1, jint a2, const ::org::orekit::propagation::events::handlers::EventHandler & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cdcad1dd6e5e97de, a0, a1, a2, a3.this$)) {}

        void PythonAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/data/DirectoryCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DirectoryCrawler::class$ = NULL;
      jmethodID *DirectoryCrawler::mids$ = NULL;
      bool DirectoryCrawler::live$ = false;

      jclass DirectoryCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DirectoryCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DirectoryCrawler::DirectoryCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_DirectoryCrawler__methods_[] = {
        DECLARE_METHOD(t_DirectoryCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DirectoryCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DirectoryCrawler)[] = {
        { Py_tp_methods, t_DirectoryCrawler__methods_ },
        { Py_tp_init, (void *) t_DirectoryCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DirectoryCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DirectoryCrawler, t_DirectoryCrawler, DirectoryCrawler);

      void t_DirectoryCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(DirectoryCrawler), &PY_TYPE_DEF(DirectoryCrawler), module, "DirectoryCrawler", 0);
      }

      void t_DirectoryCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "class_", make_descriptor(DirectoryCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "wrapfn_", make_descriptor(t_DirectoryCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DirectoryCrawler::initializeClass, 1)))
          return NULL;
        return t_DirectoryCrawler::wrap_Object(DirectoryCrawler(((t_DirectoryCrawler *) arg)->object.this$));
      }
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DirectoryCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds)
      {
        ::java::io::File a0((jobject) NULL);
        DirectoryCrawler object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = DirectoryCrawler(a0));
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
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *RangeRate::class$ = NULL;
        jmethodID *RangeRate::mids$ = NULL;
        bool RangeRate::live$ = false;
        ::java::lang::String *RangeRate::MEASUREMENT_TYPE = NULL;

        jclass RangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/RangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_12ce93a41fccfb89] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDZLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RangeRate::RangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_12ce93a41fccfb89, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args);
        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data);
        static PyGetSetDef t_RangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_RangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RangeRate__methods_[] = {
          DECLARE_METHOD(t_RangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RangeRate)[] = {
          { Py_tp_methods, t_RangeRate__methods_ },
          { Py_tp_init, (void *) t_RangeRate_init_ },
          { Py_tp_getset, t_RangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(RangeRate, t_RangeRate, RangeRate);
        PyObject *t_RangeRate::wrap_Object(const RangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(RangeRate), &PY_TYPE_DEF(RangeRate), module, "RangeRate", 0);
        }

        void t_RangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "class_", make_descriptor(RangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "wrapfn_", make_descriptor(t_RangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(RangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*RangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RangeRate::initializeClass, 1)))
            return NULL;
          return t_RangeRate::wrap_Object(RangeRate(((t_RangeRate *) arg)->object.this$));
        }
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jboolean a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          RangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkDDDZk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = RangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "java/util/Random.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *JDKRandomGenerator::class$ = NULL;
      jmethodID *JDKRandomGenerator::mids$ = NULL;
      bool JDKRandomGenerator::live$ = false;

      jclass JDKRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/JDKRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_9d6ab8c2b4bb997b] = env->getMethodID(cls, "<init>", "(Ljava/util/Random;)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JDKRandomGenerator::JDKRandomGenerator() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      JDKRandomGenerator::JDKRandomGenerator(const ::java::util::Random & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_9d6ab8c2b4bb997b, a0.this$)) {}

      JDKRandomGenerator::JDKRandomGenerator(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jboolean JDKRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void JDKRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      jdouble JDKRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat JDKRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jdouble JDKRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint JDKRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jint JDKRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong JDKRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
      }

      void JDKRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void JDKRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void JDKRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args);
      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_JDKRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_JDKRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JDKRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_JDKRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JDKRandomGenerator)[] = {
        { Py_tp_methods, t_JDKRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_JDKRandomGenerator_init_ },
        { Py_tp_getset, t_JDKRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JDKRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(JDKRandomGenerator, t_JDKRandomGenerator, JDKRandomGenerator);

      void t_JDKRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(JDKRandomGenerator), &PY_TYPE_DEF(JDKRandomGenerator), module, "JDKRandomGenerator", 0);
      }

      void t_JDKRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "class_", make_descriptor(JDKRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "wrapfn_", make_descriptor(t_JDKRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JDKRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_JDKRandomGenerator::wrap_Object(JDKRandomGenerator(((t_JDKRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JDKRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JDKRandomGenerator object((jobject) NULL);

            INT_CALL(object = JDKRandomGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Random a0((jobject) NULL);
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Random::initializeClass, &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
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

      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args)
      {
        JArray< jbyte > a0((jobject) NULL);

        if (!parseArgs(args, "[B", &a0))
        {
          OBJ_CALL(self->object.nextBytes(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/String.h"
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
                mids$[mid_valueOf_cc98111b3a90ecb5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_values_b3802043a5153ba1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");

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
              return DataQuality(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cc98111b3a90ecb5], a0.this$));
            }

            JArray< DataQuality > DataQuality::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< DataQuality >(env->callStaticObjectMethod(cls, mids$[mid_values_b3802043a5153ba1]));
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
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Currency.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormatSymbols::class$ = NULL;
    jmethodID *DecimalFormatSymbols::mids$ = NULL;
    bool DecimalFormatSymbols::live$ = false;

    jclass DecimalFormatSymbols::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormatSymbols");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_be68e56b20169c78] = env->getMethodID(cls, "<init>", "(Ljava/util/Locale;)V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_e0e11425d6f25aed] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencySymbol_3cffd47377eca18a] = env->getMethodID(cls, "getCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getDecimalSeparator_d156d1ce330f6993] = env->getMethodID(cls, "getDecimalSeparator", "()C");
        mids$[mid_getDigit_d156d1ce330f6993] = env->getMethodID(cls, "getDigit", "()C");
        mids$[mid_getExponentSeparator_3cffd47377eca18a] = env->getMethodID(cls, "getExponentSeparator", "()Ljava/lang/String;");
        mids$[mid_getGroupingSeparator_d156d1ce330f6993] = env->getMethodID(cls, "getGroupingSeparator", "()C");
        mids$[mid_getInfinity_3cffd47377eca18a] = env->getMethodID(cls, "getInfinity", "()Ljava/lang/String;");
        mids$[mid_getInstance_42697fd6214b108c] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInstance_bab4cf5650304785] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInternationalCurrencySymbol_3cffd47377eca18a] = env->getMethodID(cls, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getMinusSign_d156d1ce330f6993] = env->getMethodID(cls, "getMinusSign", "()C");
        mids$[mid_getMonetaryDecimalSeparator_d156d1ce330f6993] = env->getMethodID(cls, "getMonetaryDecimalSeparator", "()C");
        mids$[mid_getNaN_3cffd47377eca18a] = env->getMethodID(cls, "getNaN", "()Ljava/lang/String;");
        mids$[mid_getPatternSeparator_d156d1ce330f6993] = env->getMethodID(cls, "getPatternSeparator", "()C");
        mids$[mid_getPerMill_d156d1ce330f6993] = env->getMethodID(cls, "getPerMill", "()C");
        mids$[mid_getPercent_d156d1ce330f6993] = env->getMethodID(cls, "getPercent", "()C");
        mids$[mid_getZeroDigit_d156d1ce330f6993] = env->getMethodID(cls, "getZeroDigit", "()C");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setCurrency_f72be4c0db9df8b9] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setCurrencySymbol_f5ffdf29129ef90a] = env->getMethodID(cls, "setCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setDecimalSeparator_102587d250c3217b] = env->getMethodID(cls, "setDecimalSeparator", "(C)V");
        mids$[mid_setDigit_102587d250c3217b] = env->getMethodID(cls, "setDigit", "(C)V");
        mids$[mid_setExponentSeparator_f5ffdf29129ef90a] = env->getMethodID(cls, "setExponentSeparator", "(Ljava/lang/String;)V");
        mids$[mid_setGroupingSeparator_102587d250c3217b] = env->getMethodID(cls, "setGroupingSeparator", "(C)V");
        mids$[mid_setInfinity_f5ffdf29129ef90a] = env->getMethodID(cls, "setInfinity", "(Ljava/lang/String;)V");
        mids$[mid_setInternationalCurrencySymbol_f5ffdf29129ef90a] = env->getMethodID(cls, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setMinusSign_102587d250c3217b] = env->getMethodID(cls, "setMinusSign", "(C)V");
        mids$[mid_setMonetaryDecimalSeparator_102587d250c3217b] = env->getMethodID(cls, "setMonetaryDecimalSeparator", "(C)V");
        mids$[mid_setNaN_f5ffdf29129ef90a] = env->getMethodID(cls, "setNaN", "(Ljava/lang/String;)V");
        mids$[mid_setPatternSeparator_102587d250c3217b] = env->getMethodID(cls, "setPatternSeparator", "(C)V");
        mids$[mid_setPerMill_102587d250c3217b] = env->getMethodID(cls, "setPerMill", "(C)V");
        mids$[mid_setPercent_102587d250c3217b] = env->getMethodID(cls, "setPercent", "(C)V");
        mids$[mid_setZeroDigit_102587d250c3217b] = env->getMethodID(cls, "setZeroDigit", "(C)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be68e56b20169c78, a0.this$)) {}

    ::java::lang::Object DecimalFormatSymbols::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean DecimalFormatSymbols::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    JArray< ::java::util::Locale > DecimalFormatSymbols::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
    }

    ::java::util::Currency DecimalFormatSymbols::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e0e11425d6f25aed]));
    }

    ::java::lang::String DecimalFormatSymbols::getCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencySymbol_3cffd47377eca18a]));
    }

    jchar DecimalFormatSymbols::getDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getDecimalSeparator_d156d1ce330f6993]);
    }

    jchar DecimalFormatSymbols::getDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getDigit_d156d1ce330f6993]);
    }

    ::java::lang::String DecimalFormatSymbols::getExponentSeparator() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExponentSeparator_3cffd47377eca18a]));
    }

    jchar DecimalFormatSymbols::getGroupingSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getGroupingSeparator_d156d1ce330f6993]);
    }

    ::java::lang::String DecimalFormatSymbols::getInfinity() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInfinity_3cffd47377eca18a]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_42697fd6214b108c]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_bab4cf5650304785], a0.this$));
    }

    ::java::lang::String DecimalFormatSymbols::getInternationalCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalCurrencySymbol_3cffd47377eca18a]));
    }

    jchar DecimalFormatSymbols::getMinusSign() const
    {
      return env->callCharMethod(this$, mids$[mid_getMinusSign_d156d1ce330f6993]);
    }

    jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getMonetaryDecimalSeparator_d156d1ce330f6993]);
    }

    ::java::lang::String DecimalFormatSymbols::getNaN() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNaN_3cffd47377eca18a]));
    }

    jchar DecimalFormatSymbols::getPatternSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getPatternSeparator_d156d1ce330f6993]);
    }

    jchar DecimalFormatSymbols::getPerMill() const
    {
      return env->callCharMethod(this$, mids$[mid_getPerMill_d156d1ce330f6993]);
    }

    jchar DecimalFormatSymbols::getPercent() const
    {
      return env->callCharMethod(this$, mids$[mid_getPercent_d156d1ce330f6993]);
    }

    jchar DecimalFormatSymbols::getZeroDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getZeroDigit_d156d1ce330f6993]);
    }

    jint DecimalFormatSymbols::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    void DecimalFormatSymbols::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_f72be4c0db9df8b9], a0.this$);
    }

    void DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrencySymbol_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormatSymbols::setDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparator_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDigit_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setExponentSeparator_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormatSymbols::setGroupingSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSeparator_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setInfinity(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInfinity_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInternationalCurrencySymbol_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormatSymbols::setMinusSign(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinusSign_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonetaryDecimalSeparator_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setNaN(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNaN_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormatSymbols::setPatternSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPatternSeparator_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setPerMill(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPerMill_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setPercent(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPercent_102587d250c3217b], a0);
    }

    void DecimalFormatSymbols::setZeroDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setZeroDigit_102587d250c3217b], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormatSymbols__fields_[] = {
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, availableLocales),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, decimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, digit),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, exponentSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, groupingSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, infinity),
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, instance),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, internationalCurrencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, minusSign),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, monetaryDecimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, naN),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, patternSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, perMill),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, percent),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, zeroDigit),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormatSymbols__methods_[] = {
      DECLARE_METHOD(t_DecimalFormatSymbols, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, clone, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getExponentSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getGroupingSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInfinity, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInternationalCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMinusSign, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMonetaryDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getNaN, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPatternSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPerMill, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPercent, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getZeroDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrency, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDigit, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setExponentSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setGroupingSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInfinity, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInternationalCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMinusSign, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMonetaryDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setNaN, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPatternSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPerMill, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPercent, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setZeroDigit, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormatSymbols)[] = {
      { Py_tp_methods, t_DecimalFormatSymbols__methods_ },
      { Py_tp_init, (void *) t_DecimalFormatSymbols_init_ },
      { Py_tp_getset, t_DecimalFormatSymbols__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormatSymbols)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DecimalFormatSymbols, t_DecimalFormatSymbols, DecimalFormatSymbols);

    void t_DecimalFormatSymbols::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormatSymbols), &PY_TYPE_DEF(DecimalFormatSymbols), module, "DecimalFormatSymbols", 0);
    }

    void t_DecimalFormatSymbols::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "class_", make_descriptor(DecimalFormatSymbols::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "wrapfn_", make_descriptor(t_DecimalFormatSymbols::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormatSymbols::initializeClass, 1)))
        return NULL;
      return t_DecimalFormatSymbols::wrap_Object(DecimalFormatSymbols(((t_DecimalFormatSymbols *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormatSymbols::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols object((jobject) NULL);

          INT_CALL(object = DecimalFormatSymbols());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            INT_CALL(object = DecimalFormatSymbols(a0));
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

    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getExponentSeparator());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getGroupingSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInfinity());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols result((jobject) NULL);
          OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance());
          return t_DecimalFormatSymbols::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance(a0));
            return t_DecimalFormatSymbols::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInternationalCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMinusSign());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMonetaryDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNaN());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPatternSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPerMill());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPercent());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getZeroDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg)
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

    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setExponentSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setExponentSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setGroupingSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInfinity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInfinity", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInternationalCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInternationalCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMinusSign(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinusSign", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMonetaryDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonetaryDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNaN(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNaN", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPatternSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPatternSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPerMill(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPerMill", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPercent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPercent", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setZeroDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setZeroDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
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

    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "digit", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getExponentSeparator());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setExponentSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "exponentSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getGroupingSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setGroupingSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInfinity());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInfinity(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "infinity", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data)
    {
      DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_DecimalFormatSymbols::wrap_Object(value);
    }

    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInternationalCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInternationalCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "internationalCurrencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMinusSign());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMinusSign(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minusSign", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMonetaryDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMonetaryDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "monetaryDecimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNaN());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNaN(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "naN", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPatternSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPatternSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "patternSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPerMill());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPerMill(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "perMill", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPercent());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPercent(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "percent", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getZeroDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setZeroDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "zeroDigit", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStateInterpolator::class$ = NULL;
        jmethodID *FieldODEStateInterpolator::mids$ = NULL;
        bool FieldODEStateInterpolator::live$ = false;

        jclass FieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_2c40e49ec2799666] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_45f3e0f3929fa6d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_2c40e49ec2799666], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_45f3e0f3929fa6d9]));
        }

        jboolean FieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1]);
        }

        jboolean FieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        jboolean FieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1]);
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
      namespace sampling {
        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_FieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_FieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStateInterpolator, t_FieldODEStateInterpolator, FieldODEStateInterpolator);
        PyObject *t_FieldODEStateInterpolator::wrap_Object(const FieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStateInterpolator), &PY_TYPE_DEF(FieldODEStateInterpolator), module, "FieldODEStateInterpolator", 0);
        }

        void t_FieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "class_", make_descriptor(FieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "wrapfn_", make_descriptor(t_FieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldODEStateInterpolator::wrap_Object(FieldODEStateInterpolator(((t_FieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg)
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

        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiEllipticBuilder::class$ = NULL;
          jmethodID *JacobiEllipticBuilder::mids$ = NULL;
          bool JacobiEllipticBuilder::live$ = false;

          jclass JacobiEllipticBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_a9e75c3d28bb6859] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_a2640730ea54017e] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_cab39f0850be82fb] = env->getStaticMethodID(cls, "build", "(D)Lorg/hipparchus/special/elliptic/jacobi/JacobiElliptic;");
              mids$[mid_build_f03624483fe3790d] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_a9e75c3d28bb6859], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_a2640730ea54017e], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic JacobiEllipticBuilder::build(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_cab39f0850be82fb], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_f03624483fe3790d], a0.this$));
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
          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_JacobiEllipticBuilder__methods_[] = {
            DECLARE_METHOD(t_JacobiEllipticBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, build, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiEllipticBuilder)[] = {
            { Py_tp_methods, t_JacobiEllipticBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiEllipticBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiEllipticBuilder, t_JacobiEllipticBuilder, JacobiEllipticBuilder);

          void t_JacobiEllipticBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiEllipticBuilder), &PY_TYPE_DEF(JacobiEllipticBuilder), module, "JacobiEllipticBuilder", 0);
          }

          void t_JacobiEllipticBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "class_", make_descriptor(JacobiEllipticBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "wrapfn_", make_descriptor(t_JacobiEllipticBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiEllipticBuilder::initializeClass, 1)))
              return NULL;
            return t_JacobiEllipticBuilder::wrap_Object(JacobiEllipticBuilder(((t_JacobiEllipticBuilder *) arg)->object.this$));
          }
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiEllipticBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_JacobiElliptic::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "build", args);
            return NULL;
          }
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
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinc::Sinc() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        Sinc::Sinc(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

        jdouble Sinc::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinc::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryState::class$ = NULL;
              jmethodID *TrajectoryState::mids$ = NULL;
              bool TrajectoryState::live$ = false;

              jclass TrajectoryState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_26353228e626a9b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[D)V");
                  mids$[mid_init$_0bcd8384b44d4acf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;ILjava/util/List;)V");
                  mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_a53a7513ecedada2] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getType_ada74ce902d29422] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_toCartesian_2741d46a9a4d5b3e] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26353228e626a9b0, a0.this$, a1.this$, a2.this$)) {}

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bcd8384b44d4acf, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              JArray< jdouble > TrajectoryState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_a53a7513ecedada2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryState::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_ada74ce902d29422]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates TrajectoryState::toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_2741d46a9a4d5b3e], a0.this$, a1));
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
              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args);
              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data);
              static PyGetSetDef t_TrajectoryState__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryState, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryState, date),
                DECLARE_GET_FIELD(t_TrajectoryState, elements),
                DECLARE_GET_FIELD(t_TrajectoryState, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryState__methods_[] = {
                DECLARE_METHOD(t_TrajectoryState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, toCartesian, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryState)[] = {
                { Py_tp_methods, t_TrajectoryState__methods_ },
                { Py_tp_init, (void *) t_TrajectoryState_init_ },
                { Py_tp_getset, t_TrajectoryState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryState, t_TrajectoryState, TrajectoryState);

              void t_TrajectoryState::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryState), &PY_TYPE_DEF(TrajectoryState), module, "TrajectoryState", 0);
              }

              void t_TrajectoryState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "class_", make_descriptor(TrajectoryState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "wrapfn_", make_descriptor(t_TrajectoryState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryState::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryState::wrap_Object(TrajectoryState(((t_TrajectoryState *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< jdouble > a2((jobject) NULL);
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[D", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< ::java::lang::String > a2((jobject) NULL);
                    jint a3;
                    ::java::util::List a4((jobject) NULL);
                    PyTypeObject **p4;
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[sIK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2, a3, a4));
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

              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args)
              {
                ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
                jdouble a1;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficients::class$ = NULL;
          jmethodID *OceanLoadingCoefficients::mids$ = NULL;
          bool OceanLoadingCoefficients::live$ = false;

          jclass OceanLoadingCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fcb650f5320a1b2a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;[[Lorg/orekit/models/earth/displacement/Tide;[[D[[D[[D[[D[[D[[D)V");
              mids$[mid_getNbSpecies_412668abc8d889e9] = env->getMethodID(cls, "getNbSpecies", "()I");
              mids$[mid_getNbTides_0092017e99012694] = env->getMethodID(cls, "getNbTides", "(I)I");
              mids$[mid_getSiteLocation_8672b163b0e4a5a3] = env->getMethodID(cls, "getSiteLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getSiteName_3cffd47377eca18a] = env->getMethodID(cls, "getSiteName", "()Ljava/lang/String;");
              mids$[mid_getSouthAmplitude_21b81d54c06b64b0] = env->getMethodID(cls, "getSouthAmplitude", "(II)D");
              mids$[mid_getSouthPhase_21b81d54c06b64b0] = env->getMethodID(cls, "getSouthPhase", "(II)D");
              mids$[mid_getTide_b069b3eff5d0d17f] = env->getMethodID(cls, "getTide", "(II)Lorg/orekit/models/earth/displacement/Tide;");
              mids$[mid_getWestAmplitude_21b81d54c06b64b0] = env->getMethodID(cls, "getWestAmplitude", "(II)D");
              mids$[mid_getWestPhase_21b81d54c06b64b0] = env->getMethodID(cls, "getWestPhase", "(II)D");
              mids$[mid_getZenithAmplitude_21b81d54c06b64b0] = env->getMethodID(cls, "getZenithAmplitude", "(II)D");
              mids$[mid_getZenithPhase_21b81d54c06b64b0] = env->getMethodID(cls, "getZenithPhase", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficients::OceanLoadingCoefficients(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5, const JArray< JArray< jdouble > > & a6, const JArray< JArray< jdouble > > & a7, const JArray< JArray< jdouble > > & a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb650f5320a1b2a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

          jint OceanLoadingCoefficients::getNbSpecies() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSpecies_412668abc8d889e9]);
          }

          jint OceanLoadingCoefficients::getNbTides(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getNbTides_0092017e99012694], a0);
          }

          ::org::orekit::bodies::GeodeticPoint OceanLoadingCoefficients::getSiteLocation() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getSiteLocation_8672b163b0e4a5a3]));
          }

          ::java::lang::String OceanLoadingCoefficients::getSiteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteName_3cffd47377eca18a]));
          }

          jdouble OceanLoadingCoefficients::getSouthAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthAmplitude_21b81d54c06b64b0], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getSouthPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthPhase_21b81d54c06b64b0], a0, a1);
          }

          ::org::orekit::models::earth::displacement::Tide OceanLoadingCoefficients::getTide(jint a0, jint a1) const
          {
            return ::org::orekit::models::earth::displacement::Tide(env->callObjectMethod(this$, mids$[mid_getTide_b069b3eff5d0d17f], a0, a1));
          }

          jdouble OceanLoadingCoefficients::getWestAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestAmplitude_21b81d54c06b64b0], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getWestPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestPhase_21b81d54c06b64b0], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithAmplitude_21b81d54c06b64b0], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithPhase_21b81d54c06b64b0], a0, a1);
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
          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, nbSpecies),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteLocation),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbSpecies, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbTides, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteLocation, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteName, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getTide, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithPhase, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficients__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficients_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficients, t_OceanLoadingCoefficients, OceanLoadingCoefficients);

          void t_OceanLoadingCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficients), &PY_TYPE_DEF(OceanLoadingCoefficients), module, "OceanLoadingCoefficients", 0);
          }

          void t_OceanLoadingCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "class_", make_descriptor(OceanLoadingCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "wrapfn_", make_descriptor(t_OceanLoadingCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficients::wrap_Object(OceanLoadingCoefficients(((t_OceanLoadingCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            JArray< JArray< jdouble > > a5((jobject) NULL);
            JArray< JArray< jdouble > > a6((jobject) NULL);
            JArray< JArray< jdouble > > a7((jobject) NULL);
            JArray< JArray< jdouble > > a8((jobject) NULL);
            OceanLoadingCoefficients object((jobject) NULL);

            if (!parseArgs(args, "sk[[k[[D[[D[[D[[D[[D[[D", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::models::earth::displacement::Tide::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = OceanLoadingCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSpecies());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getNbTides(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNbTides", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteName());
            return j2p(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::models::earth::displacement::Tide result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTide(a0, a1));
              return ::org::orekit::models::earth::displacement::t_Tide::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTide", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSpecies());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractStateCovarianceInterpolator::class$ = NULL;
      jmethodID *AbstractStateCovarianceInterpolator::mids$ = NULL;
      bool AbstractStateCovarianceInterpolator::live$ = false;
      jint AbstractStateCovarianceInterpolator::COLUMN_DIM = (jint) 0;
      ::org::orekit::orbits::PositionAngleType *AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE = NULL;
      jint AbstractStateCovarianceInterpolator::ROW_DIM = (jint) 0;

      jclass AbstractStateCovarianceInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractStateCovarianceInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_49155443553009e5] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_3d20fdce58d11197] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getOrbitInterpolator_1bb20e7ea407bfce] = env->getMethodID(cls, "getOrbitInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getOutFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getOutLOF_fc5c5809abf07d72] = env->getMethodID(cls, "getOutLOF", "()Lorg/orekit/frames/LOFType;");
          mids$[mid_getOutOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOutOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getOutPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getOutPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_interpolate_78e9037c485fbff2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedPair;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_interpolateOrbit_f6ee768c3d6032b8] = env->getMethodID(cls, "interpolateOrbit", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_expressCovarianceInDesiredOutput_808f2b09b980aa21] = env->getMethodID(cls, "expressCovarianceInDesiredOutput", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/time/TimeStampedPair;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COLUMN_DIM = env->getStaticIntField(cls, "COLUMN_DIM");
          DEFAULT_POSITION_ANGLE = new ::org::orekit::orbits::PositionAngleType(env->getStaticObjectField(cls, "DEFAULT_POSITION_ANGLE", "Lorg/orekit/orbits/PositionAngleType;"));
          ROW_DIM = env->getStaticIntField(cls, "ROW_DIM");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_49155443553009e5, a0, a1, a2.this$, a3.this$)) {}

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_3d20fdce58d11197, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::TimeInterpolator AbstractStateCovarianceInterpolator::getOrbitInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_1bb20e7ea407bfce]));
      }

      ::org::orekit::frames::Frame AbstractStateCovarianceInterpolator::getOutFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::LOFType AbstractStateCovarianceInterpolator::getOutLOF() const
      {
        return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getOutLOF_fc5c5809abf07d72]));
      }

      ::org::orekit::orbits::OrbitType AbstractStateCovarianceInterpolator::getOutOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOutOrbitType_2cea2a2cb3e02091]));
      }

      ::org::orekit::orbits::PositionAngleType AbstractStateCovarianceInterpolator::getOutPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getOutPositionAngleType_f4984aee71df4c19]));
      }

      ::org::orekit::time::TimeStampedPair AbstractStateCovarianceInterpolator::interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::time::TimeStampedPair(env->callObjectMethod(this$, mids$[mid_interpolate_78e9037c485fbff2], a0.this$));
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
      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyGetSetDef t_AbstractStateCovarianceInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outFrame),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outLOF),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outOrbitType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outPositionAngleType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractStateCovarianceInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutLOF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractStateCovarianceInterpolator)[] = {
        { Py_tp_methods, t_AbstractStateCovarianceInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractStateCovarianceInterpolator_init_ },
        { Py_tp_getset, t_AbstractStateCovarianceInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractStateCovarianceInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractStateCovarianceInterpolator, t_AbstractStateCovarianceInterpolator, AbstractStateCovarianceInterpolator);
      PyObject *t_AbstractStateCovarianceInterpolator::wrap_Object(const AbstractStateCovarianceInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractStateCovarianceInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractStateCovarianceInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractStateCovarianceInterpolator), &PY_TYPE_DEF(AbstractStateCovarianceInterpolator), module, "AbstractStateCovarianceInterpolator", 0);
      }

      void t_AbstractStateCovarianceInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "class_", make_descriptor(AbstractStateCovarianceInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "wrapfn_", make_descriptor(t_AbstractStateCovarianceInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractStateCovarianceInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "COLUMN_DIM", make_descriptor(AbstractStateCovarianceInterpolator::COLUMN_DIM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "DEFAULT_POSITION_ANGLE", make_descriptor(::org::orekit::orbits::t_PositionAngleType::wrap_Object(*AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "ROW_DIM", make_descriptor(AbstractStateCovarianceInterpolator::ROW_DIM));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractStateCovarianceInterpolator::wrap_Object(AbstractStateCovarianceInterpolator(((t_AbstractStateCovarianceInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::LOFType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbstractTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeStampedPair result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::time::t_TimeStampedPair::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit), ::org::orekit::propagation::PY_TYPE(StateCovariance));
        }

        return callSuper(PY_TYPE(AbstractStateCovarianceInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::LOFType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreGaussIntegrator::live$ = false;

        jclass IterativeLegendreGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79cfe3f564275380] = env->getMethodID(cls, "<init>", "(IDD)V");
            mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_init$_9a6afb5be949e9a1] = env->getMethodID(cls, "<init>", "(IDDII)V");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79cfe3f564275380, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_9a6afb5be949e9a1, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_IterativeLegendreGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreGaussIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreGaussIntegrator, t_IterativeLegendreGaussIntegrator, IterativeLegendreGaussIntegrator);

        void t_IterativeLegendreGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreGaussIntegrator), module, "IterativeLegendreGaussIntegrator", 0);
        }

        void t_IterativeLegendreGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "class_", make_descriptor(IterativeLegendreGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreGaussIntegrator::wrap_Object(IterativeLegendreGaussIntegrator(((t_IterativeLegendreGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jint a1;
              jint a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDII", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *RegressionResults::class$ = NULL;
        jmethodID *RegressionResults::mids$ = NULL;
        bool RegressionResults::live$ = false;

        jclass RegressionResults::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/RegressionResults");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_774e2a371b452292] = env->getMethodID(cls, "<init>", "([D[[DZJIDDDZZ)V");
            mids$[mid_getAdjustedRSquared_557b8123390d8d0c] = env->getMethodID(cls, "getAdjustedRSquared", "()D");
            mids$[mid_getCovarianceOfParameters_21b81d54c06b64b0] = env->getMethodID(cls, "getCovarianceOfParameters", "(II)D");
            mids$[mid_getErrorSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getErrorSumSquares", "()D");
            mids$[mid_getMeanSquareError_557b8123390d8d0c] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getNumberOfParameters_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfParameters", "()I");
            mids$[mid_getParameterEstimate_69cfb132c661aca4] = env->getMethodID(cls, "getParameterEstimate", "(I)D");
            mids$[mid_getParameterEstimates_a53a7513ecedada2] = env->getMethodID(cls, "getParameterEstimates", "()[D");
            mids$[mid_getRSquared_557b8123390d8d0c] = env->getMethodID(cls, "getRSquared", "()D");
            mids$[mid_getRegressionSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getStdErrorOfEstimate_69cfb132c661aca4] = env->getMethodID(cls, "getStdErrorOfEstimate", "(I)D");
            mids$[mid_getStdErrorOfEstimates_a53a7513ecedada2] = env->getMethodID(cls, "getStdErrorOfEstimates", "()[D");
            mids$[mid_getTotalSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_hasIntercept_89b302893bdbe1f1] = env->getMethodID(cls, "hasIntercept", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegressionResults::RegressionResults(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jboolean a2, jlong a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jboolean a8, jboolean a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_774e2a371b452292, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        jdouble RegressionResults::getAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAdjustedRSquared_557b8123390d8d0c]);
        }

        jdouble RegressionResults::getCovarianceOfParameters(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovarianceOfParameters_21b81d54c06b64b0], a0, a1);
        }

        jdouble RegressionResults::getErrorSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getErrorSumSquares_557b8123390d8d0c]);
        }

        jdouble RegressionResults::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_557b8123390d8d0c]);
        }

        jlong RegressionResults::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jint RegressionResults::getNumberOfParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfParameters_412668abc8d889e9]);
        }

        jdouble RegressionResults::getParameterEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getParameterEstimate_69cfb132c661aca4], a0);
        }

        JArray< jdouble > RegressionResults::getParameterEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterEstimates_a53a7513ecedada2]));
        }

        jdouble RegressionResults::getRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquared_557b8123390d8d0c]);
        }

        jdouble RegressionResults::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_557b8123390d8d0c]);
        }

        jdouble RegressionResults::getStdErrorOfEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStdErrorOfEstimate_69cfb132c661aca4], a0);
        }

        JArray< jdouble > RegressionResults::getStdErrorOfEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStdErrorOfEstimates_a53a7513ecedada2]));
        }

        jdouble RegressionResults::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_557b8123390d8d0c]);
        }

        jboolean RegressionResults::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_89b302893bdbe1f1]);
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
        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args);
        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getN(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self);
        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data);
        static PyGetSetDef t_RegressionResults__fields_[] = {
          DECLARE_GET_FIELD(t_RegressionResults, adjustedRSquared),
          DECLARE_GET_FIELD(t_RegressionResults, errorSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, meanSquareError),
          DECLARE_GET_FIELD(t_RegressionResults, n),
          DECLARE_GET_FIELD(t_RegressionResults, numberOfParameters),
          DECLARE_GET_FIELD(t_RegressionResults, parameterEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, rSquared),
          DECLARE_GET_FIELD(t_RegressionResults, regressionSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, stdErrorOfEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, totalSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegressionResults__methods_[] = {
          DECLARE_METHOD(t_RegressionResults, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, getAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getCovarianceOfParameters, METH_VARARGS),
          DECLARE_METHOD(t_RegressionResults, getErrorSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getN, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getNumberOfParameters, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, hasIntercept, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegressionResults)[] = {
          { Py_tp_methods, t_RegressionResults__methods_ },
          { Py_tp_init, (void *) t_RegressionResults_init_ },
          { Py_tp_getset, t_RegressionResults__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegressionResults)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegressionResults, t_RegressionResults, RegressionResults);

        void t_RegressionResults::install(PyObject *module)
        {
          installType(&PY_TYPE(RegressionResults), &PY_TYPE_DEF(RegressionResults), module, "RegressionResults", 0);
        }

        void t_RegressionResults::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "class_", make_descriptor(RegressionResults::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "wrapfn_", make_descriptor(t_RegressionResults::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegressionResults::initializeClass, 1)))
            return NULL;
          return t_RegressionResults::wrap_Object(RegressionResults(((t_RegressionResults *) arg)->object.this$));
        }
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegressionResults::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          jboolean a2;
          jlong a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jboolean a8;
          jboolean a9;
          RegressionResults object((jobject) NULL);

          if (!parseArgs(args, "[D[[DZJIDDDZZ", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = RegressionResults(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovarianceOfParameters(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovarianceOfParameters", args);
          return NULL;
        }

        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getN(t_RegressionResults *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getParameterEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParameterEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStdErrorOfEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStdErrorOfEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStdErrorOfEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParameterEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStdErrorOfEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }
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
          mids$[mid_ellipticEccentricToMean_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(DD)D");
          mids$[mid_ellipticEccentricToTrue_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(DD)D");
          mids$[mid_ellipticMeanToEccentric_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(DD)D");
          mids$[mid_ellipticMeanToTrue_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(DD)D");
          mids$[mid_ellipticTrueToEccentric_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(DD)D");
          mids$[mid_ellipticTrueToMean_2268d18be49a6087] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToMean_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToTrue_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(DD)D");
          mids$[mid_hyperbolicMeanToEccentric_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(DD)D");
          mids$[mid_hyperbolicMeanToTrue_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(DD)D");
          mids$[mid_hyperbolicTrueToEccentric_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(DD)D");
          mids$[mid_hyperbolicTrueToMean_2268d18be49a6087] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToMean_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToTrue_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToEccentric_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToTrue_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToEccentric_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToMean_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToMean_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToTrue_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToEccentric_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToTrue_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToEccentric_2268d18be49a6087], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToMean_2268d18be49a6087], a0, a1);
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
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TrackingMode::class$ = NULL;
            jmethodID *TrackingMode::mids$ = NULL;
            bool TrackingMode::live$ = false;
            TrackingMode *TrackingMode::SEQUENTIAL = NULL;
            TrackingMode *TrackingMode::SINGLE_DIFF = NULL;

            jclass TrackingMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TrackingMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_f1cabebb236abf3a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_values_3e67e53790f62bf3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SEQUENTIAL = new TrackingMode(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                SINGLE_DIFF = new TrackingMode(env->getStaticObjectField(cls, "SINGLE_DIFF", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TrackingMode TrackingMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TrackingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f1cabebb236abf3a], a0.this$));
            }

            JArray< TrackingMode > TrackingMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TrackingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_3e67e53790f62bf3]));
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
            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args);
            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TrackingMode_values(PyTypeObject *type);
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data);
            static PyGetSetDef t_TrackingMode__fields_[] = {
              DECLARE_GET_FIELD(t_TrackingMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TrackingMode__methods_[] = {
              DECLARE_METHOD(t_TrackingMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_TrackingMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TrackingMode)[] = {
              { Py_tp_methods, t_TrackingMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TrackingMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TrackingMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TrackingMode, t_TrackingMode, TrackingMode);
            PyObject *t_TrackingMode::wrap_Object(const TrackingMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TrackingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TrackingMode::install(PyObject *module)
            {
              installType(&PY_TYPE(TrackingMode), &PY_TYPE_DEF(TrackingMode), module, "TrackingMode", 0);
            }

            void t_TrackingMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "class_", make_descriptor(TrackingMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "wrapfn_", make_descriptor(t_TrackingMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(TrackingMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SEQUENTIAL", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SEQUENTIAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SINGLE_DIFF", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SINGLE_DIFF)));
            }

            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TrackingMode::initializeClass, 1)))
                return NULL;
              return t_TrackingMode::wrap_Object(TrackingMode(((t_TrackingMode *) arg)->object.this$));
            }
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TrackingMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TrackingMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::valueOf(a0));
                return t_TrackingMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TrackingMode_values(PyTypeObject *type)
            {
              JArray< TrackingMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::values());
              return JArray<jobject>(result.this$).wrap(t_TrackingMode::wrap_jobject);
            }
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
