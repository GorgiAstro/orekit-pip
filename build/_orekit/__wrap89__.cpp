#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *KeplerianPropagatorBuilder::class$ = NULL;
        jmethodID *KeplerianPropagatorBuilder::mids$ = NULL;
        bool KeplerianPropagatorBuilder::live$ = false;

        jclass KeplerianPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/KeplerianPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_baacf153afcb2d24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_81365fd3614b2b0c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_b628bebb3827312b] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/KeplerianPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_baacf153afcb2d24, a0.this$, a1.this$, a2)) {}

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_81365fd3614b2b0c, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel KeplerianPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator KeplerianPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_d397e255f9fb16e6], a0.this$));
        }

        KeplerianPropagatorBuilder KeplerianPropagatorBuilder::copy() const
        {
          return KeplerianPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_b628bebb3827312b]));
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
        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagatorBuilder)[] = {
          { Py_tp_methods, t_KeplerianPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagatorBuilder, t_KeplerianPropagatorBuilder, KeplerianPropagatorBuilder);

        void t_KeplerianPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagatorBuilder), &PY_TYPE_DEF(KeplerianPropagatorBuilder), module, "KeplerianPropagatorBuilder", 0);
        }

        void t_KeplerianPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "class_", make_descriptor(KeplerianPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "wrapfn_", make_descriptor(t_KeplerianPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagatorBuilder::wrap_Object(KeplerianPropagatorBuilder(((t_KeplerianPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          KeplerianPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_KeplerianPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyStaticContext::class$ = NULL;
            jmethodID *DSSTThirdBodyStaticContext::mids$ = NULL;
            bool DSSTThirdBodyStaticContext::live$ = false;

            jclass DSSTThirdBodyStaticContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_13c1bfff4011b63c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;DD[D)V");
                mids$[mid_getMaxAR3Pow_f2f64475e4580546] = env->getMethodID(cls, "getMaxAR3Pow", "()I");
                mids$[mid_getMaxEccPow_f2f64475e4580546] = env->getMethodID(cls, "getMaxEccPow", "()I");
                mids$[mid_getMaxFreqF_f2f64475e4580546] = env->getMethodID(cls, "getMaxFreqF", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyStaticContext::DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_13c1bfff4011b63c, a0.this$, a1, a2, a3.this$)) {}

            jint DSSTThirdBodyStaticContext::getMaxAR3Pow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxAR3Pow_f2f64475e4580546]);
            }

            jint DSSTThirdBodyStaticContext::getMaxEccPow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxEccPow_f2f64475e4580546]);
            }

            jint DSSTThirdBodyStaticContext::getMaxFreqF() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxFreqF_f2f64475e4580546]);
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
            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyStaticContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxAR3Pow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxEccPow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxFreqF),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyStaticContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxAR3Pow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxEccPow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxFreqF, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyStaticContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyStaticContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyStaticContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyStaticContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyStaticContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyStaticContext, t_DSSTThirdBodyStaticContext, DSSTThirdBodyStaticContext);

            void t_DSSTThirdBodyStaticContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyStaticContext), &PY_TYPE_DEF(DSSTThirdBodyStaticContext), module, "DSSTThirdBodyStaticContext", 0);
            }

            void t_DSSTThirdBodyStaticContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "class_", make_descriptor(DSSTThirdBodyStaticContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyStaticContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyStaticContext::wrap_Object(DSSTThirdBodyStaticContext(((t_DSSTThirdBodyStaticContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              DSSTThirdBodyStaticContext object((jobject) NULL);

              if (!parseArgs(args, "kDD[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DSSTThirdBodyStaticContext(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxEccPow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxFreqF());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxEccPow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxFreqF());
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter$BlockWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter$BlockWriter::mids$ = NULL;
              bool StreamingOcmWriter$BlockWriter::live$ = false;

              jclass StreamingOcmWriter$BlockWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_af74e4ff342890ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter;)V");
                  mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_703918df646bd2ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter$BlockWriter::StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_af74e4ff342890ee, a0.this$)) {}

              void StreamingOcmWriter$BlockWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_2b88003f931f70a7], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_703918df646bd2ae], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOcmWriter$BlockWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter$BlockWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter$BlockWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter$BlockWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter$BlockWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter$BlockWriter, t_StreamingOcmWriter$BlockWriter, StreamingOcmWriter$BlockWriter);

              void t_StreamingOcmWriter$BlockWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter$BlockWriter), &PY_TYPE_DEF(StreamingOcmWriter$BlockWriter), module, "StreamingOcmWriter$BlockWriter", 0);
              }

              void t_StreamingOcmWriter$BlockWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "class_", make_descriptor(StreamingOcmWriter$BlockWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter$BlockWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter$BlockWriter::wrap_Object(StreamingOcmWriter$BlockWriter(((t_StreamingOcmWriter$BlockWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter a0((jobject) NULL);
                StreamingOcmWriter$BlockWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOcmWriter$BlockWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IonosphereFreeCombination::class$ = NULL;
          jmethodID *IonosphereFreeCombination::mids$ = NULL;
          bool IonosphereFreeCombination::live$ = false;

          jclass IonosphereFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IonosphereFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_IonosphereFreeCombination__methods_[] = {
            DECLARE_METHOD(t_IonosphereFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereFreeCombination)[] = {
            { Py_tp_methods, t_IonosphereFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(IonosphereFreeCombination, t_IonosphereFreeCombination, IonosphereFreeCombination);

          void t_IonosphereFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereFreeCombination), &PY_TYPE_DEF(IonosphereFreeCombination), module, "IonosphereFreeCombination", 0);
          }

          void t_IonosphereFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "class_", make_descriptor(IonosphereFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "wrapfn_", make_descriptor(t_IonosphereFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereFreeCombination::initializeClass, 1)))
              return NULL;
            return t_IonosphereFreeCombination::wrap_Object(IonosphereFreeCombination(((t_IonosphereFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereFreeCombination::initializeClass, 0))
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
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSGP4::class$ = NULL;
          jmethodID *FieldSGP4::mids$ = NULL;
          bool FieldSGP4::live$ = false;

          jclass FieldSGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07248e1efc10aa6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_8f2042251d084a47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_4c337e4c1ec6f647] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_ef0bb554ba052051] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_07248e1efc10aa6e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_8f2042251d084a47, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args);
          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data);
          static PyGetSetDef t_FieldSGP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSGP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSGP4__methods_[] = {
            DECLARE_METHOD(t_FieldSGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSGP4)[] = {
            { Py_tp_methods, t_FieldSGP4__methods_ },
            { Py_tp_init, (void *) t_FieldSGP4_init_ },
            { Py_tp_getset, t_FieldSGP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSGP4, t_FieldSGP4, FieldSGP4);
          PyObject *t_FieldSGP4::wrap_Object(const FieldSGP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSGP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSGP4), &PY_TYPE_DEF(FieldSGP4), module, "FieldSGP4", 0);
          }

          void t_FieldSGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "class_", make_descriptor(FieldSGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "wrapfn_", make_descriptor(t_FieldSGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSGP4::initializeClass, 1)))
              return NULL;
            return t_FieldSGP4::wrap_Object(FieldSGP4(((t_FieldSGP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Data::class$ = NULL;
              jmethodID *SsrIm201Data::mids$ = NULL;
              bool SsrIm201Data::live$ = false;

              jclass SsrIm201Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCnm_43de1192439efa92] = env->getMethodID(cls, "getCnm", "()[[D");
                  mids$[mid_getHeightIonosphericLayer_456d9a2f64d6b28d] = env->getMethodID(cls, "getHeightIonosphericLayer", "()D");
                  mids$[mid_getSnm_43de1192439efa92] = env->getMethodID(cls, "getSnm", "()[[D");
                  mids$[mid_getSphericalHarmonicsDegree_f2f64475e4580546] = env->getMethodID(cls, "getSphericalHarmonicsDegree", "()I");
                  mids$[mid_getSphericalHarmonicsOrder_f2f64475e4580546] = env->getMethodID(cls, "getSphericalHarmonicsOrder", "()I");
                  mids$[mid_setCnm_d660c7a97bf55272] = env->getMethodID(cls, "setCnm", "([[D)V");
                  mids$[mid_setHeightIonosphericLayer_77e0f9a1f260e2e5] = env->getMethodID(cls, "setHeightIonosphericLayer", "(D)V");
                  mids$[mid_setSnm_d660c7a97bf55272] = env->getMethodID(cls, "setSnm", "([[D)V");
                  mids$[mid_setSphericalHarmonicsDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setSphericalHarmonicsDegree", "(I)V");
                  mids$[mid_setSphericalHarmonicsOrder_0a2a1ac2721c0336] = env->getMethodID(cls, "setSphericalHarmonicsOrder", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Data::SsrIm201Data() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              JArray< JArray< jdouble > > SsrIm201Data::getCnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCnm_43de1192439efa92]));
              }

              jdouble SsrIm201Data::getHeightIonosphericLayer() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHeightIonosphericLayer_456d9a2f64d6b28d]);
              }

              JArray< JArray< jdouble > > SsrIm201Data::getSnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getSnm_43de1192439efa92]));
              }

              jint SsrIm201Data::getSphericalHarmonicsDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsDegree_f2f64475e4580546]);
              }

              jint SsrIm201Data::getSphericalHarmonicsOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsOrder_f2f64475e4580546]);
              }

              void SsrIm201Data::setCnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCnm_d660c7a97bf55272], a0.this$);
              }

              void SsrIm201Data::setHeightIonosphericLayer(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHeightIonosphericLayer_77e0f9a1f260e2e5], a0);
              }

              void SsrIm201Data::setSnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSnm_d660c7a97bf55272], a0.this$);
              }

              void SsrIm201Data::setSphericalHarmonicsDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsDegree_0a2a1ac2721c0336], a0);
              }

              void SsrIm201Data::setSphericalHarmonicsOrder(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsOrder_0a2a1ac2721c0336], a0);
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
              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Data, cnm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, heightIonosphericLayer),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, snm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsDegree),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsOrder),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Data__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, getCnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getHeightIonosphericLayer, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsDegree, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsOrder, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, setCnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setHeightIonosphericLayer, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsDegree, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsOrder, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Data)[] = {
                { Py_tp_methods, t_SsrIm201Data__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Data_init_ },
                { Py_tp_getset, t_SsrIm201Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIm201Data, t_SsrIm201Data, SsrIm201Data);

              void t_SsrIm201Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Data), &PY_TYPE_DEF(SsrIm201Data), module, "SsrIm201Data", 0);
              }

              void t_SsrIm201Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "class_", make_descriptor(SsrIm201Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "wrapfn_", make_descriptor(t_SsrIm201Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Data::wrap_Object(SsrIm201Data(((t_SsrIm201Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Data object((jobject) NULL);

                INT_CALL(object = SsrIm201Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getCnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setCnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHeightIonosphericLayer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHeightIonosphericLayer", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setSnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsDegree", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsOrder(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsOrder", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getCnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setCnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cnm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHeightIonosphericLayer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "heightIonosphericLayer", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setSnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "snm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsDegree", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsOrder(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsOrder", arg);
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
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionPenaltyAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionPenaltyAdapter::mids$ = NULL;
          bool MultivariateFunctionPenaltyAdapter::live$ = false;

          jclass MultivariateFunctionPenaltyAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8506fc9a406ed4c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[DD[D)V");
              mids$[mid_value_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionPenaltyAdapter::MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8506fc9a406ed4c0, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

          jdouble MultivariateFunctionPenaltyAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_f05cb8c6dfd5e0b9], a0.this$);
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
          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionPenaltyAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionPenaltyAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionPenaltyAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionPenaltyAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionPenaltyAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionPenaltyAdapter, t_MultivariateFunctionPenaltyAdapter, MultivariateFunctionPenaltyAdapter);

          void t_MultivariateFunctionPenaltyAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionPenaltyAdapter), &PY_TYPE_DEF(MultivariateFunctionPenaltyAdapter), module, "MultivariateFunctionPenaltyAdapter", 0);
          }

          void t_MultivariateFunctionPenaltyAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "class_", make_descriptor(MultivariateFunctionPenaltyAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionPenaltyAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionPenaltyAdapter::wrap_Object(MultivariateFunctionPenaltyAdapter(((t_MultivariateFunctionPenaltyAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            jdouble a3;
            JArray< jdouble > a4((jobject) NULL);
            MultivariateFunctionPenaltyAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[DD[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = MultivariateFunctionPenaltyAdapter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg)
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
#include "org/hipparchus/util/Combinations.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Combinations::class$ = NULL;
      jmethodID *Combinations::mids$ = NULL;
      bool Combinations::live$ = false;

      jclass Combinations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Combinations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_comparator_838794f9a43cf98e] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
          mids$[mid_getK_f2f64475e4580546] = env->getMethodID(cls, "getK", "()I");
          mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
          mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Combinations::Combinations(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      ::java::util::Comparator Combinations::comparator() const
      {
        return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_838794f9a43cf98e]));
      }

      jint Combinations::getK() const
      {
        return env->callIntMethod(this$, mids$[mid_getK_f2f64475e4580546]);
      }

      jint Combinations::getN() const
      {
        return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
      }

      ::java::util::Iterator Combinations::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
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
      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Combinations_comparator(t_Combinations *self);
      static PyObject *t_Combinations_getK(t_Combinations *self);
      static PyObject *t_Combinations_getN(t_Combinations *self);
      static PyObject *t_Combinations_iterator(t_Combinations *self);
      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data);
      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data);
      static PyGetSetDef t_Combinations__fields_[] = {
        DECLARE_GET_FIELD(t_Combinations, k),
        DECLARE_GET_FIELD(t_Combinations, n),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Combinations__methods_[] = {
        DECLARE_METHOD(t_Combinations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, comparator, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getK, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getN, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, iterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Combinations)[] = {
        { Py_tp_methods, t_Combinations__methods_ },
        { Py_tp_init, (void *) t_Combinations_init_ },
        { Py_tp_getset, t_Combinations__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_Combinations *)) get_iterator< t_Combinations >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Combinations)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Combinations, t_Combinations, Combinations);

      void t_Combinations::install(PyObject *module)
      {
        installType(&PY_TYPE(Combinations), &PY_TYPE_DEF(Combinations), module, "Combinations", 0);
      }

      void t_Combinations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "class_", make_descriptor(Combinations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "wrapfn_", make_descriptor(t_Combinations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Combinations::initializeClass, 1)))
          return NULL;
        return t_Combinations::wrap_Object(Combinations(((t_Combinations *) arg)->object.this$));
      }
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Combinations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        Combinations object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = Combinations(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Combinations_comparator(t_Combinations *self)
      {
        ::java::util::Comparator result((jobject) NULL);
        OBJ_CALL(result = self->object.comparator());
        return ::java::util::t_Comparator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_getK(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getK());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_getN(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_iterator(t_Combinations *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getK());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ItrfVersionProvider::class$ = NULL;
      jmethodID *ItrfVersionProvider::mids$ = NULL;
      bool ItrfVersionProvider::live$ = false;

      jclass ItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConfiguration_b4e9a20fc9bc25eb] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ItrfVersionProvider::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_b4e9a20fc9bc25eb], a0.this$, a1));
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
      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args);

      static PyMethodDef t_ItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_ItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ItrfVersionProvider)[] = {
        { Py_tp_methods, t_ItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ItrfVersionProvider, t_ItrfVersionProvider, ItrfVersionProvider);

      void t_ItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ItrfVersionProvider), &PY_TYPE_DEF(ItrfVersionProvider), module, "ItrfVersionProvider", 0);
      }

      void t_ItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "class_", make_descriptor(ItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "wrapfn_", make_descriptor(t_ItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_ItrfVersionProvider::wrap_Object(ItrfVersionProvider(((t_ItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args)
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
#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *DeSitterRelativity::class$ = NULL;
        jmethodID *DeSitterRelativity::mids$ = NULL;
        bool DeSitterRelativity::live$ = false;
        ::java::lang::String *DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass DeSitterRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/DeSitterRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_43ec4ee4a0809dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEarth_798caa59db6076aa] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSun_798caa59db6076aa] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DeSitterRelativity::DeSitterRelativity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        DeSitterRelativity::DeSitterRelativity(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43ec4ee4a0809dae, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean DeSitterRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getEarth() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_798caa59db6076aa]));
        }

        ::java::util::List DeSitterRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getSun() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_798caa59db6076aa]));
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
        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args);
        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data);
        static PyGetSetDef t_DeSitterRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_DeSitterRelativity, earth),
          DECLARE_GET_FIELD(t_DeSitterRelativity, parametersDrivers),
          DECLARE_GET_FIELD(t_DeSitterRelativity, sun),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DeSitterRelativity__methods_[] = {
          DECLARE_METHOD(t_DeSitterRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DeSitterRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getEarth, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getSun, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DeSitterRelativity)[] = {
          { Py_tp_methods, t_DeSitterRelativity__methods_ },
          { Py_tp_init, (void *) t_DeSitterRelativity_init_ },
          { Py_tp_getset, t_DeSitterRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DeSitterRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DeSitterRelativity, t_DeSitterRelativity, DeSitterRelativity);

        void t_DeSitterRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(DeSitterRelativity), &PY_TYPE_DEF(DeSitterRelativity), module, "DeSitterRelativity", 0);
        }

        void t_DeSitterRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "class_", make_descriptor(DeSitterRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "wrapfn_", make_descriptor(t_DeSitterRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "boxfn_", make_descriptor(boxObject));
          env->getClass(DeSitterRelativity::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DeSitterRelativity::initializeClass, 1)))
            return NULL;
          return t_DeSitterRelativity::wrap_Object(DeSitterRelativity(((t_DeSitterRelativity *) arg)->object.this$));
        }
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DeSitterRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DeSitterRelativity object((jobject) NULL);

              INT_CALL(object = DeSitterRelativity());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              DeSitterRelativity object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DeSitterRelativity(a0, a1));
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

        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_c22ecf8399103e14] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;)V");
              mids$[mid_displacement_90801f07349d77e7] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoading::OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c22ecf8399103e14, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanLoading::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_90801f07349d77e7], a0.this$, a1.this$, a2.this$));
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
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationConvention::class$ = NULL;
          jmethodID *RotationConvention::mids$ = NULL;
          bool RotationConvention::live$ = false;
          RotationConvention *RotationConvention::FRAME_TRANSFORM = NULL;
          RotationConvention *RotationConvention::VECTOR_OPERATOR = NULL;

          jclass RotationConvention::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationConvention");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_cffa0e02e315c2be] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");
              mids$[mid_values_ba204ce6b8165e54] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FRAME_TRANSFORM = new RotationConvention(env->getStaticObjectField(cls, "FRAME_TRANSFORM", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              VECTOR_OPERATOR = new RotationConvention(env->getStaticObjectField(cls, "VECTOR_OPERATOR", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RotationConvention RotationConvention::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationConvention(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cffa0e02e315c2be], a0.this$));
          }

          JArray< RotationConvention > RotationConvention::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationConvention >(env->callStaticObjectMethod(cls, mids$[mid_values_ba204ce6b8165e54]));
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
          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args);
          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationConvention_values(PyTypeObject *type);
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data);
          static PyGetSetDef t_RotationConvention__fields_[] = {
            DECLARE_GET_FIELD(t_RotationConvention, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationConvention__methods_[] = {
            DECLARE_METHOD(t_RotationConvention, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationConvention, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationConvention)[] = {
            { Py_tp_methods, t_RotationConvention__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationConvention__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationConvention)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationConvention, t_RotationConvention, RotationConvention);
          PyObject *t_RotationConvention::wrap_Object(const RotationConvention& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationConvention::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationConvention::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationConvention), &PY_TYPE_DEF(RotationConvention), module, "RotationConvention", 0);
          }

          void t_RotationConvention::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "class_", make_descriptor(RotationConvention::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "wrapfn_", make_descriptor(t_RotationConvention::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationConvention::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "FRAME_TRANSFORM", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::FRAME_TRANSFORM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "VECTOR_OPERATOR", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::VECTOR_OPERATOR)));
          }

          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationConvention::initializeClass, 1)))
              return NULL;
            return t_RotationConvention::wrap_Object(RotationConvention(((t_RotationConvention *) arg)->object.this$));
          }
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationConvention::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationConvention result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::valueOf(a0));
              return t_RotationConvention::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationConvention_values(PyTypeObject *type)
          {
            JArray< RotationConvention > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::values());
            return JArray<jobject>(result.this$).wrap(t_RotationConvention::wrap_jobject);
          }
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_IGNITION = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_0db52df38f1665ca] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;)Z");
                  mids$[mid_valueOf_dbe2bb172bd9ea74] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");
                  mids$[mid_values_8c9f927137d1933d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_1", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_2", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_3", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_EPOCH_IGNITION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_IGNITION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_0db52df38f1665ca], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dbe2bb172bd9ea74], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8c9f927137d1933d]));
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
            namespace opm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_IGNITION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_IGNITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getAttitudeType_3d59887fa86c3808] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_425debac8563c8f4] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getFrameAngvelFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrameAngvelFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_isFirst_cc0d8e7d471c2d45] = env->getMethodID(cls, "isFirst", "()Ljava/lang/Boolean;");
                  mids$[mid_isSpacecraftBodyRate_e470b6d9e0d979db] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_e470b6d9e0d979db] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setAngvelFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setAngvelFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setAttitudeType_d2af9b8a84ea38b2] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;)V");
                  mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInterpolationDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_e939c6558ae8d313] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                  mids$[mid_setIsFirst_50a2e0b139e80a58] = env->getMethodID(cls, "setIsFirst", "(Z)V");
                  mids$[mid_setRateFrameIsA_50a2e0b139e80a58] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_setStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemMetadata::AemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeType AemMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_3d59887fa86c3808]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AemMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AemMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_425debac8563c8f4]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AemMetadata::getFrameAngvelFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameAngvelFrame_aa70fdb14ae9305f]));
              }

              jint AemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_f2f64475e4580546]);
              }

              ::java::lang::String AemMetadata::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
              }

              jint AemMetadata::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_aaa854c403487cf3]));
              }

              ::java::lang::Boolean AemMetadata::isFirst() const
              {
                return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isFirst_cc0d8e7d471c2d45]));
              }

              jboolean AemMetadata::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_e470b6d9e0d979db]);
              }

              jboolean AemMetadata::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_e470b6d9e0d979db]);
              }

              void AemMetadata::setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngvelFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AemMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_d2af9b8a84ea38b2], a0.this$);
              }

              void AemMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e], a0.this$);
              }

              void AemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_0a2a1ac2721c0336], a0);
              }

              void AemMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_e939c6558ae8d313], a0.this$);
              }

              void AemMetadata::setIsFirst(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsFirst_50a2e0b139e80a58], a0);
              }

              void AemMetadata::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_50a2e0b139e80a58], a0);
              }

              void AemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_e82d68cd9f886886], a0.this$);
              }

              void AemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_e82d68cd9f886886], a0.this$);
              }

              void AemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_e82d68cd9f886886], a0.this$);
              }

              void AemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_e82d68cd9f886886], a0.this$);
              }

              void AemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUp::class$ = NULL;
          jmethodID *WindUp::mids$ = NULL;
          bool WindUp::live$ = false;

          jclass WindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

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
          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args);
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data);
          static PyGetSetDef t_WindUp__fields_[] = {
            DECLARE_GET_FIELD(t_WindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WindUp__methods_[] = {
            DECLARE_METHOD(t_WindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUp)[] = {
            { Py_tp_methods, t_WindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_WindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(WindUp, t_WindUp, WindUp);
          PyObject *t_WindUp::wrap_Object(const WindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUp), &PY_TYPE_DEF(WindUp), module, "WindUp", 0);
          }

          void t_WindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "class_", make_descriptor(WindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "wrapfn_", make_descriptor(t_WindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUp::initializeClass, 1)))
              return NULL;
            return t_WindUp::wrap_Object(WindUp(((t_WindUp *) arg)->object.this$));
          }
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data)
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
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *EncodedMessage::class$ = NULL;
          jmethodID *EncodedMessage::mids$ = NULL;
          bool EncodedMessage::live$ = false;

          jclass EncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/EncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_extractBits_3f523e51b2989e1f] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_7ae3461a92a43152] = env->getMethodID(cls, "start", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jlong EncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_3f523e51b2989e1f], a0);
          }

          void EncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_7ae3461a92a43152]);
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
          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg);
          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self);

          static PyMethodDef t_EncodedMessage__methods_[] = {
            DECLARE_METHOD(t_EncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_EncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EncodedMessage)[] = {
            { Py_tp_methods, t_EncodedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EncodedMessage, t_EncodedMessage, EncodedMessage);

          void t_EncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EncodedMessage), &PY_TYPE_DEF(EncodedMessage), module, "EncodedMessage", 0);
          }

          void t_EncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "class_", make_descriptor(EncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "wrapfn_", make_descriptor(t_EncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EncodedMessage::initializeClass, 1)))
              return NULL;
            return t_EncodedMessage::wrap_Object(EncodedMessage(((t_EncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldStepNormalizer::class$ = NULL;
        jmethodID *FieldStepNormalizer::mids$ = NULL;
        bool FieldStepNormalizer::live$ = false;

        jclass FieldStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ef623c273ba079f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;)V");
            mids$[mid_init$_9f4c8a49b3b3c4d5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_dea1bf4e4484e6a5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_95bf8d13a42142ac] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_c314ae4458a4e52a] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_bcb27fe1570581e2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ef623c273ba079f, a0, a1.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f4c8a49b3b3c4d5, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dea1bf4e4484e6a5, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95bf8d13a42142ac, a0, a1.this$, a2.this$, a3.this$)) {}

        void FieldStepNormalizer::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_c314ae4458a4e52a], a0.this$);
        }

        void FieldStepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_bcb27fe1570581e2], a0.this$);
        }

        void FieldStepNormalizer::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args);
        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepNormalizer)[] = {
          { Py_tp_methods, t_FieldStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldStepNormalizer_init_ },
          { Py_tp_getset, t_FieldStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepNormalizer, t_FieldStepNormalizer, FieldStepNormalizer);
        PyObject *t_FieldStepNormalizer::wrap_Object(const FieldStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepNormalizer), &PY_TYPE_DEF(FieldStepNormalizer), module, "FieldStepNormalizer", 0);
        }

        void t_FieldStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "class_", make_descriptor(FieldStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "wrapfn_", make_descriptor(t_FieldStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldStepNormalizer::wrap_Object(FieldStepNormalizer(((t_FieldStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args)
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
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileWriter::mids$ = NULL;
        bool PythonAttitudeEphemerisFileWriter::live$ = false;

        jclass PythonAttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_3e82c67d69401a38] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileWriter::PythonAttitudeEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAttitudeEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAttitudeEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAttitudeEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileWriter, t_PythonAttitudeEphemerisFileWriter, PythonAttitudeEphemerisFileWriter);

        void t_PythonAttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileWriter), &PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter), module, "PythonAttitudeEphemerisFileWriter", 1);
        }

        void t_PythonAttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "class_", make_descriptor(PythonAttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V", (void *) t_PythonAttitudeEphemerisFileWriter_write1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileWriter::wrap_Object(PythonAttitudeEphemerisFileWriter(((t_PythonAttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(::org::orekit::files::general::AttitudeEphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagator::class$ = NULL;
          jmethodID *SBASPropagator::mids$ = NULL;
          bool SBASPropagator::live$ = false;

          jclass SBASPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_456d9a2f64d6b28d] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getSBASOrbitalElements_babc37af936533ed] = env->getMethodID(cls, "getSBASOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;");
              mids$[mid_propagateInEcef_72289093b5ce53a7] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame SBASPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          jdouble SBASPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_456d9a2f64d6b28d]);
          }

          ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements SBASPropagator::getSBASOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements(env->callObjectMethod(this$, mids$[mid_getSBASOrbitalElements_babc37af936533ed]));
          }

          ::org::orekit::utils::PVCoordinates SBASPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_72289093b5ce53a7], a0.this$));
          }

          void SBASPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
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
          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg);
          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data);
          static PyGetSetDef t_SBASPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_SBASPropagator, eCEF),
            DECLARE_GET_FIELD(t_SBASPropagator, eCI),
            DECLARE_GET_FIELD(t_SBASPropagator, frame),
            DECLARE_GET_FIELD(t_SBASPropagator, mU),
            DECLARE_GET_FIELD(t_SBASPropagator, sBASOrbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SBASPropagator__methods_[] = {
            DECLARE_METHOD(t_SBASPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_SBASPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getSBASOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_SBASPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagator)[] = {
            { Py_tp_methods, t_SBASPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SBASPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(SBASPropagator, t_SBASPropagator, SBASPropagator);

          void t_SBASPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagator), &PY_TYPE_DEF(SBASPropagator), module, "SBASPropagator", 0);
          }

          void t_SBASPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "class_", make_descriptor(SBASPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "wrapfn_", make_descriptor(t_SBASPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagator::initializeClass, 1)))
              return NULL;
            return t_SBASPropagator::wrap_Object(SBASPropagator(((t_SBASPropagator *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
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
          mids$[mid_getConvergenceChecker_100e81b1c0752b49] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker AbstractOptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_100e81b1c0752b49]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_745ef02916e2d8db]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_745ef02916e2d8db]));
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
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MultivariateInterpolator::class$ = NULL;
        jmethodID *MultivariateInterpolator::mids$ = NULL;
        bool MultivariateInterpolator::live$ = false;

        jclass MultivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MultivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_ca62b9640059ffa6] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::MultivariateFunction MultivariateInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_ca62b9640059ffa6], a0.this$, a1.this$));
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
        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_MultivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_MultivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateInterpolator)[] = {
          { Py_tp_methods, t_MultivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateInterpolator, t_MultivariateInterpolator, MultivariateInterpolator);

        void t_MultivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateInterpolator), &PY_TYPE_DEF(MultivariateInterpolator), module, "MultivariateInterpolator", 0);
        }

        void t_MultivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "class_", make_descriptor(MultivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "wrapfn_", make_descriptor(t_MultivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_MultivariateInterpolator::wrap_Object(MultivariateInterpolator(((t_MultivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractDualFrequencyCombination::mids$ = NULL;
          bool PythonAbstractDualFrequencyCombination::live$ = false;

          jclass PythonAbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_809b540e573977f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractDualFrequencyCombination::PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_809b540e573977f2, a0.this$, a1.this$)) {}

          void PythonAbstractDualFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractDualFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractDualFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self);
          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractDualFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractDualFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractDualFrequencyCombination, t_PythonAbstractDualFrequencyCombination, PythonAbstractDualFrequencyCombination);

          void t_PythonAbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractDualFrequencyCombination), &PY_TYPE_DEF(PythonAbstractDualFrequencyCombination), module, "PythonAbstractDualFrequencyCombination", 1);
          }

          void t_PythonAbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "class_", make_descriptor(PythonAbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractDualFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0 },
              { "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedValue1 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractDualFrequencyCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractDualFrequencyCombination::wrap_Object(PythonAbstractDualFrequencyCombination(((t_PythonAbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractDualFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractDualFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a0));
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedFrequency", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedFrequency", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *o3 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a3));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dOdO", (double) a0, o1, (double) a2, o3);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data)
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
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *LongConsumer::class$ = NULL;
      jmethodID *LongConsumer::mids$ = NULL;
      bool LongConsumer::live$ = false;

      jclass LongConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/LongConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_fefb08975c10f0a1] = env->getMethodID(cls, "accept", "(J)V");
          mids$[mid_andThen_5631b6d25deb7e46] = env->getMethodID(cls, "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LongConsumer::accept(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_fefb08975c10f0a1], a0);
      }

      LongConsumer LongConsumer::andThen(const LongConsumer & a0) const
      {
        return LongConsumer(env->callObjectMethod(this$, mids$[mid_andThen_5631b6d25deb7e46], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg);
      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg);

      static PyMethodDef t_LongConsumer__methods_[] = {
        DECLARE_METHOD(t_LongConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, accept, METH_O),
        DECLARE_METHOD(t_LongConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongConsumer)[] = {
        { Py_tp_methods, t_LongConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LongConsumer, t_LongConsumer, LongConsumer);

      void t_LongConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(LongConsumer), &PY_TYPE_DEF(LongConsumer), module, "LongConsumer", 0);
      }

      void t_LongConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "class_", make_descriptor(LongConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "wrapfn_", make_descriptor(t_LongConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongConsumer::initializeClass, 1)))
          return NULL;
        return t_LongConsumer::wrap_Object(LongConsumer(((t_LongConsumer *) arg)->object.this$));
      }
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg)
      {
        LongConsumer a0((jobject) NULL);
        LongConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", LongConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_LongConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldSimpsonIntegrator::class$ = NULL;
        jmethodID *FieldSimpsonIntegrator::mids$ = NULL;
        bool FieldSimpsonIntegrator::live$ = false;
        jint FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldSimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldSimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_84b3e2e5209296cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_84b3e2e5209296cd, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args);
        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data);
        static PyGetSetDef t_FieldSimpsonIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldSimpsonIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldSimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldSimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldSimpsonIntegrator)[] = {
          { Py_tp_methods, t_FieldSimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldSimpsonIntegrator_init_ },
          { Py_tp_getset, t_FieldSimpsonIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldSimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldSimpsonIntegrator, t_FieldSimpsonIntegrator, FieldSimpsonIntegrator);
        PyObject *t_FieldSimpsonIntegrator::wrap_Object(const FieldSimpsonIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldSimpsonIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldSimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldSimpsonIntegrator), &PY_TYPE_DEF(FieldSimpsonIntegrator), module, "FieldSimpsonIntegrator", 0);
        }

        void t_FieldSimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "class_", make_descriptor(FieldSimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "wrapfn_", make_descriptor(t_FieldSimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldSimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldSimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldSimpsonIntegrator::wrap_Object(FieldSimpsonIntegrator(((t_FieldSimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldSimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSLegacyNavigationMessage::class$ = NULL;
            jmethodID *GPSLegacyNavigationMessage::mids$ = NULL;
            bool GPSLegacyNavigationMessage::live$ = false;

            jclass GPSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSLegacyNavigationMessage::GPSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_GPSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSLegacyNavigationMessage, t_GPSLegacyNavigationMessage, GPSLegacyNavigationMessage);

            void t_GPSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSLegacyNavigationMessage), &PY_TYPE_DEF(GPSLegacyNavigationMessage), module, "GPSLegacyNavigationMessage", 0);
            }

            void t_GPSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "class_", make_descriptor(GPSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_GPSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSLegacyNavigationMessage::wrap_Object(GPSLegacyNavigationMessage(((t_GPSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GPSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = GPSLegacyNavigationMessage());
              self->object = object;

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
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodies::class$ = NULL;
      jmethodID *PythonCelestialBodies::mids$ = NULL;
      bool PythonCelestialBodies::live$ = false;

      jclass PythonCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBody_29f199e59c05cc68] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_798caa59db6076aa] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_798caa59db6076aa] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_798caa59db6076aa] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_798caa59db6076aa] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_798caa59db6076aa] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_798caa59db6076aa] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_798caa59db6076aa] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_798caa59db6076aa] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_798caa59db6076aa] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_798caa59db6076aa] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_798caa59db6076aa] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodies::PythonCelestialBodies() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonCelestialBodies::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonCelestialBodies::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonCelestialBodies::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self);
      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data);
      static PyGetSetDef t_PythonCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodies, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodies, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodies)[] = {
        { Py_tp_methods, t_PythonCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodies_init_ },
        { Py_tp_getset, t_PythonCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodies, t_PythonCelestialBodies, PythonCelestialBodies);

      void t_PythonCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodies), &PY_TYPE_DEF(PythonCelestialBodies), module, "PythonCelestialBodies", 1);
      }

      void t_PythonCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "class_", make_descriptor(PythonCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "wrapfn_", make_descriptor(t_PythonCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodies::initializeClass);
        JNINativeMethod methods[] = {
          { "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getBody0 },
          { "getEarth", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarth1 },
          { "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarthMoonBarycenter2 },
          { "getJupiter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getJupiter3 },
          { "getMars", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMars4 },
          { "getMercury", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMercury5 },
          { "getMoon", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMoon6 },
          { "getNeptune", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getNeptune7 },
          { "getPluto", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getPluto8 },
          { "getSaturn", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSaturn9 },
          { "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSolarSystemBarycenter10 },
          { "getSun", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSun11 },
          { "getUranus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getUranus12 },
          { "getVenus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getVenus13 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodies_pythonDecRef14 },
        };
        env->registerNatives(cls, methods, 15);
      }

      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodies::wrap_Object(PythonCelestialBodies(((t_PythonCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodies object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodies());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getBody", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarth", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarth", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarthMoonBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarthMoonBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJupiter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getJupiter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMars", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMars", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMercury", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMercury", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMoon", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMoon", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNeptune", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getNeptune", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPluto", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getPluto", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSaturn", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSaturn", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSolarSystemBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSolarSystemBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSun", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSun", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUranus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getUranus", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVenus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getVenus", result);
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

      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovariance::class$ = NULL;
            jmethodID *RTNCovariance::mids$ = NULL;
            bool RTNCovariance::live$ = false;

            jclass RTNCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCdrgdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgn", "()D");
                mids$[mid_getCdrgndot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgndot", "()D");
                mids$[mid_getCdrgr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgr", "()D");
                mids$[mid_getCdrgrdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgrdot", "()D");
                mids$[mid_getCdrgt_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgt", "()D");
                mids$[mid_getCdrgtdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgtdot", "()D");
                mids$[mid_getCndotn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndotn", "()D");
                mids$[mid_getCndotndot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndotndot", "()D");
                mids$[mid_getCndotr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndotr", "()D");
                mids$[mid_getCndotrdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndotrdot", "()D");
                mids$[mid_getCndott_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndott", "()D");
                mids$[mid_getCndottdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCndottdot", "()D");
                mids$[mid_getCnn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCnn", "()D");
                mids$[mid_getCnr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCnr", "()D");
                mids$[mid_getCnt_456d9a2f64d6b28d] = env->getMethodID(cls, "getCnt", "()D");
                mids$[mid_getCrdotn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrdotn", "()D");
                mids$[mid_getCrdotr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrdotr", "()D");
                mids$[mid_getCrdotrdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrdotrdot", "()D");
                mids$[mid_getCrdott_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrdott", "()D");
                mids$[mid_getCrr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrr", "()D");
                mids$[mid_getCsrpdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpn", "()D");
                mids$[mid_getCsrpndot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpndot", "()D");
                mids$[mid_getCsrpr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpr", "()D");
                mids$[mid_getCsrprdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrprdot", "()D");
                mids$[mid_getCsrpsrp_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpt_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpt", "()D");
                mids$[mid_getCsrptdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrptdot", "()D");
                mids$[mid_getCtdotn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtdotn", "()D");
                mids$[mid_getCtdotr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtdotr", "()D");
                mids$[mid_getCtdotrdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtdotrdot", "()D");
                mids$[mid_getCtdott_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtdott", "()D");
                mids$[mid_getCtdottdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtdottdot", "()D");
                mids$[mid_getCthrdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrn_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrn", "()D");
                mids$[mid_getCthrndot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrndot", "()D");
                mids$[mid_getCthrr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrr", "()D");
                mids$[mid_getCthrrdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrrdot", "()D");
                mids$[mid_getCthrsrp_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrt_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrt", "()D");
                mids$[mid_getCthrtdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrtdot", "()D");
                mids$[mid_getCthrthr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCtr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtr", "()D");
                mids$[mid_getCtt_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtt", "()D");
                mids$[mid_getRTNCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getRTNCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_setCdrgdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgn", "(D)V");
                mids$[mid_setCdrgndot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgndot", "(D)V");
                mids$[mid_setCdrgr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgr", "(D)V");
                mids$[mid_setCdrgrdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgrdot", "(D)V");
                mids$[mid_setCdrgt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgt", "(D)V");
                mids$[mid_setCdrgtdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgtdot", "(D)V");
                mids$[mid_setCndotn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndotn", "(D)V");
                mids$[mid_setCndotndot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndotndot", "(D)V");
                mids$[mid_setCndotr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndotr", "(D)V");
                mids$[mid_setCndotrdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndotrdot", "(D)V");
                mids$[mid_setCndott_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndott", "(D)V");
                mids$[mid_setCndottdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCndottdot", "(D)V");
                mids$[mid_setCnn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCnn", "(D)V");
                mids$[mid_setCnr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCnr", "(D)V");
                mids$[mid_setCnt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCnt", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCrdotn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrdotn", "(D)V");
                mids$[mid_setCrdotr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrdotr", "(D)V");
                mids$[mid_setCrdotrdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrdotrdot", "(D)V");
                mids$[mid_setCrdott_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrdott", "(D)V");
                mids$[mid_setCrr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrr", "(D)V");
                mids$[mid_setCsrpdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpn", "(D)V");
                mids$[mid_setCsrpndot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpndot", "(D)V");
                mids$[mid_setCsrpr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpr", "(D)V");
                mids$[mid_setCsrprdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrprdot", "(D)V");
                mids$[mid_setCsrpsrp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpt", "(D)V");
                mids$[mid_setCsrptdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrptdot", "(D)V");
                mids$[mid_setCtdotn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtdotn", "(D)V");
                mids$[mid_setCtdotr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtdotr", "(D)V");
                mids$[mid_setCtdotrdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtdotrdot", "(D)V");
                mids$[mid_setCtdott_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtdott", "(D)V");
                mids$[mid_setCtdottdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtdottdot", "(D)V");
                mids$[mid_setCthrdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrn", "(D)V");
                mids$[mid_setCthrndot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrndot", "(D)V");
                mids$[mid_setCthrr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrr", "(D)V");
                mids$[mid_setCthrrdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrrdot", "(D)V");
                mids$[mid_setCthrsrp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrt", "(D)V");
                mids$[mid_setCthrtdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrtdot", "(D)V");
                mids$[mid_setCthrthr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCtr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtr", "(D)V");
                mids$[mid_setCtt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCtt", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RTNCovariance::RTNCovariance() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble RTNCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgndot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgrdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgt_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCdrgtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgtdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndotndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotndot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotrdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndott_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCndottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndottdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCnn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCnr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCnt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnt_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCrdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCrdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCrdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotrdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCrdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdott_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpndot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrprdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrprdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrpt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpt_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCsrptdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrptdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotrdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdott_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtdottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdottdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrn_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrndot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrrdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrt_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrtdot_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr_456d9a2f64d6b28d]);
            }

            jdouble RTNCovariance::getCtt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtt_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::linear::RealMatrix RTNCovariance::getRTNCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceMatrix_7116bbecdd8ceb21]));
            }

            void RTNCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgndot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgrdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgt_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCdrgtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgtdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndotndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotndot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotrdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndott_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCndottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndottdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCnn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCnr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCnt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnt_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628], a0, a1, a2);
            }

            void RTNCovariance::setCrdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCrdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCrdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotrdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCrdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdott_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpndot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrprdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrprdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrpt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpt_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCsrptdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrptdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotrdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdott_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtdottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdottdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrn_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrndot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrrdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrt_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrtdot_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtr_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::setCtt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtt_77e0f9a1f260e2e5], a0);
            }

            void RTNCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data);
            static PyGetSetDef t_RTNCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrprdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrptdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctt),
              DECLARE_GET_FIELD(t_RTNCovariance, rTNCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovariance__methods_[] = {
              DECLARE_METHOD(t_RTNCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrprdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrptdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getRTNCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovariance, setCrdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrprdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrptdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovariance)[] = {
              { Py_tp_methods, t_RTNCovariance__methods_ },
              { Py_tp_init, (void *) t_RTNCovariance_init_ },
              { Py_tp_getset, t_RTNCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(RTNCovariance, t_RTNCovariance, RTNCovariance);

            void t_RTNCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovariance), &PY_TYPE_DEF(RTNCovariance), module, "RTNCovariance", 0);
            }

            void t_RTNCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "class_", make_descriptor(RTNCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "wrapfn_", make_descriptor(t_RTNCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovariance::initializeClass, 1)))
                return NULL;
              return t_RTNCovariance::wrap_Object(RTNCovariance(((t_RTNCovariance *) arg)->object.this$));
            }
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds)
            {
              RTNCovariance object((jobject) NULL);

              INT_CALL(object = RTNCovariance());
              self->object = object;

              return 0;
            }

            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrprdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrprdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrptdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrptdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(RTNCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrprdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrprdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrptdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrptdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
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
          mids$[mid_init$_c8e9851122b2cc76] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_991740cf003bee22] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_939d3b583033478d] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_8f630f653a46ac47] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_54cbeb883a9840f5] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMilliInWeek_456d9a2f64d6b28d] = env->getMethodID(cls, "getMilliInWeek", "()D");
          mids$[mid_getRolloverReference_d592c1a2c355eb35] = env->getStaticMethodID(cls, "getRolloverReference", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getSecondsInWeek_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondsInWeek", "()D");
          mids$[mid_getWeekNumber_f2f64475e4580546] = env->getMethodID(cls, "getWeekNumber", "()I");
          mids$[mid_setRolloverReference_cd567be04bee4d03] = env->getStaticMethodID(cls, "setRolloverReference", "(Lorg/orekit/time/DateComponents;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9851122b2cc76, a0.this$, a1.this$)) {}

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_991740cf003bee22, a0.this$, a1.this$, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_939d3b583033478d, a0, a1, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f630f653a46ac47, a0, a1, a2.this$, a3.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_54cbeb883a9840f5, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate GNSSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble GNSSDate::getMilliInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMilliInWeek_456d9a2f64d6b28d]);
      }

      ::org::orekit::time::DateComponents GNSSDate::getRolloverReference()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::DateComponents(env->callStaticObjectMethod(cls, mids$[mid_getRolloverReference_d592c1a2c355eb35]));
      }

      jdouble GNSSDate::getSecondsInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInWeek_456d9a2f64d6b28d]);
      }

      jint GNSSDate::getWeekNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getWeekNumber_f2f64475e4580546]);
      }

      void GNSSDate::setRolloverReference(const ::org::orekit::time::DateComponents & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setRolloverReference_cd567be04bee4d03], a0.this$);
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSRangeModifier::RelativisticClockOneWayGNSSRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSRangeModifier, t_RelativisticClockOneWayGNSSRangeModifier, RelativisticClockOneWayGNSSRangeModifier);

          void t_RelativisticClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSRangeModifier), module, "RelativisticClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSRangeModifier::wrap_Object(RelativisticClockOneWayGNSSRangeModifier(((t_RelativisticClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data)
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
