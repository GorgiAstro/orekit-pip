#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerBootstrapping::class$ = NULL;
          jmethodID *IntegerBootstrapping::mids$ = NULL;
          bool IntegerBootstrapping::live$ = false;

          jclass IntegerBootstrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerBootstrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_discreteSearch_0640e6acf969ed28] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_152c52200b30dda4] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerBootstrapping::IntegerBootstrapping(jdouble a0) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}
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
          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IntegerBootstrapping__methods_[] = {
            DECLARE_METHOD(t_IntegerBootstrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerBootstrapping, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerBootstrapping)[] = {
            { Py_tp_methods, t_IntegerBootstrapping__methods_ },
            { Py_tp_init, (void *) t_IntegerBootstrapping_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerBootstrapping)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::LambdaMethod),
            NULL
          };

          DEFINE_TYPE(IntegerBootstrapping, t_IntegerBootstrapping, IntegerBootstrapping);

          void t_IntegerBootstrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerBootstrapping), &PY_TYPE_DEF(IntegerBootstrapping), module, "IntegerBootstrapping", 0);
          }

          void t_IntegerBootstrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "class_", make_descriptor(IntegerBootstrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "wrapfn_", make_descriptor(t_IntegerBootstrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerBootstrapping::initializeClass, 1)))
              return NULL;
            return t_IntegerBootstrapping::wrap_Object(IntegerBootstrapping(((t_IntegerBootstrapping *) arg)->object.this$));
          }
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerBootstrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            IntegerBootstrapping object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = IntegerBootstrapping(a0));
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
#include "org/hipparchus/analysis/integration/MidPointIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *MidPointIntegrator::class$ = NULL;
        jmethodID *MidPointIntegrator::mids$ = NULL;
        bool MidPointIntegrator::live$ = false;
        jint MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass MidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/MidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_8ceb2936471aec5d] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidPointIntegrator::MidPointIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        MidPointIntegrator::MidPointIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        MidPointIntegrator::MidPointIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ceb2936471aec5d, a0, a1, a2, a3)) {}
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
        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_MidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidPointIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidPointIntegrator)[] = {
          { Py_tp_methods, t_MidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidPointIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(MidPointIntegrator, t_MidPointIntegrator, MidPointIntegrator);

        void t_MidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidPointIntegrator), &PY_TYPE_DEF(MidPointIntegrator), module, "MidPointIntegrator", 0);
        }

        void t_MidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "class_", make_descriptor(MidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "wrapfn_", make_descriptor(t_MidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(MidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidPointIntegrator::wrap_Object(MidPointIntegrator(((t_MidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MidPointIntegrator object((jobject) NULL);

              INT_CALL(object = MidPointIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1));
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
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1, a2, a3));
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesPhaseModifier::RelativisticClockInterSatellitesPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesPhaseModifier, t_RelativisticClockInterSatellitesPhaseModifier, RelativisticClockInterSatellitesPhaseModifier);

          void t_RelativisticClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier), module, "RelativisticClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesPhaseModifier::wrap_Object(RelativisticClockInterSatellitesPhaseModifier(((t_RelativisticClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceWriter::class$ = NULL;
            jmethodID *RTNCovarianceWriter::mids$ = NULL;
            bool RTNCovarianceWriter::live$ = false;

            jclass RTNCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_RTNCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceWriter)[] = {
              { Py_tp_methods, t_RTNCovarianceWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceWriter, t_RTNCovarianceWriter, RTNCovarianceWriter);

            void t_RTNCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceWriter), &PY_TYPE_DEF(RTNCovarianceWriter), module, "RTNCovarianceWriter", 0);
            }

            void t_RTNCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "class_", make_descriptor(RTNCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "wrapfn_", make_descriptor(t_RTNCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceWriter::wrap_Object(RTNCovarianceWriter(((t_RTNCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceWriter::initializeClass, 0))
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
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Record::class$ = NULL;
          jmethodID *Record::mids$ = NULL;
          bool Record::live$ = false;

          jclass Record::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Record");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMisc_3cffd47377eca18a] = env->getMethodID(cls, "getMisc", "()Ljava/lang/String;");
              mids$[mid_getRecordType_2923d5139aa846c0] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getFieldsNumber_412668abc8d889e9] = env->getMethodID(cls, "getFieldsNumber", "()I");
              mids$[mid_getField_0f10d4a5e06f61c0] = env->getMethodID(cls, "getField", "(I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String Record::getMisc() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMisc_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType Record::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_2923d5139aa846c0]));
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
          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_getMisc(t_Record *self);
          static PyObject *t_Record_getRecordType(t_Record *self);
          static PyObject *t_Record_get__misc(t_Record *self, void *data);
          static PyObject *t_Record_get__recordType(t_Record *self, void *data);
          static PyGetSetDef t_Record__fields_[] = {
            DECLARE_GET_FIELD(t_Record, misc),
            DECLARE_GET_FIELD(t_Record, recordType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Record__methods_[] = {
            DECLARE_METHOD(t_Record, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, getMisc, METH_NOARGS),
            DECLARE_METHOD(t_Record, getRecordType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Record)[] = {
            { Py_tp_methods, t_Record__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Record__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Record)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Record, t_Record, Record);

          void t_Record::install(PyObject *module)
          {
            installType(&PY_TYPE(Record), &PY_TYPE_DEF(Record), module, "Record", 0);
          }

          void t_Record::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "class_", make_descriptor(Record::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "wrapfn_", make_descriptor(t_Record::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Record::initializeClass, 1)))
              return NULL;
            return t_Record::wrap_Object(Record(((t_Record *) arg)->object.this$));
          }
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Record::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Record_getMisc(t_Record *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMisc());
            return j2p(result);
          }

          static PyObject *t_Record_getRecordType(t_Record *self)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);
            OBJ_CALL(result = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
          }

          static PyObject *t_Record_get__misc(t_Record *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMisc());
            return j2p(value);
          }

          static PyObject *t_Record_get__recordType(t_Record *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCombination::class$ = NULL;
          jmethodID *GeometryFreeCombination::mids$ = NULL;
          bool GeometryFreeCombination::live$ = false;

          jclass GeometryFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GeometryFreeCombination__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCombination)[] = {
            { Py_tp_methods, t_GeometryFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCombination, t_GeometryFreeCombination, GeometryFreeCombination);

          void t_GeometryFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCombination), &PY_TYPE_DEF(GeometryFreeCombination), module, "GeometryFreeCombination", 0);
          }

          void t_GeometryFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "class_", make_descriptor(GeometryFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "wrapfn_", make_descriptor(t_GeometryFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCombination::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCombination::wrap_Object(GeometryFreeCombination(((t_GeometryFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCombination::initializeClass, 0))
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
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalArgumentException::class$ = NULL;
      jmethodID *MathIllegalArgumentException::mids$ = NULL;
      bool MathIllegalArgumentException::live$ = false;

      jclass MathIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalArgumentException::MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      MathIllegalArgumentException::MathIllegalArgumentException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalArgumentException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalArgumentException)[] = {
        { Py_tp_methods, t_MathIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalArgumentException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalArgumentException, t_MathIllegalArgumentException, MathIllegalArgumentException);

      void t_MathIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalArgumentException), &PY_TYPE_DEF(MathIllegalArgumentException), module, "MathIllegalArgumentException", 0);
      }

      void t_MathIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "class_", make_descriptor(MathIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "wrapfn_", make_descriptor(t_MathIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalArgumentException::wrap_Object(MathIllegalArgumentException(((t_MathIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *IsotropicDrag::class$ = NULL;
        jmethodID *IsotropicDrag::mids$ = NULL;
        bool IsotropicDrag::live$ = false;

        jclass IsotropicDrag::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/IsotropicDrag");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_dragAcceleration_bc16b30ecfb3a4cc] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dragAcceleration_59d392869e8fa633] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getDragParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_bc16b30ecfb3a4cc], a0.this$, a1, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_59d392869e8fa633], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::java::util::List IsotropicDrag::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_0d9551367f7ecdef]));
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
      namespace drag {
        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args);
        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self);
        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data);
        static PyGetSetDef t_IsotropicDrag__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicDrag, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicDrag__methods_[] = {
          DECLARE_METHOD(t_IsotropicDrag, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_IsotropicDrag, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicDrag)[] = {
          { Py_tp_methods, t_IsotropicDrag__methods_ },
          { Py_tp_init, (void *) t_IsotropicDrag_init_ },
          { Py_tp_getset, t_IsotropicDrag__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicDrag)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicDrag, t_IsotropicDrag, IsotropicDrag);

        void t_IsotropicDrag::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicDrag), &PY_TYPE_DEF(IsotropicDrag), module, "IsotropicDrag", 0);
        }

        void t_IsotropicDrag::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "class_", make_descriptor(IsotropicDrag::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "wrapfn_", make_descriptor(t_IsotropicDrag::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicDrag::initializeClass, 1)))
            return NULL;
          return t_IsotropicDrag::wrap_Object(IsotropicDrag(((t_IsotropicDrag *) arg)->object.this$));
        }
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicDrag::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicDrag(a0, a1));
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
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicDrag(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_booleanValue_39cbdf35e32a2f54] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDataField::PythonDataField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonDataField::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonDataField::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonDataField::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ArithmeticUtils::class$ = NULL;
      jmethodID *ArithmeticUtils::mids$ = NULL;
      bool ArithmeticUtils::live$ = false;

      jclass ArithmeticUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ArithmeticUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAndCheck_5625cf3db98dadc1] = env->getStaticMethodID(cls, "addAndCheck", "(II)I");
          mids$[mid_addAndCheck_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "addAndCheck", "(JJ)J");
          mids$[mid_divideUnsigned_5625cf3db98dadc1] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
          mids$[mid_divideUnsigned_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
          mids$[mid_gcd_5625cf3db98dadc1] = env->getStaticMethodID(cls, "gcd", "(II)I");
          mids$[mid_gcd_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "gcd", "(JJ)J");
          mids$[mid_isPowerOfTwo_9848db5862ba9934] = env->getStaticMethodID(cls, "isPowerOfTwo", "(J)Z");
          mids$[mid_lcm_5625cf3db98dadc1] = env->getStaticMethodID(cls, "lcm", "(II)I");
          mids$[mid_lcm_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "lcm", "(JJ)J");
          mids$[mid_mulAndCheck_5625cf3db98dadc1] = env->getStaticMethodID(cls, "mulAndCheck", "(II)I");
          mids$[mid_mulAndCheck_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "mulAndCheck", "(JJ)J");
          mids$[mid_pow_5625cf3db98dadc1] = env->getStaticMethodID(cls, "pow", "(II)I");
          mids$[mid_pow_974ee1cf526db4b7] = env->getStaticMethodID(cls, "pow", "(JI)J");
          mids$[mid_remainderUnsigned_5625cf3db98dadc1] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
          mids$[mid_remainderUnsigned_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
          mids$[mid_subAndCheck_5625cf3db98dadc1] = env->getStaticMethodID(cls, "subAndCheck", "(II)I");
          mids$[mid_subAndCheck_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "subAndCheck", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ArithmeticUtils::addAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addAndCheck_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::addAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addAndCheck_c18ab8eab0c49f84], a0, a1);
      }

      jint ArithmeticUtils::divideUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::divideUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_c18ab8eab0c49f84], a0, a1);
      }

      jint ArithmeticUtils::gcd(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_gcd_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::gcd(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_gcd_c18ab8eab0c49f84], a0, a1);
      }

      jboolean ArithmeticUtils::isPowerOfTwo(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isPowerOfTwo_9848db5862ba9934], a0);
      }

      jint ArithmeticUtils::lcm(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_lcm_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::lcm(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_lcm_c18ab8eab0c49f84], a0, a1);
      }

      jint ArithmeticUtils::mulAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_mulAndCheck_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::mulAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_mulAndCheck_c18ab8eab0c49f84], a0, a1);
      }

      jint ArithmeticUtils::pow(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_pow_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::pow(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_pow_974ee1cf526db4b7], a0, a1);
      }

      jint ArithmeticUtils::remainderUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::remainderUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_c18ab8eab0c49f84], a0, a1);
      }

      jint ArithmeticUtils::subAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subAndCheck_5625cf3db98dadc1], a0, a1);
      }

      jlong ArithmeticUtils::subAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subAndCheck_c18ab8eab0c49f84], a0, a1);
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
      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ArithmeticUtils__methods_[] = {
        DECLARE_METHOD(t_ArithmeticUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, addAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, divideUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, gcd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, isPowerOfTwo, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, lcm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, mulAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, remainderUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, subAndCheck, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArithmeticUtils)[] = {
        { Py_tp_methods, t_ArithmeticUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArithmeticUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArithmeticUtils, t_ArithmeticUtils, ArithmeticUtils);

      void t_ArithmeticUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ArithmeticUtils), &PY_TYPE_DEF(ArithmeticUtils), module, "ArithmeticUtils", 0);
      }

      void t_ArithmeticUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "class_", make_descriptor(ArithmeticUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "wrapfn_", make_descriptor(t_ArithmeticUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArithmeticUtils::initializeClass, 1)))
          return NULL;
        return t_ArithmeticUtils::wrap_Object(ArithmeticUtils(((t_ArithmeticUtils *) arg)->object.this$));
      }
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArithmeticUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "gcd", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jboolean result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::isPowerOfTwo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isPowerOfTwo", arg);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "lcm", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mulAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "remainderUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subAndCheck", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularAzEl::class$ = NULL;
        jmethodID *AngularAzEl::mids$ = NULL;
        bool AngularAzEl::live$ = false;
        ::java::lang::String *AngularAzEl::MEASUREMENT_TYPE = NULL;

        jclass AngularAzEl::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularAzEl");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a6e1b20dddd166b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_8386213426308de8] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularAzEl::AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0a6e1b20dddd166b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularAzEl::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_8386213426308de8], a0.this$));
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
        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args);
        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg);
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data);
        static PyGetSetDef t_AngularAzEl__fields_[] = {
          DECLARE_GET_FIELD(t_AngularAzEl, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularAzEl__methods_[] = {
          DECLARE_METHOD(t_AngularAzEl, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularAzEl, getObservedLineOfSight, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularAzEl)[] = {
          { Py_tp_methods, t_AngularAzEl__methods_ },
          { Py_tp_init, (void *) t_AngularAzEl_init_ },
          { Py_tp_getset, t_AngularAzEl__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularAzEl)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularAzEl, t_AngularAzEl, AngularAzEl);
        PyObject *t_AngularAzEl::wrap_Object(const AngularAzEl& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularAzEl::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularAzEl::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularAzEl), &PY_TYPE_DEF(AngularAzEl), module, "AngularAzEl", 0);
        }

        void t_AngularAzEl::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "class_", make_descriptor(AngularAzEl::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "wrapfn_", make_descriptor(t_AngularAzEl::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularAzEl::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularAzEl::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularAzEl::initializeClass, 1)))
            return NULL;
          return t_AngularAzEl::wrap_Object(AngularAzEl(((t_AngularAzEl *) arg)->object.this$));
        }
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularAzEl::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
          AngularAzEl object((jobject) NULL);

          if (!parseArgs(args, "kk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = AngularAzEl(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *OrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *OrdinaryDifferentialEquation::mids$ = NULL;
      bool OrdinaryDifferentialEquation::live$ = false;

      jclass OrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/OrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_31b9a2982d73e37a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_471b6a7f7f53205a] = env->getMethodID(cls, "init", "(D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > OrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31b9a2982d73e37a], a0, a1.this$));
      }

      jint OrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void OrdinaryDifferentialEquation::init(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_471b6a7f7f53205a], a0, a1.this$, a2);
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
      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self);
      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_OrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_OrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_OrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrdinaryDifferentialEquation, t_OrdinaryDifferentialEquation, OrdinaryDifferentialEquation);

      void t_OrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(OrdinaryDifferentialEquation), &PY_TYPE_DEF(OrdinaryDifferentialEquation), module, "OrdinaryDifferentialEquation", 0);
      }

      void t_OrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "class_", make_descriptor(OrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_OrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_OrdinaryDifferentialEquation::wrap_Object(OrdinaryDifferentialEquation(((t_OrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args)
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

      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHIJjsPolynomials::class$ = NULL;
            jmethodID *FieldGHIJjsPolynomials::mids$ = NULL;
            bool FieldGHIJjsPolynomials::live$ = false;

            jclass FieldGHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_56d3d4aaadd7d7a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGjs_f548ed78c2486137] = env->getMethodID(cls, "getGjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHjs_f548ed78c2486137] = env->getMethodID(cls, "getHjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getIjs_f548ed78c2486137] = env->getMethodID(cls, "getIjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getJjs_f548ed78c2486137] = env->getMethodID(cls, "getJjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdAlpha_f548ed78c2486137] = env->getMethodID(cls, "getdGjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdBeta_f548ed78c2486137] = env->getMethodID(cls, "getdGjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdh_f548ed78c2486137] = env->getMethodID(cls, "getdGjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdk_f548ed78c2486137] = env->getMethodID(cls, "getdGjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdAlpha_f548ed78c2486137] = env->getMethodID(cls, "getdHjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdBeta_f548ed78c2486137] = env->getMethodID(cls, "getdHjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdh_f548ed78c2486137] = env->getMethodID(cls, "getdHjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdk_f548ed78c2486137] = env->getMethodID(cls, "getdHjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdAlpha_f548ed78c2486137] = env->getMethodID(cls, "getdIjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdBeta_f548ed78c2486137] = env->getMethodID(cls, "getdIjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdh_f548ed78c2486137] = env->getMethodID(cls, "getdIjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdk_f548ed78c2486137] = env->getMethodID(cls, "getdIjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdAlpha_f548ed78c2486137] = env->getMethodID(cls, "getdJjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdBeta_f548ed78c2486137] = env->getMethodID(cls, "getdJjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdh_f548ed78c2486137] = env->getMethodID(cls, "getdJjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdk_f548ed78c2486137] = env->getMethodID(cls, "getdJjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHIJjsPolynomials::FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56d3d4aaadd7d7a1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGjs_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHjs_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIjs_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getJjs_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdAlpha_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdBeta_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdh_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdk_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdAlpha_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdBeta_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdh_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdk_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdAlpha_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdBeta_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdh_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdk_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdAlpha_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdBeta_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdh_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdk_f548ed78c2486137], a0, a1));
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
            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHIJjsPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHIJjsPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHIJjsPolynomials)[] = {
              { Py_tp_methods, t_FieldGHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHIJjsPolynomials_init_ },
              { Py_tp_getset, t_FieldGHIJjsPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHIJjsPolynomials, t_FieldGHIJjsPolynomials, FieldGHIJjsPolynomials);
            PyObject *t_FieldGHIJjsPolynomials::wrap_Object(const FieldGHIJjsPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHIJjsPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHIJjsPolynomials), &PY_TYPE_DEF(FieldGHIJjsPolynomials), module, "FieldGHIJjsPolynomials", 0);
            }

            void t_FieldGHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "class_", make_descriptor(FieldGHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "wrapfn_", make_descriptor(t_FieldGHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHIJjsPolynomials::wrap_Object(FieldGHIJjsPolynomials(((t_FieldGHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmData::class$ = NULL;
              jmethodID *SsrIgmData::mids$ = NULL;
              bool SsrIgmData::live$ = false;

              jclass SsrIgmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmData::SsrIgmData() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIgmData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_412668abc8d889e9]);
              }

              void SsrIgmData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_a3da1a935cb37f7b], a0);
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
              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self);
              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg);
              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data);
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmData__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmData__methods_[] = {
                DECLARE_METHOD(t_SsrIgmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmData)[] = {
                { Py_tp_methods, t_SsrIgmData__methods_ },
                { Py_tp_init, (void *) t_SsrIgmData_init_ },
                { Py_tp_getset, t_SsrIgmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIgmData, t_SsrIgmData, SsrIgmData);

              void t_SsrIgmData::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmData), &PY_TYPE_DEF(SsrIgmData), module, "SsrIgmData", 0);
              }

              void t_SsrIgmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "class_", make_descriptor(SsrIgmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "wrapfn_", make_descriptor(t_SsrIgmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmData::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmData::wrap_Object(SsrIgmData(((t_SsrIgmData *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmData object((jobject) NULL);

                INT_CALL(object = SsrIgmData());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg)
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

              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadataKey::class$ = NULL;
              jmethodID *OemMetadataKey::mids$ = NULL;
              bool OemMetadataKey::live$ = false;
              OemMetadataKey *OemMetadataKey::INTERPOLATION = NULL;
              OemMetadataKey *OemMetadataKey::INTERPOLATION_DEGREE = NULL;
              OemMetadataKey *OemMetadataKey::START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::STOP_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass OemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_df2b97ff24c24174] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)Z");
                  mids$[mid_valueOf_bd75aa6bfe6a9156] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");
                  mids$[mid_values_28a5ad9cbe987c84] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  INTERPOLATION = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  INTERPOLATION_DEGREE = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_df2b97ff24c24174], a0.this$, a1.this$, a2.this$);
              }

              OemMetadataKey OemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bd75aa6bfe6a9156], a0.this$));
              }

              JArray< OemMetadataKey > OemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_28a5ad9cbe987c84]));
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
              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data);
              static PyGetSetDef t_OemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadataKey)[] = {
                { Py_tp_methods, t_OemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OemMetadataKey, t_OemMetadataKey, OemMetadataKey);
              PyObject *t_OemMetadataKey::wrap_Object(const OemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadataKey), &PY_TYPE_DEF(OemMetadataKey), module, "OemMetadataKey", 0);
              }

              void t_OemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "class_", make_descriptor(OemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "wrapfn_", make_descriptor(t_OemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OemMetadataKey::wrap_Object(OemMetadataKey(((t_OemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::valueOf(a0));
                  return t_OemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OemMetadataKey_values(PyTypeObject *type)
              {
                JArray< OemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OemMetadataKey::wrap_jobject);
              }
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *MultivariateJacobianFunction::class$ = NULL;
            jmethodID *MultivariateJacobianFunction::mids$ = NULL;
            bool MultivariateJacobianFunction::live$ = false;

            jclass MultivariateJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_value_77538fd880505017] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::util::Pair MultivariateJacobianFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_77538fd880505017], a0.this$));
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
            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_MultivariateJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_MultivariateJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultivariateJacobianFunction)[] = {
              { Py_tp_methods, t_MultivariateJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultivariateJacobianFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MultivariateJacobianFunction, t_MultivariateJacobianFunction, MultivariateJacobianFunction);

            void t_MultivariateJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(MultivariateJacobianFunction), &PY_TYPE_DEF(MultivariateJacobianFunction), module, "MultivariateJacobianFunction", 0);
            }

            void t_MultivariateJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "class_", make_descriptor(MultivariateJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "wrapfn_", make_descriptor(t_MultivariateJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultivariateJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_MultivariateJacobianFunction::wrap_Object(MultivariateJacobianFunction(((t_MultivariateJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultivariateJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *RealDistribution::class$ = NULL;
      jmethodID *RealDistribution::mids$ = NULL;
      bool RealDistribution::live$ = false;

      jclass RealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/RealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
          mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
          mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
          mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
          mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
          mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");
          mids$[mid_probability_2268d18be49a6087] = env->getMethodID(cls, "probability", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealDistribution::cumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
      }

      jdouble RealDistribution::density(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
      }

      jdouble RealDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
      }

      jdouble RealDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
      }

      jdouble RealDistribution::getSupportLowerBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
      }

      jdouble RealDistribution::getSupportUpperBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
      }

      jdouble RealDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
      }

      jboolean RealDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
      }

      jdouble RealDistribution::logDensity(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
      }

      jdouble RealDistribution::probability(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_2268d18be49a6087], a0, a1);
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
      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self);
      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args);
      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data);
      static PyGetSetDef t_RealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_RealDistribution, numericalMean),
        DECLARE_GET_FIELD(t_RealDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_RealDistribution, supportConnected),
        DECLARE_GET_FIELD(t_RealDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_RealDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealDistribution__methods_[] = {
        DECLARE_METHOD(t_RealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, density, METH_O),
        DECLARE_METHOD(t_RealDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, logDensity, METH_O),
        DECLARE_METHOD(t_RealDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealDistribution)[] = {
        { Py_tp_methods, t_RealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealDistribution, t_RealDistribution, RealDistribution);

      void t_RealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(RealDistribution), &PY_TYPE_DEF(RealDistribution), module, "RealDistribution", 0);
      }

      void t_RealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "class_", make_descriptor(RealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "wrapfn_", make_descriptor(t_RealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealDistribution::initializeClass, 1)))
          return NULL;
        return t_RealDistribution::wrap_Object(RealDistribution(((t_RealDistribution *) arg)->object.this$));
      }
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg)
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

      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg)
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

      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args)
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

      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonIAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonIAUPole::class$ = NULL;
      jmethodID *PythonIAUPole::mids$ = NULL;
      bool PythonIAUPole::live$ = false;

      jclass PythonIAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonIAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getNode_3df461fe15362b2b] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_3343973a86caeaa4] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_3df461fe15362b2b] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_3343973a86caeaa4] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_b0b988f941da47d8] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_b884068a2c99f6ca] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonIAUPole::PythonIAUPole() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonIAUPole::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonIAUPole::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonIAUPole::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self);
      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args);
      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data);
      static PyGetSetDef t_PythonIAUPole__fields_[] = {
        DECLARE_GET_FIELD(t_PythonIAUPole, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonIAUPole__methods_[] = {
        DECLARE_METHOD(t_PythonIAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonIAUPole, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonIAUPole)[] = {
        { Py_tp_methods, t_PythonIAUPole__methods_ },
        { Py_tp_init, (void *) t_PythonIAUPole_init_ },
        { Py_tp_getset, t_PythonIAUPole__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonIAUPole)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonIAUPole, t_PythonIAUPole, PythonIAUPole);

      void t_PythonIAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonIAUPole), &PY_TYPE_DEF(PythonIAUPole), module, "PythonIAUPole", 1);
      }

      void t_PythonIAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "class_", make_descriptor(PythonIAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "wrapfn_", make_descriptor(t_PythonIAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonIAUPole::initializeClass);
        JNINativeMethod methods[] = {
          { "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getNode0 },
          { "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getNode1 },
          { "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getPole2 },
          { "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getPole3 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonIAUPole_getPrimeMeridianAngle4 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIAUPole_getPrimeMeridianAngle5 },
          { "pythonDecRef", "()V", (void *) t_PythonIAUPole_pythonDecRef6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonIAUPole::initializeClass, 1)))
          return NULL;
        return t_PythonIAUPole::wrap_Object(PythonIAUPole(((t_PythonIAUPole *) arg)->object.this$));
      }
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonIAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds)
      {
        PythonIAUPole object((jobject) NULL);

        INT_CALL(object = PythonIAUPole());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args)
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

      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
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

      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data)
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
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collection::class$ = NULL;
    jmethodID *Collection::mids$ = NULL;
    bool Collection::live$ = false;

    jclass Collection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_parallelStream_d7cce92225eb0db2] = env->getMethodID(cls, "parallelStream", "()Ljava/util/stream/Stream;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_stream_d7cce92225eb0db2] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean Collection::addAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    void Collection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean Collection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean Collection::containsAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean Collection::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint Collection::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Collection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator Collection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    ::java::util::stream::Stream Collection::parallelStream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_parallelStream_d7cce92225eb0db2]));
    }

    jboolean Collection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean Collection::removeAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean Collection::retainAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    jint Collection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Spliterator Collection::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    ::java::util::stream::Stream Collection::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_d7cce92225eb0db2]));
    }

    JArray< ::java::lang::Object > Collection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > Collection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_clear(t_Collection *self);
    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_hashCode(t_Collection *self);
    static PyObject *t_Collection_isEmpty(t_Collection *self);
    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_parallelStream(t_Collection *self);
    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_size(t_Collection *self);
    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_stream(t_Collection *self);
    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_get__empty(t_Collection *self, void *data);
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data);
    static PyGetSetDef t_Collection__fields_[] = {
      DECLARE_GET_FIELD(t_Collection, empty),
      DECLARE_GET_FIELD(t_Collection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Collection__methods_[] = {
      DECLARE_METHOD(t_Collection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, of_, METH_VARARGS),
      DECLARE_METHOD(t_Collection, add, METH_O),
      DECLARE_METHOD(t_Collection, addAll, METH_O),
      DECLARE_METHOD(t_Collection, clear, METH_NOARGS),
      DECLARE_METHOD(t_Collection, contains, METH_O),
      DECLARE_METHOD(t_Collection, containsAll, METH_O),
      DECLARE_METHOD(t_Collection, equals, METH_O),
      DECLARE_METHOD(t_Collection, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Collection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Collection, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, parallelStream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, remove, METH_O),
      DECLARE_METHOD(t_Collection, removeAll, METH_O),
      DECLARE_METHOD(t_Collection, retainAll, METH_O),
      DECLARE_METHOD(t_Collection, size, METH_NOARGS),
      DECLARE_METHOD(t_Collection, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, stream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collection)[] = {
      { Py_tp_methods, t_Collection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Collection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Collection *)) get_generic_iterator< t_Collection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collection)[] = {
      &PY_TYPE_DEF(::java::lang::Iterable),
      NULL
    };

    DEFINE_TYPE(Collection, t_Collection, Collection);
    PyObject *t_Collection::wrap_Object(const Collection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Collection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Collection::install(PyObject *module)
    {
      installType(&PY_TYPE(Collection), &PY_TYPE_DEF(Collection), module, "Collection", 0);
    }

    void t_Collection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "class_", make_descriptor(Collection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "wrapfn_", make_descriptor(t_Collection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collection::initializeClass, 1)))
        return NULL;
      return t_Collection::wrap_Object(Collection(((t_Collection *) arg)->object.this$));
    }
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg)
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

    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_clear(t_Collection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg)
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

    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Collection_hashCode(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_isEmpty(t_Collection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Collection_parallelStream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.parallelStream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg)
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

    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_size(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Collection_stream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args)
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
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Collection_get__empty(t_Collection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimplePointChecker::class$ = NULL;
      jmethodID *SimplePointChecker::mids$ = NULL;
      bool SimplePointChecker::live$ = false;

      jclass SimplePointChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimplePointChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_ca0d344f89e25c9c] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/util/Pair;Lorg/hipparchus/util/Pair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

      jboolean SimplePointChecker::converged(jint a0, const ::org::hipparchus::util::Pair & a1, const ::org::hipparchus::util::Pair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_ca0d344f89e25c9c], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args);
      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args);
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data);
      static PyGetSetDef t_SimplePointChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimplePointChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimplePointChecker__methods_[] = {
        DECLARE_METHOD(t_SimplePointChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimplePointChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimplePointChecker)[] = {
        { Py_tp_methods, t_SimplePointChecker__methods_ },
        { Py_tp_init, (void *) t_SimplePointChecker_init_ },
        { Py_tp_getset, t_SimplePointChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimplePointChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimplePointChecker, t_SimplePointChecker, SimplePointChecker);
      PyObject *t_SimplePointChecker::wrap_Object(const SimplePointChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimplePointChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimplePointChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimplePointChecker), &PY_TYPE_DEF(SimplePointChecker), module, "SimplePointChecker", 0);
      }

      void t_SimplePointChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "class_", make_descriptor(SimplePointChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "wrapfn_", make_descriptor(t_SimplePointChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimplePointChecker::initializeClass, 1)))
          return NULL;
        return t_SimplePointChecker::wrap_Object(SimplePointChecker(((t_SimplePointChecker *) arg)->object.this$));
      }
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimplePointChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimplePointChecker(a0, a1));
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
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimplePointChecker(a0, a1, a2));
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

      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::util::Pair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::util::Pair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::util::Pair::initializeClass, ::org::hipparchus::util::Pair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_Pair::parameters_, &a2, &p2, ::org::hipparchus::util::t_Pair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimplePointChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_00d4758be4cee3ce] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldAbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_00d4758be4cee3ce], a0.this$));
        }

        void FieldAbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator$MainStateEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations, t_FieldAbstractIntegratedPropagator$MainStateEquations, FieldAbstractIntegratedPropagator$MainStateEquations);
        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations), module, "FieldAbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(FieldAbstractIntegratedPropagator$MainStateEquations(((t_FieldAbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$RangeType::class$ = NULL;
        jmethodID *CRDHeader$RangeType::mids$ = NULL;
        bool CRDHeader$RangeType::live$ = false;
        CRDHeader$RangeType *CRDHeader$RangeType::MIXED = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::NO_RANGES = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::ONE_WAY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::RECEIVED_ONLY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::TWO_WAY = NULL;

        jclass CRDHeader$RangeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$RangeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIndicator_412668abc8d889e9] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_getRangeType_4f0ee7a11f73e977] = env->getStaticMethodID(cls, "getRangeType", "(I)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_valueOf_b9cfb4ec7fd39d44] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_values_7e043290873ddbdb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$RangeType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIXED = new CRDHeader$RangeType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            NO_RANGES = new CRDHeader$RangeType(env->getStaticObjectField(cls, "NO_RANGES", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            ONE_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            RECEIVED_ONLY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "RECEIVED_ONLY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            TWO_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "TWO_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint CRDHeader$RangeType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_412668abc8d889e9]);
        }

        CRDHeader$RangeType CRDHeader$RangeType::getRangeType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_getRangeType_4f0ee7a11f73e977], a0));
        }

        CRDHeader$RangeType CRDHeader$RangeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b9cfb4ec7fd39d44], a0.this$));
        }

        JArray< CRDHeader$RangeType > CRDHeader$RangeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$RangeType >(env->callStaticObjectMethod(cls, mids$[mid_values_7e043290873ddbdb]));
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
        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self);
        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data);
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data);
        static PyGetSetDef t_CRDHeader$RangeType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$RangeType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$RangeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getRangeType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$RangeType)[] = {
          { Py_tp_methods, t_CRDHeader$RangeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$RangeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$RangeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$RangeType, t_CRDHeader$RangeType, CRDHeader$RangeType);
        PyObject *t_CRDHeader$RangeType::wrap_Object(const CRDHeader$RangeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$RangeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$RangeType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$RangeType), &PY_TYPE_DEF(CRDHeader$RangeType), module, "CRDHeader$RangeType", 0);
        }

        void t_CRDHeader$RangeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "class_", make_descriptor(CRDHeader$RangeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "wrapfn_", make_descriptor(t_CRDHeader$RangeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$RangeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "MIXED", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "NO_RANGES", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::NO_RANGES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "ONE_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::ONE_WAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "RECEIVED_ONLY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::RECEIVED_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "TWO_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::TWO_WAY)));
        }

        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$RangeType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$RangeType::wrap_Object(CRDHeader$RangeType(((t_CRDHeader$RangeType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$RangeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::getRangeType(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::valueOf(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$RangeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$RangeType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/UniformRealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *UniformRealDistribution::class$ = NULL;
        jmethodID *UniformRealDistribution::mids$ = NULL;
        bool UniformRealDistribution::live$ = false;

        jclass UniformRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/UniformRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformRealDistribution::UniformRealDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        UniformRealDistribution::UniformRealDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble UniformRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble UniformRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble UniformRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble UniformRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble UniformRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble UniformRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble UniformRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean UniformRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data);
        static PyGetSetDef t_UniformRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformRealDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformRealDistribution)[] = {
          { Py_tp_methods, t_UniformRealDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformRealDistribution_init_ },
          { Py_tp_getset, t_UniformRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(UniformRealDistribution, t_UniformRealDistribution, UniformRealDistribution);

        void t_UniformRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformRealDistribution), &PY_TYPE_DEF(UniformRealDistribution), module, "UniformRealDistribution", 0);
        }

        void t_UniformRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "class_", make_descriptor(UniformRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "wrapfn_", make_descriptor(t_UniformRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformRealDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformRealDistribution::wrap_Object(UniformRealDistribution(((t_UniformRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              UniformRealDistribution object((jobject) NULL);

              INT_CALL(object = UniformRealDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UniformRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UniformRealDistribution(a0, a1));
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

        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/lang/Double.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Unit::class$ = NULL;
        jmethodID *Unit::mids$ = NULL;
        bool Unit::live$ = false;
        Unit *Unit::AMPERE = NULL;
        Unit *Unit::ARC_MINUTE = NULL;
        Unit *Unit::ARC_SECOND = NULL;
        Unit *Unit::BAR = NULL;
        Unit *Unit::COULOMB = NULL;
        Unit *Unit::DAY = NULL;
        Unit *Unit::DEGREE = NULL;
        Unit *Unit::EARTH_RADII = NULL;
        Unit *Unit::GRAM = NULL;
        Unit *Unit::HERTZ = NULL;
        Unit *Unit::HOUR = NULL;
        Unit *Unit::JOULE = NULL;
        Unit *Unit::KILOGRAM = NULL;
        Unit *Unit::KILOMETRE = NULL;
        Unit *Unit::METRE = NULL;
        Unit *Unit::MINUTE = NULL;
        Unit *Unit::NEWTON = NULL;
        Unit *Unit::NONE = NULL;
        Unit *Unit::OHM = NULL;
        Unit *Unit::ONE = NULL;
        Unit *Unit::PASCAL = NULL;
        Unit *Unit::PERCENT = NULL;
        Unit *Unit::RADIAN = NULL;
        Unit *Unit::REVOLUTION = NULL;
        Unit *Unit::SECOND = NULL;
        Unit *Unit::SOLAR_FLUX_UNIT = NULL;
        Unit *Unit::TESLA = NULL;
        Unit *Unit::TOTAL_ELECTRON_CONTENT_UNIT = NULL;
        Unit *Unit::VOLT = NULL;
        Unit *Unit::WATT = NULL;
        Unit *Unit::YEAR = NULL;

        jclass Unit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Unit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b16b3ca24ef84a46] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;)V");
            mids$[mid_alias_6064fb71696445b4] = env->getMethodID(cls, "alias", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_divide_b7cb09052488414f] = env->getMethodID(cls, "divide", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_ensureCompatible_b97989e6df290f92] = env->getStaticMethodID(cls, "ensureCompatible", "(Ljava/lang/String;Ljava/util/List;ZLjava/util/List;)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_fromSI_7bf26ec4ddf8c9fa] = env->getMethodID(cls, "fromSI", "(Ljava/lang/Double;)D");
            mids$[mid_fromSI_7e960cd6eee376d8] = env->getMethodID(cls, "fromSI", "(D)D");
            mids$[mid_getAngle_78ed58163a805805] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getCurrent_78ed58163a805805] = env->getMethodID(cls, "getCurrent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getLength_78ed58163a805805] = env->getMethodID(cls, "getLength", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getMass_78ed58163a805805] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getTime_78ed58163a805805] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_multiply_b7cb09052488414f] = env->getMethodID(cls, "multiply", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_parse_6064fb71696445b4] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_power_83fc4153c8f1d423] = env->getMethodID(cls, "power", "(Ljava/lang/String;Lorg/hipparchus/fraction/Fraction;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sameDimension_3afc691233085be6] = env->getMethodID(cls, "sameDimension", "(Lorg/orekit/utils/units/Unit;)Z");
            mids$[mid_sameDimensionSI_3267fc1a8500bfc2] = env->getMethodID(cls, "sameDimensionSI", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_scale_29d901a5b3134e99] = env->getMethodID(cls, "scale", "(Ljava/lang/String;D)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sqrt_6064fb71696445b4] = env->getMethodID(cls, "sqrt", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_toSI_7bf26ec4ddf8c9fa] = env->getMethodID(cls, "toSI", "(Ljava/lang/Double;)D");
            mids$[mid_toSI_7e960cd6eee376d8] = env->getMethodID(cls, "toSI", "(D)D");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AMPERE = new Unit(env->getStaticObjectField(cls, "AMPERE", "Lorg/orekit/utils/units/Unit;"));
            ARC_MINUTE = new Unit(env->getStaticObjectField(cls, "ARC_MINUTE", "Lorg/orekit/utils/units/Unit;"));
            ARC_SECOND = new Unit(env->getStaticObjectField(cls, "ARC_SECOND", "Lorg/orekit/utils/units/Unit;"));
            BAR = new Unit(env->getStaticObjectField(cls, "BAR", "Lorg/orekit/utils/units/Unit;"));
            COULOMB = new Unit(env->getStaticObjectField(cls, "COULOMB", "Lorg/orekit/utils/units/Unit;"));
            DAY = new Unit(env->getStaticObjectField(cls, "DAY", "Lorg/orekit/utils/units/Unit;"));
            DEGREE = new Unit(env->getStaticObjectField(cls, "DEGREE", "Lorg/orekit/utils/units/Unit;"));
            EARTH_RADII = new Unit(env->getStaticObjectField(cls, "EARTH_RADII", "Lorg/orekit/utils/units/Unit;"));
            GRAM = new Unit(env->getStaticObjectField(cls, "GRAM", "Lorg/orekit/utils/units/Unit;"));
            HERTZ = new Unit(env->getStaticObjectField(cls, "HERTZ", "Lorg/orekit/utils/units/Unit;"));
            HOUR = new Unit(env->getStaticObjectField(cls, "HOUR", "Lorg/orekit/utils/units/Unit;"));
            JOULE = new Unit(env->getStaticObjectField(cls, "JOULE", "Lorg/orekit/utils/units/Unit;"));
            KILOGRAM = new Unit(env->getStaticObjectField(cls, "KILOGRAM", "Lorg/orekit/utils/units/Unit;"));
            KILOMETRE = new Unit(env->getStaticObjectField(cls, "KILOMETRE", "Lorg/orekit/utils/units/Unit;"));
            METRE = new Unit(env->getStaticObjectField(cls, "METRE", "Lorg/orekit/utils/units/Unit;"));
            MINUTE = new Unit(env->getStaticObjectField(cls, "MINUTE", "Lorg/orekit/utils/units/Unit;"));
            NEWTON = new Unit(env->getStaticObjectField(cls, "NEWTON", "Lorg/orekit/utils/units/Unit;"));
            NONE = new Unit(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/utils/units/Unit;"));
            OHM = new Unit(env->getStaticObjectField(cls, "OHM", "Lorg/orekit/utils/units/Unit;"));
            ONE = new Unit(env->getStaticObjectField(cls, "ONE", "Lorg/orekit/utils/units/Unit;"));
            PASCAL = new Unit(env->getStaticObjectField(cls, "PASCAL", "Lorg/orekit/utils/units/Unit;"));
            PERCENT = new Unit(env->getStaticObjectField(cls, "PERCENT", "Lorg/orekit/utils/units/Unit;"));
            RADIAN = new Unit(env->getStaticObjectField(cls, "RADIAN", "Lorg/orekit/utils/units/Unit;"));
            REVOLUTION = new Unit(env->getStaticObjectField(cls, "REVOLUTION", "Lorg/orekit/utils/units/Unit;"));
            SECOND = new Unit(env->getStaticObjectField(cls, "SECOND", "Lorg/orekit/utils/units/Unit;"));
            SOLAR_FLUX_UNIT = new Unit(env->getStaticObjectField(cls, "SOLAR_FLUX_UNIT", "Lorg/orekit/utils/units/Unit;"));
            TESLA = new Unit(env->getStaticObjectField(cls, "TESLA", "Lorg/orekit/utils/units/Unit;"));
            TOTAL_ELECTRON_CONTENT_UNIT = new Unit(env->getStaticObjectField(cls, "TOTAL_ELECTRON_CONTENT_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VOLT = new Unit(env->getStaticObjectField(cls, "VOLT", "Lorg/orekit/utils/units/Unit;"));
            WATT = new Unit(env->getStaticObjectField(cls, "WATT", "Lorg/orekit/utils/units/Unit;"));
            YEAR = new Unit(env->getStaticObjectField(cls, "YEAR", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Unit::Unit(const ::java::lang::String & a0, jdouble a1, const ::org::hipparchus::fraction::Fraction & a2, const ::org::hipparchus::fraction::Fraction & a3, const ::org::hipparchus::fraction::Fraction & a4, const ::org::hipparchus::fraction::Fraction & a5, const ::org::hipparchus::fraction::Fraction & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b16b3ca24ef84a46, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        Unit Unit::alias(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_alias_6064fb71696445b4], a0.this$));
        }

        Unit Unit::divide(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_divide_b7cb09052488414f], a0.this$, a1.this$));
        }

        void Unit::ensureCompatible(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2, const ::java::util::List & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_ensureCompatible_b97989e6df290f92], a0.this$, a1.this$, a2, a3.this$);
        }

        jboolean Unit::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        jdouble Unit::fromSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_7bf26ec4ddf8c9fa], a0.this$);
        }

        jdouble Unit::fromSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::fraction::Fraction Unit::getAngle() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getAngle_78ed58163a805805]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getCurrent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getCurrent_78ed58163a805805]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getLength() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getLength_78ed58163a805805]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getMass() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getMass_78ed58163a805805]));
        }

        ::java::lang::String Unit::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        jdouble Unit::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        ::org::hipparchus::fraction::Fraction Unit::getTime() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getTime_78ed58163a805805]));
        }

        jint Unit::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        Unit Unit::multiply(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_multiply_b7cb09052488414f], a0.this$, a1.this$));
        }

        Unit Unit::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Unit(env->callStaticObjectMethod(cls, mids$[mid_parse_6064fb71696445b4], a0.this$));
        }

        Unit Unit::power(const ::java::lang::String & a0, const ::org::hipparchus::fraction::Fraction & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_power_83fc4153c8f1d423], a0.this$, a1.this$));
        }

        jboolean Unit::sameDimension(const Unit & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameDimension_3afc691233085be6], a0.this$);
        }

        Unit Unit::sameDimensionSI() const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sameDimensionSI_3267fc1a8500bfc2]));
        }

        Unit Unit::scale(const ::java::lang::String & a0, jdouble a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_scale_29d901a5b3134e99], a0.this$, a1));
        }

        Unit Unit::sqrt(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sqrt_6064fb71696445b4], a0.this$));
        }

        jdouble Unit::toSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_7bf26ec4ddf8c9fa], a0.this$);
        }

        jdouble Unit::toSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_7e960cd6eee376d8], a0);
        }

        ::java::lang::String Unit::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args);
        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_getAngle(t_Unit *self);
        static PyObject *t_Unit_getCurrent(t_Unit *self);
        static PyObject *t_Unit_getLength(t_Unit *self);
        static PyObject *t_Unit_getMass(t_Unit *self);
        static PyObject *t_Unit_getName(t_Unit *self);
        static PyObject *t_Unit_getScale(t_Unit *self);
        static PyObject *t_Unit_getTime(t_Unit *self);
        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_power(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_sameDimensionSI(t_Unit *self);
        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_get__angle(t_Unit *self, void *data);
        static PyObject *t_Unit_get__current(t_Unit *self, void *data);
        static PyObject *t_Unit_get__length(t_Unit *self, void *data);
        static PyObject *t_Unit_get__mass(t_Unit *self, void *data);
        static PyObject *t_Unit_get__name(t_Unit *self, void *data);
        static PyObject *t_Unit_get__time(t_Unit *self, void *data);
        static PyGetSetDef t_Unit__fields_[] = {
          DECLARE_GET_FIELD(t_Unit, angle),
          DECLARE_GET_FIELD(t_Unit, current),
          DECLARE_GET_FIELD(t_Unit, length),
          DECLARE_GET_FIELD(t_Unit, mass),
          DECLARE_GET_FIELD(t_Unit, name),
          DECLARE_GET_FIELD(t_Unit, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Unit__methods_[] = {
          DECLARE_METHOD(t_Unit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, alias, METH_O),
          DECLARE_METHOD(t_Unit, divide, METH_VARARGS),
          DECLARE_METHOD(t_Unit, ensureCompatible, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Unit, equals, METH_VARARGS),
          DECLARE_METHOD(t_Unit, fromSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getCurrent, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getLength, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getMass, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getName, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getScale, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Unit, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Unit, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Unit, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, power, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sameDimension, METH_O),
          DECLARE_METHOD(t_Unit, sameDimensionSI, METH_NOARGS),
          DECLARE_METHOD(t_Unit, scale, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sqrt, METH_O),
          DECLARE_METHOD(t_Unit, toSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Unit)[] = {
          { Py_tp_methods, t_Unit__methods_ },
          { Py_tp_init, (void *) t_Unit_init_ },
          { Py_tp_getset, t_Unit__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Unit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Unit, t_Unit, Unit);

        void t_Unit::install(PyObject *module)
        {
          installType(&PY_TYPE(Unit), &PY_TYPE_DEF(Unit), module, "Unit", 0);
        }

        void t_Unit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "class_", make_descriptor(Unit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "wrapfn_", make_descriptor(t_Unit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "boxfn_", make_descriptor(boxObject));
          env->getClass(Unit::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "AMPERE", make_descriptor(t_Unit::wrap_Object(*Unit::AMPERE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "BAR", make_descriptor(t_Unit::wrap_Object(*Unit::BAR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "COULOMB", make_descriptor(t_Unit::wrap_Object(*Unit::COULOMB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DAY", make_descriptor(t_Unit::wrap_Object(*Unit::DAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DEGREE", make_descriptor(t_Unit::wrap_Object(*Unit::DEGREE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "EARTH_RADII", make_descriptor(t_Unit::wrap_Object(*Unit::EARTH_RADII)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "GRAM", make_descriptor(t_Unit::wrap_Object(*Unit::GRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HERTZ", make_descriptor(t_Unit::wrap_Object(*Unit::HERTZ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HOUR", make_descriptor(t_Unit::wrap_Object(*Unit::HOUR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "JOULE", make_descriptor(t_Unit::wrap_Object(*Unit::JOULE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOGRAM", make_descriptor(t_Unit::wrap_Object(*Unit::KILOGRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOMETRE", make_descriptor(t_Unit::wrap_Object(*Unit::KILOMETRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "METRE", make_descriptor(t_Unit::wrap_Object(*Unit::METRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NEWTON", make_descriptor(t_Unit::wrap_Object(*Unit::NEWTON)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NONE", make_descriptor(t_Unit::wrap_Object(*Unit::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "OHM", make_descriptor(t_Unit::wrap_Object(*Unit::OHM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ONE", make_descriptor(t_Unit::wrap_Object(*Unit::ONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PASCAL", make_descriptor(t_Unit::wrap_Object(*Unit::PASCAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PERCENT", make_descriptor(t_Unit::wrap_Object(*Unit::PERCENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "RADIAN", make_descriptor(t_Unit::wrap_Object(*Unit::RADIAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "REVOLUTION", make_descriptor(t_Unit::wrap_Object(*Unit::REVOLUTION)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SOLAR_FLUX_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::SOLAR_FLUX_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TESLA", make_descriptor(t_Unit::wrap_Object(*Unit::TESLA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TOTAL_ELECTRON_CONTENT_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::TOTAL_ELECTRON_CONTENT_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "VOLT", make_descriptor(t_Unit::wrap_Object(*Unit::VOLT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "WATT", make_descriptor(t_Unit::wrap_Object(*Unit::WATT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "YEAR", make_descriptor(t_Unit::wrap_Object(*Unit::YEAR)));
        }

        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Unit::initializeClass, 1)))
            return NULL;
          return t_Unit::wrap_Object(Unit(((t_Unit *) arg)->object.this$));
        }
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Unit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::fraction::Fraction a2((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a3((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a4((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a5((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a6((jobject) NULL);
          Unit object((jobject) NULL);

          if (!parseArgs(args, "sDkkkkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Unit(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.alias(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "alias", arg);
          return NULL;
        }

        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.divide(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::java::util::List a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "sKZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::utils::units::Unit::ensureCompatible(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "ensureCompatible", args);
          return NULL;
        }

        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fromSI", args);
          return NULL;
        }

        static PyObject *t_Unit_getAngle(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getCurrent(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getLength(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getMass(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getName(t_Unit *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Unit_getScale(t_Unit *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Unit_getTime(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.multiply(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Unit::parse(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_Unit_power(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.power(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "power", args);
          return NULL;
        }

        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg)
        {
          Unit a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", Unit::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.sameDimension(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameDimension", arg);
          return NULL;
        }

        static PyObject *t_Unit_sameDimensionSI(t_Unit *self)
        {
          Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.sameDimensionSI());
          return t_Unit::wrap_Object(result);
        }

        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.scale(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scale", args);
          return NULL;
        }

        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.sqrt(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", arg);
          return NULL;
        }

        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "toSI", args);
          return NULL;
        }

        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Unit_get__angle(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__current(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__length(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__mass(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__name(t_Unit *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Unit_get__time(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser.h"
#include "java/lang/String.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser::class$ = NULL;
      jmethodID *PolynomialParser::mids$ = NULL;
      bool PolynomialParser::live$ = false;

      jclass PolynomialParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_58f3608d064fd165] = env->getMethodID(cls, "<init>", "(CLorg/orekit/data/PolynomialParser$Unit;)V");
          mids$[mid_parse_008e0cff49b0ec83] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialParser::PolynomialParser(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_58f3608d064fd165, a0, a1.this$)) {}

      JArray< jdouble > PolynomialParser::parse(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_parse_008e0cff49b0ec83], a0.this$));
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
      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg);

      static PyMethodDef t_PolynomialParser__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, parse, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser)[] = {
        { Py_tp_methods, t_PolynomialParser__methods_ },
        { Py_tp_init, (void *) t_PolynomialParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialParser, t_PolynomialParser, PolynomialParser);

      void t_PolynomialParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser), &PY_TYPE_DEF(PolynomialParser), module, "PolynomialParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "Unit", make_descriptor(&PY_TYPE_DEF(PolynomialParser$Unit)));
      }

      void t_PolynomialParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "class_", make_descriptor(PolynomialParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "wrapfn_", make_descriptor(t_PolynomialParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser::wrap_Object(PolynomialParser(((t_PolynomialParser *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PolynomialParser object((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          INT_CALL(object = PolynomialParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.parse(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "parse", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersKey::class$ = NULL;
            jmethodID *AdditionalParametersKey::mids$ = NULL;
            bool AdditionalParametersKey::live$ = false;
            AdditionalParametersKey *AdditionalParametersKey::APOAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_DRG = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_SRP = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CD_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COMMENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE_METHOD = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CR_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::HBR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::INCLINATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q1 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q2 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q3 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_QC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::PERIAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::REFLECTANCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::SEDR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::THRUST_ACCELERATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_ABSOLUTE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MIN = NULL;

            jclass AdditionalParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_4dded83b8b2e78c2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)Z");
                mids$[mid_valueOf_11fe4c995a2893ab] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");
                mids$[mid_values_ef7ca7f6f85c90c1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APOAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "APOAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_DRG = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_SRP = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CD_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CD_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COMMENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE_METHOD = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CR_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CR_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                HBR = new AdditionalParametersKey(env->getStaticObjectField(cls, "HBR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                INCLINATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME_EPOCH = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q1 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q2 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q3 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_QC = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                PERIAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "PERIAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                REFLECTANCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                SEDR = new AdditionalParametersKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                THRUST_ACCELERATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "THRUST_ACCELERATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_ABSOLUTE = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_4dded83b8b2e78c2], a0.this$, a1.this$, a2.this$);
            }

            AdditionalParametersKey AdditionalParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_11fe4c995a2893ab], a0.this$));
            }

            JArray< AdditionalParametersKey > AdditionalParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ef7ca7f6f85c90c1]));
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
            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data);
            static PyGetSetDef t_AdditionalParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParametersKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersKey)[] = {
              { Py_tp_methods, t_AdditionalParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersKey, t_AdditionalParametersKey, AdditionalParametersKey);
            PyObject *t_AdditionalParametersKey::wrap_Object(const AdditionalParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersKey), &PY_TYPE_DEF(AdditionalParametersKey), module, "AdditionalParametersKey", 0);
            }

            void t_AdditionalParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "class_", make_descriptor(AdditionalParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "wrapfn_", make_descriptor(t_AdditionalParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "APOAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::APOAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_DRG", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_SRP", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CD_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CD_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COMMENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE_METHOD", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CR_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CR_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "HBR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::HBR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "INCLINATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q1", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q2", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q3", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_QC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_QC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "PERIAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::PERIAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "REFLECTANCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::REFLECTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "SEDR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::SEDR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "THRUST_ACCELERATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::THRUST_ACCELERATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_ABSOLUTE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_ABSOLUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MIN)));
            }

            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersKey::wrap_Object(AdditionalParametersKey(((t_AdditionalParametersKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::valueOf(a0));
                return t_AdditionalParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type)
            {
              JArray< AdditionalParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalParametersKey::wrap_jobject);
            }
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_14f91c678f061a03] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_f877168372b32c50] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_3d70d87c0479b567] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_b7a68961992b1c2b] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DDLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4b0f59ff7b8720f9] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_376cdf1ab01ad011] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_022642671171e46b] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d8ac2a1aa9301861] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_14f91c678f061a03], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f877168372b32c50], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_3d70d87c0479b567], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_b7a68961992b1c2b], a0.this$, a1, a2, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4b0f59ff7b8720f9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_376cdf1ab01ad011], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_022642671171e46b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7, a8));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d8ac2a1aa9301861], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7, a8));
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
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);

              static PyMethodDef t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod, t_AbstractShortTermEncounter1DNumerical2DPOCMethod, AbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod), module, "AbstractShortTermEncounter1DNumerical2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(AbstractShortTermEncounter1DNumerical2DPOCMethod(((t_AbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a1((jobject) NULL);
                    PyTypeObject **p1;
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1, &p1, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a3((jobject) NULL);
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDDkID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a3((jobject) NULL);
                    PyTypeObject **p3;
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 7:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 9:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a6((jobject) NULL);
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDkID", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a6((jobject) NULL);
                    PyTypeObject **p6;
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKID", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), (PyObject *) self, "compute", args, 2);
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
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationFromSatelliteDetector::class$ = NULL;
        jmethodID *AngularSeparationFromSatelliteDetector::mids$ = NULL;
        bool AngularSeparationFromSatelliteDetector::live$ = false;

        jclass AngularSeparationFromSatelliteDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationFromSatelliteDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d026d5c1d05f1112] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getPrimaryObject_dec199e86bf037eb] = env->getMethodID(cls, "getPrimaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_557b8123390d8d0c] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_getSecondaryObject_dec199e86bf037eb] = env->getMethodID(cls, "getSecondaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_5636a7936e1f1639] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationFromSatelliteDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationFromSatelliteDetector::AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d026d5c1d05f1112, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationFromSatelliteDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getPrimaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPrimaryObject_dec199e86bf037eb]));
        }

        jdouble AngularSeparationFromSatelliteDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_557b8123390d8d0c]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getSecondaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryObject_dec199e86bf037eb]));
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
        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationFromSatelliteDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, primaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, secondaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationFromSatelliteDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getPrimaryObject, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getProximityAngle, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getSecondaryObject, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationFromSatelliteDetector)[] = {
          { Py_tp_methods, t_AngularSeparationFromSatelliteDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationFromSatelliteDetector_init_ },
          { Py_tp_getset, t_AngularSeparationFromSatelliteDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationFromSatelliteDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationFromSatelliteDetector, t_AngularSeparationFromSatelliteDetector, AngularSeparationFromSatelliteDetector);
        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_Object(const AngularSeparationFromSatelliteDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationFromSatelliteDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationFromSatelliteDetector), &PY_TYPE_DEF(AngularSeparationFromSatelliteDetector), module, "AngularSeparationFromSatelliteDetector", 0);
        }

        void t_AngularSeparationFromSatelliteDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "class_", make_descriptor(AngularSeparationFromSatelliteDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "wrapfn_", make_descriptor(t_AngularSeparationFromSatelliteDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationFromSatelliteDetector::wrap_Object(AngularSeparationFromSatelliteDetector(((t_AngularSeparationFromSatelliteDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationFromSatelliteDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationFromSatelliteDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationFromSatelliteDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationFromSatelliteDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
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
              mids$[mid_init$_2da50945bbf8d424] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentState_75d50d73180655b4] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_557b8123390d8d0c] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NonLinearEvolution::NonLinearEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2da50945bbf8d424, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector NonLinearEvolution::getCurrentState() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCurrentState_75d50d73180655b4]));
          }

          jdouble NonLinearEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_557b8123390d8d0c]);
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_70a207fcbc031df2]));
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
#include "org/hipparchus/complex/ComplexComparator.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexComparator::class$ = NULL;
      jmethodID *ComplexComparator::mids$ = NULL;
      bool ComplexComparator::live$ = false;

      jclass ComplexComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_cc2703681edf5a92] = env->getMethodID(cls, "compare", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexComparator::ComplexComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      jint ComplexComparator::compare(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_cc2703681edf5a92], a0.this$, a1.this$);
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
      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args);

      static PyMethodDef t_ComplexComparator__methods_[] = {
        DECLARE_METHOD(t_ComplexComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexComparator)[] = {
        { Py_tp_methods, t_ComplexComparator__methods_ },
        { Py_tp_init, (void *) t_ComplexComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexComparator, t_ComplexComparator, ComplexComparator);

      void t_ComplexComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexComparator), &PY_TYPE_DEF(ComplexComparator), module, "ComplexComparator", 0);
      }

      void t_ComplexComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "class_", make_descriptor(ComplexComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "wrapfn_", make_descriptor(t_ComplexComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexComparator::initializeClass, 1)))
          return NULL;
        return t_ComplexComparator::wrap_Object(ComplexComparator(((t_ComplexComparator *) arg)->object.this$));
      }
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds)
      {
        ComplexComparator object((jobject) NULL);

        INT_CALL(object = ComplexComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args)
      {
        ::org::hipparchus::complex::Complex a0((jobject) NULL);
        ::org::hipparchus::complex::Complex a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScale::class$ = NULL;
      jmethodID *PythonTimeScale::mids$ = NULL;
      bool PythonTimeScale::live$ = false;

      jclass PythonTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScale::PythonTimeScale() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeScale::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeScale::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeScale::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self);
      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data);
      static PyGetSetDef t_PythonTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScale, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScale__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScale, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScale)[] = {
        { Py_tp_methods, t_PythonTimeScale__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScale_init_ },
        { Py_tp_getset, t_PythonTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScale, t_PythonTimeScale, PythonTimeScale);

      void t_PythonTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScale), &PY_TYPE_DEF(PythonTimeScale), module, "PythonTimeScale", 1);
      }

      void t_PythonTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "class_", make_descriptor(PythonTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "wrapfn_", make_descriptor(t_PythonTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScale::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonTimeScale_getName0 },
          { "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScale_offsetFromTAI1 },
          { "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScale_offsetFromTAI2 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScale_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScale::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScale::wrap_Object(PythonTimeScale(((t_PythonTimeScale *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScale object((jobject) NULL);

        INT_CALL(object = PythonTimeScale());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("offsetFromTAI", result);
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

      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data)
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
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractCollection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean AbstractCollection::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    void AbstractCollection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean AbstractCollection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean AbstractCollection::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean AbstractCollection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator AbstractCollection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jboolean AbstractCollection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean AbstractCollection::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean AbstractCollection::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    jint AbstractCollection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }

    ::java::lang::String AbstractCollection::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
