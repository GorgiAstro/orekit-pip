#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *Preconditioner::class$ = NULL;
            jmethodID *Preconditioner::mids$ = NULL;
            bool Preconditioner::live$ = false;

            jclass Preconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_precondition_1badeb24cd1b9588] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > Preconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_1badeb24cd1b9588], a0.this$, a1.this$));
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
        namespace scalar {
          namespace gradient {
            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args);

            static PyMethodDef t_Preconditioner__methods_[] = {
              DECLARE_METHOD(t_Preconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Preconditioner)[] = {
              { Py_tp_methods, t_Preconditioner__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Preconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Preconditioner, t_Preconditioner, Preconditioner);

            void t_Preconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(Preconditioner), &PY_TYPE_DEF(Preconditioner), module, "Preconditioner", 0);
            }

            void t_Preconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "class_", make_descriptor(Preconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "wrapfn_", make_descriptor(t_Preconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Preconditioner::initializeClass, 1)))
                return NULL;
              return t_Preconditioner::wrap_Object(Preconditioner(((t_Preconditioner *) arg)->object.this$));
            }
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Preconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
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
#include "org/orekit/data/PythonDataFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataFilter::class$ = NULL;
      jmethodID *PythonDataFilter::mids$ = NULL;
      bool PythonDataFilter::live$ = false;

      jclass PythonDataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataFilter::PythonDataFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonDataFilter::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonDataFilter::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonDataFilter::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self);
      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args);
      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data);
      static PyGetSetDef t_PythonDataFilter__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataFilter, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataFilter__methods_[] = {
        DECLARE_METHOD(t_PythonDataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataFilter, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataFilter)[] = {
        { Py_tp_methods, t_PythonDataFilter__methods_ },
        { Py_tp_init, (void *) t_PythonDataFilter_init_ },
        { Py_tp_getset, t_PythonDataFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataFilter, t_PythonDataFilter, PythonDataFilter);

      void t_PythonDataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataFilter), &PY_TYPE_DEF(PythonDataFilter), module, "PythonDataFilter", 1);
      }

      void t_PythonDataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "class_", make_descriptor(PythonDataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "wrapfn_", make_descriptor(t_PythonDataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataFilter::initializeClass);
        JNINativeMethod methods[] = {
          { "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;", (void *) t_PythonDataFilter_filter0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataFilter_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataFilter::initializeClass, 1)))
          return NULL;
        return t_PythonDataFilter::wrap_Object(PythonDataFilter(((t_PythonDataFilter *) arg)->object.this$));
      }
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds)
      {
        PythonDataFilter object((jobject) NULL);

        INT_CALL(object = PythonDataFilter());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::DataSource value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
        PyObject *result = PyObject_CallMethod(obj, "filter", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::DataSource::initializeClass, &value))
        {
          throwTypeError("filter", result);
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

      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParameters::class$ = NULL;
            jmethodID *AdditionalParameters::mids$ = NULL;
            bool AdditionalParameters::live$ = false;

            jclass AdditionalParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getApoapsisAltitude_b74f83833fdad017] = env->getMethodID(cls, "getApoapsisAltitude", "()D");
                mids$[mid_getAreaDRG_b74f83833fdad017] = env->getMethodID(cls, "getAreaDRG", "()D");
                mids$[mid_getAreaPC_b74f83833fdad017] = env->getMethodID(cls, "getAreaPC", "()D");
                mids$[mid_getAreaPCMax_b74f83833fdad017] = env->getMethodID(cls, "getAreaPCMax", "()D");
                mids$[mid_getAreaPCMin_b74f83833fdad017] = env->getMethodID(cls, "getAreaPCMin", "()D");
                mids$[mid_getAreaSRP_b74f83833fdad017] = env->getMethodID(cls, "getAreaSRP", "()D");
                mids$[mid_getCDAreaOverMass_b74f83833fdad017] = env->getMethodID(cls, "getCDAreaOverMass", "()D");
                mids$[mid_getCRAreaOverMass_b74f83833fdad017] = env->getMethodID(cls, "getCRAreaOverMass", "()D");
                mids$[mid_getCovConfidence_b74f83833fdad017] = env->getMethodID(cls, "getCovConfidence", "()D");
                mids$[mid_getCovConfidenceMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovConfidenceMethod", "()Ljava/lang/String;");
                mids$[mid_getHbr_b74f83833fdad017] = env->getMethodID(cls, "getHbr", "()D");
                mids$[mid_getInclination_b74f83833fdad017] = env->getMethodID(cls, "getInclination", "()D");
                mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getPeriapsisAltitude_b74f83833fdad017] = env->getMethodID(cls, "getPeriapsisAltitude", "()D");
                mids$[mid_getSedr_b74f83833fdad017] = env->getMethodID(cls, "getSedr", "()D");
                mids$[mid_getThrustAcceleration_b74f83833fdad017] = env->getMethodID(cls, "getThrustAcceleration", "()D");
                mids$[mid_setApoapsisAltitude_8ba9fe7a847cecad] = env->getMethodID(cls, "setApoapsisAltitude", "(D)V");
                mids$[mid_setAreaDRG_8ba9fe7a847cecad] = env->getMethodID(cls, "setAreaDRG", "(D)V");
                mids$[mid_setAreaPC_8ba9fe7a847cecad] = env->getMethodID(cls, "setAreaPC", "(D)V");
                mids$[mid_setAreaPCMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setAreaPCMax", "(D)V");
                mids$[mid_setAreaPCMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setAreaPCMin", "(D)V");
                mids$[mid_setAreaSRP_8ba9fe7a847cecad] = env->getMethodID(cls, "setAreaSRP", "(D)V");
                mids$[mid_setCDAreaOverMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setCDAreaOverMass", "(D)V");
                mids$[mid_setCRAreaOverMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setCRAreaOverMass", "(D)V");
                mids$[mid_setCovConfidence_8ba9fe7a847cecad] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                mids$[mid_setCovConfidenceMethod_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovConfidenceMethod", "(Ljava/lang/String;)V");
                mids$[mid_setHbr_8ba9fe7a847cecad] = env->getMethodID(cls, "setHbr", "(D)V");
                mids$[mid_setInclination_8ba9fe7a847cecad] = env->getMethodID(cls, "setInclination", "(D)V");
                mids$[mid_setMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setPeriapsisAltitude_8ba9fe7a847cecad] = env->getMethodID(cls, "setPeriapsisAltitude", "(D)V");
                mids$[mid_setSedr_8ba9fe7a847cecad] = env->getMethodID(cls, "setSedr", "(D)V");
                mids$[mid_setThrustAcceleration_8ba9fe7a847cecad] = env->getMethodID(cls, "setThrustAcceleration", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalParameters::AdditionalParameters() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble AdditionalParameters::getApoapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApoapsisAltitude_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getAreaDRG() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaDRG_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getAreaPC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPC_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getAreaPCMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMax_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getAreaPCMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMin_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getAreaSRP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaSRP_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getCDAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCDAreaOverMass_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getCRAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCRAreaOverMass_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getCovConfidence() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_b74f83833fdad017]);
            }

            ::java::lang::String AdditionalParameters::getCovConfidenceMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovConfidenceMethod_1c1fa1e935d6cdcf]));
            }

            jdouble AdditionalParameters::getHbr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHbr_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getInclination() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInclination_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getPeriapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPeriapsisAltitude_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getSedr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSedr_b74f83833fdad017]);
            }

            jdouble AdditionalParameters::getThrustAcceleration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThrustAcceleration_b74f83833fdad017]);
            }

            void AdditionalParameters::setApoapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApoapsisAltitude_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setAreaDRG(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaDRG_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setAreaPC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPC_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setAreaPCMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMax_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setAreaPCMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMin_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setAreaSRP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaSRP_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setCDAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCDAreaOverMass_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setCRAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCRAreaOverMass_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setCovConfidence(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidence_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setCovConfidenceMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidenceMethod_734b91ac30d5f9b4], a0.this$);
            }

            void AdditionalParameters::setHbr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHbr_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setInclination(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInclination_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setPeriapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPeriapsisAltitude_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setSedr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSedr_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::setThrustAcceleration(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setThrustAcceleration_8ba9fe7a847cecad], a0);
            }

            void AdditionalParameters::validate(jdouble a0) const
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
            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args);
            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalParameters, apoapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaDRG),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPC),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMax),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMin),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaSRP),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cDAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cRAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidence),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidenceMethod),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, hbr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, inclination),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, mass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, periapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, sedr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, thrustAcceleration),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParameters__methods_[] = {
              DECLARE_METHOD(t_AdditionalParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, getApoapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaDRG, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPC, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaSRP, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCDAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCRAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidence, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidenceMethod, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getHbr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getInclination, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getPeriapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getSedr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getThrustAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, setApoapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaDRG, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPC, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMax, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMin, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaSRP, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCDAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCRAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidence, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidenceMethod, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setHbr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setInclination, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setPeriapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setSedr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setThrustAcceleration, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParameters)[] = {
              { Py_tp_methods, t_AdditionalParameters__methods_ },
              { Py_tp_init, (void *) t_AdditionalParameters_init_ },
              { Py_tp_getset, t_AdditionalParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
              NULL
            };

            DEFINE_TYPE(AdditionalParameters, t_AdditionalParameters, AdditionalParameters);

            void t_AdditionalParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParameters), &PY_TYPE_DEF(AdditionalParameters), module, "AdditionalParameters", 0);
            }

            void t_AdditionalParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "class_", make_descriptor(AdditionalParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "wrapfn_", make_descriptor(t_AdditionalParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParameters::initializeClass, 1)))
                return NULL;
              return t_AdditionalParameters::wrap_Object(AdditionalParameters(((t_AdditionalParameters *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds)
            {
              AdditionalParameters object((jobject) NULL);

              INT_CALL(object = AdditionalParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovConfidenceMethod());
              return j2p(result);
            }

            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHbr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInclination());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSedr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApoapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApoapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaDRG(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaDRG", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPC", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaSRP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaSRP", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCDAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCDAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCRAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCRAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCovConfidence(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovConfidenceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidenceMethod", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHbr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHbr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setInclination(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInclination", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg)
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

            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPeriapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPeriapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSedr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setThrustAcceleration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setThrustAcceleration", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApoapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "apoapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaDRG(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaDRG", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPC());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPC", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaSRP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaSRP", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCDAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cDAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCRAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cRAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCovConfidence(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovConfidenceMethod());
              return j2p(value);
            }
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovConfidenceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidenceMethod", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHbr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHbr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "hbr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInclination());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setInclination(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "inclination", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPeriapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "periapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSedr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSedr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sedr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setThrustAcceleration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "thrustAcceleration", arg);
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
#include "org/orekit/data/PythonSeriesTerm.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonSeriesTerm::class$ = NULL;
      jmethodID *PythonSeriesTerm::mids$ = NULL;
      bool PythonSeriesTerm::live$ = false;

      jclass PythonSeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonSeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_argument_e5a6deebdf7be070] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_6d9bdfdb86170f1b] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_e5a6deebdf7be070] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_6d9bdfdb86170f1b] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSeriesTerm::PythonSeriesTerm() : ::org::orekit::data::SeriesTerm(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonSeriesTerm::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonSeriesTerm::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonSeriesTerm::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self);
      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args);
      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data);
      static PyGetSetDef t_PythonSeriesTerm__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSeriesTerm, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSeriesTerm__methods_[] = {
        DECLARE_METHOD(t_PythonSeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSeriesTerm, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSeriesTerm)[] = {
        { Py_tp_methods, t_PythonSeriesTerm__methods_ },
        { Py_tp_init, (void *) t_PythonSeriesTerm_init_ },
        { Py_tp_getset, t_PythonSeriesTerm__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSeriesTerm)[] = {
        &PY_TYPE_DEF(::org::orekit::data::SeriesTerm),
        NULL
      };

      DEFINE_TYPE(PythonSeriesTerm, t_PythonSeriesTerm, PythonSeriesTerm);

      void t_PythonSeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSeriesTerm), &PY_TYPE_DEF(PythonSeriesTerm), module, "PythonSeriesTerm", 1);
      }

      void t_PythonSeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "class_", make_descriptor(PythonSeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "wrapfn_", make_descriptor(t_PythonSeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSeriesTerm::initializeClass);
        JNINativeMethod methods[] = {
          { "argument", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argument0 },
          { "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argument1 },
          { "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argumentDerivative2 },
          { "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argumentDerivative3 },
          { "pythonDecRef", "()V", (void *) t_PythonSeriesTerm_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSeriesTerm::initializeClass, 1)))
          return NULL;
        return t_PythonSeriesTerm::wrap_Object(PythonSeriesTerm(((t_PythonSeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds)
      {
        PythonSeriesTerm object((jobject) NULL);

        INT_CALL(object = PythonSeriesTerm());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args)
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

      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argument", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argument", result);
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

      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argumentDerivative", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argumentDerivative", result);
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

      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivativeStructure::class$ = NULL;
        jmethodID *FieldDerivativeStructure::mids$ = NULL;
        bool FieldDerivativeStructure::live$ = false;

        jclass FieldDerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_4b6e77c66fd622c3] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acos_4b6e77c66fd622c3] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acosh_4b6e77c66fd622c3] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_cc839fbc86dd7341] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_7aeeac85ca41e793] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_af5f7afd2fa6e7d1] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asin_4b6e77c66fd622c3] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asinh_4b6e77c66fd622c3] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan_4b6e77c66fd622c3] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_cc839fbc86dd7341] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_0be75110207435f5] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atanh_4b6e77c66fd622c3] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cbrt_4b6e77c66fd622c3] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ceil_4b6e77c66fd622c3] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_b2e42be64b624f3f] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_1a7f741fb94c3273] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_cc839fbc86dd7341] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_7aeeac85ca41e793] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_af5f7afd2fa6e7d1] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cos_4b6e77c66fd622c3] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cosh_4b6e77c66fd622c3] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_differentiate_cfd1f45e767e94b7] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_cc839fbc86dd7341] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_7aeeac85ca41e793] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_af5f7afd2fa6e7d1] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_exp_4b6e77c66fd622c3] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_expm1_4b6e77c66fd622c3] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_floor_4b6e77c66fd622c3] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getAllDerivatives_883be608cfc68c26] = env->getMethodID(cls, "getAllDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_477f6dd9e98ee543] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/FDSFactory;");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_8224159d85a4681d] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_4b6e77c66fd622c3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_hypot_cc839fbc86dd7341] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hypot_0be75110207435f5] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_integrate_cfd1f45e767e94b7] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_5bd4133ebb89dcf4] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_87473ab350e4e8cb] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_edca25d66ed4c3a0] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_7fb9fed9e7419d34] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_f034bd903ff29aa7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_e54bdb8dceae4528] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_521e870df170f249] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_421d59cdd05746bc] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_6e03e02022751cf9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_400156266cfc8847] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_157e160bd151b42d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_845e044cd131722c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log_4b6e77c66fd622c3] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log10_4b6e77c66fd622c3] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log1p_4b6e77c66fd622c3] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_cc839fbc86dd7341] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_7aeeac85ca41e793] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_1a54109df9c15fac] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_af5f7afd2fa6e7d1] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_negate_4b6e77c66fd622c3] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_newInstance_7aeeac85ca41e793] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_cc839fbc86dd7341] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_7aeeac85ca41e793] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_1a54109df9c15fac] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_eaa2836bc635c48a] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rebase_c7bc6dda2cdaeed6] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_reciprocal_4b6e77c66fd622c3] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_cc839fbc86dd7341] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_7aeeac85ca41e793] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_af5f7afd2fa6e7d1] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rint_4b6e77c66fd622c3] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rootN_1a54109df9c15fac] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_scalb_1a54109df9c15fac] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sign_4b6e77c66fd622c3] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sin_4b6e77c66fd622c3] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_4b6e77c66fd622c3] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_4b6e77c66fd622c3] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_cc839fbc86dd7341] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_7aeeac85ca41e793] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_af5f7afd2fa6e7d1] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tan_4b6e77c66fd622c3] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tanh_4b6e77c66fd622c3] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_taylor_447413902a94c4ea] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_ba5ea64a789ad864] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_4b6e77c66fd622c3] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_4b6e77c66fd622c3] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ulp_4b6e77c66fd622c3] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDerivativeStructure FieldDerivativeStructure::abs() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_0be75110207435f5], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cbrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ceil() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_b2e42be64b624f3f], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_1a7f741fb94c3273], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_cfd1f45e767e94b7], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::exp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::expm1() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::floor() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_4b6e77c66fd622c3]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldDerivativeStructure::getAllDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_883be608cfc68c26]));
        }

        jint FieldDerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory FieldDerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_477f6dd9e98ee543]));
        }

        ::org::hipparchus::Field FieldDerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        jint FieldDerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jint FieldDerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_8224159d85a4681d], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::getPi() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_4b6e77c66fd622c3]));
        }

        jdouble FieldDerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_0be75110207435f5], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::integrate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_cfd1f45e767e94b7], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5bd4133ebb89dcf4], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_87473ab350e4e8cb], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< FieldDerivativeStructure > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_edca25d66ed4c3a0], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_7fb9fed9e7419d34], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_f034bd903ff29aa7], a0, a1.this$, a2, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_e54bdb8dceae4528], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_521e870df170f249], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_421d59cdd05746bc], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_6e03e02022751cf9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5, const FieldDerivativeStructure & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_400156266cfc8847], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5, jdouble a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_157e160bd151b42d], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_845e044cd131722c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log10() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log1p() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_1a54109df9c15fac], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::negate() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::newInstance(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_1a54109df9c15fac], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_eaa2836bc635c48a], a0, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rebase(const JArray< FieldDerivativeStructure > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_c7bc6dda2cdaeed6], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::reciprocal() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rint() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rootN(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_1a54109df9c15fac], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::scalb(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_1a54109df9c15fac], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sign() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_4b6e77c66fd622c3]));
        }

        ::org::hipparchus::util::FieldSinCos FieldDerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_4b6e77c66fd622c3]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldDerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sqrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_cc839fbc86dd7341], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_7aeeac85ca41e793], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_af5f7afd2fa6e7d1], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_4b6e77c66fd622c3]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_447413902a94c4ea], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_ba5ea64a789ad864], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toDegrees() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toRadians() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_4b6e77c66fd622c3]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ulp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_4b6e77c66fd622c3]));
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
        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data);
        static PyGetSetDef t_FieldDerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, factory),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, field),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, order),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, pi),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, real),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, value),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_FieldDerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivativeStructure)[] = {
          { Py_tp_methods, t_FieldDerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDerivativeStructure, t_FieldDerivativeStructure, FieldDerivativeStructure);
        PyObject *t_FieldDerivativeStructure::wrap_Object(const FieldDerivativeStructure& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDerivativeStructure::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivativeStructure), &PY_TYPE_DEF(FieldDerivativeStructure), module, "FieldDerivativeStructure", 0);
        }

        void t_FieldDerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "class_", make_descriptor(FieldDerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "wrapfn_", make_descriptor(t_FieldDerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_FieldDerivativeStructure::wrap_Object(FieldDerivativeStructure(((t_FieldDerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::atan2(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::hypot(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldDerivativeStructure > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, t_FieldDerivativeStructure::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::pow(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< FieldDerivativeStructure > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data)
        {
          FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan::class$ = NULL;
        jmethodID *Atan::mids$ = NULL;
        bool Atan::live$ = false;

        jclass Atan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan::Atan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Atan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan_value(t_Atan *self, PyObject *args);

        static PyMethodDef t_Atan__methods_[] = {
          DECLARE_METHOD(t_Atan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan)[] = {
          { Py_tp_methods, t_Atan__methods_ },
          { Py_tp_init, (void *) t_Atan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan, t_Atan, Atan);

        void t_Atan::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan), &PY_TYPE_DEF(Atan), module, "Atan", 0);
        }

        void t_Atan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "class_", make_descriptor(Atan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "wrapfn_", make_descriptor(t_Atan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan::initializeClass, 1)))
            return NULL;
          return t_Atan::wrap_Object(Atan(((t_Atan *) arg)->object.this$));
        }
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds)
        {
          Atan object((jobject) NULL);

          INT_CALL(object = Atan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan_value(t_Atan *self, PyObject *args)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$PopulationSize::class$ = NULL;
            jmethodID *CMAESOptimizer$PopulationSize::mids$ = NULL;
            bool CMAESOptimizer$PopulationSize::live$ = false;

            jclass CMAESOptimizer$PopulationSize::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getPopulationSize_55546ef6a647f39b] = env->getMethodID(cls, "getPopulationSize", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$PopulationSize::CMAESOptimizer$PopulationSize(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jint CMAESOptimizer$PopulationSize::getPopulationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getPopulationSize_55546ef6a647f39b]);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args);
            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$PopulationSize__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, populationSize),
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$PopulationSize__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, getPopulationSize, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$PopulationSize)[] = {
              { Py_tp_methods, t_CMAESOptimizer$PopulationSize__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$PopulationSize_init_ },
              { Py_tp_getset, t_CMAESOptimizer$PopulationSize__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$PopulationSize)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$PopulationSize, t_CMAESOptimizer$PopulationSize, CMAESOptimizer$PopulationSize);
            PyObject *t_CMAESOptimizer$PopulationSize::wrap_Object(const CMAESOptimizer$PopulationSize& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$PopulationSize::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$PopulationSize::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$PopulationSize), &PY_TYPE_DEF(CMAESOptimizer$PopulationSize), module, "CMAESOptimizer$PopulationSize", 0);
            }

            void t_CMAESOptimizer$PopulationSize::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "class_", make_descriptor(CMAESOptimizer$PopulationSize::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "wrapfn_", make_descriptor(t_CMAESOptimizer$PopulationSize::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$PopulationSize::wrap_Object(CMAESOptimizer$PopulationSize(((t_CMAESOptimizer$PopulationSize *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              CMAESOptimizer$PopulationSize object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = CMAESOptimizer$PopulationSize(a0));
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

            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPopulationSize());
              return PyLong_FromLong((long) result);
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPopulationSize());
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
#include "java/util/AbstractCollection.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractCollection::class$ = NULL;
    jmethodID *AbstractCollection::mids$ = NULL;
    bool AbstractCollection::live$ = false;

    jclass AbstractCollection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractCollection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_801a92d34e44726e] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractCollection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean AbstractCollection::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    void AbstractCollection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean AbstractCollection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean AbstractCollection::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_801a92d34e44726e], a0.this$);
    }

    jboolean AbstractCollection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator AbstractCollection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jboolean AbstractCollection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean AbstractCollection::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    jboolean AbstractCollection::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    jint AbstractCollection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_70d423ae061f83d5], a0.this$));
    }

    ::java::lang::String AbstractCollection::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data);
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data);
    static PyGetSetDef t_AbstractCollection__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractCollection, empty),
      DECLARE_GET_FIELD(t_AbstractCollection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractCollection__methods_[] = {
      DECLARE_METHOD(t_AbstractCollection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, add, METH_O),
      DECLARE_METHOD(t_AbstractCollection, addAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, contains, METH_O),
      DECLARE_METHOD(t_AbstractCollection, containsAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, iterator, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, remove, METH_O),
      DECLARE_METHOD(t_AbstractCollection, removeAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, retainAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, toArray, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractCollection)[] = {
      { Py_tp_methods, t_AbstractCollection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractCollection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractCollection *)) get_generic_iterator< t_AbstractCollection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractCollection)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractCollection, t_AbstractCollection, AbstractCollection);
    PyObject *t_AbstractCollection::wrap_Object(const AbstractCollection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractCollection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractCollection::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractCollection), &PY_TYPE_DEF(AbstractCollection), module, "AbstractCollection", 0);
    }

    void t_AbstractCollection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "class_", make_descriptor(AbstractCollection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "wrapfn_", make_descriptor(t_AbstractCollection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractCollection::initializeClass, 1)))
        return NULL;
      return t_AbstractCollection::wrap_Object(AbstractCollection(((t_AbstractCollection *) arg)->object.this$));
    }
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractCollection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }

    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractCollection), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TypeSvMessage::class$ = NULL;
          jmethodID *TypeSvMessage::mids$ = NULL;
          bool TypeSvMessage::live$ = false;

          jclass TypeSvMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TypeSvMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationMessageType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNavigationMessageType", "()Ljava/lang/String;");
              mids$[mid_getPrn_55546ef6a647f39b] = env->getMethodID(cls, "getPrn", "()I");
              mids$[mid_getSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String TypeSvMessage::getNavigationMessageType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNavigationMessageType_1c1fa1e935d6cdcf]));
          }

          jint TypeSvMessage::getPrn() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrn_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::SatelliteSystem TypeSvMessage::getSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_21bd759cc4a81606]));
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
          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data);
          static PyGetSetDef t_TypeSvMessage__fields_[] = {
            DECLARE_GET_FIELD(t_TypeSvMessage, navigationMessageType),
            DECLARE_GET_FIELD(t_TypeSvMessage, prn),
            DECLARE_GET_FIELD(t_TypeSvMessage, system),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TypeSvMessage__methods_[] = {
            DECLARE_METHOD(t_TypeSvMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, getNavigationMessageType, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getPrn, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TypeSvMessage)[] = {
            { Py_tp_methods, t_TypeSvMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TypeSvMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TypeSvMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TypeSvMessage, t_TypeSvMessage, TypeSvMessage);

          void t_TypeSvMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(TypeSvMessage), &PY_TYPE_DEF(TypeSvMessage), module, "TypeSvMessage", 0);
          }

          void t_TypeSvMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "class_", make_descriptor(TypeSvMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "wrapfn_", make_descriptor(t_TypeSvMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TypeSvMessage::initializeClass, 1)))
              return NULL;
            return t_TypeSvMessage::wrap_Object(TypeSvMessage(((t_TypeSvMessage *) arg)->object.this$));
          }
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TypeSvMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationMessageType());
            return j2p(result);
          }

          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationMessageType());
            return j2p(value);
          }

          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_1c47c97cdbc7e206] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_c3c52b1257139045] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggersResetter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
          }

          void ManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_1c47c97cdbc7e206], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState ManeuverTriggersResetter::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_c3c52b1257139045], a0.this$));
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
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalStateException::class$ = NULL;
      jmethodID *OrekitIllegalStateException::mids$ = NULL;
      bool OrekitIllegalStateException::live$ = false;

      jclass OrekitIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalStateException::OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalStateException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalStateException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalStateException::getSpecifier() const
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
      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data);
      static PyGetSetDef t_OrekitIllegalStateException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalStateException)[] = {
        { Py_tp_methods, t_OrekitIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalStateException_init_ },
        { Py_tp_getset, t_OrekitIllegalStateException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalStateException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalStateException, t_OrekitIllegalStateException, OrekitIllegalStateException);

      void t_OrekitIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalStateException), &PY_TYPE_DEF(OrekitIllegalStateException), module, "OrekitIllegalStateException", 0);
      }

      void t_OrekitIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "class_", make_descriptor(OrekitIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "wrapfn_", make_descriptor(t_OrekitIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalStateException::wrap_Object(OrekitIllegalStateException(((t_OrekitIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalStateException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalStateException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data)
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
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractEopParser::class$ = NULL;
      jmethodID *PythonAbstractEopParser::mids$ = NULL;
      bool PythonAbstractEopParser::live$ = false;

      jclass PythonAbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3a8bae5b0beb418d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_45e6e751205dacc3] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractEopParser::PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::frames::AbstractEopParser(env->newObject(initializeClass, &mids$, mid_init$_3a8bae5b0beb418d, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractEopParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractEopParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractEopParser::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self);
      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data);
      static PyGetSetDef t_PythonAbstractEopParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractEopParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractEopParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEopParser)[] = {
        { Py_tp_methods, t_PythonAbstractEopParser__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractEopParser_init_ },
        { Py_tp_getset, t_PythonAbstractEopParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractEopParser)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractEopParser),
        NULL
      };

      DEFINE_TYPE(PythonAbstractEopParser, t_PythonAbstractEopParser, PythonAbstractEopParser);

      void t_PythonAbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractEopParser), &PY_TYPE_DEF(PythonAbstractEopParser), module, "PythonAbstractEopParser", 1);
      }

      void t_PythonAbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "class_", make_descriptor(PythonAbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "wrapfn_", make_descriptor(t_PythonAbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractEopParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;", (void *) t_PythonAbstractEopParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractEopParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractEopParser::wrap_Object(PythonAbstractEopParser(((t_PythonAbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        PythonAbstractEopParser object((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractEopParser(a0, a1, a2));
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

      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
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

      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *PythonTleGenerationAlgorithm::class$ = NULL;
            jmethodID *PythonTleGenerationAlgorithm::mids$ = NULL;
            bool PythonTleGenerationAlgorithm::live$ = false;

            jclass PythonTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_generate_6e4ccfee7888f727] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_7dac79832039ea3a] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonTleGenerationAlgorithm::PythonTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonTleGenerationAlgorithm::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonTleGenerationAlgorithm::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonTleGenerationAlgorithm::pythonExtension(jlong a0) const
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
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self);
            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_PythonTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_PythonTleGenerationAlgorithm, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_PythonTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_PythonTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_PythonTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonTleGenerationAlgorithm, t_PythonTleGenerationAlgorithm, PythonTleGenerationAlgorithm);

            void t_PythonTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonTleGenerationAlgorithm), &PY_TYPE_DEF(PythonTleGenerationAlgorithm), module, "PythonTleGenerationAlgorithm", 1);
            }

            void t_PythonTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "class_", make_descriptor(PythonTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_PythonTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonTleGenerationAlgorithm::initializeClass);
              JNINativeMethod methods[] = {
                { "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;", (void *) t_PythonTleGenerationAlgorithm_generate0 },
                { "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;", (void *) t_PythonTleGenerationAlgorithm_generate1 },
                { "pythonDecRef", "()V", (void *) t_PythonTleGenerationAlgorithm_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_PythonTleGenerationAlgorithm::wrap_Object(PythonTleGenerationAlgorithm(((t_PythonTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              PythonTleGenerationAlgorithm object((jobject) NULL);

              INT_CALL(object = PythonTleGenerationAlgorithm());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args)
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(::org::orekit::propagation::analytical::tle::FieldTLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(::org::orekit::propagation::analytical::tle::TLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data)
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
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian::class$ = NULL;
        jmethodID *Gaussian::mids$ = NULL;
        bool Gaussian::live$ = false;

        jclass Gaussian::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian::Gaussian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble Gaussian::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Gaussian::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args);

        static PyMethodDef t_Gaussian__methods_[] = {
          DECLARE_METHOD(t_Gaussian, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian)[] = {
          { Py_tp_methods, t_Gaussian__methods_ },
          { Py_tp_init, (void *) t_Gaussian_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian, t_Gaussian, Gaussian);

        void t_Gaussian::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian), &PY_TYPE_DEF(Gaussian), module, "Gaussian", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "Parametric", make_descriptor(&PY_TYPE_DEF(Gaussian$Parametric)));
        }

        void t_Gaussian::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "class_", make_descriptor(Gaussian::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "wrapfn_", make_descriptor(t_Gaussian::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian::initializeClass, 1)))
            return NULL;
          return t_Gaussian::wrap_Object(Gaussian(((t_Gaussian *) arg)->object.this$));
        }
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Gaussian object((jobject) NULL);

              INT_CALL(object = Gaussian());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Gaussian(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = Gaussian(a0, a1, a2));
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

        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args)
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
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$StreamOpener::class$ = NULL;
      jmethodID *DataSource$StreamOpener::mids$ = NULL;
      bool DataSource$StreamOpener::live$ = false;

      jclass DataSource$StreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$StreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_6c37d64ac8173086] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::InputStream DataSource$StreamOpener::openOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openOnce_6c37d64ac8173086]));
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
      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self);

      static PyMethodDef t_DataSource$StreamOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$StreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$StreamOpener)[] = {
        { Py_tp_methods, t_DataSource$StreamOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$StreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$StreamOpener, t_DataSource$StreamOpener, DataSource$StreamOpener);

      void t_DataSource$StreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$StreamOpener), &PY_TYPE_DEF(DataSource$StreamOpener), module, "DataSource$StreamOpener", 0);
      }

      void t_DataSource$StreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "class_", make_descriptor(DataSource$StreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "wrapfn_", make_descriptor(t_DataSource$StreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$StreamOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$StreamOpener::wrap_Object(DataSource$StreamOpener(((t_DataSource$StreamOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$StreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DiagonalMatrix::class$ = NULL;
      jmethodID *DiagonalMatrix::mids$ = NULL;
      bool DiagonalMatrix::live$ = false;

      jclass DiagonalMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DiagonalMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2808bdf785b578a3] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_add_3adfc6ce6721ddc7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_f77d745f2128c391] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_28a444e31666746c] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_25e1757a36c4dde2] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_inverse_2d4bea390f44a6ac] = env->getMethodID(cls, "inverse", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_inverse_23675d63ec185d00] = env->getMethodID(cls, "inverse", "(D)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_isSingular_716249baa52d209e] = env->getMethodID(cls, "isSingular", "(D)Z");
          mids$[mid_multiply_3adfc6ce6721ddc7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiply_be124f4006dc9f69] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_3adfc6ce6721ddc7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiplyTransposed_be124f4006dc9f69] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_14dee4cb8cc3e959] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_14dee4cb8cc3e959] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_d5f1d017fd25113b] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_3adfc6ce6721ddc7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_3adfc6ce6721ddc7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_be124f4006dc9f69] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      DiagonalMatrix::DiagonalMatrix(jint a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_2808bdf785b578a3, a0.this$, a1)) {}

      DiagonalMatrix DiagonalMatrix::add(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_add_3adfc6ce6721ddc7], a0.this$));
      }

      void DiagonalMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_28a444e31666746c], a0, a1));
      }

      jint DiagonalMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      JArray< JArray< jdouble > > DiagonalMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
      }

      JArray< jdouble > DiagonalMatrix::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_25e1757a36c4dde2]));
      }

      jdouble DiagonalMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      jint DiagonalMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      DiagonalMatrix DiagonalMatrix::inverse() const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_2d4bea390f44a6ac]));
      }

      DiagonalMatrix DiagonalMatrix::inverse(jdouble a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_23675d63ec185d00], a0));
      }

      jboolean DiagonalMatrix::isSingular(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSingular_716249baa52d209e], a0);
      }

      DiagonalMatrix DiagonalMatrix::multiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiply_3adfc6ce6721ddc7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_be124f4006dc9f69], a0.this$));
      }

      void DiagonalMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::multiplyTransposed(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_3adfc6ce6721ddc7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_be124f4006dc9f69], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_14dee4cb8cc3e959], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_14dee4cb8cc3e959], a0.this$));
      }

      ::org::hipparchus::linear::RealVector DiagonalMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_d5f1d017fd25113b], a0.this$));
      }

      void DiagonalMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::subtract(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_subtract_3adfc6ce6721ddc7], a0.this$));
      }

      DiagonalMatrix DiagonalMatrix::transposeMultiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_3adfc6ce6721ddc7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_be124f4006dc9f69], a0.this$));
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
      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self);
      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg);
      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data);
      static PyGetSetDef t_DiagonalMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_DiagonalMatrix, columnDimension),
        DECLARE_GET_FIELD(t_DiagonalMatrix, data),
        DECLARE_GET_FIELD(t_DiagonalMatrix, dataRef),
        DECLARE_GET_FIELD(t_DiagonalMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DiagonalMatrix__methods_[] = {
        DECLARE_METHOD(t_DiagonalMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, inverse, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, isSingular, METH_O),
        DECLARE_METHOD(t_DiagonalMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DiagonalMatrix)[] = {
        { Py_tp_methods, t_DiagonalMatrix__methods_ },
        { Py_tp_init, (void *) t_DiagonalMatrix_init_ },
        { Py_tp_getset, t_DiagonalMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DiagonalMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(DiagonalMatrix, t_DiagonalMatrix, DiagonalMatrix);

      void t_DiagonalMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(DiagonalMatrix), &PY_TYPE_DEF(DiagonalMatrix), module, "DiagonalMatrix", 0);
      }

      void t_DiagonalMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "class_", make_descriptor(DiagonalMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "wrapfn_", make_descriptor(t_DiagonalMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DiagonalMatrix::initializeClass, 1)))
          return NULL;
        return t_DiagonalMatrix::wrap_Object(DiagonalMatrix(((t_DiagonalMatrix *) arg)->object.this$));
      }
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DiagonalMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = DiagonalMatrix(a0, a1));
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

      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DiagonalMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.inverse());
            return t_DiagonalMatrix::wrap_Object(result);
          }
          break;
         case 1:
          {
            jdouble a0;
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.inverse(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "inverse", args);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isSingular(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSingular", arg);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSatelliteEphemeris::class$ = NULL;
              jmethodID *OemSatelliteEphemeris::mids$ = NULL;
              bool OemSatelliteEphemeris::live$ = false;

              jclass OemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f1fb3e257db4eb3d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSatelliteEphemeris::OemSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1fb3e257db4eb3d, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              jdouble OemSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
              }

              ::java::util::List OemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OemSatelliteEphemeris, t_OemSatelliteEphemeris, OemSatelliteEphemeris);

              void t_OemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSatelliteEphemeris), &PY_TYPE_DEF(OemSatelliteEphemeris), module, "OemSatelliteEphemeris", 0);
              }

              void t_OemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "class_", make_descriptor(OemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "wrapfn_", make_descriptor(t_OemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OemSatelliteEphemeris::wrap_Object(OemSatelliteEphemeris(((t_OemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OemSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment));
              }

              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/python/PythonFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFunction::class$ = NULL;
      jmethodID *PythonFunction::mids$ = NULL;
      bool PythonFunction::live$ = false;

      jclass PythonFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_apply_5804c890f94a02b6] = env->getMethodID(cls, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFunction::PythonFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args);
      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self);
      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args);
      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data);
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data);
      static PyGetSetDef t_PythonFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFunction, self),
        DECLARE_GET_FIELD(t_PythonFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFunction)[] = {
        { Py_tp_methods, t_PythonFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFunction_init_ },
        { Py_tp_getset, t_PythonFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFunction, t_PythonFunction, PythonFunction);
      PyObject *t_PythonFunction::wrap_Object(const PythonFunction& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFunction::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFunction), &PY_TYPE_DEF(PythonFunction), module, "PythonFunction", 1);
      }

      void t_PythonFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "class_", make_descriptor(PythonFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "wrapfn_", make_descriptor(t_PythonFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "apply", "(Ljava/lang/Object;)Ljava/lang/Object;", (void *) t_PythonFunction_apply0 },
          { "pythonDecRef", "()V", (void *) t_PythonFunction_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFunction::wrap_Object(PythonFunction(((t_PythonFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFunction object((jobject) NULL);

        INT_CALL(object = PythonFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args)
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

      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "apply", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("apply", result);
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

      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data)
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
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedCoreFormats::class$ = NULL;
      jmethodID *LocalizedCoreFormats::mids$ = NULL;
      bool LocalizedCoreFormats::live$ = false;
      LocalizedCoreFormats *LocalizedCoreFormats::ARITHMETIC_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BANDWIDTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BASE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COLUMN_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONSTRAINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONVERGENCE_FAILED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DEGREES_OF_FREEDOM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIGEST_NOT_INITIALIZED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_BRACKETING = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_DECOMPOSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_FRACTION_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FUNCTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILLEGAL_STATE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::IMAGINARY_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_LARGER_THAN_MAX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INTERNAL_ERROR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INVALID_MAX_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LENGTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MAX_COUNT_EXCEEDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MEAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SYMMETRIC_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_INFINITE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_BRACKETING_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_FINITE_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_DATA$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESSES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_TRIALS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_LEFT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_ADDITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_EXCEEDS_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POLYNOMIAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::REAL_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROBUSTNESS_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROW_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SHAPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SIMPLE_MESSAGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::STANDARD_DEVIATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNKNOWN_MODE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNSUPPORTED_OPERATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::URL_CONTAINS_NO_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::USER_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WHOLE_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_STATE_SIZE = NULL;

      jclass LocalizedCoreFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedCoreFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_1901a79c99fdd24b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/exception/LocalizedCoreFormats;");
          mids$[mid_values_f5fc18211f4b5bc7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/exception/LocalizedCoreFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARITHMETIC_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARITHMETIC_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SUMS_TO_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SUMS_TO_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BANDWIDTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BANDWIDTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BASE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BASE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_BAD_ARGUMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_BAD_ARGUMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_FAILED_CONVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_FAILED_CONVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_INVALID_PARAMETERS_ORDER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_INVALID_PARAMETERS_ORDER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_INSTANCE_AS_COMPLEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_OBJECT_TO_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_OBJECT_TO_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE_AS_TYPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE_AS_TYPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COLUMN_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COLUMN_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONSTRAINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONSTRAINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_INFINITY_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_INFINITY_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_NAN_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_NAN_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONVERGENCE_FAILED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONVERGENCE_FAILED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DEGREES_OF_FREEDOM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DEGREES_OF_FREEDOM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DERIVATION_ORDER_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DERIVATION_ORDER_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIFFERENT_ROWS_LENGTHS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIFFERENT_ROWS_LENGTHS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIGEST_NOT_INITIALIZED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIGEST_NOT_INITIALIZED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH_2x2 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH_2x2", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISTRIBUTION_NOT_LOADED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISTRIBUTION_NOT_LOADED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_INTERPOLATION_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_INTERPOLATION_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_COLUMN_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_ROW_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_ROW_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ENDPOINTS_NOT_AN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ENDPOINTS_NOT_AN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPANSION_FACTOR_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPANSION_FACTOR_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FACTORIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FACTORIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_BRACKETING = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_BRACKETING", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_DECOMPOSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_DECOMPOSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_FRACTION_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_FRACTION_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_COLUMNS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_COLUMNS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_ROWS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_ROWS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION_CONVERSION_OVERFLOW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION_CONVERSION_OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FUNCTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FUNCTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILLEGAL_STATE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILL_CONDITIONED_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILL_CONDITIONED_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          IMAGINARY_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "IMAGINARY_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_LARGER_THAN_MAX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_LARGER_THAN_MAX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_CAPACITY_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_CAPACITY_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_COLUMN_AFTER_FINAL_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_COLUMN_AFTER_FINAL_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_ROW_AFTER_FINAL_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_ROW_AFTER_FINAL_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_ROWS_AND_COLUMNS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_ROWS_AND_COLUMNS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INTERNAL_ERROR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INVALID_MAX_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INVALID_MAX_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LENGTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LENGTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_BOUND_NOT_BELOW_UPPER_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MAX_COUNT_EXCEEDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MAX_COUNT_EXCEEDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MEAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MEAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_COMPLEX_MODULE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_COMPLEX_MODULE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_CONVERGENT_CONTINUED_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_CONVERGENT_CONTINUED_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_POSITIVE_DEFINITE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_POSITIVE_DEFINITE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SELF_ADJOINT_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SELF_ADJOINT_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SYMMETRIC_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SYMMETRIC_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_INFINITE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_INFINITE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_BRACKETING_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_BRACKETING_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_FINITE_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_FINITE_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_WINDOW_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_WINDOW_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_CONVERGENCE_WITH_ANY_START_POINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_CONVERGENCE_WITH_ANY_START_POINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_DATA$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_OPTIMUM_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_OPTIMUM_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_INTERPOLATION_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_INTERPOLATION_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESSES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESSES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_TRIALS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_TRIALS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_OVERFLOW_AFTER_MULTIPLY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_LEFT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_LEFT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_SIMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_SIMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_ADDITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_ADDITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_MULTIPLICATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_MULTIPLICATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_SUBTRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_SUBTRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_EXCEEDS_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_EXCEEDS_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POLYNOMIAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POLYNOMIAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          REAL_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "REAL_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROBUSTNESS_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROBUSTNESS_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROOTS_OF_UNITY_NOT_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROOTS_OF_UNITY_NOT_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROW_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROW_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SHAPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SHAPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SIMPLE_MESSAGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SIMPLE_MESSAGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          STANDARD_DEVIATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "STANDARD_DEVIATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POINT_NOT_IN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POINT_NOT_IN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SUBARRAY_ENDS_AFTER_ARRAY_END = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SUBARRAY_ENDS_AFTER_ARRAY_END", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_LARGE_CUTOFF_SINGULAR_VALUE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_LARGE_CUTOFF_SINGULAR_VALUE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNKNOWN_MODE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNKNOWN_MODE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNSUPPORTED_OPERATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNSUPPORTED_OPERATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          URL_CONTAINS_NO_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "URL_CONTAINS_NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          USER_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "USER_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WEIGHT_AT_LEAST_ONE_NON_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WEIGHT_AT_LEAST_ONE_NON_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WHOLE_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WHOLE_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WRONG_NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WRONG_NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_FRACTION_TO_DIVIDE_BY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_FRACTION_TO_DIVIDE_BY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_STATE_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_STATE_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedCoreFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String LocalizedCoreFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      LocalizedCoreFormats LocalizedCoreFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedCoreFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1901a79c99fdd24b], a0.this$));
      }

      JArray< LocalizedCoreFormats > LocalizedCoreFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedCoreFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_f5fc18211f4b5bc7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self);
      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data);
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data);
      static PyGetSetDef t_LocalizedCoreFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedCoreFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedCoreFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedCoreFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedCoreFormats)[] = {
        { Py_tp_methods, t_LocalizedCoreFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedCoreFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedCoreFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedCoreFormats, t_LocalizedCoreFormats, LocalizedCoreFormats);
      PyObject *t_LocalizedCoreFormats::wrap_Object(const LocalizedCoreFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedCoreFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedCoreFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedCoreFormats), &PY_TYPE_DEF(LocalizedCoreFormats), module, "LocalizedCoreFormats", 0);
      }

      void t_LocalizedCoreFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "class_", make_descriptor(LocalizedCoreFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "wrapfn_", make_descriptor(t_LocalizedCoreFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedCoreFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARITHMETIC_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARITHMETIC_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SUMS_TO_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BANDWIDTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BANDWIDTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BASE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_BAD_ARGUMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_FAILED_CONVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_INVALID_PARAMETERS_ORDER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_OBJECT_TO_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE_AS_TYPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COLUMN_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COLUMN_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONSTRAINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONSTRAINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_INFINITY_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_NAN_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONVERGENCE_FAILED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONVERGENCE_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DEGREES_OF_FREEDOM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DEGREES_OF_FREEDOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DERIVATION_ORDER_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIFFERENT_ROWS_LENGTHS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIGEST_NOT_INITIALIZED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIGEST_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH_2x2", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISTRIBUTION_NOT_LOADED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_INTERPOLATION_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_ROW_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ENDPOINTS_NOT_AN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPANSION_FACTOR_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FACTORIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_BRACKETING", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_BRACKETING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_DECOMPOSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_DECOMPOSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_FRACTION_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_FRACTION_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_COLUMNS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_ROWS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION_CONVERSION_OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FUNCTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILLEGAL_STATE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILLEGAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILL_CONDITIONED_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "IMAGINARY_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::IMAGINARY_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_LARGER_THAN_MAX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_LARGER_THAN_MAX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_CAPACITY_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_COLUMN_AFTER_FINAL_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_ROW_AFTER_FINAL_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_ROWS_AND_COLUMNS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INTERNAL_ERROR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INVALID_MAX_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INVALID_MAX_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LENGTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LENGTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MAX_COUNT_EXCEEDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MAX_COUNT_EXCEEDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MEAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_COMPLEX_MODULE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_CONVERGENT_CONTINUED_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_POSITIVE_DEFINITE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SELF_ADJOINT_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SYMMETRIC_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SYMMETRIC_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_INFINITE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_INFINITE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_BRACKETING_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_BRACKETING_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_FINITE_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_FINITE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_WINDOW_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_CONVERGENCE_WITH_ANY_START_POINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_DATA$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_OPTIMUM_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_INTERPOLATION_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESSES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESSES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_TRIALS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_TRIALS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_LEFT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_LEFT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_SIMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_ADDITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_ADDITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_MULTIPLICATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_SUBTRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_EXCEEDS_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_EXCEEDS_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POLYNOMIAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POLYNOMIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "REAL_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::REAL_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROBUSTNESS_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROBUSTNESS_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROOTS_OF_UNITY_NOT_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROW_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROW_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SHAPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SHAPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SIMPLE_MESSAGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SIMPLE_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "STANDARD_DEVIATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::STANDARD_DEVIATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POINT_NOT_IN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SUBARRAY_ENDS_AFTER_ARRAY_END", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_LARGE_CUTOFF_SINGULAR_VALUE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNKNOWN_MODE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNKNOWN_MODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNSUPPORTED_OPERATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNSUPPORTED_OPERATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "URL_CONTAINS_NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::URL_CONTAINS_NO_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "USER_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::USER_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WEIGHT_AT_LEAST_ONE_NON_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WHOLE_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WHOLE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WRONG_NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_FRACTION_TO_DIVIDE_BY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_STATE_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_STATE_SIZE)));
      }

      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedCoreFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedCoreFormats::wrap_Object(LocalizedCoreFormats(((t_LocalizedCoreFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedCoreFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedCoreFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::valueOf(a0));
          return t_LocalizedCoreFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedCoreFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedCoreFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data)
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
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAbstractPropagator::class$ = NULL;
      jmethodID *PythonFieldAbstractPropagator::mids$ = NULL;
      bool PythonFieldAbstractPropagator::live$ = false;

      jclass PythonFieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_addEventDetector_ca1d91eb6a3ce219] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_afe29c55086c638f] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_44f88f604c4d00f1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAbstractPropagator::PythonFieldAbstractPropagator(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::FieldAbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      void PythonFieldAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldAbstractPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self);
      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data);
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonFieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonFieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonFieldAbstractPropagator, t_PythonFieldAbstractPropagator, PythonFieldAbstractPropagator);
      PyObject *t_PythonFieldAbstractPropagator::wrap_Object(const PythonFieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAbstractPropagator), &PY_TYPE_DEF(PythonFieldAbstractPropagator), module, "PythonFieldAbstractPropagator", 1);
      }

      void t_PythonFieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "class_", make_descriptor(PythonFieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAbstractPropagator::wrap_Object(PythonFieldAbstractPropagator(((t_PythonFieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        PythonFieldAbstractPropagator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = PythonFieldAbstractPropagator(a0));
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

      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data)
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
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableMatrixFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableMatrixFunction::mids$ = NULL;
        bool UnivariateDifferentiableMatrixFunction::live$ = false;

        jclass UnivariateDifferentiableMatrixFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_e65382fba855c899] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > UnivariateDifferentiableMatrixFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > >(env->callObjectMethod(this$, mids$[mid_value_e65382fba855c899], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableMatrixFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableMatrixFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableMatrixFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableMatrixFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateMatrixFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableMatrixFunction, t_UnivariateDifferentiableMatrixFunction, UnivariateDifferentiableMatrixFunction);

        void t_UnivariateDifferentiableMatrixFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableMatrixFunction), &PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction), module, "UnivariateDifferentiableMatrixFunction", 0);
        }

        void t_UnivariateDifferentiableMatrixFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "class_", make_descriptor(UnivariateDifferentiableMatrixFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableMatrixFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableMatrixFunction::wrap_Object(UnivariateDifferentiableMatrixFunction(((t_UnivariateDifferentiableMatrixFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableMatrixFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionAndAttitudeProvider::class$ = NULL;
          jmethodID *ThrustDirectionAndAttitudeProvider::mids$ = NULL;
          bool ThrustDirectionAndAttitudeProvider::live$ = false;

          jclass ThrustDirectionAndAttitudeProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_buildFromCustomAttitude_a3f64f8717c9511d] = env->getStaticMethodID(cls, "buildFromCustomAttitude", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInFrame_63447e4da4c98de8] = env->getStaticMethodID(cls, "buildFromDirectionInFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInLOF_843847f4f0e08985] = env->getStaticMethodID(cls, "buildFromDirectionInLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromFixedDirectionInSatelliteFrame_4df7434fe337ce1b] = env->getStaticMethodID(cls, "buildFromFixedDirectionInSatelliteFrame", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
              mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
              mids$[mid_getManeuverAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getManeuverAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
              mids$[mid_getThrusterAxisInSatelliteFrame_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrusterAxisInSatelliteFrame", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAttitudeFromFrame_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitudeFromFrame", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromCustomAttitude_a3f64f8717c9511d], a0.this$, a1.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInFrame_63447e4da4c98de8], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(const ::org::orekit::frames::LOF & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInLOF_843847f4f0e08985], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromFixedDirectionInSatelliteFrame_4df7434fe337ce1b], a0.this$));
          }

          ::org::orekit::attitudes::Attitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::FieldAttitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::AttitudeProvider ThrustDirectionAndAttitudeProvider::getManeuverAttitudeProvider() const
          {
            return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getManeuverAttitudeProvider_331f12bb6017243b]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionAndAttitudeProvider::getThrusterAxisInSatelliteFrame() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrusterAxisInSatelliteFrame_8b724f8b4fdad1a2]));
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
          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyGetSetDef t_ThrustDirectionAndAttitudeProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, maneuverAttitudeProvider),
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, thrusterAxisInSatelliteFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ThrustDirectionAndAttitudeProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromCustomAttitude, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInFrame, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInLOF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromFixedDirectionInSatelliteFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getAttitude, METH_VARARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getManeuverAttitudeProvider, METH_NOARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getThrusterAxisInSatelliteFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionAndAttitudeProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionAndAttitudeProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ThrustDirectionAndAttitudeProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionAndAttitudeProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionAndAttitudeProvider, t_ThrustDirectionAndAttitudeProvider, ThrustDirectionAndAttitudeProvider);

          void t_ThrustDirectionAndAttitudeProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionAndAttitudeProvider), &PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider), module, "ThrustDirectionAndAttitudeProvider", 0);
          }

          void t_ThrustDirectionAndAttitudeProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "class_", make_descriptor(ThrustDirectionAndAttitudeProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "wrapfn_", make_descriptor(t_ThrustDirectionAndAttitudeProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionAndAttitudeProvider::wrap_Object(ThrustDirectionAndAttitudeProvider(((t_ThrustDirectionAndAttitudeProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(a0, a1));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromCustomAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInFrame", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::LOF a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::LOF::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInLOF", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(a0));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromFixedDirectionInSatelliteFrame", arg);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdapterDetector::class$ = NULL;
        jmethodID *AdapterDetector::mids$ = NULL;
        bool AdapterDetector::live$ = false;

        jclass AdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e13564f833403504] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getHandler_0c96c441e92b6ffa] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_014eea600d2cdae8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_b74f83833fdad017] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterDetector::AdapterDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e13564f833403504, a0.this$)) {}

        jdouble AdapterDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector AdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9ada55f07f5a223c]));
        }

        ::org::orekit::propagation::events::handlers::EventHandler AdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0c96c441e92b6ffa]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_014eea600d2cdae8]));
        }

        jint AdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        jdouble AdapterDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_b74f83833fdad017]);
        }

        void AdapterDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg);
        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args);
        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data);
        static PyGetSetDef t_AdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterDetector, detector),
          DECLARE_GET_FIELD(t_AdapterDetector, handler),
          DECLARE_GET_FIELD(t_AdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AdapterDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterDetector__methods_[] = {
          DECLARE_METHOD(t_AdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, g, METH_O),
          DECLARE_METHOD(t_AdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterDetector)[] = {
          { Py_tp_methods, t_AdapterDetector__methods_ },
          { Py_tp_init, (void *) t_AdapterDetector_init_ },
          { Py_tp_getset, t_AdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterDetector, t_AdapterDetector, AdapterDetector);

        void t_AdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterDetector), &PY_TYPE_DEF(AdapterDetector), module, "AdapterDetector", 0);
        }

        void t_AdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "class_", make_descriptor(AdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "wrapfn_", make_descriptor(t_AdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterDetector::initializeClass, 1)))
            return NULL;
          return t_AdapterDetector::wrap_Object(AdapterDetector(((t_AdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          AdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = AdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args)
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

        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowFieldMatrix::class$ = NULL;
      jmethodID *Array2DRowFieldMatrix::mids$ = NULL;
      bool Array2DRowFieldMatrix::live$ = false;

      jclass Array2DRowFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17c98b43bf9b6f78] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a9efc882474e6213] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_a1e449a87301face] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_1338c9da395c39c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_1a3c85cc4ecf79f4] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_f1e0c41403666ce7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_7ec78cb4b1521bd4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_addToEntry_c2695120fce254e7] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_81d49643ce3a3c0b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_add2e370542edc2f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_79f47d23e197eb68] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDataRef_79f47d23e197eb68] = env->getMethodID(cls, "getDataRef", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_d0f2803baa5859d6] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_32f3c1a06713be87] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_fccf627d1096268f] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_7ec78cb4b1521bd4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_multiplyEntry_c2695120fce254e7] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_915778010161dc36] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyTransposed_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_0721a6f091b7d386] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_0721a6f091b7d386] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_setEntry_c2695120fce254e7] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_a38853481346cb12] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubMatrix_3b5f1aa21de3920a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_7ec78cb4b1521bd4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_transposeMultiply_915778010161dc36] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_17c98b43bf9b6f78, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9efc882474e6213, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a1e449a87301face, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_1338c9da395c39c9, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_1a3c85cc4ecf79f4, a0.this$, a1)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1, jboolean a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_f1e0c41403666ce7, a0.this$, a1.this$, a2)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

      Array2DRowFieldMatrix Array2DRowFieldMatrix::add(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_7ec78cb4b1521bd4], a0.this$));
      }

      void Array2DRowFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_add2e370542edc2f], a0, a1));
      }

      jint Array2DRowFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_79f47d23e197eb68]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getDataRef() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getDataRef_79f47d23e197eb68]));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d0f2803baa5859d6], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_32f3c1a06713be87], a0));
      }

      jint Array2DRowFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_fccf627d1096268f], a0, a1, a2, a3));
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::multiply(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_7ec78cb4b1521bd4], a0.this$));
      }

      void Array2DRowFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_915778010161dc36], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e74c5d5fdc2ea025], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_0721a6f091b7d386], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_0721a6f091b7d386], a0.this$));
      }

      void Array2DRowFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      void Array2DRowFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_a38853481346cb12], a0, a1.this$);
      }

      void Array2DRowFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_3b5f1aa21de3920a], a0.this$, a1, a2);
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::subtract(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_7ec78cb4b1521bd4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_915778010161dc36], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e74c5d5fdc2ea025], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args);
      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self);
      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowFieldMatrix)[] = {
        { Py_tp_methods, t_Array2DRowFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowFieldMatrix_init_ },
        { Py_tp_getset, t_Array2DRowFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowFieldMatrix, t_Array2DRowFieldMatrix, Array2DRowFieldMatrix);
      PyObject *t_Array2DRowFieldMatrix::wrap_Object(const Array2DRowFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Array2DRowFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Array2DRowFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowFieldMatrix), &PY_TYPE_DEF(Array2DRowFieldMatrix), module, "Array2DRowFieldMatrix", 0);
      }

      void t_Array2DRowFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "class_", make_descriptor(Array2DRowFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "wrapfn_", make_descriptor(t_Array2DRowFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowFieldMatrix::wrap_Object(Array2DRowFieldMatrix(((t_Array2DRowFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
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

      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data)
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
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LazyLoadedCelestialBodies::class$ = NULL;
      jmethodID *LazyLoadedCelestialBodies::mids$ = NULL;
      bool LazyLoadedCelestialBodies::live$ = false;

      jclass LazyLoadedCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LazyLoadedCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d81efd1143d307c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_addCelestialBodyLoader_3ecf386d8e3fd776] = env->getMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_a627ad9c5959309d] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_734b91ac30d5f9b4] = env->getMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_734b91ac30d5f9b4] = env->getMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_7eb4325e211386e9] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_5df52e80cbb5eb85] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_5df52e80cbb5eb85] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_5df52e80cbb5eb85] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_5df52e80cbb5eb85] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_5df52e80cbb5eb85] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_5df52e80cbb5eb85] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_5df52e80cbb5eb85] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_5df52e80cbb5eb85] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_5df52e80cbb5eb85] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_5df52e80cbb5eb85] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedCelestialBodies::LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d81efd1143d307c, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedCelestialBodies::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addCelestialBodyLoader_3ecf386d8e3fd776], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4], a0.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_a627ad9c5959309d], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_a1fa5dae97ea5ed2]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_734b91ac30d5f9b4], a0.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_734b91ac30d5f9b4], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_7eb4325e211386e9], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_5df52e80cbb5eb85]));
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
      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyGetSetDef t_LazyLoadedCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earth),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mars),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mercury),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, moon),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, neptune),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, pluto),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, saturn),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, sun),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, uranus),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addDefaultCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyCache, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedCelestialBodies)[] = {
        { Py_tp_methods, t_LazyLoadedCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedCelestialBodies_init_ },
        { Py_tp_getset, t_LazyLoadedCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedCelestialBodies, t_LazyLoadedCelestialBodies, LazyLoadedCelestialBodies);

      void t_LazyLoadedCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedCelestialBodies), &PY_TYPE_DEF(LazyLoadedCelestialBodies), module, "LazyLoadedCelestialBodies", 0);
      }

      void t_LazyLoadedCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "class_", make_descriptor(LazyLoadedCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "wrapfn_", make_descriptor(t_LazyLoadedCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedCelestialBodies::wrap_Object(LazyLoadedCelestialBodies(((t_LazyLoadedCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        LazyLoadedCelestialBodies object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedCelestialBodies(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationsBlock::class$ = NULL;
            jmethodID *ObservationsBlock::mids$ = NULL;
            bool ObservationsBlock::live$ = false;

            jclass ObservationsBlock::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationsBlock");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addObservation_c0e245b0a20c5c20] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/Observation;)V");
                mids$[mid_addObservation_bf796995512911ef] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getObservations_e62d3bb06d56d7e3] = env->getMethodID(cls, "getObservations", "()Ljava/util/List;");
                mids$[mid_setObservations_0e7c3032c7c93ed3] = env->getMethodID(cls, "setObservations", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ObservationsBlock::ObservationsBlock() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_c0e245b0a20c5c20], a0.this$);
            }

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_bf796995512911ef], a0.this$, a1.this$, a2);
            }

            ::java::util::List ObservationsBlock::getObservations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservations_e62d3bb06d56d7e3]));
            }

            void ObservationsBlock::setObservations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObservations_0e7c3032c7c93ed3], a0.this$);
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
            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args);
            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self);
            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg);
            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data);
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data);
            static PyGetSetDef t_ObservationsBlock__fields_[] = {
              DECLARE_GETSET_FIELD(t_ObservationsBlock, observations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationsBlock__methods_[] = {
              DECLARE_METHOD(t_ObservationsBlock, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, addObservation, METH_VARARGS),
              DECLARE_METHOD(t_ObservationsBlock, getObservations, METH_NOARGS),
              DECLARE_METHOD(t_ObservationsBlock, setObservations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationsBlock)[] = {
              { Py_tp_methods, t_ObservationsBlock__methods_ },
              { Py_tp_init, (void *) t_ObservationsBlock_init_ },
              { Py_tp_getset, t_ObservationsBlock__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationsBlock)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ObservationsBlock, t_ObservationsBlock, ObservationsBlock);

            void t_ObservationsBlock::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationsBlock), &PY_TYPE_DEF(ObservationsBlock), module, "ObservationsBlock", 0);
            }

            void t_ObservationsBlock::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "class_", make_descriptor(ObservationsBlock::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "wrapfn_", make_descriptor(t_ObservationsBlock::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationsBlock::initializeClass, 1)))
                return NULL;
              return t_ObservationsBlock::wrap_Object(ObservationsBlock(((t_ObservationsBlock *) arg)->object.this$));
            }
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationsBlock::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds)
            {
              ObservationsBlock object((jobject) NULL);

              INT_CALL(object = ObservationsBlock());
              self->object = object;

              return 0;
            }

            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::Observation a0((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::tdm::Observation::initializeClass, &a0))
                  {
                    OBJ_CALL(self->object.addObservation(a0));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 3:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  jdouble a2;

                  if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(self->object.addObservation(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "addObservation", args);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Observation));
            }

            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setObservations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObservations", arg);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setObservations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "observations", arg);
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::live$ = false;
        ::java::lang::String *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD = NULL;
        jint OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_c86c123a1bef01e6] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_METHOD = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Ljava/lang/String;"));
            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::addNewSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_c86c123a1bef01e6], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), module, "OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(j2p(*OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(((t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment result((jobject) NULL);

          if (!parseArgs(args, "KsIK", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldOfViewDetector::class$ = NULL;
        jmethodID *FieldOfViewDetector::mids$ = NULL;
        bool FieldOfViewDetector::live$ = false;

        jclass FieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8d7a38bdadb78aae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_init$_d5b4913b1a211725] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/propagation/events/VisibilityTrigger;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_f16dd2df58a56a14] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getPVTarget_8a41319e47f3bd7c] = env->getMethodID(cls, "getPVTarget", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_aa1eca89cc481895] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8d7a38bdadb78aae, a0.this$, a1.this$)) {}

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2, const ::org::orekit::geometry::fov::FieldOfView & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d5b4913b1a211725, a0.this$, a1, a2.this$, a3.this$)) {}

        jdouble FieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView FieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f16dd2df58a56a14]));
        }

        ::org::orekit::utils::PVCoordinatesProvider FieldOfViewDetector::getPVTarget() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVTarget_8a41319e47f3bd7c]));
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
        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args);
        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args);
        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data);
        static PyGetSetDef t_FieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, pVTarget),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_FieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getPVTarget, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfViewDetector)[] = {
          { Py_tp_methods, t_FieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_FieldOfViewDetector_init_ },
          { Py_tp_getset, t_FieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldOfViewDetector, t_FieldOfViewDetector, FieldOfViewDetector);
        PyObject *t_FieldOfViewDetector::wrap_Object(const FieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfViewDetector), &PY_TYPE_DEF(FieldOfViewDetector), module, "FieldOfViewDetector", 0);
        }

        void t_FieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "class_", make_descriptor(FieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "wrapfn_", make_descriptor(t_FieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_FieldOfViewDetector::wrap_Object(FieldOfViewDetector(((t_FieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::geometry::fov::FieldOfView a3((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kDKk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_, &a3))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
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

        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *RichardsonExpansion::class$ = NULL;
      jmethodID *RichardsonExpansion::mids$ = NULL;
      bool RichardsonExpansion::live$ = false;

      jclass RichardsonExpansion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/RichardsonExpansion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c4fc8764def20b65] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/LagrangianPoints;)V");
          mids$[mid_computeHaloFirstGuess_8a5adba960c21b64] = env->getMethodID(cls, "computeHaloFirstGuess", "(DLorg/orekit/orbits/LibrationOrbitFamily;DD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunovFirstGuess_6acb4642554a452a] = env->getMethodID(cls, "computeLyapunovFirstGuess", "(DDD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getCr3bpSystem_2748a8cb525bb823] = env->getMethodID(cls, "getCr3bpSystem", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getHaloOrbitalPeriod_04fd0666b613d2ab] = env->getMethodID(cls, "getHaloOrbitalPeriod", "(D)D");
          mids$[mid_getLagrangianPoint_7663a5886f588c29] = env->getMethodID(cls, "getLagrangianPoint", "()Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_getLyapunovOrbitalPeriod_04fd0666b613d2ab] = env->getMethodID(cls, "getLyapunovOrbitalPeriod", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RichardsonExpansion::RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::LagrangianPoints & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4fc8764def20b65, a0.this$, a1.this$)) {}

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeHaloFirstGuess(jdouble a0, const ::org::orekit::orbits::LibrationOrbitFamily & a1, jdouble a2, jdouble a3) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeHaloFirstGuess_8a5adba960c21b64], a0, a1.this$, a2, a3));
      }

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeLyapunovFirstGuess(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunovFirstGuess_6acb4642554a452a], a0, a1, a2));
      }

      ::org::orekit::bodies::CR3BPSystem RichardsonExpansion::getCr3bpSystem() const
      {
        return ::org::orekit::bodies::CR3BPSystem(env->callObjectMethod(this$, mids$[mid_getCr3bpSystem_2748a8cb525bb823]));
      }

      jdouble RichardsonExpansion::getHaloOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHaloOrbitalPeriod_04fd0666b613d2ab], a0);
      }

      ::org::orekit::utils::LagrangianPoints RichardsonExpansion::getLagrangianPoint() const
      {
        return ::org::orekit::utils::LagrangianPoints(env->callObjectMethod(this$, mids$[mid_getLagrangianPoint_7663a5886f588c29]));
      }

      jdouble RichardsonExpansion::getLyapunovOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLyapunovOrbitalPeriod_04fd0666b613d2ab], a0);
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
      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data);
      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data);
      static PyGetSetDef t_RichardsonExpansion__fields_[] = {
        DECLARE_GET_FIELD(t_RichardsonExpansion, cr3bpSystem),
        DECLARE_GET_FIELD(t_RichardsonExpansion, lagrangianPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RichardsonExpansion__methods_[] = {
        DECLARE_METHOD(t_RichardsonExpansion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, computeHaloFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, computeLyapunovFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getCr3bpSystem, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getHaloOrbitalPeriod, METH_O),
        DECLARE_METHOD(t_RichardsonExpansion, getLagrangianPoint, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getLyapunovOrbitalPeriod, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RichardsonExpansion)[] = {
        { Py_tp_methods, t_RichardsonExpansion__methods_ },
        { Py_tp_init, (void *) t_RichardsonExpansion_init_ },
        { Py_tp_getset, t_RichardsonExpansion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RichardsonExpansion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RichardsonExpansion, t_RichardsonExpansion, RichardsonExpansion);

      void t_RichardsonExpansion::install(PyObject *module)
      {
        installType(&PY_TYPE(RichardsonExpansion), &PY_TYPE_DEF(RichardsonExpansion), module, "RichardsonExpansion", 0);
      }

      void t_RichardsonExpansion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "class_", make_descriptor(RichardsonExpansion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "wrapfn_", make_descriptor(t_RichardsonExpansion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RichardsonExpansion::initializeClass, 1)))
          return NULL;
        return t_RichardsonExpansion::wrap_Object(RichardsonExpansion(((t_RichardsonExpansion *) arg)->object.this$));
      }
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RichardsonExpansion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::LagrangianPoints a1((jobject) NULL);
        PyTypeObject **p1;
        RichardsonExpansion object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          INT_CALL(object = RichardsonExpansion(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::LibrationOrbitFamily a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jdouble a3;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DKDD", ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeHaloFirstGuess(a0, a1, a2, a3));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeHaloFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLyapunovFirstGuess(a0, a1, a2));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLyapunovFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getHaloOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getHaloOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self)
      {
        ::org::orekit::utils::LagrangianPoints result((jobject) NULL);
        OBJ_CALL(result = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getLyapunovOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLyapunovOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }

      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::utils::LagrangianPoints value((jobject) NULL);
        OBJ_CALL(value = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *EphemerisGenerator::class$ = NULL;
      jmethodID *EphemerisGenerator::mids$ = NULL;
      bool EphemerisGenerator::live$ = false;

      jclass EphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/EphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_2d80cda3dc1f1422] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::BoundedPropagator EphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_2d80cda3dc1f1422]));
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
      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self);
      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data);
      static PyGetSetDef t_EphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_EphemerisGenerator, generatedEphemeris),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_EphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EphemerisGenerator)[] = {
        { Py_tp_methods, t_EphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EphemerisGenerator, t_EphemerisGenerator, EphemerisGenerator);

      void t_EphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(EphemerisGenerator), &PY_TYPE_DEF(EphemerisGenerator), module, "EphemerisGenerator", 0);
      }

      void t_EphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "class_", make_descriptor(EphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "wrapfn_", make_descriptor(t_EphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_EphemerisGenerator::wrap_Object(EphemerisGenerator(((t_EphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self)
      {
        ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
      }

      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProviderAdapter::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProviderAdapter::mids$ = NULL;
      bool ExtendedPVCoordinatesProviderAdapter::live$ = false;

      jclass ExtendedPVCoordinatesProviderAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProviderAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5f9eb65e8961417] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExtendedPVCoordinatesProviderAdapter::ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_f5f9eb65e8961417, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ExtendedPVCoordinatesProviderAdapter__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProviderAdapter)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProviderAdapter__methods_ },
        { Py_tp_init, (void *) t_ExtendedPVCoordinatesProviderAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProviderAdapter)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProviderAdapter, t_ExtendedPVCoordinatesProviderAdapter, ExtendedPVCoordinatesProviderAdapter);

      void t_ExtendedPVCoordinatesProviderAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProviderAdapter), &PY_TYPE_DEF(ExtendedPVCoordinatesProviderAdapter), module, "ExtendedPVCoordinatesProviderAdapter", 0);
      }

      void t_ExtendedPVCoordinatesProviderAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "class_", make_descriptor(ExtendedPVCoordinatesProviderAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProviderAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProviderAdapter::wrap_Object(ExtendedPVCoordinatesProviderAdapter(((t_ExtendedPVCoordinatesProviderAdapter *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ExtendedPVCoordinatesProviderAdapter object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = ExtendedPVCoordinatesProviderAdapter(a0, a1, a2));
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
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractWindUp::class$ = NULL;
          jmethodID *AbstractWindUp::mids$ = NULL;
          bool AbstractWindUp::live$ = false;

          jclass AbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_emitterToInert_3b9f748b89094cc6] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_3b9f748b89094cc6] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractWindUp::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void AbstractWindUp::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args);
          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self);
          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg);
          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data);
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data);
          static PyGetSetDef t_AbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractWindUp, parametersDrivers),
            DECLARE_GET_FIELD(t_AbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_AbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractWindUp, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractWindUp, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWindUp)[] = {
            { Py_tp_methods, t_AbstractWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWindUp)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWindUp, t_AbstractWindUp, AbstractWindUp);
          PyObject *t_AbstractWindUp::wrap_Object(const AbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWindUp), &PY_TYPE_DEF(AbstractWindUp), module, "AbstractWindUp", 0);
          }

          void t_AbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "class_", make_descriptor(AbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "wrapfn_", make_descriptor(t_AbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_AbstractWindUp::wrap_Object(AbstractWindUp(((t_AbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg)
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
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data)
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
