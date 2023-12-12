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
              mids$[mid_getCombinedValue_2268d18be49a6087] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParameterConfiguration::class$ = NULL;
      jmethodID *ParameterConfiguration::mids$ = NULL;
      bool ParameterConfiguration::live$ = false;

      jclass ParameterConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParameterConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getHP_557b8123390d8d0c] = env->getMethodID(cls, "getHP", "()D");
          mids$[mid_getParameterName_3cffd47377eca18a] = env->getMethodID(cls, "getParameterName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterConfiguration::getHP() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHP_557b8123390d8d0c]);
      }

      ::java::lang::String ParameterConfiguration::getParameterName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParameterName_3cffd47377eca18a]));
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
      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data);
      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data);
      static PyGetSetDef t_ParameterConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterConfiguration, hP),
        DECLARE_GET_FIELD(t_ParameterConfiguration, parameterName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterConfiguration__methods_[] = {
        DECLARE_METHOD(t_ParameterConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, getHP, METH_NOARGS),
        DECLARE_METHOD(t_ParameterConfiguration, getParameterName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterConfiguration)[] = {
        { Py_tp_methods, t_ParameterConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterConfiguration, t_ParameterConfiguration, ParameterConfiguration);

      void t_ParameterConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterConfiguration), &PY_TYPE_DEF(ParameterConfiguration), module, "ParameterConfiguration", 0);
      }

      void t_ParameterConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "class_", make_descriptor(ParameterConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "wrapfn_", make_descriptor(t_ParameterConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterConfiguration::initializeClass, 1)))
          return NULL;
        return t_ParameterConfiguration::wrap_Object(ParameterConfiguration(((t_ParameterConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHP());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getParameterName());
        return j2p(result);
      }

      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHP());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameterName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CalibrationDetail::class$ = NULL;
        jmethodID *CRD$CalibrationDetail::mids$ = NULL;
        bool CRD$CalibrationDetail::live$ = false;

        jclass CRD$CalibrationDetail::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CalibrationDetail");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eafe5b3d04932887] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CalibrationDetail::CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::org::orekit::files::ilrs::CRD$Calibration(env->newObject(initializeClass, &mids$, mid_init$_eafe5b3d04932887, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::java::lang::String CRD$CalibrationDetail::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
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
        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args);

        static PyMethodDef t_CRD$CalibrationDetail__methods_[] = {
          DECLARE_METHOD(t_CRD$CalibrationDetail, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, toCrdString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CalibrationDetail)[] = {
          { Py_tp_methods, t_CRD$CalibrationDetail__methods_ },
          { Py_tp_init, (void *) t_CRD$CalibrationDetail_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CalibrationDetail)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$Calibration),
          NULL
        };

        DEFINE_TYPE(CRD$CalibrationDetail, t_CRD$CalibrationDetail, CRD$CalibrationDetail);

        void t_CRD$CalibrationDetail::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CalibrationDetail), &PY_TYPE_DEF(CRD$CalibrationDetail), module, "CRD$CalibrationDetail", 0);
        }

        void t_CRD$CalibrationDetail::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "class_", make_descriptor(CRD$CalibrationDetail::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "wrapfn_", make_descriptor(t_CRD$CalibrationDetail::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CalibrationDetail::initializeClass, 1)))
            return NULL;
          return t_CRD$CalibrationDetail::wrap_Object(CRD$CalibrationDetail(((t_CRD$CalibrationDetail *) arg)->object.this$));
        }
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CalibrationDetail::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$CalibrationDetail object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$CalibrationDetail(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$CalibrationDetail), (PyObject *) self, "toCrdString", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OutlierFilter::class$ = NULL;
          jmethodID *OutlierFilter::mids$ = NULL;
          bool OutlierFilter::live$ = false;

          jclass OutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_getWarmup_412668abc8d889e9] = env->getMethodID(cls, "getWarmup", "()I");
              mids$[mid_getMaxSigma_557b8123390d8d0c] = env->getMethodID(cls, "getMaxSigma", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlierFilter::OutlierFilter(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

          ::java::util::List OutlierFilter::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OutlierFilter::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args);
          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self);
          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg);
          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data);
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data);
          static PyGetSetDef t_OutlierFilter__fields_[] = {
            DECLARE_GET_FIELD(t_OutlierFilter, parametersDrivers),
            DECLARE_GET_FIELD(t_OutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OutlierFilter__methods_[] = {
            DECLARE_METHOD(t_OutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_OutlierFilter, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OutlierFilter, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlierFilter)[] = {
            { Py_tp_methods, t_OutlierFilter__methods_ },
            { Py_tp_init, (void *) t_OutlierFilter_init_ },
            { Py_tp_getset, t_OutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlierFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlierFilter, t_OutlierFilter, OutlierFilter);
          PyObject *t_OutlierFilter::wrap_Object(const OutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlierFilter), &PY_TYPE_DEF(OutlierFilter), module, "OutlierFilter", 0);
          }

          void t_OutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "class_", make_descriptor(OutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "wrapfn_", make_descriptor(t_OutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlierFilter::initializeClass, 1)))
              return NULL;
            return t_OutlierFilter::wrap_Object(OutlierFilter(((t_OutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg)
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
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data)
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
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue$Event::class$ = NULL;
          jmethodID *FieldRecordAndContinue$Event::mids$ = NULL;
          bool FieldRecordAndContinue$Event::live$ = false;

          jclass FieldRecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_07d9256595c42b86] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
              mids$[mid_getState_381b3e011cde018d] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::FieldEventDetector FieldRecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_07d9256595c42b86]));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldRecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_381b3e011cde018d]));
          }

          jboolean FieldRecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_89b302893bdbe1f1]);
          }

          ::java::lang::String FieldRecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, state),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue$Event)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue$Event, t_FieldRecordAndContinue$Event, FieldRecordAndContinue$Event);
          PyObject *t_FieldRecordAndContinue$Event::wrap_Object(const FieldRecordAndContinue$Event& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue$Event::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue$Event), &PY_TYPE_DEF(FieldRecordAndContinue$Event), module, "FieldRecordAndContinue$Event", 0);
          }

          void t_FieldRecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "class_", make_descriptor(FieldRecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "wrapfn_", make_descriptor(t_FieldRecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue$Event::wrap_Object(FieldRecordAndContinue$Event(((t_FieldRecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldRecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *AbstractBatchLSModel::class$ = NULL;
        jmethodID *AbstractBatchLSModel::mids$ = NULL;
        bool AbstractBatchLSModel::live$ = false;

        jclass AbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/AbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2406e4cf7f21e166] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_createPropagators_04da9f6cb19def2d] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_fetchEvaluatedMeasurement_e484126dd163b386] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_getEvaluationsCount_412668abc8d889e9] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_412668abc8d889e9] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedOrbitalParametersDriversForBuilder_b63a8ff72f9e46a4] = env->getMethodID(cls, "getSelectedOrbitalParametersDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_89b302893bdbe1f1] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_setEvaluationsCounter_7852dd173b858d1b] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_7852dd173b858d1b] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_77538fd880505017] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");
            mids$[mid_configureHarvester_58ff847451f5cf92] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_614fe55969c9646f] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractBatchLSModel::AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2406e4cf7f21e166, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::Propagator > AbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_createPropagators_04da9f6cb19def2d], a0.this$));
        }

        void AbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fetchEvaluatedMeasurement_e484126dd163b386], a0, a1.this$);
        }

        jint AbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_412668abc8d889e9]);
        }

        jint AbstractBatchLSModel::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_412668abc8d889e9]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedOrbitalParametersDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedOrbitalParametersDriversForBuilder_b63a8ff72f9e46a4], a0));
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4], a0));
        }

        jboolean AbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForwardPropagation_89b302893bdbe1f1]);
        }

        void AbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEvaluationsCounter_7852dd173b858d1b], a0.this$);
        }

        void AbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIterationsCounter_7852dd173b858d1b], a0.this$);
        }

        ::org::hipparchus::util::Pair AbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_77538fd880505017], a0.this$));
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
      namespace leastsquares {
        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data);
        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, evaluationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, evaluationsCounter),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, forwardPropagation),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, iterationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, iterationsCounter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_AbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, createPropagators, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedOrbitalParametersDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, isForwardPropagation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, setEvaluationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, setIterationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractBatchLSModel)[] = {
          { Py_tp_methods, t_AbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_AbstractBatchLSModel_init_ },
          { Py_tp_getset, t_AbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractBatchLSModel, t_AbstractBatchLSModel, AbstractBatchLSModel);

        void t_AbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractBatchLSModel), &PY_TYPE_DEF(AbstractBatchLSModel), module, "AbstractBatchLSModel", 0);
        }

        void t_AbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "class_", make_descriptor(AbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "wrapfn_", make_descriptor(t_AbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_AbstractBatchLSModel::wrap_Object(AbstractBatchLSModel(((t_AbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          AbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = AbstractBatchLSModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "createPropagators", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fetchEvaluatedMeasurement", args);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedOrbitalParametersDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedOrbitalParametersDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedPropagationDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForwardPropagation());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEvaluationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIterationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setEvaluationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "evaluationsCounter", arg);
          return -1;
        }

        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForwardPropagation());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setIterationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iterationsCounter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointFieldIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointFieldIntegratorBuilder::mids$ = NULL;
        bool MidpointFieldIntegratorBuilder::live$ = false;

        jclass MidpointFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator MidpointFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_MidpointFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegratorBuilder, t_MidpointFieldIntegratorBuilder, MidpointFieldIntegratorBuilder);
        PyObject *t_MidpointFieldIntegratorBuilder::wrap_Object(const MidpointFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegratorBuilder), &PY_TYPE_DEF(MidpointFieldIntegratorBuilder), module, "MidpointFieldIntegratorBuilder", 0);
        }

        void t_MidpointFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "class_", make_descriptor(MidpointFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegratorBuilder::wrap_Object(MidpointFieldIntegratorBuilder(((t_MidpointFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
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

        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(MidpointFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearProcess::class$ = NULL;
          jmethodID *NonLinearProcess::mids$ = NULL;
          bool NonLinearProcess::live$ = false;

          jclass NonLinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_428ed6b5d7428a91] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
              mids$[mid_getInnovation_164438fae8798639] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution NonLinearProcess::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_428ed6b5d7428a91], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector NonLinearProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_164438fae8798639], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data);
          static PyGetSetDef t_NonLinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearProcess__methods_[] = {
            DECLARE_METHOD(t_NonLinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getInnovation, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearProcess)[] = {
            { Py_tp_methods, t_NonLinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NonLinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearProcess, t_NonLinearProcess, NonLinearProcess);
          PyObject *t_NonLinearProcess::wrap_Object(const NonLinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NonLinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NonLinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearProcess), &PY_TYPE_DEF(NonLinearProcess), module, "NonLinearProcess", 0);
          }

          void t_NonLinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "class_", make_descriptor(NonLinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "wrapfn_", make_descriptor(t_NonLinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearProcess::initializeClass, 1)))
              return NULL;
            return t_NonLinearProcess::wrap_Object(NonLinearProcess(((t_NonLinearProcess *) arg)->object.this$));
          }
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data)
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
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationParser::class$ = NULL;
          jmethodID *RinexNavigationParser::mids$ = NULL;
          bool RinexNavigationParser::live$ = false;

          jclass RinexNavigationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_fdb437c675e993f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_6ec8d3ac4b3ffe39] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/navigation/RinexNavigation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationParser::RinexNavigationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          RinexNavigationParser::RinexNavigationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdb437c675e993f7, a0.this$)) {}

          ::org::orekit::files::rinex::navigation::RinexNavigation RinexNavigationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::navigation::RinexNavigation(env->callObjectMethod(this$, mids$[mid_parse_6ec8d3ac4b3ffe39], a0.this$));
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
          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg);

          static PyMethodDef t_RinexNavigationParser__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationParser)[] = {
            { Py_tp_methods, t_RinexNavigationParser__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexNavigationParser, t_RinexNavigationParser, RinexNavigationParser);

          void t_RinexNavigationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationParser), &PY_TYPE_DEF(RinexNavigationParser), module, "RinexNavigationParser", 0);
          }

          void t_RinexNavigationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "class_", make_descriptor(RinexNavigationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "wrapfn_", make_descriptor(t_RinexNavigationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationParser::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationParser::wrap_Object(RinexNavigationParser(((t_RinexNavigationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexNavigationParser object((jobject) NULL);

                INT_CALL(object = RinexNavigationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexNavigationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexNavigationParser(a0));
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

          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::navigation::RinexNavigation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::navigation::t_RinexNavigation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggers::class$ = NULL;
          jmethodID *ManeuverTriggers::mids$ = NULL;
          bool ManeuverTriggers::live$ = false;

          jclass ManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_6c2e9e35ba95043d] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17259cc5ef51ebf7] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_cf913265ec3c3fe7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_7ccb736f2a8bfc30] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_6c2e9e35ba95043d], a0.this$);
          }

          void ManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_17259cc5ef51ebf7], a0.this$, a1.this$);
          }

          ::java::lang::String ManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_cf913265ec3c3fe7], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_7ccb736f2a8bfc30], a0.this$, a1.this$);
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
          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self);
          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data);
          static PyGetSetDef t_ManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_ManeuverTriggers, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, getName, METH_NOARGS),
            DECLARE_METHOD(t_ManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggers)[] = {
            { Py_tp_methods, t_ManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggers, t_ManeuverTriggers, ManeuverTriggers);

          void t_ManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggers), &PY_TYPE_DEF(ManeuverTriggers), module, "ManeuverTriggers", 0);
          }

          void t_ManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "class_", make_descriptor(ManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "wrapfn_", make_descriptor(t_ManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggers::wrap_Object(ManeuverTriggers(((t_ManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MicrosphereProjectionInterpolator::class$ = NULL;
        jmethodID *MicrosphereProjectionInterpolator::mids$ = NULL;
        bool MicrosphereProjectionInterpolator::live$ = false;

        jclass MicrosphereProjectionInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_104f26532f255add] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;DZD)V");
            mids$[mid_init$_f4d1ba5cb6ea1f8a] = env->getMethodID(cls, "<init>", "(IIDDDDZD)V");
            mids$[mid_interpolate_7fe6a527b1a5d65c] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere & a0, jdouble a1, jboolean a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_104f26532f255add, a0.this$, a1, a2, a3)) {}

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jboolean a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4d1ba5cb6ea1f8a, a0, a1, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::analysis::MultivariateFunction MicrosphereProjectionInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_7fe6a527b1a5d65c], a0.this$, a1.this$));
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
        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args);

        static PyMethodDef t_MicrosphereProjectionInterpolator__methods_[] = {
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MicrosphereProjectionInterpolator)[] = {
          { Py_tp_methods, t_MicrosphereProjectionInterpolator__methods_ },
          { Py_tp_init, (void *) t_MicrosphereProjectionInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MicrosphereProjectionInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MicrosphereProjectionInterpolator, t_MicrosphereProjectionInterpolator, MicrosphereProjectionInterpolator);

        void t_MicrosphereProjectionInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MicrosphereProjectionInterpolator), &PY_TYPE_DEF(MicrosphereProjectionInterpolator), module, "MicrosphereProjectionInterpolator", 0);
        }

        void t_MicrosphereProjectionInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "class_", make_descriptor(MicrosphereProjectionInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "wrapfn_", make_descriptor(t_MicrosphereProjectionInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 1)))
            return NULL;
          return t_MicrosphereProjectionInterpolator::wrap_Object(MicrosphereProjectionInterpolator(((t_MicrosphereProjectionInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere a0((jobject) NULL);
              jdouble a1;
              jboolean a2;
              jdouble a3;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDZD", ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              jint a0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jboolean a6;
              jdouble a7;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "IIDDDDZD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector$Entry::class$ = NULL;
      jmethodID *RealVector$Entry::mids$ = NULL;
      bool RealVector$Entry::live$ = false;

      jclass RealVector$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87d15d6564ad754f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_getIndex_412668abc8d889e9] = env->getMethodID(cls, "getIndex", "()I");
          mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_setIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "setIndex", "(I)V");
          mids$[mid_setValue_10f281d777284cea] = env->getMethodID(cls, "setValue", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector$Entry::RealVector$Entry(const ::org::hipparchus::linear::RealVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87d15d6564ad754f, a0.this$)) {}

      jint RealVector$Entry::getIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getIndex_412668abc8d889e9]);
      }

      jdouble RealVector$Entry::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
      }

      void RealVector$Entry::setIndex(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIndex_a3da1a935cb37f7b], a0);
      }

      void RealVector$Entry::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_10f281d777284cea], a0);
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
      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyGetSetDef t_RealVector$Entry__fields_[] = {
        DECLARE_GETSET_FIELD(t_RealVector$Entry, index),
        DECLARE_GETSET_FIELD(t_RealVector$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector$Entry__methods_[] = {
        DECLARE_METHOD(t_RealVector$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, getIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, setIndex, METH_O),
        DECLARE_METHOD(t_RealVector$Entry, setValue, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector$Entry)[] = {
        { Py_tp_methods, t_RealVector$Entry__methods_ },
        { Py_tp_init, (void *) t_RealVector$Entry_init_ },
        { Py_tp_getset, t_RealVector$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector$Entry, t_RealVector$Entry, RealVector$Entry);

      void t_RealVector$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector$Entry), &PY_TYPE_DEF(RealVector$Entry), module, "RealVector$Entry", 0);
      }

      void t_RealVector$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "class_", make_descriptor(RealVector$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "wrapfn_", make_descriptor(t_RealVector$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector$Entry::initializeClass, 1)))
          return NULL;
        return t_RealVector$Entry::wrap_Object(RealVector$Entry(((t_RealVector$Entry *) arg)->object.this$));
      }
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        RealVector$Entry object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          INT_CALL(object = RealVector$Entry(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIndex(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIndex());
        return PyLong_FromLong((long) value);
      }
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIndex(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "index", arg);
        return -1;
      }

      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Product::class$ = NULL;
          jmethodID *Product::mids$ = NULL;
          bool Product::live$ = false;

          jclass Product::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Product");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_08772a49739df85b] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Product;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_5c7fdb556c4cfe54] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Product;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_579f1672894f464a] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Product::Product() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Product::aggregate(const Product & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_08772a49739df85b], a0.this$);
          }

          void Product::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Product Product::copy() const
          {
            return Product(env->callObjectMethod(this$, mids$[mid_copy_5c7fdb556c4cfe54]));
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_579f1672894f464a], a0.this$, a1.this$, a2, a3);
          }

          jlong Product::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Product::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Product::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
        namespace summary {
          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg);
          static PyObject *t_Product_clear(t_Product *self, PyObject *args);
          static PyObject *t_Product_copy(t_Product *self, PyObject *args);
          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args);
          static PyObject *t_Product_getN(t_Product *self, PyObject *args);
          static PyObject *t_Product_getResult(t_Product *self, PyObject *args);
          static PyObject *t_Product_increment(t_Product *self, PyObject *args);
          static PyObject *t_Product_get__n(t_Product *self, void *data);
          static PyObject *t_Product_get__result(t_Product *self, void *data);
          static PyGetSetDef t_Product__fields_[] = {
            DECLARE_GET_FIELD(t_Product, n),
            DECLARE_GET_FIELD(t_Product, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Product__methods_[] = {
            DECLARE_METHOD(t_Product, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, aggregate, METH_O),
            DECLARE_METHOD(t_Product, clear, METH_VARARGS),
            DECLARE_METHOD(t_Product, copy, METH_VARARGS),
            DECLARE_METHOD(t_Product, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Product, getN, METH_VARARGS),
            DECLARE_METHOD(t_Product, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Product, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Product)[] = {
            { Py_tp_methods, t_Product__methods_ },
            { Py_tp_init, (void *) t_Product_init_ },
            { Py_tp_getset, t_Product__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Product)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Product, t_Product, Product);

          void t_Product::install(PyObject *module)
          {
            installType(&PY_TYPE(Product), &PY_TYPE_DEF(Product), module, "Product", 0);
          }

          void t_Product::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "class_", make_descriptor(Product::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "wrapfn_", make_descriptor(t_Product::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Product::initializeClass, 1)))
              return NULL;
            return t_Product::wrap_Object(Product(((t_Product *) arg)->object.this$));
          }
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Product::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds)
          {
            Product object((jobject) NULL);

            INT_CALL(object = Product());
            self->object = object;

            return 0;
          }

          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg)
          {
            Product a0((jobject) NULL);

            if (!parseArg(arg, "k", Product::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Product_clear(t_Product *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Product_copy(t_Product *self, PyObject *args)
          {
            Product result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Product::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Product_getN(t_Product *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Product_getResult(t_Product *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Product_increment(t_Product *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Product_get__n(t_Product *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Product_get__result(t_Product *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiElliptic::class$ = NULL;
          jmethodID *FieldJacobiElliptic::mids$ = NULL;
          bool FieldJacobiElliptic::live$ = false;

          jclass FieldJacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_94d37e81a3238af8] = env->getMethodID(cls, "arccd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccd_6672ad854985cb64] = env->getMethodID(cls, "arccd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_94d37e81a3238af8] = env->getMethodID(cls, "arccn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_6672ad854985cb64] = env->getMethodID(cls, "arccn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_94d37e81a3238af8] = env->getMethodID(cls, "arccs", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_6672ad854985cb64] = env->getMethodID(cls, "arccs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_94d37e81a3238af8] = env->getMethodID(cls, "arcdc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_6672ad854985cb64] = env->getMethodID(cls, "arcdc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_94d37e81a3238af8] = env->getMethodID(cls, "arcdn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_6672ad854985cb64] = env->getMethodID(cls, "arcdn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_94d37e81a3238af8] = env->getMethodID(cls, "arcds", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_6672ad854985cb64] = env->getMethodID(cls, "arcds", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_94d37e81a3238af8] = env->getMethodID(cls, "arcnc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_6672ad854985cb64] = env->getMethodID(cls, "arcnc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_94d37e81a3238af8] = env->getMethodID(cls, "arcnd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_6672ad854985cb64] = env->getMethodID(cls, "arcnd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_94d37e81a3238af8] = env->getMethodID(cls, "arcns", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_6672ad854985cb64] = env->getMethodID(cls, "arcns", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_94d37e81a3238af8] = env->getMethodID(cls, "arcsc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_6672ad854985cb64] = env->getMethodID(cls, "arcsc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_94d37e81a3238af8] = env->getMethodID(cls, "arcsd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_6672ad854985cb64] = env->getMethodID(cls, "arcsd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_94d37e81a3238af8] = env->getMethodID(cls, "arcsn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_6672ad854985cb64] = env->getMethodID(cls, "arcsn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getM_613c8f46c659f636] = env->getMethodID(cls, "getM", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_valuesC_1a5fc98775ea4bd5] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesC_c520f2ee7e2a9f39] = env->getMethodID(cls, "valuesC", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesD_41c3aba2ad053e53] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesD_aa103361b5a2e138] = env->getMethodID(cls, "valuesD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesN_49c3858fca4f52e4] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesN_97e5960b819d6e6d] = env->getMethodID(cls, "valuesN", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesS_1e3ce0db0e8390e4] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");
              mids$[mid_valuesS_183c05f7d8fac6b6] = env->getMethodID(cls, "valuesS", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_94d37e81a3238af8], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_6672ad854985cb64], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::getM() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM_613c8f46c659f636]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_1a5fc98775ea4bd5], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_c520f2ee7e2a9f39], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_41c3aba2ad053e53], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_aa103361b5a2e138], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_49c3858fca4f52e4], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_97e5960b819d6e6d], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_1e3ce0db0e8390e4], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_183c05f7d8fac6b6], a0.this$));
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
          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self);
          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data);
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data);
          static PyGetSetDef t_FieldJacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, m),
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccs, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcds, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcns, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesC, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesD, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesN, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiElliptic)[] = {
            { Py_tp_methods, t_FieldJacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldJacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiElliptic, t_FieldJacobiElliptic, FieldJacobiElliptic);
          PyObject *t_FieldJacobiElliptic::wrap_Object(const FieldJacobiElliptic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiElliptic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiElliptic), &PY_TYPE_DEF(FieldJacobiElliptic), module, "FieldJacobiElliptic", 0);
          }

          void t_FieldJacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "class_", make_descriptor(FieldJacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "wrapfn_", make_descriptor(t_FieldJacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiElliptic::wrap_Object(FieldJacobiElliptic(((t_FieldJacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getM());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", args);
            return NULL;
          }
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getM());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemerisSegment::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemerisSegment::mids$ = NULL;
        bool STKEphemerisFile$STKEphemerisSegment::live$ = false;

        jclass STKEphemerisFile$STKEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b15605e7b8590c64] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;)V");
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemerisSegment::STKEphemerisFile$STKEphemerisSegment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15605e7b8590c64, a0, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter STKEphemerisFile$STKEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::java::util::List STKEphemerisFile$STKEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::frames::Frame STKEphemerisFile$STKEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        jint STKEphemerisFile$STKEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble STKEphemerisFile$STKEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemerisSegment)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemerisSegment_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemerisSegment, t_STKEphemerisFile$STKEphemerisSegment, STKEphemerisFile$STKEphemerisSegment);

        void t_STKEphemerisFile$STKEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemerisSegment), &PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment), module, "STKEphemerisFile$STKEphemerisSegment", 0);
        }

        void t_STKEphemerisFile$STKEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "class_", make_descriptor(STKEphemerisFile$STKEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemerisSegment::wrap_Object(STKEphemerisFile$STKEphemerisSegment(((t_STKEphemerisFile$STKEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          STKEphemerisFile$STKEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "DkIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan::Atan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Atan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterDriversProvider::class$ = NULL;
      jmethodID *PythonParameterDriversProvider::mids$ = NULL;
      bool PythonParameterDriversProvider::live$ = false;

      jclass PythonParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterDriversProvider::PythonParameterDriversProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonParameterDriversProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonParameterDriversProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonParameterDriversProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self);
      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args);
      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data);
      static PyGetSetDef t_PythonParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterDriversProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_PythonParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterDriversProvider)[] = {
        { Py_tp_methods, t_PythonParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) t_PythonParameterDriversProvider_init_ },
        { Py_tp_getset, t_PythonParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterDriversProvider, t_PythonParameterDriversProvider, PythonParameterDriversProvider);

      void t_PythonParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterDriversProvider), &PY_TYPE_DEF(PythonParameterDriversProvider), module, "PythonParameterDriversProvider", 1);
      }

      void t_PythonParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "class_", make_descriptor(PythonParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "wrapfn_", make_descriptor(t_PythonParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterDriversProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonParameterDriversProvider_getParametersDrivers0 },
          { "pythonDecRef", "()V", (void *) t_PythonParameterDriversProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_PythonParameterDriversProvider::wrap_Object(PythonParameterDriversProvider(((t_PythonParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterDriversProvider object((jobject) NULL);

        INT_CALL(object = PythonParameterDriversProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Boolean.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadata::class$ = NULL;
              jmethodID *AemMetadata::mids$ = NULL;
              bool AemMetadata::live$ = false;

              jclass AemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getAttitudeType_f1cb2bc8e0f6e00a] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_cd8353278e08930b] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getFrameAngvelFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrameAngvelFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_isFirst_adef4ca621ef1c5e] = env->getMethodID(cls, "isFirst", "()Ljava/lang/Boolean;");
                  mids$[mid_isSpacecraftBodyRate_89b302893bdbe1f1] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_89b302893bdbe1f1] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setAngvelFrame_f55eee1236275bb1] = env->getMethodID(cls, "setAngvelFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setAttitudeType_78cfb04ba41acba4] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;)V");
                  mids$[mid_setEulerRotSeq_8b9f97be929dfd52] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInterpolationDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_f5ffdf29129ef90a] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                  mids$[mid_setIsFirst_ed2afdb8506b9742] = env->getMethodID(cls, "setIsFirst", "(Z)V");
                  mids$[mid_setRateFrameIsA_ed2afdb8506b9742] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_setStartTime_20affcbd28542333] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_20affcbd28542333] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemMetadata::AemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeType AemMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_f1cb2bc8e0f6e00a]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AemMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AemMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_cd8353278e08930b]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AemMetadata::getFrameAngvelFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameAngvelFrame_98f5fcaff3e3f9d2]));
              }

              jint AemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_412668abc8d889e9]);
              }

              ::java::lang::String AemMetadata::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
              }

              jint AemMetadata::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_7a97f7e149e79afb]));
              }

              ::java::lang::Boolean AemMetadata::isFirst() const
              {
                return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isFirst_adef4ca621ef1c5e]));
              }

              jboolean AemMetadata::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_89b302893bdbe1f1]);
              }

              jboolean AemMetadata::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_89b302893bdbe1f1]);
              }

              void AemMetadata::setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngvelFrame_f55eee1236275bb1], a0.this$);
              }

              void AemMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_78cfb04ba41acba4], a0.this$);
              }

              void AemMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_8b9f97be929dfd52], a0.this$);
              }

              void AemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_a3da1a935cb37f7b], a0);
              }

              void AemMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_f5ffdf29129ef90a], a0.this$);
              }

              void AemMetadata::setIsFirst(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsFirst_ed2afdb8506b9742], a0);
              }

              void AemMetadata::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_ed2afdb8506b9742], a0);
              }

              void AemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_20affcbd28542333], a0.this$);
              }

              void AemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_20affcbd28542333], a0.this$);
              }

              void AemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_20affcbd28542333], a0.this$);
              }

              void AemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_20affcbd28542333], a0.this$);
              }

              void AemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self);
              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self);
              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args);
              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AemMetadata__fields_[] = {
                DECLARE_SET_FIELD(t_AemMetadata, angvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AemMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AemMetadata, eulerRotSeq),
                DECLARE_GET_FIELD(t_AemMetadata, first),
                DECLARE_GET_FIELD(t_AemMetadata, frameAngvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationMethod),
                DECLARE_GET_FIELD(t_AemMetadata, interpolationSamples),
                DECLARE_GET_FIELD(t_AemMetadata, spacecraftBodyRate),
                DECLARE_GET_FIELD(t_AemMetadata, start),
                DECLARE_GETSET_FIELD(t_AemMetadata, startTime),
                DECLARE_GET_FIELD(t_AemMetadata, stop),
                DECLARE_GETSET_FIELD(t_AemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadata__methods_[] = {
                DECLARE_METHOD(t_AemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getFrameAngvelFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStop, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isFirst, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, setAngvelFrame, METH_O),
                DECLARE_METHOD(t_AemMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AemMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_AemMetadata, setIsFirst, METH_O),
                DECLARE_METHOD(t_AemMetadata, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadata)[] = {
                { Py_tp_methods, t_AemMetadata__methods_ },
                { Py_tp_init, (void *) t_AemMetadata_init_ },
                { Py_tp_getset, t_AemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AemMetadata, t_AemMetadata, AemMetadata);

              void t_AemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadata), &PY_TYPE_DEF(AemMetadata), module, "AemMetadata", 0);
              }

              void t_AemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "class_", make_descriptor(AemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "wrapfn_", make_descriptor(t_AemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadata::initializeClass, 1)))
                  return NULL;
                return t_AemMetadata::wrap_Object(AemMetadata(((t_AemMetadata *) arg)->object.this$));
              }
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                AemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = AemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self)
              {
                ::java::lang::Boolean result((jobject) NULL);
                OBJ_CALL(result = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAngvelFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngvelFrame", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsFirst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsFirst", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAngvelFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angvelFrame", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(value);
              }
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data)
              {
                ::java::lang::Boolean value((jobject) NULL);
                OBJ_CALL(value = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data)
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
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereKlobucharMessage::class$ = NULL;
          jmethodID *IonosphereKlobucharMessage::mids$ = NULL;
          bool IonosphereKlobucharMessage::live$ = false;
          JArray< ::org::orekit::utils::units::Unit > *IonosphereKlobucharMessage::S_PER_SC_N = NULL;

          jclass IonosphereKlobucharMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereKlobucharMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_a53a7513ecedada2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_a53a7513ecedada2] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getRegionCode_9a51418bd8a33d02] = env->getMethodID(cls, "getRegionCode", "()Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_setAlphaI_89aad365fb0ed8da] = env->getMethodID(cls, "setAlphaI", "(ID)V");
              mids$[mid_setBetaI_89aad365fb0ed8da] = env->getMethodID(cls, "setBetaI", "(ID)V");
              mids$[mid_setRegionCode_2034f98224d4dad7] = env->getMethodID(cls, "setRegionCode", "(Lorg/orekit/files/rinex/navigation/RegionCode;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              S_PER_SC_N = new JArray< ::org::orekit::utils::units::Unit >(env->getStaticObjectField(cls, "S_PER_SC_N", "[Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereKlobucharMessage::IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereKlobucharMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_a53a7513ecedada2]));
          }

          JArray< jdouble > IonosphereKlobucharMessage::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_a53a7513ecedada2]));
          }

          ::org::orekit::files::rinex::navigation::RegionCode IonosphereKlobucharMessage::getRegionCode() const
          {
            return ::org::orekit::files::rinex::navigation::RegionCode(env->callObjectMethod(this$, mids$[mid_getRegionCode_9a51418bd8a33d02]));
          }

          void IonosphereKlobucharMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_89aad365fb0ed8da], a0, a1);
          }

          void IonosphereKlobucharMessage::setBetaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setBetaI_89aad365fb0ed8da], a0, a1);
          }

          void IonosphereKlobucharMessage::setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRegionCode_2034f98224d4dad7], a0.this$);
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
          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data);
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereKlobucharMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, alpha),
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, beta),
            DECLARE_GETSET_FIELD(t_IonosphereKlobucharMessage, regionCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereKlobucharMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereKlobucharMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getRegionCode, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setAlphaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setBetaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setRegionCode, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereKlobucharMessage)[] = {
            { Py_tp_methods, t_IonosphereKlobucharMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereKlobucharMessage_init_ },
            { Py_tp_getset, t_IonosphereKlobucharMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereKlobucharMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereKlobucharMessage, t_IonosphereKlobucharMessage, IonosphereKlobucharMessage);

          void t_IonosphereKlobucharMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereKlobucharMessage), &PY_TYPE_DEF(IonosphereKlobucharMessage), module, "IonosphereKlobucharMessage", 0);
          }

          void t_IonosphereKlobucharMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "class_", make_descriptor(IonosphereKlobucharMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "wrapfn_", make_descriptor(t_IonosphereKlobucharMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereKlobucharMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "S_PER_SC_N", make_descriptor(JArray<jobject>(IonosphereKlobucharMessage::S_PER_SC_N->this$).wrap(::org::orekit::utils::units::t_Unit::wrap_jobject)));
          }

          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereKlobucharMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereKlobucharMessage::wrap_Object(IonosphereKlobucharMessage(((t_IonosphereKlobucharMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereKlobucharMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereKlobucharMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereKlobucharMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self)
          {
            ::org::orekit::files::rinex::navigation::RegionCode result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(result);
          }

          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setBetaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBetaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::RegionCode a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_RegionCode::parameters_))
            {
              OBJ_CALL(self->object.setRegionCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRegionCode", arg);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(value);
          }
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &value))
              {
                INT_CALL(self->object.setRegionCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "regionCode", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *S2Point::class$ = NULL;
          jmethodID *S2Point::mids$ = NULL;
          bool S2Point::live$ = false;
          S2Point *S2Point::MINUS_I = NULL;
          S2Point *S2Point::MINUS_J = NULL;
          S2Point *S2Point::MINUS_K = NULL;
          S2Point *S2Point::NaN = NULL;
          S2Point *S2Point::PLUS_I = NULL;
          S2Point *S2Point::PLUS_J = NULL;
          S2Point *S2Point::PLUS_K = NULL;

          jclass S2Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/S2Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_8531a7312d9da5ba] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)D");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_221e8e85cb385209] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getPhi_557b8123390d8d0c] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getTheta_557b8123390d8d0c] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_getVector_f88961cca75a2c0a] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_0ba7e0560ff59fd8] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new S2Point(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_J = new S2Point(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_K = new S2Point(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              NaN = new S2Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_I = new S2Point(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_J = new S2Point(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_K = new S2Point(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S2Point::S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

          S2Point::S2Point(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

          jdouble S2Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble S2Point::distance(const S2Point & a0, const S2Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_8531a7312d9da5ba], a0.this$, a1.this$);
          }

          jboolean S2Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jboolean S2Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_221e8e85cb385209], a0.this$);
          }

          jdouble S2Point::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::Space S2Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
          }

          jdouble S2Point::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D S2Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVector_f88961cca75a2c0a]));
          }

          jint S2Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean S2Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          S2Point S2Point::negate() const
          {
            return S2Point(env->callObjectMethod(this$, mids$[mid_negate_0ba7e0560ff59fd8]));
          }

          ::java::lang::String S2Point::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_getPhi(t_S2Point *self);
          static PyObject *t_S2Point_getSpace(t_S2Point *self);
          static PyObject *t_S2Point_getTheta(t_S2Point *self);
          static PyObject *t_S2Point_getVector(t_S2Point *self);
          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_isNaN(t_S2Point *self);
          static PyObject *t_S2Point_negate(t_S2Point *self);
          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data);
          static PyGetSetDef t_S2Point__fields_[] = {
            DECLARE_GET_FIELD(t_S2Point, naN),
            DECLARE_GET_FIELD(t_S2Point, phi),
            DECLARE_GET_FIELD(t_S2Point, space),
            DECLARE_GET_FIELD(t_S2Point, theta),
            DECLARE_GET_FIELD(t_S2Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S2Point__methods_[] = {
            DECLARE_METHOD(t_S2Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, distance, METH_O),
            DECLARE_METHOD(t_S2Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S2Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S2Point, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, negate, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S2Point)[] = {
            { Py_tp_methods, t_S2Point__methods_ },
            { Py_tp_init, (void *) t_S2Point_init_ },
            { Py_tp_getset, t_S2Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S2Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S2Point, t_S2Point, S2Point);

          void t_S2Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S2Point), &PY_TYPE_DEF(S2Point), module, "S2Point", 0);
          }

          void t_S2Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "class_", make_descriptor(S2Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "wrapfn_", make_descriptor(t_S2Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S2Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "NaN", make_descriptor(t_S2Point::wrap_Object(*S2Point::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_K)));
          }

          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S2Point::initializeClass, 1)))
              return NULL;
            return t_S2Point::wrap_Object(S2Point(((t_S2Point *) arg)->object.this$));
          }
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S2Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = S2Point(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                jdouble a1;
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = S2Point(a0, a1));
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

          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S2Point a0((jobject) NULL);
            S2Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S2Point::initializeClass, S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::S2Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S2Point_getPhi(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getSpace(t_S2Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S2Point_getTheta(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getVector(t_S2Point *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S2Point_isNaN(t_S2Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S2Point_negate(t_S2Point *self)
          {
            S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_S2Point::wrap_Object(result);
          }

          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonOrekitStepInterpolator::mids$ = NULL;
        bool PythonOrekitStepInterpolator::live$ = false;

        jclass PythonOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_15e85d5301b90ef8] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_15e0d02372b1347b] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPreviousState_15e85d5301b90ef8] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_6456e7061fff7584] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepInterpolator::PythonOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonOrekitStepInterpolator::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self);
        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepInterpolator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepInterpolator, t_PythonOrekitStepInterpolator, PythonOrekitStepInterpolator);

        void t_PythonOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepInterpolator), &PY_TYPE_DEF(PythonOrekitStepInterpolator), module, "PythonOrekitStepInterpolator", 1);
        }

        void t_PythonOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "class_", make_descriptor(PythonOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getPreviousState2 },
            { "isCurrentStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3 },
            { "isForward", "()Z", (void *) t_PythonOrekitStepInterpolator_isForward4 },
            { "isPreviousStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepInterpolator_pythonDecRef6 },
            { "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;", (void *) t_PythonOrekitStepInterpolator_restrictStep7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepInterpolator::wrap_Object(PythonOrekitStepInterpolator(((t_PythonOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isCurrentStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isCurrentStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isPreviousStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isPreviousStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockPhaseModifier::RelativisticJ2ClockPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockPhaseModifier, t_RelativisticJ2ClockPhaseModifier, RelativisticJ2ClockPhaseModifier);

          void t_RelativisticJ2ClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockPhaseModifier), module, "RelativisticJ2ClockPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockPhaseModifier::wrap_Object(RelativisticJ2ClockPhaseModifier(((t_RelativisticJ2ClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet::class$ = NULL;
          jmethodID *PolyhedronsSet::mids$ = NULL;
          bool PolyhedronsSet::live$ = false;

          jclass PolyhedronsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_3c57d2e720eaa4f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;D)V");
              mids$[mid_init$_546559a08b08816f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_bdacd7c5506b494c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_b7afa53d597eefdc] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;D)V");
              mids$[mid_init$_c0cf786cd30233c5] = env->getMethodID(cls, "<init>", "(DDDDDDD)V");
              mids$[mid_buildNew_ad25d981bf0661ee] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_firstIntersection_e41ce56ec01ebfa0] = env->getMethodID(cls, "firstIntersection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
              mids$[mid_getBRep_7dd4c2a86e6aca17] = env->getMethodID(cls, "getBRep", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;");
              mids$[mid_rotate_84307c85cd32152b] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_translate_2477f00f88909b27] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet::PolyhedronsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3c57d2e720eaa4f8, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_546559a08b08816f, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bdacd7c5506b494c, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b7afa53d597eefdc, a0.this$, a1.this$, a2)) {}

          PolyhedronsSet::PolyhedronsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_c0cf786cd30233c5, a0, a1, a2, a3, a4, a5, a6)) {}

          PolyhedronsSet PolyhedronsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_buildNew_ad25d981bf0661ee], a0.this$));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane PolyhedronsSet::firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Line & a1) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_firstIntersection_e41ce56ec01ebfa0], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep PolyhedronsSet::getBRep() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep(env->callObjectMethod(this$, mids$[mid_getBRep_7dd4c2a86e6aca17]));
          }

          PolyhedronsSet PolyhedronsSet::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_rotate_84307c85cd32152b], a0.this$, a1.this$));
          }

          PolyhedronsSet PolyhedronsSet::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_translate_2477f00f88909b27], a0.this$));
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
          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args);
          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self);
          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg);
          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data);
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data);
          static PyGetSetDef t_PolyhedronsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet, bRep),
            DECLARE_GET_FIELD(t_PolyhedronsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, firstIntersection, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, getBRep, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet, rotate, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, translate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet)[] = {
            { Py_tp_methods, t_PolyhedronsSet__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet_init_ },
            { Py_tp_getset, t_PolyhedronsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet, t_PolyhedronsSet, PolyhedronsSet);
          PyObject *t_PolyhedronsSet::wrap_Object(const PolyhedronsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet), &PY_TYPE_DEF(PolyhedronsSet), module, "PolyhedronsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "BRep", make_descriptor(&PY_TYPE_DEF(PolyhedronsSet$BRep)));
          }

          void t_PolyhedronsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "class_", make_descriptor(PolyhedronsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "wrapfn_", make_descriptor(t_PolyhedronsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet::wrap_Object(PolyhedronsSet(((t_PolyhedronsSet *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolyhedronsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KKD", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 7:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolyhedronsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a1((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.firstIntersection(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "firstIntersection", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep result((jobject) NULL);
            OBJ_CALL(result = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(result);
          }

          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep value((jobject) NULL);
            OBJ_CALL(value = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000InputParameters::class$ = NULL;
          jmethodID *DTM2000InputParameters::mids$ = NULL;
          bool DTM2000InputParameters::live$ = false;

          jclass DTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_get24HoursKp_b0b988f941da47d8] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_b0b988f941da47d8] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_b0b988f941da47d8] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_b0b988f941da47d8] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble DTM2000InputParameters::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_b0b988f941da47d8], a0.this$);
          }

          jdouble DTM2000InputParameters::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_b0b988f941da47d8], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
          }

          jdouble DTM2000InputParameters::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_b0b988f941da47d8], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
          }

          jdouble DTM2000InputParameters::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_b0b988f941da47d8], a0.this$);
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
          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data);
          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data);
          static PyGetSetDef t_DTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000InputParameters, maxDate),
            DECLARE_GET_FIELD(t_DTM2000InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_DTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, get24HoursKp, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getInstantFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getMeanFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getThreeHourlyKP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000InputParameters)[] = {
            { Py_tp_methods, t_DTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(DTM2000InputParameters, t_DTM2000InputParameters, DTM2000InputParameters);

          void t_DTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000InputParameters), &PY_TYPE_DEF(DTM2000InputParameters), module, "DTM2000InputParameters", 0);
          }

          void t_DTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "class_", make_descriptor(DTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "wrapfn_", make_descriptor(t_DTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_DTM2000InputParameters::wrap_Object(DTM2000InputParameters(((t_DTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.get24HoursKp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "get24HoursKp", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInstantFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInstantFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMeanFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKP", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_54efb81c8ba11c72] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_values_baa78cce6c71babc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_selectTransformer_fb54d70361639837] = env->getMethodID(cls, "selectTransformer", "(Lorg/orekit/propagation/events/Transformer;DZ)Lorg/orekit/propagation/events/Transformer;");
            mids$[mid_getTriggeredIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "getTriggeredIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_54efb81c8ba11c72], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_baa78cce6c71babc]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldStateMapper::class$ = NULL;
        jmethodID *PythonFieldStateMapper::mids$ = NULL;
        bool PythonFieldStateMapper::live$ = false;

        jclass PythonFieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f3905784aefbdce6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_90cbab6bce028b0d] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapStateToArray_b5f12a51288f780a] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldStateMapper::PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::FieldStateMapper(env->newObject(initializeClass, &mids$, mid_init$_f3905784aefbdce6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonFieldStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldStateMapper::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args);
        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self);
        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data);
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data);
        static PyGetSetDef t_PythonFieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, self),
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonFieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldStateMapper)[] = {
          { Py_tp_methods, t_PythonFieldStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonFieldStateMapper_init_ },
          { Py_tp_getset, t_PythonFieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldStateMapper),
          NULL
        };

        DEFINE_TYPE(PythonFieldStateMapper, t_PythonFieldStateMapper, PythonFieldStateMapper);
        PyObject *t_PythonFieldStateMapper::wrap_Object(const PythonFieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldStateMapper), &PY_TYPE_DEF(PythonFieldStateMapper), module, "PythonFieldStateMapper", 1);
        }

        void t_PythonFieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "class_", make_descriptor(PythonFieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "wrapfn_", make_descriptor(t_PythonFieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonFieldStateMapper::wrap_Object(PythonFieldStateMapper(((t_PythonFieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonFieldStateMapper object((jobject) NULL);

          if (!parseArgs(args, "KKKKkk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonFieldStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data)
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
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ParameterValidator::class$ = NULL;
            jmethodID *ParameterValidator::mids$ = NULL;
            bool ParameterValidator::live$ = false;

            jclass ParameterValidator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_validate_342d5b01463e0dc5] = env->getMethodID(cls, "validate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealVector ParameterValidator::validate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_validate_342d5b01463e0dc5], a0.this$));
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
            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg);

            static PyMethodDef t_ParameterValidator__methods_[] = {
              DECLARE_METHOD(t_ParameterValidator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParameterValidator)[] = {
              { Py_tp_methods, t_ParameterValidator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParameterValidator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParameterValidator, t_ParameterValidator, ParameterValidator);

            void t_ParameterValidator::install(PyObject *module)
            {
              installType(&PY_TYPE(ParameterValidator), &PY_TYPE_DEF(ParameterValidator), module, "ParameterValidator", 0);
            }

            void t_ParameterValidator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "class_", make_descriptor(ParameterValidator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "wrapfn_", make_descriptor(t_ParameterValidator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParameterValidator::initializeClass, 1)))
                return NULL;
              return t_ParameterValidator::wrap_Object(ParameterValidator(((t_ParameterValidator *) arg)->object.this$));
            }
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParameterValidator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.validate(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
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
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationCNES95Convention::class$ = NULL;
        jmethodID *IsotropicRadiationCNES95Convention::mids$ = NULL;
        bool IsotropicRadiationCNES95Convention::live$ = false;

        jclass IsotropicRadiationCNES95Convention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationCNES95Convention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationCNES95Convention::IsotropicRadiationCNES95Convention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationCNES95Convention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_122b60d0431fddf5], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self);
        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationCNES95Convention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationCNES95Convention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationCNES95Convention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationCNES95Convention)[] = {
          { Py_tp_methods, t_IsotropicRadiationCNES95Convention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationCNES95Convention_init_ },
          { Py_tp_getset, t_IsotropicRadiationCNES95Convention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationCNES95Convention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationCNES95Convention, t_IsotropicRadiationCNES95Convention, IsotropicRadiationCNES95Convention);

        void t_IsotropicRadiationCNES95Convention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationCNES95Convention), &PY_TYPE_DEF(IsotropicRadiationCNES95Convention), module, "IsotropicRadiationCNES95Convention", 0);
        }

        void t_IsotropicRadiationCNES95Convention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "class_", make_descriptor(IsotropicRadiationCNES95Convention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "wrapfn_", make_descriptor(t_IsotropicRadiationCNES95Convention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationCNES95Convention::wrap_Object(IsotropicRadiationCNES95Convention(((t_IsotropicRadiationCNES95Convention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationCNES95Convention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationCNES95Convention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042::class$ = NULL;
              jmethodID *Rtcm1042::mids$ = NULL;
              bool Rtcm1042::live$ = false;

              jclass Rtcm1042::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c91e4c78864ff4e0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042::Rtcm1042(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_c91e4c78864ff4e0, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args);
              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data);
              static PyGetSetDef t_Rtcm1042__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1042, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042)[] = {
                { Py_tp_methods, t_Rtcm1042__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042_init_ },
                { Py_tp_getset, t_Rtcm1042__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1042, t_Rtcm1042, Rtcm1042);
              PyObject *t_Rtcm1042::wrap_Object(const Rtcm1042& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1042::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1042::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042), &PY_TYPE_DEF(Rtcm1042), module, "Rtcm1042", 0);
              }

              void t_Rtcm1042::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "class_", make_descriptor(Rtcm1042::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "wrapfn_", make_descriptor(t_Rtcm1042::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042::wrap_Object(Rtcm1042(((t_Rtcm1042 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data a1((jobject) NULL);
                Rtcm1042 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1042(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1042Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$Sigma::class$ = NULL;
            jmethodID *CMAESOptimizer$Sigma::mids$ = NULL;
            bool CMAESOptimizer$Sigma::live$ = false;

            jclass CMAESOptimizer$Sigma::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_getSigma_a53a7513ecedada2] = env->getMethodID(cls, "getSigma", "()[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$Sigma::CMAESOptimizer$Sigma(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

            JArray< jdouble > CMAESOptimizer$Sigma::getSigma() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_a53a7513ecedada2]));
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
            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args);
            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self);
            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data);
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$Sigma__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, sigma),
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$Sigma__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, getSigma, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$Sigma)[] = {
              { Py_tp_methods, t_CMAESOptimizer$Sigma__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$Sigma_init_ },
              { Py_tp_getset, t_CMAESOptimizer$Sigma__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$Sigma)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$Sigma, t_CMAESOptimizer$Sigma, CMAESOptimizer$Sigma);
            PyObject *t_CMAESOptimizer$Sigma::wrap_Object(const CMAESOptimizer$Sigma& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$Sigma::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$Sigma::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$Sigma), &PY_TYPE_DEF(CMAESOptimizer$Sigma), module, "CMAESOptimizer$Sigma", 0);
            }

            void t_CMAESOptimizer$Sigma::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "class_", make_descriptor(CMAESOptimizer$Sigma::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "wrapfn_", make_descriptor(t_CMAESOptimizer$Sigma::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$Sigma::wrap_Object(CMAESOptimizer$Sigma(((t_CMAESOptimizer$Sigma *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds)
            {
              JArray< jdouble > a0((jobject) NULL);
              CMAESOptimizer$Sigma object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = CMAESOptimizer$Sigma(a0));
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

            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getSigma());
              return result.wrap();
            }
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getSigma());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3D::class$ = NULL;
          jmethodID *Vector3D::mids$ = NULL;
          bool Vector3D::live$ = false;
          Vector3D *Vector3D::MINUS_I = NULL;
          Vector3D *Vector3D::MINUS_J = NULL;
          Vector3D *Vector3D::MINUS_K = NULL;
          Vector3D *Vector3D::NEGATIVE_INFINITY = NULL;
          Vector3D *Vector3D::NaN = NULL;
          Vector3D *Vector3D::PLUS_I = NULL;
          Vector3D *Vector3D::PLUS_J = NULL;
          Vector3D *Vector3D::PLUS_K = NULL;
          Vector3D *Vector3D::POSITIVE_INFINITY = NULL;
          Vector3D *Vector3D::ZERO = NULL;

          jclass Vector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_21f1e6966e389807] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_336207a03eeebc8b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_c62c5c4c5070c190] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_f0b1c357dc320d67] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_5d6b94fad5d111c4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_add_f50db6977d079eea] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_angle_80610bac160dfa0e] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_crossProduct_5d6b94fad5d111c4] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_crossProduct_720ad0a891308b00] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_80610bac160dfa0e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distance1_b540ea36818b5810] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_80610bac160dfa0e] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceInf_b540ea36818b5810] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_80610bac160dfa0e] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceSq_b540ea36818b5810] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_80610bac160dfa0e] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_dotProduct_b540ea36818b5810] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_dotProduct_80610bac160dfa0e] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_221e8e85cb385209] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getDelta_557b8123390d8d0c] = env->getMethodID(cls, "getDelta", "()D");
              mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_557b8123390d8d0c] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_557b8123390d8d0c] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
              mids$[mid_getZero_f88961cca75a2c0a] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_f88961cca75a2c0a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_orthogonal_f88961cca75a2c0a] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_scalarMultiply_20de5f9d51c6611f] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_5d6b94fad5d111c4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_f50db6977d079eea] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector3D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_J = new Vector3D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_K = new Vector3D(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NEGATIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NaN = new Vector3D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_I = new Vector3D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_J = new Vector3D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_K = new Vector3D(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              POSITIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              ZERO = new Vector3D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3D::Vector3D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21f1e6966e389807, a0, a1.this$)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_336207a03eeebc8b, a0, a1.this$, a2, a3.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c62c5c4c5070c190, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5, jdouble a6, const Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0b1c357dc320d67, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector3D Vector3D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_5d6b94fad5d111c4], a0.this$));
          }

          Vector3D Vector3D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_f50db6977d079eea], a0, a1.this$));
          }

          jdouble Vector3D::angle(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_80610bac160dfa0e], a0.this$, a1.this$);
          }

          Vector3D Vector3D::crossProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_5d6b94fad5d111c4], a0.this$));
          }

          Vector3D Vector3D::crossProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_720ad0a891308b00], a0.this$, a1.this$));
          }

          jdouble Vector3D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Vector3D::distance(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jdouble Vector3D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b540ea36818b5810], a0.this$);
          }

          jdouble Vector3D::distance1(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b540ea36818b5810], a0.this$);
          }

          jdouble Vector3D::distanceInf(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b540ea36818b5810], a0.this$);
          }

          jdouble Vector3D::distanceSq(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jdouble Vector3D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b540ea36818b5810], a0.this$);
          }

          jdouble Vector3D::dotProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jboolean Vector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jboolean Vector3D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_221e8e85cb385209], a0.this$);
          }

          jdouble Vector3D::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_557b8123390d8d0c]);
          }

          jdouble Vector3D::getDelta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDelta_557b8123390d8d0c]);
          }

          jdouble Vector3D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
          }

          jdouble Vector3D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
          }

          jdouble Vector3D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_557b8123390d8d0c]);
          }

          jdouble Vector3D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::Space Vector3D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
          }

          jdouble Vector3D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
          }

          jdouble Vector3D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
          }

          jdouble Vector3D::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
          }

          Vector3D Vector3D::getZero() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_getZero_f88961cca75a2c0a]));
          }

          jint Vector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean Vector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
          }

          jboolean Vector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          Vector3D Vector3D::negate() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_negate_f88961cca75a2c0a]));
          }

          Vector3D Vector3D::orthogonal() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_f88961cca75a2c0a]));
          }

          Vector3D Vector3D::scalarMultiply(jdouble a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_20de5f9d51c6611f], a0));
          }

          Vector3D Vector3D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_5d6b94fad5d111c4], a0.this$));
          }

          Vector3D Vector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_f50db6977d079eea], a0, a1.this$));
          }

          JArray< jdouble > Vector3D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
          }

          ::java::lang::String Vector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::java::lang::String Vector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
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
          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self);
          static PyObject *t_Vector3D_getDelta(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self);
          static PyObject *t_Vector3D_getSpace(t_Vector3D *self);
          static PyObject *t_Vector3D_getX(t_Vector3D *self);
          static PyObject *t_Vector3D_getY(t_Vector3D *self);
          static PyObject *t_Vector3D_getZ(t_Vector3D *self);
          static PyObject *t_Vector3D_getZero(t_Vector3D *self);
          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self);
          static PyObject *t_Vector3D_isNaN(t_Vector3D *self);
          static PyObject *t_Vector3D_negate(t_Vector3D *self);
          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self);
          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_toArray(t_Vector3D *self);
          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data);
          static PyGetSetDef t_Vector3D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3D, alpha),
            DECLARE_GET_FIELD(t_Vector3D, delta),
            DECLARE_GET_FIELD(t_Vector3D, infinite),
            DECLARE_GET_FIELD(t_Vector3D, naN),
            DECLARE_GET_FIELD(t_Vector3D, norm),
            DECLARE_GET_FIELD(t_Vector3D, norm1),
            DECLARE_GET_FIELD(t_Vector3D, normInf),
            DECLARE_GET_FIELD(t_Vector3D, normSq),
            DECLARE_GET_FIELD(t_Vector3D, space),
            DECLARE_GET_FIELD(t_Vector3D, x),
            DECLARE_GET_FIELD(t_Vector3D, y),
            DECLARE_GET_FIELD(t_Vector3D, z),
            DECLARE_GET_FIELD(t_Vector3D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3D__methods_[] = {
            DECLARE_METHOD(t_Vector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, crossProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3D)[] = {
            { Py_tp_methods, t_Vector3D__methods_ },
            { Py_tp_init, (void *) t_Vector3D_init_ },
            { Py_tp_getset, t_Vector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector3D, t_Vector3D, Vector3D);

          void t_Vector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3D), &PY_TYPE_DEF(Vector3D), module, "Vector3D", 0);
          }

          void t_Vector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "class_", make_descriptor(Vector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "wrapfn_", make_descriptor(t_Vector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector3D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NEGATIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NaN", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "POSITIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "ZERO", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::ZERO)));
          }

          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3D::initializeClass, 1)))
              return NULL;
            return t_Vector3D::wrap_Object(Vector3D(((t_Vector3D *) arg)->object.this$));
          }
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
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
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                jdouble a6;
                Vector3D a7((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.crossProduct(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::crossProduct(a0, a1));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::dotProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getDelta(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDelta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getSpace(t_Vector3D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector3D_getX(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getY(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZ(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZero(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_isNaN(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_negate(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg)
          {
            jdouble a0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector3D_toArray(t_Vector3D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDelta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data)
          {
            Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolator::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolator::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolator::live$ = false;

        jclass PiecewiseBicubicSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_d22fe74300309c38] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolator::PiecewiseBicubicSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction PiecewiseBicubicSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d22fe74300309c38], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolator)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolator, t_PiecewiseBicubicSplineInterpolator, PiecewiseBicubicSplineInterpolator);

        void t_PiecewiseBicubicSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolator), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator), module, "PiecewiseBicubicSplineInterpolator", 0);
        }

        void t_PiecewiseBicubicSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "class_", make_descriptor(PiecewiseBicubicSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolator::wrap_Object(PiecewiseBicubicSplineInterpolator(((t_PiecewiseBicubicSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PiecewiseBicubicSplineInterpolator object((jobject) NULL);

          INT_CALL(object = PiecewiseBicubicSplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
