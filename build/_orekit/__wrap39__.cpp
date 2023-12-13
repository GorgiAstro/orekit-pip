#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter::class$ = NULL;
      jmethodID *HarmonicCurveFitter::mids$ = NULL;
      bool HarmonicCurveFitter::live$ = false;

      jclass HarmonicCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_f1c4460a81bc9fa3] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withMaxIterations_0d79b676ffbe47ab] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withStartPoint_116ed70a41dfff0e] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_getProblem_067ae4e9e4e5b47a] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter HarmonicCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return HarmonicCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_f1c4460a81bc9fa3]));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withMaxIterations(jint a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_0d79b676ffbe47ab], a0));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_116ed70a41dfff0e], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type);
      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg);

      static PyMethodDef t_HarmonicCurveFitter__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_HarmonicCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter, t_HarmonicCurveFitter, HarmonicCurveFitter);

      void t_HarmonicCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter), &PY_TYPE_DEF(HarmonicCurveFitter), module, "HarmonicCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser)));
      }

      void t_HarmonicCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "class_", make_descriptor(HarmonicCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "wrapfn_", make_descriptor(t_HarmonicCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter::wrap_Object(HarmonicCurveFitter(((t_HarmonicCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type)
      {
        HarmonicCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::HarmonicCurveFitter::create());
        return t_HarmonicCurveFitter::wrap_Object(result);
      }

      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        jint a0;
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SmoothedObservationDataSet::class$ = NULL;
          jmethodID *SmoothedObservationDataSet::mids$ = NULL;
          bool SmoothedObservationDataSet::live$ = false;

          jclass SmoothedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4b648d7fa46ce37e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getDataSet_c6a7cfb733f1aa1d] = env->getMethodID(cls, "getDataSet", "()Lorg/orekit/files/rinex/observation/ObservationDataSet;");
              mids$[mid_getSmoothedData_06e77e07a1ad960a] = env->getMethodID(cls, "getSmoothedData", "()Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SmoothedObservationDataSet::SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationDataSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b648d7fa46ce37e, a0.this$, a1.this$)) {}

          ::org::orekit::files::rinex::observation::ObservationDataSet SmoothedObservationDataSet::getDataSet() const
          {
            return ::org::orekit::files::rinex::observation::ObservationDataSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6a7cfb733f1aa1d]));
          }

          ::org::orekit::files::rinex::observation::ObservationData SmoothedObservationDataSet::getSmoothedData() const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_getSmoothedData_06e77e07a1ad960a]));
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
          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data);
          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data);
          static PyGetSetDef t_SmoothedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, dataSet),
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, smoothedData),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SmoothedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_SmoothedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getDataSet, METH_NOARGS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getSmoothedData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SmoothedObservationDataSet)[] = {
            { Py_tp_methods, t_SmoothedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_SmoothedObservationDataSet_init_ },
            { Py_tp_getset, t_SmoothedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SmoothedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SmoothedObservationDataSet, t_SmoothedObservationDataSet, SmoothedObservationDataSet);

          void t_SmoothedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SmoothedObservationDataSet), &PY_TYPE_DEF(SmoothedObservationDataSet), module, "SmoothedObservationDataSet", 0);
          }

          void t_SmoothedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "class_", make_descriptor(SmoothedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "wrapfn_", make_descriptor(t_SmoothedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SmoothedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_SmoothedObservationDataSet::wrap_Object(SmoothedObservationDataSet(((t_SmoothedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SmoothedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationDataSet a1((jobject) NULL);
            SmoothedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SmoothedObservationDataSet(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(value);
          }

          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationData value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$SumAndResidual::class$ = NULL;
      jmethodID *MathUtils$SumAndResidual::mids$ = NULL;
      bool MathUtils$SumAndResidual::live$ = false;

      jclass MathUtils$SumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$SumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_b74f83833fdad017] = env->getMethodID(cls, "getResidual", "()D");
          mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathUtils$SumAndResidual::getResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getResidual_b74f83833fdad017]);
      }

      jdouble MathUtils$SumAndResidual::getSum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
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
      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data);
      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$SumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, sum),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$SumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$SumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$SumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$SumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$SumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$SumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$SumAndResidual, t_MathUtils$SumAndResidual, MathUtils$SumAndResidual);

      void t_MathUtils$SumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$SumAndResidual), &PY_TYPE_DEF(MathUtils$SumAndResidual), module, "MathUtils$SumAndResidual", 0);
      }

      void t_MathUtils$SumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "class_", make_descriptor(MathUtils$SumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$SumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$SumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$SumAndResidual::wrap_Object(MathUtils$SumAndResidual(((t_MathUtils$SumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$SumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSum());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectOutput.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream::class$ = NULL;
    jmethodID *ObjectOutputStream::mids$ = NULL;
    bool ObjectOutputStream::live$ = false;

    jclass ObjectOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_9601da1efb310931] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultWriteObject_a1fa5dae97ea5ed2] = env->getMethodID(cls, "defaultWriteObject", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_putFields_d617ccc8cb976ecd] = env->getMethodID(cls, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
        mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_useProtocolVersion_44ed599e93e8a30c] = env->getMethodID(cls, "useProtocolVersion", "(I)V");
        mids$[mid_write_459771b03534868e] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_fcb96c98de6fad04] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_44ed599e93e8a30c] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_734b91ac30d5f9b4] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_44ed599e93e8a30c] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_734b91ac30d5f9b4] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_8ba9fe7a847cecad] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFields_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writeFields", "()V");
        mids$[mid_writeFloat_bb7181dc3b1dc22b] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_44ed599e93e8a30c] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_3d7dd2314a0dd456] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeObject_55f3c894852c27a3] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");
        mids$[mid_writeShort_44ed599e93e8a30c] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_734b91ac30d5f9b4] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");
        mids$[mid_writeUnshared_55f3c894852c27a3] = env->getMethodID(cls, "writeUnshared", "(Ljava/lang/Object;)V");
        mids$[mid_writeObjectOverride_55f3c894852c27a3] = env->getMethodID(cls, "writeObjectOverride", "(Ljava/lang/Object;)V");
        mids$[mid_annotateClass_9d20f27ef81b4361] = env->getMethodID(cls, "annotateClass", "(Ljava/lang/Class;)V");
        mids$[mid_annotateProxyClass_9d20f27ef81b4361] = env->getMethodID(cls, "annotateProxyClass", "(Ljava/lang/Class;)V");
        mids$[mid_replaceObject_5804c890f94a02b6] = env->getMethodID(cls, "replaceObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableReplaceObject_52d2d2523d94d978] = env->getMethodID(cls, "enableReplaceObject", "(Z)Z");
        mids$[mid_writeStreamHeader_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writeStreamHeader", "()V");
        mids$[mid_writeClassDescriptor_f7ffe611f9e6736e] = env->getMethodID(cls, "writeClassDescriptor", "(Ljava/io/ObjectStreamClass;)V");
        mids$[mid_drain_a1fa5dae97ea5ed2] = env->getMethodID(cls, "drain", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_9601da1efb310931, a0.this$)) {}

    void ObjectOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void ObjectOutputStream::defaultWriteObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultWriteObject_a1fa5dae97ea5ed2]);
    }

    void ObjectOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    ::java::io::ObjectOutputStream$PutField ObjectOutputStream::putFields() const
    {
      return ::java::io::ObjectOutputStream$PutField(env->callObjectMethod(this$, mids$[mid_putFields_d617ccc8cb976ecd]));
    }

    void ObjectOutputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
    }

    void ObjectOutputStream::useProtocolVersion(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_useProtocolVersion_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_459771b03534868e], a0.this$);
    }

    void ObjectOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a9fddc59b07ce512], a0.this$, a1, a2);
    }

    void ObjectOutputStream::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_fcb96c98de6fad04], a0);
    }

    void ObjectOutputStream::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_734b91ac30d5f9b4], a0.this$);
    }

    void ObjectOutputStream::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_734b91ac30d5f9b4], a0.this$);
    }

    void ObjectOutputStream::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_8ba9fe7a847cecad], a0);
    }

    void ObjectOutputStream::writeFields() const
    {
      env->callVoidMethod(this$, mids$[mid_writeFields_a1fa5dae97ea5ed2]);
    }

    void ObjectOutputStream::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_bb7181dc3b1dc22b], a0);
    }

    void ObjectOutputStream::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_3d7dd2314a0dd456], a0);
    }

    void ObjectOutputStream::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_55f3c894852c27a3], a0.this$);
    }

    void ObjectOutputStream::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_44ed599e93e8a30c], a0);
    }

    void ObjectOutputStream::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_734b91ac30d5f9b4], a0.this$);
    }

    void ObjectOutputStream::writeUnshared(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUnshared_55f3c894852c27a3], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, defaultWriteObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, putFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, useProtocolVersion, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeBoolean, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeByte, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeBytes, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChar, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChars, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeDouble, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeFloat, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeInt, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeLong, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeObject, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeShort, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUTF, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUnshared, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream)[] = {
      { Py_tp_methods, t_ObjectOutputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream, t_ObjectOutputStream, ObjectOutputStream);

    void t_ObjectOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream), &PY_TYPE_DEF(ObjectOutputStream), module, "ObjectOutputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "PutField", make_descriptor(&PY_TYPE_DEF(ObjectOutputStream$PutField)));
    }

    void t_ObjectOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "class_", make_descriptor(ObjectOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "wrapfn_", make_descriptor(t_ObjectOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream::wrap_Object(ObjectOutputStream(((t_ObjectOutputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ObjectOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.defaultWriteObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self)
    {
      ::java::io::ObjectOutputStream$PutField result((jobject) NULL);
      OBJ_CALL(result = self->object.putFields());
      return ::java::io::t_ObjectOutputStream$PutField::wrap_Object(result);
    }

    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.useProtocolVersion(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "useProtocolVersion", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args)
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

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.writeFields());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeUnshared(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUnshared", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointVectorValuePair::class$ = NULL;
      jmethodID *PointVectorValuePair::mids$ = NULL;
      bool PointVectorValuePair::live$ = false;

      jclass PointVectorValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointVectorValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_e37f82ddb3889794] = env->getMethodID(cls, "<init>", "([D[DZ)V");
          mids$[mid_getPoint_25e1757a36c4dde2] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_25e1757a36c4dde2] = env->getMethodID(cls, "getPointRef", "()[D");
          mids$[mid_getValue_25e1757a36c4dde2] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_getValueRef_25e1757a36c4dde2] = env->getMethodID(cls, "getValueRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_e37f82ddb3889794, a0.this$, a1.this$, a2)) {}

      JArray< jdouble > PointVectorValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_25e1757a36c4dde2]));
      }

      JArray< jdouble > PointVectorValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_25e1757a36c4dde2]));
      }

      JArray< jdouble > PointVectorValuePair::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_25e1757a36c4dde2]));
      }

      JArray< jdouble > PointVectorValuePair::getValueRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValueRef_25e1757a36c4dde2]));
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
      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args);
      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args);
      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data);
      static PyGetSetDef t_PointVectorValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointVectorValuePair, point),
        DECLARE_GET_FIELD(t_PointVectorValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, value),
        DECLARE_GET_FIELD(t_PointVectorValuePair, valueRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointVectorValuePair__methods_[] = {
        DECLARE_METHOD(t_PointVectorValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPointRef, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValue, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValueRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointVectorValuePair)[] = {
        { Py_tp_methods, t_PointVectorValuePair__methods_ },
        { Py_tp_init, (void *) t_PointVectorValuePair_init_ },
        { Py_tp_getset, t_PointVectorValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointVectorValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointVectorValuePair, t_PointVectorValuePair, PointVectorValuePair);
      PyObject *t_PointVectorValuePair::wrap_Object(const PointVectorValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointVectorValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointVectorValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointVectorValuePair), &PY_TYPE_DEF(PointVectorValuePair), module, "PointVectorValuePair", 0);
      }

      void t_PointVectorValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "class_", make_descriptor(PointVectorValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "wrapfn_", make_descriptor(t_PointVectorValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointVectorValuePair::initializeClass, 1)))
          return NULL;
        return t_PointVectorValuePair::wrap_Object(PointVectorValuePair(((t_PointVectorValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointVectorValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
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

      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getValue());
          return result.wrap();
        }

        return callSuper(PY_TYPE(PointVectorValuePair), (PyObject *) self, "getValue", args, 2);
      }

      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueRef());
        return result.wrap();
      }
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
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
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeEntryKey::class$ = NULL;
              jmethodID *AttitudeEntryKey::mids$ = NULL;
              bool AttitudeEntryKey::live$ = false;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_X = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Y = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Z = NULL;
              AttitudeEntryKey *AttitudeEntryKey::EPOCH = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PER = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PHASE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::angVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngle = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternion = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDot = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEphemeris = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEulerRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionState = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationAngles = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationRates = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spin = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutation = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutationMom = NULL;

              jclass AttitudeEntryKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_aba2b39bc75eba9a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");
                  mids$[mid_values_904029039d08cb3e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_X = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Y = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Z = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  EPOCH = new AttitudeEntryKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PER = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PHASE = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  angVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "angVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngle = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngle", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternion = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDot = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEphemeris = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEphemeris", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEulerRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEulerRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionState = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionState", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationAngles = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationRates = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spin = new AttitudeEntryKey(env->getStaticObjectField(cls, "spin", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutation = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutation", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutationMom = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutationMom", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeEntryKey AttitudeEntryKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeEntryKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aba2b39bc75eba9a], a0.this$));
              }

              JArray< AttitudeEntryKey > AttitudeEntryKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeEntryKey >(env->callStaticObjectMethod(cls, mids$[mid_values_904029039d08cb3e]));
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
              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args);
              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data);
              static PyGetSetDef t_AttitudeEntryKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeEntryKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeEntryKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeEntryKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeEntryKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeEntryKey)[] = {
                { Py_tp_methods, t_AttitudeEntryKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeEntryKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeEntryKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeEntryKey, t_AttitudeEntryKey, AttitudeEntryKey);
              PyObject *t_AttitudeEntryKey::wrap_Object(const AttitudeEntryKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeEntryKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeEntryKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeEntryKey), &PY_TYPE_DEF(AttitudeEntryKey), module, "AttitudeEntryKey", 0);
              }

              void t_AttitudeEntryKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "class_", make_descriptor(AttitudeEntryKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "wrapfn_", make_descriptor(t_AttitudeEntryKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeEntryKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_X", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Y", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Z", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "EPOCH", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PER", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PHASE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "angVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::angVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngle", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngle)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternion", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDot", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEphemeris", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEphemeris)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEulerRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEulerRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionState", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionState)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationAngles", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationRates", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationRates)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spin", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spin)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutation", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutation)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutationMom", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutationMom)));
              }

              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeEntryKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeEntryKey::wrap_Object(AttitudeEntryKey(((t_AttitudeEntryKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeEntryKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeEntryKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::valueOf(a0));
                  return t_AttitudeEntryKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type)
              {
                JArray< AttitudeEntryKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeEntryKey::wrap_jobject);
              }
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data)
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
#include "org/orekit/models/earth/tessellation/DivertedSingularityAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *DivertedSingularityAiming::class$ = NULL;
          jmethodID *DivertedSingularityAiming::mids$ = NULL;
          bool DivertedSingularityAiming::live$ = false;

          jclass DivertedSingularityAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/DivertedSingularityAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88fcdb5a5fbf7a17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;)V");
              mids$[mid_alongTileDirection_636e2b82319b8646] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DivertedSingularityAiming::DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88fcdb5a5fbf7a17, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D DivertedSingularityAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_636e2b82319b8646], a0.this$, a1.this$));
          }

          ::java::util::List DivertedSingularityAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_e62d3bb06d56d7e3]));
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
          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args);
          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self);
          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data);
          static PyGetSetDef t_DivertedSingularityAiming__fields_[] = {
            DECLARE_GET_FIELD(t_DivertedSingularityAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DivertedSingularityAiming__methods_[] = {
            DECLARE_METHOD(t_DivertedSingularityAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_DivertedSingularityAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DivertedSingularityAiming)[] = {
            { Py_tp_methods, t_DivertedSingularityAiming__methods_ },
            { Py_tp_init, (void *) t_DivertedSingularityAiming_init_ },
            { Py_tp_getset, t_DivertedSingularityAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DivertedSingularityAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DivertedSingularityAiming, t_DivertedSingularityAiming, DivertedSingularityAiming);

          void t_DivertedSingularityAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(DivertedSingularityAiming), &PY_TYPE_DEF(DivertedSingularityAiming), module, "DivertedSingularityAiming", 0);
          }

          void t_DivertedSingularityAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "class_", make_descriptor(DivertedSingularityAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "wrapfn_", make_descriptor(t_DivertedSingularityAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DivertedSingularityAiming::initializeClass, 1)))
              return NULL;
            return t_DivertedSingularityAiming::wrap_Object(DivertedSingularityAiming(((t_DivertedSingularityAiming *) arg)->object.this$));
          }
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DivertedSingularityAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            DivertedSingularityAiming object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_))
            {
              INT_CALL(object = DivertedSingularityAiming(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateFunction::class$ = NULL;
      jmethodID *StateFunction::mids$ = NULL;
      bool StateFunction::live$ = false;

      jclass StateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f227e5f48720b798] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > StateFunction::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_f227e5f48720b798], a0.this$));
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
      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg);

      static PyMethodDef t_StateFunction__methods_[] = {
        DECLARE_METHOD(t_StateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateFunction)[] = {
        { Py_tp_methods, t_StateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateFunction, t_StateFunction, StateFunction);

      void t_StateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(StateFunction), &PY_TYPE_DEF(StateFunction), module, "StateFunction", 0);
      }

      void t_StateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "class_", make_descriptor(StateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "wrapfn_", make_descriptor(t_StateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateFunction::initializeClass, 1)))
          return NULL;
        return t_StateFunction::wrap_Object(StateFunction(((t_StateFunction *) arg)->object.this$));
      }
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalMultivariateSummary::class$ = NULL;
        jmethodID *StatisticalMultivariateSummary::mids$ = NULL;
        bool StatisticalMultivariateSummary::live$ = false;

        jclass StatisticalMultivariateSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalMultivariateSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_f77d745f2128c391] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_25e1757a36c4dde2] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_25e1757a36c4dde2] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_25e1757a36c4dde2] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_25e1757a36c4dde2] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_25e1757a36c4dde2] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_25e1757a36c4dde2] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_25e1757a36c4dde2] = env->getMethodID(cls, "getSumSq", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix StatisticalMultivariateSummary::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f77d745f2128c391]));
        }

        jint StatisticalMultivariateSummary::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_25e1757a36c4dde2]));
        }

        jlong StatisticalMultivariateSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_25e1757a36c4dde2]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_25e1757a36c4dde2]));
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
        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data);
        static PyGetSetDef t_StatisticalMultivariateSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, covariance),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, dimension),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, geometricMean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, max),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, min),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, n),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumLog),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalMultivariateSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalMultivariateSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumSq, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalMultivariateSummary)[] = {
          { Py_tp_methods, t_StatisticalMultivariateSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalMultivariateSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalMultivariateSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalMultivariateSummary, t_StatisticalMultivariateSummary, StatisticalMultivariateSummary);

        void t_StatisticalMultivariateSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalMultivariateSummary), &PY_TYPE_DEF(StatisticalMultivariateSummary), module, "StatisticalMultivariateSummary", 0);
        }

        void t_StatisticalMultivariateSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "class_", make_descriptor(StatisticalMultivariateSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "wrapfn_", make_descriptor(t_StatisticalMultivariateSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalMultivariateSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalMultivariateSummary::wrap_Object(StatisticalMultivariateSummary(((t_StatisticalMultivariateSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalMultivariateSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonFieldAbstractIntegratedPropagator::live$ = false;

        jclass PythonFieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_85033171501dd1b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_23e677752bbdcbdf] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_f48ddce9ae4b38bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractIntegratedPropagator::PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_85033171501dd1b3, a0.this$, a1.this$, a2.this$)) {}

        void PythonFieldAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractIntegratedPropagator, t_PythonFieldAbstractIntegratedPropagator, PythonFieldAbstractIntegratedPropagator);
        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_Object(const PythonFieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator), module, "PythonFieldAbstractIntegratedPropagator", 1);
        }

        void t_PythonFieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "class_", make_descriptor(PythonFieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;", (void *) t_PythonFieldAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractIntegratedPropagator::wrap_Object(PythonFieldAbstractIntegratedPropagator(((t_PythonFieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::PropagationType a2((jobject) NULL);
          PyTypeObject **p2;
          PythonFieldAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractIntegratedPropagator(a0, a1, a2));
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

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldStateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OOOOOO", o0, o1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(::org::hipparchus::ode::FieldODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouSatelliteType::class$ = NULL;
            jmethodID *BeidouSatelliteType::mids$ = NULL;
            bool BeidouSatelliteType::live$ = false;
            BeidouSatelliteType *BeidouSatelliteType::GEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::IGSO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::MEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::RESERVED = NULL;

            jclass BeidouSatelliteType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_396f91753726c658] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_values_9da773339827bf71] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                GEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                IGSO = new BeidouSatelliteType(env->getStaticObjectField(cls, "IGSO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                MEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                RESERVED = new BeidouSatelliteType(env->getStaticObjectField(cls, "RESERVED", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouSatelliteType BeidouSatelliteType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return BeidouSatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_396f91753726c658], a0.this$));
            }

            JArray< BeidouSatelliteType > BeidouSatelliteType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< BeidouSatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_9da773339827bf71]));
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
            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args);
            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type);
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data);
            static PyGetSetDef t_BeidouSatelliteType__fields_[] = {
              DECLARE_GET_FIELD(t_BeidouSatelliteType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouSatelliteType__methods_[] = {
              DECLARE_METHOD(t_BeidouSatelliteType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, of_, METH_VARARGS),
              DECLARE_METHOD(t_BeidouSatelliteType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouSatelliteType)[] = {
              { Py_tp_methods, t_BeidouSatelliteType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_BeidouSatelliteType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouSatelliteType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(BeidouSatelliteType, t_BeidouSatelliteType, BeidouSatelliteType);
            PyObject *t_BeidouSatelliteType::wrap_Object(const BeidouSatelliteType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BeidouSatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BeidouSatelliteType::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouSatelliteType), &PY_TYPE_DEF(BeidouSatelliteType), module, "BeidouSatelliteType", 0);
            }

            void t_BeidouSatelliteType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "class_", make_descriptor(BeidouSatelliteType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "wrapfn_", make_descriptor(t_BeidouSatelliteType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouSatelliteType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "GEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::GEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "IGSO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::IGSO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "MEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::MEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "RESERVED", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::RESERVED)));
            }

            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouSatelliteType::initializeClass, 1)))
                return NULL;
              return t_BeidouSatelliteType::wrap_Object(BeidouSatelliteType(((t_BeidouSatelliteType *) arg)->object.this$));
            }
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouSatelliteType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              BeidouSatelliteType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::valueOf(a0));
                return t_BeidouSatelliteType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type)
            {
              JArray< BeidouSatelliteType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::values());
              return JArray<jobject>(result.this$).wrap(t_BeidouSatelliteType::wrap_jobject);
            }
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GRAPHICCombination::class$ = NULL;
          jmethodID *GRAPHICCombination::mids$ = NULL;
          bool GRAPHICCombination::live$ = false;

          jclass GRAPHICCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GRAPHICCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_99e3200dafc19573] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GRAPHICCombination__methods_[] = {
            DECLARE_METHOD(t_GRAPHICCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRAPHICCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRAPHICCombination)[] = {
            { Py_tp_methods, t_GRAPHICCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRAPHICCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GRAPHICCombination, t_GRAPHICCombination, GRAPHICCombination);

          void t_GRAPHICCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GRAPHICCombination), &PY_TYPE_DEF(GRAPHICCombination), module, "GRAPHICCombination", 0);
          }

          void t_GRAPHICCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "class_", make_descriptor(GRAPHICCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "wrapfn_", make_descriptor(t_GRAPHICCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRAPHICCombination::initializeClass, 1)))
              return NULL;
            return t_GRAPHICCombination::wrap_Object(GRAPHICCombination(((t_GRAPHICCombination *) arg)->object.this$));
          }
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRAPHICCombination::initializeClass, 0))
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
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AllowedSolution::class$ = NULL;
        jmethodID *AllowedSolution::mids$ = NULL;
        bool AllowedSolution::live$ = false;
        AllowedSolution *AllowedSolution::ABOVE_SIDE = NULL;
        AllowedSolution *AllowedSolution::ANY_SIDE = NULL;
        AllowedSolution *AllowedSolution::BELOW_SIDE = NULL;
        AllowedSolution *AllowedSolution::LEFT_SIDE = NULL;
        AllowedSolution *AllowedSolution::RIGHT_SIDE = NULL;

        jclass AllowedSolution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AllowedSolution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_981b24480a3d7905] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/analysis/solvers/AllowedSolution;");
            mids$[mid_values_bcbc09a144180d43] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/analysis/solvers/AllowedSolution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABOVE_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ABOVE_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            ANY_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ANY_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            BELOW_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "BELOW_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            LEFT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "LEFT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            RIGHT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "RIGHT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AllowedSolution AllowedSolution::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AllowedSolution(env->callStaticObjectMethod(cls, mids$[mid_valueOf_981b24480a3d7905], a0.this$));
        }

        JArray< AllowedSolution > AllowedSolution::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AllowedSolution >(env->callStaticObjectMethod(cls, mids$[mid_values_bcbc09a144180d43]));
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
        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args);
        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AllowedSolution_values(PyTypeObject *type);
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data);
        static PyGetSetDef t_AllowedSolution__fields_[] = {
          DECLARE_GET_FIELD(t_AllowedSolution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AllowedSolution__methods_[] = {
          DECLARE_METHOD(t_AllowedSolution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, of_, METH_VARARGS),
          DECLARE_METHOD(t_AllowedSolution, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AllowedSolution)[] = {
          { Py_tp_methods, t_AllowedSolution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AllowedSolution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AllowedSolution)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AllowedSolution, t_AllowedSolution, AllowedSolution);
        PyObject *t_AllowedSolution::wrap_Object(const AllowedSolution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AllowedSolution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AllowedSolution::install(PyObject *module)
        {
          installType(&PY_TYPE(AllowedSolution), &PY_TYPE_DEF(AllowedSolution), module, "AllowedSolution", 0);
        }

        void t_AllowedSolution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "class_", make_descriptor(AllowedSolution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "wrapfn_", make_descriptor(t_AllowedSolution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "boxfn_", make_descriptor(boxObject));
          env->getClass(AllowedSolution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ABOVE_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ABOVE_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ANY_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ANY_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "BELOW_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::BELOW_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "LEFT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::LEFT_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "RIGHT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::RIGHT_SIDE)));
        }

        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AllowedSolution::initializeClass, 1)))
            return NULL;
          return t_AllowedSolution::wrap_Object(AllowedSolution(((t_AllowedSolution *) arg)->object.this$));
        }
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AllowedSolution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AllowedSolution result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::valueOf(a0));
            return t_AllowedSolution::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AllowedSolution_values(PyTypeObject *type)
        {
          JArray< AllowedSolution > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::values());
          return JArray<jobject>(result.this$).wrap(t_AllowedSolution::wrap_jobject);
        }
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageParser::class$ = NULL;
            jmethodID *MessageParser::mids$ = NULL;
            bool MessageParser::live$ = false;

            jclass MessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_541690f9ee81d3ad] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_getFileFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_653fe7fd2fcbf113] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_19d473d3b0277de6] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object MessageParser::build() const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_build_541690f9ee81d3ad]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat MessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_e4c64bde02ca34c3]));
            }

            ::java::lang::String MessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf]));
            }

            ::java::util::Map MessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
            }

            ::java::lang::Object MessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_653fe7fd2fcbf113], a0.this$));
            }

            void MessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_19d473d3b0277de6], a0.this$);
            }

            void MessageParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args);
            static PyObject *t_MessageParser_build(t_MessageParser *self);
            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self);
            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self);
            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self);
            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data);
            static PyGetSetDef t_MessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_MessageParser, fileFormat),
              DECLARE_GET_FIELD(t_MessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_MessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageParser__methods_[] = {
              DECLARE_METHOD(t_MessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageParser, build, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_MessageParser, process, METH_O),
              DECLARE_METHOD(t_MessageParser, reset, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageParser)[] = {
              { Py_tp_methods, t_MessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageParser, t_MessageParser, MessageParser);
            PyObject *t_MessageParser::wrap_Object(const MessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageParser), &PY_TYPE_DEF(MessageParser), module, "MessageParser", 0);
            }

            void t_MessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "class_", make_descriptor(MessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "wrapfn_", make_descriptor(t_MessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageParser::initializeClass, 1)))
                return NULL;
              return t_MessageParser::wrap_Object(MessageParser(((t_MessageParser *) arg)->object.this$));
            }
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageParser_build(t_MessageParser *self)
            {
              ::java::lang::Object result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "reset", arg);
              return NULL;
            }
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider::mids$ = NULL;
          bool RawSphericalHarmonicsProvider::live$ = false;

          jclass RawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_45f17e7d0917d2cb] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics RawSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_45f17e7d0917d2cb], a0.this$));
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
          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_RawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider, t_RawSphericalHarmonicsProvider, RawSphericalHarmonicsProvider);

          void t_RawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider), &PY_TYPE_DEF(RawSphericalHarmonicsProvider), module, "RawSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "RawSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics)));
          }

          void t_RawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "class_", make_descriptor(RawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider::wrap_Object(RawSphericalHarmonicsProvider(((t_RawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
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
              mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
              mids$[mid_getRate_55546ef6a647f39b] = env->getMethodID(cls, "getRate", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String StreamedMessage::getId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
          }

          jint StreamedMessage::getRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getRate_55546ef6a647f39b]);
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
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashSet::class$ = NULL;
    jmethodID *HashSet::mids$ = NULL;
    bool HashSet::live$ = false;

    jclass HashSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_71c8ec50293ab209] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashSet::HashSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    HashSet::HashSet(jint a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    HashSet::HashSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

    HashSet::HashSet(jint a0, jfloat a1) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_71c8ec50293ab209, a0, a1)) {}

    jboolean HashSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    void HashSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object HashSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean HashSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean HashSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator HashSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jboolean HashSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jint HashSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Spliterator HashSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args);
    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clone(t_HashSet *self);
    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data);
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data);
    static PyGetSetDef t_HashSet__fields_[] = {
      DECLARE_GET_FIELD(t_HashSet, empty),
      DECLARE_GET_FIELD(t_HashSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashSet__methods_[] = {
      DECLARE_METHOD(t_HashSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, add, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, size, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, spliterator, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashSet)[] = {
      { Py_tp_methods, t_HashSet__methods_ },
      { Py_tp_init, (void *) t_HashSet_init_ },
      { Py_tp_getset, t_HashSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_HashSet *)) get_generic_iterator< t_HashSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(HashSet, t_HashSet, HashSet);
    PyObject *t_HashSet::wrap_Object(const HashSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_HashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_HashSet::install(PyObject *module)
    {
      installType(&PY_TYPE(HashSet), &PY_TYPE_DEF(HashSet), module, "HashSet", 0);
    }

    void t_HashSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "class_", make_descriptor(HashSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "wrapfn_", make_descriptor(t_HashSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashSet::initializeClass, 1)))
        return NULL;
      return t_HashSet::wrap_Object(HashSet(((t_HashSet *) arg)->object.this$));
    }
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashSet object((jobject) NULL);

          INT_CALL(object = HashSet());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashSet(a0, a1));
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

    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashSet_clone(t_HashSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "spliterator", args, 2);
    }
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPHistory::class$ = NULL;
      jmethodID *EOPHistory::mids$ = NULL;
      bool EOPHistory::live$ = false;
      jint EOPHistory::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;

      jclass EOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e1d22f124694cefe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;ILjava/util/Collection;ZLorg/orekit/time/TimeScales;)V");
          mids$[mid_cachesTidalCorrection_9ab94ac1dc23b105] = env->getMethodID(cls, "cachesTidalCorrection", "()Z");
          mids$[mid_checkEOPContinuity_8ba9fe7a847cecad] = env->getMethodID(cls, "checkEOPContinuity", "(D)V");
          mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_f9d30be358d43685] = env->getMethodID(cls, "getEOPHistoryWithoutCachedTidalCorrection", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEndDate_c325492395d89b24] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEntries_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEntries", "()Ljava/util/List;");
          mids$[mid_getEquinoxNutationCorrection_27b701db396ade01] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getEquinoxNutationCorrection_954ad4b53022f84b] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getITRFVersion_a8ff2358cca8c992] = env->getMethodID(cls, "getITRFVersion", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationDegree", "()I");
          mids$[mid_getLOD_fd347811007a6ba3] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLOD_140b8964300ddedf] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNonRotatinOriginNutationCorrection_27b701db396ade01] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getNonRotatinOriginNutationCorrection_954ad4b53022f84b] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPoleCorrection_a726f9782dce00d1] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/PoleCorrection;");
          mids$[mid_getPoleCorrection_2c525218d1f29ffc] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldPoleCorrection;");
          mids$[mid_getStartDate_c325492395d89b24] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTimeScales_d1a571f8b033e2d3] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_getUT1MinusUTC_fd347811007a6ba3] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getUT1MinusUTC_140b8964300ddedf] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_isSimpleEop_9ab94ac1dc23b105] = env->getMethodID(cls, "isSimpleEop", "()Z");
          mids$[mid_getNeighbors_70177eb25c19b8d4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_hasDataFor_a35647bda2901f54] = env->getMethodID(cls, "hasDataFor", "(Lorg/orekit/time/AbsoluteDate;)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPHistory::EOPHistory(const ::org::orekit::utils::IERSConventions & a0, jint a1, const ::java::util::Collection & a2, jboolean a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1d22f124694cefe, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      jboolean EOPHistory::cachesTidalCorrection() const
      {
        return env->callBooleanMethod(this$, mids$[mid_cachesTidalCorrection_9ab94ac1dc23b105]);
      }

      void EOPHistory::checkEOPContinuity(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_checkEOPContinuity_8ba9fe7a847cecad], a0);
      }

      ::org::orekit::utils::IERSConventions EOPHistory::getConventions() const
      {
        return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_53aaf70620a914af]));
      }

      EOPHistory EOPHistory::getEOPHistoryWithoutCachedTidalCorrection() const
      {
        return EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_f9d30be358d43685]));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getEndDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_c325492395d89b24]));
      }

      ::java::util::List EOPHistory::getEntries() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEntries_e62d3bb06d56d7e3]));
      }

      JArray< jdouble > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_27b701db396ade01], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_954ad4b53022f84b], a0.this$));
      }

      ::org::orekit::frames::ITRFVersion EOPHistory::getITRFVersion(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_a8ff2358cca8c992], a0.this$));
      }

      jint EOPHistory::getInterpolationDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_55546ef6a647f39b]);
      }

      jdouble EOPHistory::getLOD(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getLOD(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLOD_140b8964300ddedf], a0.this$));
      }

      JArray< jdouble > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_27b701db396ade01], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_954ad4b53022f84b], a0.this$));
      }

      ::org::orekit::frames::PoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::PoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_a726f9782dce00d1], a0.this$));
      }

      ::org::orekit::frames::FieldPoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldPoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_2c525218d1f29ffc], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getStartDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_c325492395d89b24]));
      }

      ::org::orekit::time::TimeScales EOPHistory::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_d1a571f8b033e2d3]));
      }

      jdouble EOPHistory::getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUT1MinusUTC_140b8964300ddedf], a0.this$));
      }

      jboolean EOPHistory::isSimpleEop() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSimpleEop_9ab94ac1dc23b105]);
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
      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self);
      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data);
      static PyGetSetDef t_EOPHistory__fields_[] = {
        DECLARE_GET_FIELD(t_EOPHistory, conventions),
        DECLARE_GET_FIELD(t_EOPHistory, eOPHistoryWithoutCachedTidalCorrection),
        DECLARE_GET_FIELD(t_EOPHistory, endDate),
        DECLARE_GET_FIELD(t_EOPHistory, entries),
        DECLARE_GET_FIELD(t_EOPHistory, interpolationDegree),
        DECLARE_GET_FIELD(t_EOPHistory, simpleEop),
        DECLARE_GET_FIELD(t_EOPHistory, startDate),
        DECLARE_GET_FIELD(t_EOPHistory, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPHistory__methods_[] = {
        DECLARE_METHOD(t_EOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, cachesTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, checkEOPContinuity, METH_O),
        DECLARE_METHOD(t_EOPHistory, getConventions, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEOPHistoryWithoutCachedTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEndDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEquinoxNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getITRFVersion, METH_O),
        DECLARE_METHOD(t_EOPHistory, getInterpolationDegree, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getLOD, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getNonRotatinOriginNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getPoleCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getStartDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getUT1MinusUTC, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, isSimpleEop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPHistory)[] = {
        { Py_tp_methods, t_EOPHistory__methods_ },
        { Py_tp_init, (void *) t_EOPHistory_init_ },
        { Py_tp_getset, t_EOPHistory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPHistory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPHistory, t_EOPHistory, EOPHistory);

      void t_EOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPHistory), &PY_TYPE_DEF(EOPHistory), module, "EOPHistory", 0);
      }

      void t_EOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "class_", make_descriptor(EOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "wrapfn_", make_descriptor(t_EOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "boxfn_", make_descriptor(boxObject));
        env->getClass(EOPHistory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(EOPHistory::DEFAULT_INTERPOLATION_DEGREE));
      }

      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPHistory::initializeClass, 1)))
          return NULL;
        return t_EOPHistory::wrap_Object(EOPHistory(((t_EOPHistory *) arg)->object.this$));
      }
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::java::util::Collection a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean a3;
        ::org::orekit::time::TimeScales a4((jobject) NULL);
        EOPHistory object((jobject) NULL);

        if (!parseArgs(args, "KIKZk", ::org::orekit::utils::IERSConventions::initializeClass, ::java::util::Collection::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
        {
          INT_CALL(object = EOPHistory(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.cachesTidalCorrection());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.checkEOPContinuity(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "checkEOPContinuity", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self)
      {
        ::org::orekit::utils::IERSConventions result((jobject) NULL);
        OBJ_CALL(result = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self)
      {
        EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
      }

      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEquinoxNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getITRFVersion(a0));
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFVersion", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLOD", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNonRotatinOriginNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::PoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_PoleCorrection::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldPoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_FieldPoleCorrection::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoleCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1MinusUTC", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSimpleEop());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data)
      {
        ::org::orekit::utils::IERSConventions value((jobject) NULL);
        OBJ_CALL(value = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data)
      {
        EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSimpleEop());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "java/lang/Integer.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Data::class$ = NULL;
              jmethodID *SsrIgm05Data::mids$ = NULL;
              bool SsrIgm05Data::live$ = false;

              jclass SsrIgm05Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCodeBias_60ac0826d948b529] = env->getMethodID(cls, "addCodeBias", "(Lorg/orekit/gnss/metric/messages/common/CodeBias;)V");
                  mids$[mid_getCodeBias_aad40fde1ab180ca] = env->getMethodID(cls, "getCodeBias", "(I)Lorg/orekit/gnss/metric/messages/common/CodeBias;");
                  mids$[mid_getCodeBiases_810bed48fafb0b9a] = env->getMethodID(cls, "getCodeBiases", "()Ljava/util/Map;");
                  mids$[mid_getNumberOfBiasesProcessed_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_setNumberOfBiasesProcessed_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Data::SsrIgm05Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              void SsrIgm05Data::addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCodeBias_60ac0826d948b529], a0.this$);
              }

              ::org::orekit::gnss::metric::messages::common::CodeBias SsrIgm05Data::getCodeBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::CodeBias(env->callObjectMethod(this$, mids$[mid_getCodeBias_aad40fde1ab180ca], a0));
              }

              ::java::util::Map SsrIgm05Data::getCodeBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCodeBiases_810bed48fafb0b9a]));
              }

              jint SsrIgm05Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_55546ef6a647f39b]);
              }

              void SsrIgm05Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_44ed599e93e8a30c], a0);
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
              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data);
              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data);
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm05Data__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05Data, codeBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm05Data, numberOfBiasesProcessed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, addCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, setNumberOfBiasesProcessed, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Data)[] = {
                { Py_tp_methods, t_SsrIgm05Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Data_init_ },
                { Py_tp_getset, t_SsrIgm05Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Data, t_SsrIgm05Data, SsrIgm05Data);

              void t_SsrIgm05Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Data), &PY_TYPE_DEF(SsrIgm05Data), module, "SsrIgm05Data", 0);
              }

              void t_SsrIgm05Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "class_", make_descriptor(SsrIgm05Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "wrapfn_", make_descriptor(t_SsrIgm05Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Data::wrap_Object(SsrIgm05Data(((t_SsrIgm05Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Data object((jobject) NULL);

                INT_CALL(object = SsrIgm05Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::CodeBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::CodeBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCodeBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::CodeBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getCodeBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_CodeBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(CodeBias));
              }

              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationKey::class$ = NULL;
              jmethodID *AttitudeDeterminationKey::mids$ = NULL;
              bool AttitudeDeterminationKey::live$ = false;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_METHOD = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_PREV_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_SOURCE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COMMENT = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COV_TYPE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::EULER_ROT_SEQ = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::NUMBER_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_A = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_B = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SENSOR = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_U = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_V = NULL;

              jclass AttitudeDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c4b10a7dcbc418df] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;)Z");
                  mids$[mid_valueOf_a8f14a5db00d15d5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");
                  mids$[mid_values_0c3454b1296c91ba] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_METHOD = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_PREV_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_SOURCE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_SOURCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COMMENT = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COV_TYPE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  EULER_ROT_SEQ = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  NUMBER_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_PROCESS_NOISE_STDDEV = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_PROCESS_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_A = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_B = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SENSOR = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_U = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_U", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_V = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_V", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1, const ::org::orekit::files::ccsds::utils::ContextBinding & a2, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c4b10a7dcbc418df], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              AttitudeDeterminationKey AttitudeDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a8f14a5db00d15d5], a0.this$));
              }

              JArray< AttitudeDeterminationKey > AttitudeDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0c3454b1296c91ba]));
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
              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationKey, t_AttitudeDeterminationKey, AttitudeDeterminationKey);
              PyObject *t_AttitudeDeterminationKey::wrap_Object(const AttitudeDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationKey), &PY_TYPE_DEF(AttitudeDeterminationKey), module, "AttitudeDeterminationKey", 0);
              }

              void t_AttitudeDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "class_", make_descriptor(AttitudeDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_METHOD", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_PREV_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_SOURCE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COMMENT", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COV_TYPE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "NUMBER_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_PROCESS_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_A", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_B", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SENSOR", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SENSOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_U", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_U)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_V", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_V)));
              }

              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationKey::wrap_Object(AttitudeDeterminationKey(((t_AttitudeDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::utils::ContextBinding a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::valueOf(a0));
                  return t_AttitudeDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data)
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
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *TTest::class$ = NULL;
        jmethodID *TTest::mids$ = NULL;
        bool TTest::live$ = false;

        jclass TTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/TTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_homoscedasticT_3207f9c2ae7271d9] = env->getMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_3aa35fce42f529d9] = env->getMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_3207f9c2ae7271d9] = env->getMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_3aa35fce42f529d9] = env->getMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_899e11e2ec28e6cd] = env->getMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_pairedT_3207f9c2ae7271d9] = env->getMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_3207f9c2ae7271d9] = env->getMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_899e11e2ec28e6cd] = env->getMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_t_3207f9c2ae7271d9] = env->getMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_e45651f63bcd931a] = env->getMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_172f3ca66813c571] = env->getMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_3aa35fce42f529d9] = env->getMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_3207f9c2ae7271d9] = env->getMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_e45651f63bcd931a] = env->getMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_172f3ca66813c571] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_3aa35fce42f529d9] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_899e11e2ec28e6cd] = env->getMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_a36fee56beaf3c37] = env->getMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_45e6c9d7ca9c7c3d] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_516ad16aed11ab58] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_df_08eba2463884b341] = env->getMethodID(cls, "df", "(DDDD)D");
            mids$[mid_homoscedasticT_7f9459f01496f8b0] = env->getMethodID(cls, "homoscedasticT", "(DDDDDD)D");
            mids$[mid_homoscedasticTTest_7f9459f01496f8b0] = env->getMethodID(cls, "homoscedasticTTest", "(DDDDDD)D");
            mids$[mid_tTest_08eba2463884b341] = env->getMethodID(cls, "tTest", "(DDDD)D");
            mids$[mid_tTest_7f9459f01496f8b0] = env->getMethodID(cls, "tTest", "(DDDDDD)D");
            mids$[mid_t_08eba2463884b341] = env->getMethodID(cls, "t", "(DDDD)D");
            mids$[mid_t_7f9459f01496f8b0] = env->getMethodID(cls, "t", "(DDDDDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TTest::TTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble TTest::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jboolean TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_homoscedasticTTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jdouble TTest::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedT_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedTTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jboolean TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_pairedTTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jdouble TTest::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_e45651f63bcd931a], a0, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_172f3ca66813c571], a0, a1.this$);
        }

        jdouble TTest::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_e45651f63bcd931a], a0, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_172f3ca66813c571], a0, a1.this$);
        }

        jdouble TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jboolean TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_a36fee56beaf3c37], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_45e6c9d7ca9c7c3d], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_516ad16aed11ab58], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_t(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args);

        static PyMethodDef t_TTest__methods_[] = {
          DECLARE_METHOD(t_TTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, homoscedasticT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, homoscedasticTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, t, METH_VARARGS),
          DECLARE_METHOD(t_TTest, tTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TTest)[] = {
          { Py_tp_methods, t_TTest__methods_ },
          { Py_tp_init, (void *) t_TTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TTest, t_TTest, TTest);

        void t_TTest::install(PyObject *module)
        {
          installType(&PY_TYPE(TTest), &PY_TYPE_DEF(TTest), module, "TTest", 0);
        }

        void t_TTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "class_", make_descriptor(TTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "wrapfn_", make_descriptor(t_TTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TTest::initializeClass, 1)))
            return NULL;
          return t_TTest::wrap_Object(TTest(((t_TTest *) arg)->object.this$));
        }
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds)
        {
          TTest object((jobject) NULL);

          INT_CALL(object = TTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pairedT", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_t(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "t", args);
          return NULL;
        }

        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonSphericalHarmonicsProvider::live$ = false;

          jclass PythonSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSphericalHarmonicsProvider::PythonSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self);
          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSphericalHarmonicsProvider, t_PythonSphericalHarmonicsProvider, PythonSphericalHarmonicsProvider);

          void t_PythonSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonSphericalHarmonicsProvider), module, "PythonSphericalHarmonicsProvider", 1);
          }

          void t_PythonSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "class_", make_descriptor(PythonSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonSphericalHarmonicsProvider_getTideSystem5 },
              { "pythonDecRef", "()V", (void *) t_PythonSphericalHarmonicsProvider_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonSphericalHarmonicsProvider::wrap_Object(PythonSphericalHarmonicsProvider(((t_PythonSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleConsumer::mids$ = NULL;
            bool ParseToken$DoubleConsumer::live$ = false;

            jclass ParseToken$DoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleConsumer::accept(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
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
            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleConsumer, t_ParseToken$DoubleConsumer, ParseToken$DoubleConsumer);

            void t_ParseToken$DoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleConsumer), &PY_TYPE_DEF(ParseToken$DoubleConsumer), module, "ParseToken$DoubleConsumer", 0);
            }

            void t_ParseToken$DoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "class_", make_descriptor(ParseToken$DoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleConsumer::wrap_Object(ParseToken$DoubleConsumer(((t_ParseToken$DoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
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
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateFunction::class$ = NULL;
      jmethodID *FieldMultivariateFunction::mids$ = NULL;
      bool FieldMultivariateFunction::live$ = false;

      jclass FieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateFunction_0d04248a9e90108a] = env->getMethodID(cls, "toCalculusFieldMultivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateFunction;");
          mids$[mid_value_ba5ea64a789ad864] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateFunction FieldMultivariateFunction::toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateFunction_0d04248a9e90108a], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_ba5ea64a789ad864], a0.this$));
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
      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, toCalculusFieldMultivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateFunction, t_FieldMultivariateFunction, FieldMultivariateFunction);

      void t_FieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateFunction), &PY_TYPE_DEF(FieldMultivariateFunction), module, "FieldMultivariateFunction", 0);
      }

      void t_FieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "class_", make_descriptor(FieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "wrapfn_", make_descriptor(t_FieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateFunction::wrap_Object(FieldMultivariateFunction(((t_FieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereNequickGMessage::class$ = NULL;
          jmethodID *IonosphereNequickGMessage::mids$ = NULL;
          bool IonosphereNequickGMessage::live$ = false;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG2 = NULL;

          jclass IonosphereNequickGMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereNequickGMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAi0_b74f83833fdad017] = env->getMethodID(cls, "getAi0", "()D");
              mids$[mid_getAi1_b74f83833fdad017] = env->getMethodID(cls, "getAi1", "()D");
              mids$[mid_getAi2_b74f83833fdad017] = env->getMethodID(cls, "getAi2", "()D");
              mids$[mid_getFlags_55546ef6a647f39b] = env->getMethodID(cls, "getFlags", "()I");
              mids$[mid_setAi0_8ba9fe7a847cecad] = env->getMethodID(cls, "setAi0", "(D)V");
              mids$[mid_setAi1_8ba9fe7a847cecad] = env->getMethodID(cls, "setAi1", "(D)V");
              mids$[mid_setAi2_8ba9fe7a847cecad] = env->getMethodID(cls, "setAi2", "(D)V");
              mids$[mid_setFlags_44ed599e93e8a30c] = env->getMethodID(cls, "setFlags", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SFU = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG2", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereNequickGMessage::IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          jdouble IonosphereNequickGMessage::getAi0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi0_b74f83833fdad017]);
          }

          jdouble IonosphereNequickGMessage::getAi1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi1_b74f83833fdad017]);
          }

          jdouble IonosphereNequickGMessage::getAi2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi2_b74f83833fdad017]);
          }

          jint IonosphereNequickGMessage::getFlags() const
          {
            return env->callIntMethod(this$, mids$[mid_getFlags_55546ef6a647f39b]);
          }

          void IonosphereNequickGMessage::setAi0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi0_8ba9fe7a847cecad], a0);
          }

          void IonosphereNequickGMessage::setAi1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi1_8ba9fe7a847cecad], a0);
          }

          void IonosphereNequickGMessage::setAi2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi2_8ba9fe7a847cecad], a0);
          }

          void IonosphereNequickGMessage::setFlags(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFlags_44ed599e93e8a30c], a0);
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
          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereNequickGMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai0),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai1),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai2),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, flags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereNequickGMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereNequickGMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi0, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi1, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi2, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getFlags, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi0, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi1, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi2, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setFlags, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereNequickGMessage)[] = {
            { Py_tp_methods, t_IonosphereNequickGMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereNequickGMessage_init_ },
            { Py_tp_getset, t_IonosphereNequickGMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereNequickGMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereNequickGMessage, t_IonosphereNequickGMessage, IonosphereNequickGMessage);

          void t_IonosphereNequickGMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereNequickGMessage), &PY_TYPE_DEF(IonosphereNequickGMessage), module, "IonosphereNequickGMessage", 0);
          }

          void t_IonosphereNequickGMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "class_", make_descriptor(IonosphereNequickGMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "wrapfn_", make_descriptor(t_IonosphereNequickGMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereNequickGMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG2)));
          }

          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereNequickGMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereNequickGMessage::wrap_Object(IonosphereNequickGMessage(((t_IonosphereNequickGMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereNequickGMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereNequickGMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereNequickGMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFlags());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi0", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi1", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi2", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setFlags(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFlags", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai0", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai1", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai2", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFlags());
            return PyLong_FromLong((long) value);
          }
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setFlags(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "flags", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PotentialCoefficientsReader::class$ = NULL;
          jmethodID *PotentialCoefficientsReader::mids$ = NULL;
          bool PotentialCoefficientsReader::live$ = false;

          jclass PotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMaxAvailableDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_missingCoefficientsAllowed_9ab94ac1dc23b105] = env->getMethodID(cls, "missingCoefficientsAllowed", "()Z");
              mids$[mid_setMaxParseDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_rescale_bf4a5ef300e8660d] = env->getMethodID(cls, "rescale", "(ZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;)[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;");
              mids$[mid_rescale_866d83410dd782dc] = env->getMethodID(cls, "rescale", "(DZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[D)[D");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_setTideSystem_000902343092f062] = env->getMethodID(cls, "setTideSystem", "(Lorg/orekit/forces/gravity/potential/TideSystem;)V");
              mids$[mid_setReadComplete_fcb96c98de6fad04] = env->getMethodID(cls, "setReadComplete", "(Z)V");
              mids$[mid_getBaseProvider_124a94790014d0c0] = env->getMethodID(cls, "getBaseProvider", "(ZII)Lorg/orekit/forces/gravity/potential/ConstantSphericalHarmonics;");
              mids$[mid_setAe_8ba9fe7a847cecad] = env->getMethodID(cls, "setAe", "(D)V");
              mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_toDate_d623b29c1aec099c] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_toDate_196362129130a95d] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_buildFlatArray_ec5bff1c48966184] = env->getStaticMethodID(cls, "buildFlatArray", "(Lorg/orekit/forces/gravity/potential/Flattener;D)[D");
              mids$[mid_parseCoefficient_c428066e62422ca4] = env->getMethodID(cls, "parseCoefficient", "(Ljava/lang/String;Lorg/orekit/forces/gravity/potential/Flattener;[DIILjava/lang/String;Ljava/lang/String;)V");
              mids$[mid_setRawCoefficients_74176397b7cf8789] = env->getMethodID(cls, "setRawCoefficients", "(ZLorg/orekit/forces/gravity/potential/Flattener;[D[DLjava/lang/String;)V");
              mids$[mid_buildRow_e7bae2b43681e826] = env->getStaticMethodID(cls, "buildRow", "(IID)[D");
              mids$[mid_parseDouble_a84f304e8cd7ce1b] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint PotentialCoefficientsReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_55546ef6a647f39b]);
          }

          jint PotentialCoefficientsReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_55546ef6a647f39b]);
          }

          jint PotentialCoefficientsReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_55546ef6a647f39b]);
          }

          jint PotentialCoefficientsReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_55546ef6a647f39b]);
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider PotentialCoefficientsReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_752316a4c911183b], a0, a1, a2));
          }

          ::java::lang::String PotentialCoefficientsReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
          }

          void PotentialCoefficientsReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }

          jboolean PotentialCoefficientsReader::missingCoefficientsAllowed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_missingCoefficientsAllowed_9ab94ac1dc23b105]);
          }

          void PotentialCoefficientsReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_44ed599e93e8a30c], a0);
          }

          void PotentialCoefficientsReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_44ed599e93e8a30c], a0);
          }

          jboolean PotentialCoefficientsReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseOrder),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, missingCoefficientsAllowed, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PotentialCoefficientsReader, t_PotentialCoefficientsReader, PotentialCoefficientsReader);

          void t_PotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PotentialCoefficientsReader), &PY_TYPE_DEF(PotentialCoefficientsReader), module, "PotentialCoefficientsReader", 0);
          }

          void t_PotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "class_", make_descriptor(PotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PotentialCoefficientsReader::wrap_Object(PotentialCoefficientsReader(((t_PotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getProvider", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args)
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

          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.missingCoefficientsAllowed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSAlmanac::class$ = NULL;
            jmethodID *QZSSAlmanac::mids$ = NULL;
            bool QZSSAlmanac::live$ = false;

            jclass QZSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_55546ef6a647f39b] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_setHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSAlmanac::QZSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint QZSSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_55546ef6a647f39b]);
            }

            ::java::lang::String QZSSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_1c1fa1e935d6cdcf]));
            }

            void QZSSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_44ed599e93e8a30c], a0);
            }

            void QZSSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_734b91ac30d5f9b4], a0.this$);
            }

            void QZSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_8ba9fe7a847cecad], a0);
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
            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_QZSSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, health),
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, source),
              DECLARE_SET_FIELD(t_QZSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_QZSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_QZSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSAlmanac)[] = {
              { Py_tp_methods, t_QZSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_QZSSAlmanac_init_ },
              { Py_tp_getset, t_QZSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(QZSSAlmanac, t_QZSSAlmanac, QZSSAlmanac);

            void t_QZSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSAlmanac), &PY_TYPE_DEF(QZSSAlmanac), module, "QZSSAlmanac", 0);
            }

            void t_QZSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "class_", make_descriptor(QZSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "wrapfn_", make_descriptor(t_QZSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_QZSSAlmanac::wrap_Object(QZSSAlmanac(((t_QZSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              QZSSAlmanac object((jobject) NULL);

              INT_CALL(object = QZSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *DuvenhageAlgorithm::class$ = NULL;
          jmethodID *DuvenhageAlgorithm::mids$ = NULL;
          bool DuvenhageAlgorithm::live$ = false;

          jclass DuvenhageAlgorithm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c95673eda778070f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;IZ)V");
              mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
              mids$[mid_getElevation_99e3200dafc19573] = env->getMethodID(cls, "getElevation", "(DD)D");
              mids$[mid_intersection_7819c980b8c560ad] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
              mids$[mid_refineIntersection_882cf21796738f1c] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DuvenhageAlgorithm::DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c95673eda778070f, a0.this$, a1, a2)) {}

          ::org::orekit::rugged::api::AlgorithmId DuvenhageAlgorithm::getAlgorithmId() const
          {
            return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
          }

          jdouble DuvenhageAlgorithm::getElevation(jdouble a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getElevation_99e3200dafc19573], a0, a1);
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_7819c980b8c560ad], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_882cf21796738f1c], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self);
          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data);
          static PyGetSetDef t_DuvenhageAlgorithm__fields_[] = {
            DECLARE_GET_FIELD(t_DuvenhageAlgorithm, algorithmId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DuvenhageAlgorithm__methods_[] = {
            DECLARE_METHOD(t_DuvenhageAlgorithm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getAlgorithmId, METH_NOARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getElevation, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, intersection, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, refineIntersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DuvenhageAlgorithm)[] = {
            { Py_tp_methods, t_DuvenhageAlgorithm__methods_ },
            { Py_tp_init, (void *) t_DuvenhageAlgorithm_init_ },
            { Py_tp_getset, t_DuvenhageAlgorithm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DuvenhageAlgorithm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DuvenhageAlgorithm, t_DuvenhageAlgorithm, DuvenhageAlgorithm);

          void t_DuvenhageAlgorithm::install(PyObject *module)
          {
            installType(&PY_TYPE(DuvenhageAlgorithm), &PY_TYPE_DEF(DuvenhageAlgorithm), module, "DuvenhageAlgorithm", 0);
          }

          void t_DuvenhageAlgorithm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "class_", make_descriptor(DuvenhageAlgorithm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "wrapfn_", make_descriptor(t_DuvenhageAlgorithm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DuvenhageAlgorithm::initializeClass, 1)))
              return NULL;
            return t_DuvenhageAlgorithm::wrap_Object(DuvenhageAlgorithm(((t_DuvenhageAlgorithm *) arg)->object.this$));
          }
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DuvenhageAlgorithm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
            jint a1;
            jboolean a2;
            DuvenhageAlgorithm object((jobject) NULL);

            if (!parseArgs(args, "kIZ", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = DuvenhageAlgorithm(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self)
          {
            ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
          }

          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getElevation", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1, a2));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data)
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataWriter::class$ = NULL;
            jmethodID *AdmCommonMetadataWriter::mids$ = NULL;
            bool AdmCommonMetadataWriter::live$ = false;

            jclass AdmCommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fd63369ca1bc1f43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmCommonMetadataWriter::AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_fd63369ca1bc1f43, a0.this$)) {}
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
            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmCommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataWriter)[] = {
              { Py_tp_methods, t_AdmCommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_AdmCommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataWriter, t_AdmCommonMetadataWriter, AdmCommonMetadataWriter);

            void t_AdmCommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataWriter), &PY_TYPE_DEF(AdmCommonMetadataWriter), module, "AdmCommonMetadataWriter", 0);
            }

            void t_AdmCommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "class_", make_descriptor(AdmCommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "wrapfn_", make_descriptor(t_AdmCommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataWriter::wrap_Object(AdmCommonMetadataWriter(((t_AdmCommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a0((jobject) NULL);
              AdmCommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = AdmCommonMetadataWriter(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
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
                  mids$[mid_process_3f2b9068ce136c00] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;)Z");
                  mids$[mid_valueOf_fb490f1722746d92] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");
                  mids$[mid_values_2b38fac85eef58a6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");

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
                return env->callBooleanMethod(this$, mids$[mid_process_3f2b9068ce136c00], a0.this$, a1.this$, a2.this$);
              }

              OcmMetadataKey OcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fb490f1722746d92], a0.this$));
              }

              JArray< OcmMetadataKey > OcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2b38fac85eef58a6]));
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
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *PSquarePercentile::class$ = NULL;
          jmethodID *PSquarePercentile::mids$ = NULL;
          bool PSquarePercentile::live$ = false;

          jclass PSquarePercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/PSquarePercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_3bda7fe784041369] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/PSquarePercentile;");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantile_b74f83833fdad017] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_quantile_b74f83833fdad017] = env->getMethodID(cls, "quantile", "()D");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PSquarePercentile::PSquarePercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          void PSquarePercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          PSquarePercentile PSquarePercentile::copy() const
          {
            return PSquarePercentile(env->callObjectMethod(this$, mids$[mid_copy_3bda7fe784041369]));
          }

          jboolean PSquarePercentile::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jlong PSquarePercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble PSquarePercentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_b74f83833fdad017]);
          }

          jdouble PSquarePercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          jint PSquarePercentile::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          void PSquarePercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }

          jdouble PSquarePercentile::quantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_quantile_b74f83833fdad017]);
          }

          ::java::lang::String PSquarePercentile::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data);
          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data);
          static PyGetSetDef t_PSquarePercentile__fields_[] = {
            DECLARE_GET_FIELD(t_PSquarePercentile, n),
            DECLARE_GET_FIELD(t_PSquarePercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PSquarePercentile__methods_[] = {
            DECLARE_METHOD(t_PSquarePercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, equals, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, quantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PSquarePercentile)[] = {
            { Py_tp_methods, t_PSquarePercentile__methods_ },
            { Py_tp_init, (void *) t_PSquarePercentile_init_ },
            { Py_tp_getset, t_PSquarePercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PSquarePercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(PSquarePercentile, t_PSquarePercentile, PSquarePercentile);

          void t_PSquarePercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(PSquarePercentile), &PY_TYPE_DEF(PSquarePercentile), module, "PSquarePercentile", 0);
          }

          void t_PSquarePercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "class_", make_descriptor(PSquarePercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "wrapfn_", make_descriptor(t_PSquarePercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PSquarePercentile::initializeClass, 1)))
              return NULL;
            return t_PSquarePercentile::wrap_Object(PSquarePercentile(((t_PSquarePercentile *) arg)->object.this$));
          }
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PSquarePercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            PSquarePercentile object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = PSquarePercentile(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args)
          {
            PSquarePercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_PSquarePercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.quantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegrator::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_ae73d4638fb16e4c] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegrator::ClassicalRungeKuttaFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ClassicalRungeKuttaFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getC() const
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegrator, t_ClassicalRungeKuttaFieldIntegrator, ClassicalRungeKuttaFieldIntegrator);
        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(const ClassicalRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegrator), module, "ClassicalRungeKuttaFieldIntegrator", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(ClassicalRungeKuttaFieldIntegrator(((t_ClassicalRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ClassicalRungeKuttaFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ClassicalRungeKuttaFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
