#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Header::class$ = NULL;
              jmethodID *SsrIgm07Header::mids$ = NULL;
              bool SsrIgm07Header::live$ = false;

              jclass SsrIgm07Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Header::SsrIgm07Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm07Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Header)[] = {
                { Py_tp_methods, t_SsrIgm07Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Header, t_SsrIgm07Header, SsrIgm07Header);

              void t_SsrIgm07Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Header), &PY_TYPE_DEF(SsrIgm07Header), module, "SsrIgm07Header", 0);
              }

              void t_SsrIgm07Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "class_", make_descriptor(SsrIgm07Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "wrapfn_", make_descriptor(t_SsrIgm07Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Header::wrap_Object(SsrIgm07Header(((t_SsrIgm07Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Header object((jobject) NULL);

                INT_CALL(object = SsrIgm07Header());
                self->object = object;

                return 0;
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
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnivariateProcessNoise::class$ = NULL;
        jmethodID *UnivariateProcessNoise::mids$ = NULL;
        bool UnivariateProcessNoise::live$ = false;

        jclass UnivariateProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnivariateProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1e001b156a10ad6c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_init$_4aef5b207af85e2e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getLofCartesianOrbitalParametersEvolution_5b53c549b006d2aa] = env->getMethodID(cls, "getLofCartesianOrbitalParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getLofType_f183bcc89f4a1412] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
            mids$[mid_getMeasurementsParametersEvolution_5b53c549b006d2aa] = env->getMethodID(cls, "getMeasurementsParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getProcessNoiseMatrix_18b28191c1378912] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagationParametersEvolution_5b53c549b006d2aa] = env->getMethodID(cls, "getPropagationParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_1e001b156a10ad6c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a5) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_4aef5b207af85e2e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getLofCartesianOrbitalParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getLofCartesianOrbitalParametersEvolution_5b53c549b006d2aa]));
        }

        ::org::orekit::frames::LOFType UnivariateProcessNoise::getLofType() const
        {
          return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_f183bcc89f4a1412]));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getMeasurementsParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersEvolution_5b53c549b006d2aa]));
        }

        ::org::orekit::orbits::PositionAngleType UnivariateProcessNoise::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        ::org::hipparchus::linear::RealMatrix UnivariateProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_18b28191c1378912], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getPropagationParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getPropagationParametersEvolution_5b53c549b006d2aa]));
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
        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args);
        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyGetSetDef t_UnivariateProcessNoise__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofCartesianOrbitalParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, measurementsParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, positionAngleType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, propagationParametersEvolution),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateProcessNoise__methods_[] = {
          DECLARE_METHOD(t_UnivariateProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofCartesianOrbitalParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getMeasurementsParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPropagationParametersEvolution, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateProcessNoise)[] = {
          { Py_tp_methods, t_UnivariateProcessNoise__methods_ },
          { Py_tp_init, (void *) t_UnivariateProcessNoise_init_ },
          { Py_tp_getset, t_UnivariateProcessNoise__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(UnivariateProcessNoise, t_UnivariateProcessNoise, UnivariateProcessNoise);

        void t_UnivariateProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateProcessNoise), &PY_TYPE_DEF(UnivariateProcessNoise), module, "UnivariateProcessNoise", 0);
        }

        void t_UnivariateProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "class_", make_descriptor(UnivariateProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "wrapfn_", make_descriptor(t_UnivariateProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateProcessNoise::initializeClass, 1)))
            return NULL;
          return t_UnivariateProcessNoise::wrap_Object(UnivariateProcessNoise(((t_UnivariateProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a5((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::frames::LOFType result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }

        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::frames::LOFType value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilterOutputStream::class$ = NULL;
    jmethodID *FilterOutputStream::mids$ = NULL;
    bool FilterOutputStream::live$ = false;

    jclass FilterOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilterOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_9601da1efb310931] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_459771b03534868e] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_9601da1efb310931, a0.this$)) {}

    void FilterOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void FilterOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_459771b03534868e], a0.this$);
    }

    void FilterOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a9fddc59b07ce512], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args);

    static PyMethodDef t_FilterOutputStream__methods_[] = {
      DECLARE_METHOD(t_FilterOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilterOutputStream)[] = {
      { Py_tp_methods, t_FilterOutputStream__methods_ },
      { Py_tp_init, (void *) t_FilterOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilterOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FilterOutputStream, t_FilterOutputStream, FilterOutputStream);

    void t_FilterOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FilterOutputStream), &PY_TYPE_DEF(FilterOutputStream), module, "FilterOutputStream", 0);
    }

    void t_FilterOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "class_", make_descriptor(FilterOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "wrapfn_", make_descriptor(t_FilterOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilterOutputStream::initializeClass, 1)))
        return NULL;
      return t_FilterOutputStream::wrap_Object(FilterOutputStream(((t_FilterOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilterOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      FilterOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = FilterOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args)
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

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Enum.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeEndpoints::class$ = NULL;
            jmethodID *AttitudeEndpoints::mids$ = NULL;
            bool AttitudeEndpoints::live$ = false;
            ::java::lang::String *AttitudeEndpoints::A2B = NULL;
            ::java::lang::String *AttitudeEndpoints::B2A = NULL;

            jclass AttitudeEndpoints::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_52f3b2bb0d5542f2] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
                mids$[mid_build_ac690f9e371807c4] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
                mids$[mid_checkExternalFrame_717ac77f176afebd] = env->getMethodID(cls, "checkExternalFrame", "(Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_checkMandatoryEntriesExceptExternalFrame_f54700913c81cb36] = env->getMethodID(cls, "checkMandatoryEntriesExceptExternalFrame", "(DLjava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_getExternalFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getExternalFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameA_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrameA", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameB_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrameB", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getSpacecraftBodyFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_isA2b_9ab94ac1dc23b105] = env->getMethodID(cls, "isA2b", "()Z");
                mids$[mid_isCompatibleWith_b5b6c5f51572ec5f] = env->getMethodID(cls, "isCompatibleWith", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;)Z");
                mids$[mid_isExternal2SpacecraftBody_9ab94ac1dc23b105] = env->getMethodID(cls, "isExternal2SpacecraftBody", "()Z");
                mids$[mid_setA2b_fcb96c98de6fad04] = env->getMethodID(cls, "setA2b", "(Z)V");
                mids$[mid_setFrameA_4755133c5c4c59be] = env->getMethodID(cls, "setFrameA", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setFrameB_4755133c5c4c59be] = env->getMethodID(cls, "setFrameB", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                A2B = new ::java::lang::String(env->getStaticObjectField(cls, "A2B", "Ljava/lang/String;"));
                B2A = new ::java::lang::String(env->getStaticObjectField(cls, "B2A", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AttitudeEndpoints::AttitudeEndpoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::orekit::attitudes::FieldAttitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_52f3b2bb0d5542f2], a0.this$, a1.this$, a2.this$));
            }

            ::org::orekit::attitudes::Attitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_ac690f9e371807c4], a0.this$, a1.this$, a2.this$));
            }

            void AttitudeEndpoints::checkExternalFrame(const ::java::lang::Enum & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkExternalFrame_717ac77f176afebd], a0.this$, a1.this$);
            }

            void AttitudeEndpoints::checkMandatoryEntriesExceptExternalFrame(jdouble a0, const ::java::lang::Enum & a1, const ::java::lang::Enum & a2, const ::java::lang::Enum & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_checkMandatoryEntriesExceptExternalFrame_f54700913c81cb36], a0, a1.this$, a2.this$, a3.this$);
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getExternalFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getExternalFrame_69d8be1b6b0a1a94]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameA() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameA_69d8be1b6b0a1a94]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameB() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameB_69d8be1b6b0a1a94]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getSpacecraftBodyFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getSpacecraftBodyFrame_69d8be1b6b0a1a94]));
            }

            jboolean AttitudeEndpoints::isA2b() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isA2b_9ab94ac1dc23b105]);
            }

            jboolean AttitudeEndpoints::isCompatibleWith(const AttitudeEndpoints & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_b5b6c5f51572ec5f], a0.this$);
            }

            jboolean AttitudeEndpoints::isExternal2SpacecraftBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isExternal2SpacecraftBody_9ab94ac1dc23b105]);
            }

            void AttitudeEndpoints::setA2b(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA2b_fcb96c98de6fad04], a0);
            }

            void AttitudeEndpoints::setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameA_4755133c5c4c59be], a0.this$);
            }

            void AttitudeEndpoints::setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameB_4755133c5c4c59be], a0.this$);
            }

            ::java::lang::String AttitudeEndpoints::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data);
            static PyGetSetDef t_AttitudeEndpoints__fields_[] = {
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, a2b),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, external2SpacecraftBody),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, externalFrame),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameA),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameB),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, spacecraftBodyFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeEndpoints__methods_[] = {
              DECLARE_METHOD(t_AttitudeEndpoints, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkMandatoryEntriesExceptExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getExternalFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameA, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameB, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getSpacecraftBodyFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isA2b, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isCompatibleWith, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, isExternal2SpacecraftBody, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, setA2b, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameA, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameB, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, toString, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeEndpoints)[] = {
              { Py_tp_methods, t_AttitudeEndpoints__methods_ },
              { Py_tp_init, (void *) t_AttitudeEndpoints_init_ },
              { Py_tp_getset, t_AttitudeEndpoints__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeEndpoints)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AttitudeEndpoints, t_AttitudeEndpoints, AttitudeEndpoints);

            void t_AttitudeEndpoints::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeEndpoints), &PY_TYPE_DEF(AttitudeEndpoints), module, "AttitudeEndpoints", 0);
            }

            void t_AttitudeEndpoints::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "class_", make_descriptor(AttitudeEndpoints::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "wrapfn_", make_descriptor(t_AttitudeEndpoints::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeEndpoints::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "A2B", make_descriptor(j2p(*AttitudeEndpoints::A2B)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "B2A", make_descriptor(j2p(*AttitudeEndpoints::B2A)));
            }

            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeEndpoints::initializeClass, 1)))
                return NULL;
              return t_AttitudeEndpoints::wrap_Object(AttitudeEndpoints(((t_AttitudeEndpoints *) arg)->object.this$));
            }
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeEndpoints::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds)
            {
              AttitudeEndpoints object((jobject) NULL);

              INT_CALL(object = AttitudeEndpoints());
              self->object = object;

              return 0;
            }

            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                  ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
                  ::org::orekit::attitudes::Attitude result((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                  if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkExternalFrame(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              jdouble a0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::lang::Enum a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Enum a3((jobject) NULL);
              PyTypeObject **p3;

              if (!parseArgs(args, "DKKK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2, &p2, ::java::lang::t_Enum::parameters_, &a3, &p3, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkMandatoryEntriesExceptExternalFrame(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkMandatoryEntriesExceptExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isA2b());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg)
            {
              AttitudeEndpoints a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", AttitudeEndpoints::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isCompatibleWith(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setA2b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA2b", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameA", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameB(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameB", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeEndpoints), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isA2b());
              Py_RETURN_BOOL(value);
            }
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setA2b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a2b", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }

            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameA", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameB(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameB", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *AbstractAnalyticalGradientConverter::mids$ = NULL;
        bool AbstractAnalyticalGradientConverter::live$ = false;

        jclass AbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPropagator_50636e1e84d390e7] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_getState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator AbstractAnalyticalGradientConverter::getPropagator(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a1) const
        {
          return ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_50636e1e84d390e7], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractAnalyticalGradientConverter::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_fba6d56f8dbc98d0]));
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
        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalGradientConverter, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_AbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalGradientConverter, t_AbstractAnalyticalGradientConverter, AbstractAnalyticalGradientConverter);

        void t_AbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalGradientConverter), &PY_TYPE_DEF(AbstractAnalyticalGradientConverter), module, "AbstractAnalyticalGradientConverter", 0);
        }

        void t_AbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "class_", make_descriptor(AbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_AbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalGradientConverter::wrap_Object(AbstractAnalyticalGradientConverter(((t_AbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > a1((jobject) NULL);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPropagator(a0, a1));
            return ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalGradientConverter), (PyObject *) self, "getState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LegendreRuleFactory::class$ = NULL;
          jmethodID *LegendreRuleFactory::mids$ = NULL;
          bool LegendreRuleFactory::live$ = false;

          jclass LegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LegendreRuleFactory::LegendreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreRuleFactory)[] = {
            { Py_tp_methods, t_LegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LegendreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LegendreRuleFactory, t_LegendreRuleFactory, LegendreRuleFactory);

          void t_LegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreRuleFactory), &PY_TYPE_DEF(LegendreRuleFactory), module, "LegendreRuleFactory", 0);
          }

          void t_LegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "class_", make_descriptor(LegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "wrapfn_", make_descriptor(t_LegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LegendreRuleFactory::wrap_Object(LegendreRuleFactory(((t_LegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LegendreRuleFactory object((jobject) NULL);

            INT_CALL(object = LegendreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TwoBodiesBaryFrame::class$ = NULL;
      jmethodID *TwoBodiesBaryFrame::mids$ = NULL;
      bool TwoBodiesBaryFrame::live$ = false;

      jclass TwoBodiesBaryFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TwoBodiesBaryFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8e55d90b2c31e510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TwoBodiesBaryFrame::TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_8e55d90b2c31e510, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_TwoBodiesBaryFrame__methods_[] = {
        DECLARE_METHOD(t_TwoBodiesBaryFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TwoBodiesBaryFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TwoBodiesBaryFrame)[] = {
        { Py_tp_methods, t_TwoBodiesBaryFrame__methods_ },
        { Py_tp_init, (void *) t_TwoBodiesBaryFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TwoBodiesBaryFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TwoBodiesBaryFrame, t_TwoBodiesBaryFrame, TwoBodiesBaryFrame);

      void t_TwoBodiesBaryFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TwoBodiesBaryFrame), &PY_TYPE_DEF(TwoBodiesBaryFrame), module, "TwoBodiesBaryFrame", 0);
      }

      void t_TwoBodiesBaryFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "class_", make_descriptor(TwoBodiesBaryFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "wrapfn_", make_descriptor(t_TwoBodiesBaryFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TwoBodiesBaryFrame::initializeClass, 1)))
          return NULL;
        return t_TwoBodiesBaryFrame::wrap_Object(TwoBodiesBaryFrame(((t_TwoBodiesBaryFrame *) arg)->object.this$));
      }
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TwoBodiesBaryFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        TwoBodiesBaryFrame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TwoBodiesBaryFrame(a0, a1));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *PowellOptimizer::class$ = NULL;
            jmethodID *PowellOptimizer::mids$ = NULL;
            bool PowellOptimizer::live$ = false;

            jclass PowellOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_init$_b6324221e091bb31] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_init$_551a2cb8b5ffa1fa] = env->getMethodID(cls, "<init>", "(DDDDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b6324221e091bb31, a0, a1, a2.this$)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::optim::ConvergenceChecker & a4) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_551a2cb8b5ffa1fa, a0, a1, a2, a3, a4.this$)) {}
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
            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args);
            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data);
            static PyGetSetDef t_PowellOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_PowellOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PowellOptimizer__methods_[] = {
              DECLARE_METHOD(t_PowellOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PowellOptimizer)[] = {
              { Py_tp_methods, t_PowellOptimizer__methods_ },
              { Py_tp_init, (void *) t_PowellOptimizer_init_ },
              { Py_tp_getset, t_PowellOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PowellOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(PowellOptimizer, t_PowellOptimizer, PowellOptimizer);
            PyObject *t_PowellOptimizer::wrap_Object(const PowellOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PowellOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PowellOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(PowellOptimizer), &PY_TYPE_DEF(PowellOptimizer), module, "PowellOptimizer", 0);
            }

            void t_PowellOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "class_", make_descriptor(PowellOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "wrapfn_", make_descriptor(t_PowellOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PowellOptimizer::initializeClass, 1)))
                return NULL;
              return t_PowellOptimizer::wrap_Object(PowellOptimizer(((t_PowellOptimizer *) arg)->object.this$));
            }
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PowellOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
                  PyTypeObject **p2;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data)
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
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearEvolution::class$ = NULL;
          jmethodID *LinearEvolution::mids$ = NULL;
          bool LinearEvolution::live$ = false;

          jclass LinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_40d7e6b32a36f1fc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCommand_3a10cc75bd070d84] = env->getMethodID(cls, "getCommand", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getControlMatrix_f77d745f2128c391] = env->getMethodID(cls, "getControlMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_f77d745f2128c391] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearEvolution::LinearEvolution(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40d7e6b32a36f1fc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector LinearEvolution::getCommand() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCommand_3a10cc75bd070d84]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getControlMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getControlMatrix_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_f77d745f2128c391]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getStateTransitionMatrix() const
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
        namespace linear {
          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data);
          static PyGetSetDef t_LinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_LinearEvolution, command),
            DECLARE_GET_FIELD(t_LinearEvolution, controlMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_LinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearEvolution__methods_[] = {
            DECLARE_METHOD(t_LinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, getCommand, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getControlMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearEvolution)[] = {
            { Py_tp_methods, t_LinearEvolution__methods_ },
            { Py_tp_init, (void *) t_LinearEvolution_init_ },
            { Py_tp_getset, t_LinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearEvolution, t_LinearEvolution, LinearEvolution);

          void t_LinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearEvolution), &PY_TYPE_DEF(LinearEvolution), module, "LinearEvolution", 0);
          }

          void t_LinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "class_", make_descriptor(LinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "wrapfn_", make_descriptor(t_LinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearEvolution::initializeClass, 1)))
              return NULL;
            return t_LinearEvolution::wrap_Object(LinearEvolution(((t_LinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            LinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = LinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data)
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
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizerId::class$ = NULL;
        jmethodID *OptimizerId::mids$ = NULL;
        bool OptimizerId::live$ = false;
        OptimizerId *OptimizerId::GAUSS_NEWTON_LU = NULL;
        OptimizerId *OptimizerId::GAUSS_NEWTON_QR = NULL;
        OptimizerId *OptimizerId::LEVENBERG_MARQUADT = NULL;

        jclass OptimizerId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizerId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_a3b779e984ade4c5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/adjustment/OptimizerId;");
            mids$[mid_values_f4fd35e606b96f2e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/adjustment/OptimizerId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GAUSS_NEWTON_LU = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_LU", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            GAUSS_NEWTON_QR = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_QR", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            LEVENBERG_MARQUADT = new OptimizerId(env->getStaticObjectField(cls, "LEVENBERG_MARQUADT", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OptimizerId OptimizerId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return OptimizerId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a3b779e984ade4c5], a0.this$));
        }

        JArray< OptimizerId > OptimizerId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< OptimizerId >(env->callStaticObjectMethod(cls, mids$[mid_values_f4fd35e606b96f2e]));
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
      namespace adjustment {
        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args);
        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_OptimizerId_values(PyTypeObject *type);
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data);
        static PyGetSetDef t_OptimizerId__fields_[] = {
          DECLARE_GET_FIELD(t_OptimizerId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OptimizerId__methods_[] = {
          DECLARE_METHOD(t_OptimizerId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, of_, METH_VARARGS),
          DECLARE_METHOD(t_OptimizerId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizerId)[] = {
          { Py_tp_methods, t_OptimizerId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OptimizerId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizerId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(OptimizerId, t_OptimizerId, OptimizerId);
        PyObject *t_OptimizerId::wrap_Object(const OptimizerId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_OptimizerId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_OptimizerId::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizerId), &PY_TYPE_DEF(OptimizerId), module, "OptimizerId", 0);
        }

        void t_OptimizerId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "class_", make_descriptor(OptimizerId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "wrapfn_", make_descriptor(t_OptimizerId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "boxfn_", make_descriptor(boxObject));
          env->getClass(OptimizerId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_LU", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_LU)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_QR", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_QR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "LEVENBERG_MARQUADT", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::LEVENBERG_MARQUADT)));
        }

        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizerId::initializeClass, 1)))
            return NULL;
          return t_OptimizerId::wrap_Object(OptimizerId(((t_OptimizerId *) arg)->object.this$));
        }
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizerId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          OptimizerId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::valueOf(a0));
            return t_OptimizerId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_OptimizerId_values(PyTypeObject *type)
        {
          JArray< OptimizerId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::values());
          return JArray<jobject>(result.this$).wrap(t_OptimizerId::wrap_jobject);
        }
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DSSTPropagatorBuilder::class$ = NULL;
        jmethodID *DSSTPropagatorBuilder::mids$ = NULL;
        bool DSSTPropagatorBuilder::live$ = false;

        jclass DSSTPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DSSTPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_437f7fba6637ef09] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_05e35caa779a7b0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_d24de896ffe1d07a] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
            mids$[mid_buildLeastSquaresModel_a6159c38c462f3f0] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/DSSTBatchLSModel;");
            mids$[mid_buildPropagator_4135970edd4a8374] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_copy_0eaaaa36958ff434] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;");
            mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_a870bf0f84eaaecb] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_getPropagationType_c479da51fc09a224] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getStateType_c479da51fc09a224] = env->getMethodID(cls, "getStateType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_resetOrbit_98cc5c663640f0ba] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_setMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_437f7fba6637ef09, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::orekit::attitudes::AttitudeProvider & a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_05e35caa779a7b0e, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        void DSSTPropagatorBuilder::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_d24de896ffe1d07a], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::DSSTBatchLSModel DSSTPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::DSSTBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_a6159c38c462f3f0], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator DSSTPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_4135970edd4a8374], a0.this$));
        }

        DSSTPropagatorBuilder DSSTPropagatorBuilder::copy() const
        {
          return DSSTPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_0eaaaa36958ff434]));
        }

        ::java::util::List DSSTPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder DSSTPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_a870bf0f84eaaecb]));
        }

        jdouble DSSTPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_c479da51fc09a224]));
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getStateType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getStateType_c479da51fc09a224]));
        }

        void DSSTPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_98cc5c663640f0ba], a0.this$, a1.this$);
        }

        void DSSTPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_8ba9fe7a847cecad], a0);
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
        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data);
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data);
        static PyGetSetDef t_DSSTPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_DSSTPropagatorBuilder, mass),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, propagationType),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, stateType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSSTPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_DSSTPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getStateType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, resetOrbit, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTPropagatorBuilder)[] = {
          { Py_tp_methods, t_DSSTPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_DSSTPropagatorBuilder_init_ },
          { Py_tp_getset, t_DSSTPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(DSSTPropagatorBuilder, t_DSSTPropagatorBuilder, DSSTPropagatorBuilder);

        void t_DSSTPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTPropagatorBuilder), &PY_TYPE_DEF(DSSTPropagatorBuilder), module, "DSSTPropagatorBuilder", 0);
        }

        void t_DSSTPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "class_", make_descriptor(DSSTPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "wrapfn_", make_descriptor(t_DSSTPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_DSSTPropagatorBuilder::wrap_Object(DSSTPropagatorBuilder(((t_DSSTPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::attitudes::AttitudeProvider a5((jobject) NULL);
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKKk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_DSSTBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          DSSTPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_DSSTPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
        }

        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            OBJ_CALL(self->object.resetOrbit(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "resetOrbit", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data)
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

        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *S1Point::class$ = NULL;
          jmethodID *S1Point::mids$ = NULL;
          bool S1Point::live$ = false;
          S1Point *S1Point::NaN = NULL;

          jclass S1Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/S1Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_8c97327622272adf] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_460c5e2d9d51c6cc] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_b74f83833fdad017] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getVector_9cb1572c1d4936cf] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NaN = new S1Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/oned/S1Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S1Point::S1Point(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          jdouble S1Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
          }

          jdouble S1Point::distance(const S1Point & a0, const S1Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_8c97327622272adf], a0.this$, a1.this$);
          }

          jboolean S1Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jboolean S1Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble S1Point::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::Space S1Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D S1Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getVector_9cb1572c1d4936cf]));
          }

          jint S1Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean S1Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
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
          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_getAlpha(t_S1Point *self);
          static PyObject *t_S1Point_getSpace(t_S1Point *self);
          static PyObject *t_S1Point_getVector(t_S1Point *self);
          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_isNaN(t_S1Point *self);
          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data);
          static PyGetSetDef t_S1Point__fields_[] = {
            DECLARE_GET_FIELD(t_S1Point, alpha),
            DECLARE_GET_FIELD(t_S1Point, naN),
            DECLARE_GET_FIELD(t_S1Point, space),
            DECLARE_GET_FIELD(t_S1Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S1Point__methods_[] = {
            DECLARE_METHOD(t_S1Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, distance, METH_O),
            DECLARE_METHOD(t_S1Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S1Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S1Point, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, isNaN, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S1Point)[] = {
            { Py_tp_methods, t_S1Point__methods_ },
            { Py_tp_init, (void *) t_S1Point_init_ },
            { Py_tp_getset, t_S1Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S1Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S1Point, t_S1Point, S1Point);

          void t_S1Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S1Point), &PY_TYPE_DEF(S1Point), module, "S1Point", 0);
          }

          void t_S1Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "class_", make_descriptor(S1Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "wrapfn_", make_descriptor(t_S1Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S1Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "NaN", make_descriptor(t_S1Point::wrap_Object(*S1Point::NaN)));
          }

          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S1Point::initializeClass, 1)))
              return NULL;
            return t_S1Point::wrap_Object(S1Point(((t_S1Point *) arg)->object.this$));
          }
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S1Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            S1Point object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = S1Point(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg)
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

          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S1Point a0((jobject) NULL);
            S1Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S1Point::initializeClass, S1Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::S1Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg)
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

          static PyObject *t_S1Point_getAlpha(t_S1Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S1Point_getSpace(t_S1Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S1Point_getVector(t_S1Point *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S1Point_isNaN(t_S1Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonIntegrator::mids$ = NULL;
        bool AdamsMoultonIntegrator::live$ = false;

        jclass AdamsMoultonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd9af9166e421ead] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_f688d28255ba75ab] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_68d979ce0da3570a] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_a753e4b9b86b52dc] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bd9af9166e421ead, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f688d28255ba75ab, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsMoultonIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegrator, t_AdamsMoultonIntegrator, AdamsMoultonIntegrator);

        void t_AdamsMoultonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegrator), &PY_TYPE_DEF(AdamsMoultonIntegrator), module, "AdamsMoultonIntegrator", 0);
        }

        void t_AdamsMoultonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "class_", make_descriptor(AdamsMoultonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegrator::wrap_Object(AdamsMoultonIntegrator(((t_AdamsMoultonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedEarthFrameProvider::class$ = NULL;
        jmethodID *EstimatedEarthFrameProvider::mids$ = NULL;
        bool EstimatedEarthFrameProvider::live$ = false;
        jdouble EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY = (jdouble) 0;

        jclass EstimatedEarthFrameProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedEarthFrameProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5fa6e9d2e3c3072] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_getEstimatedUT1_03c3c9443d7f95bb] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getPolarDriftXDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
            mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
            mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getTransform_dc749462c96219b1] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "EARTH_ANGULAR_VELOCITY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedEarthFrameProvider::EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e5fa6e9d2e3c3072, a0.this$)) {}

        ::org::orekit::time::UT1Scale EstimatedEarthFrameProvider::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_03c3c9443d7f95bb]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1]));
        }

        ::org::orekit::frames::StaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
        }

        ::org::orekit::frames::FieldStaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
        }

        ::org::orekit::frames::Transform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, jint a1, const ::java::util::Map & a2) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_dc749462c96219b1], a0.this$, a1, a2.this$));
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
        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyGetSetDef t_EstimatedEarthFrameProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, estimatedUT1),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedEarthFrameProvider__methods_[] = {
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getStaticTransform, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getTransform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedEarthFrameProvider)[] = {
          { Py_tp_methods, t_EstimatedEarthFrameProvider__methods_ },
          { Py_tp_init, (void *) t_EstimatedEarthFrameProvider_init_ },
          { Py_tp_getset, t_EstimatedEarthFrameProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedEarthFrameProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedEarthFrameProvider, t_EstimatedEarthFrameProvider, EstimatedEarthFrameProvider);

        void t_EstimatedEarthFrameProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedEarthFrameProvider), &PY_TYPE_DEF(EstimatedEarthFrameProvider), module, "EstimatedEarthFrameProvider", 0);
        }

        void t_EstimatedEarthFrameProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "class_", make_descriptor(EstimatedEarthFrameProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "wrapfn_", make_descriptor(t_EstimatedEarthFrameProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedEarthFrameProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "EARTH_ANGULAR_VELOCITY", make_descriptor(EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY));
        }

        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 1)))
            return NULL;
          return t_EstimatedEarthFrameProvider::wrap_Object(EstimatedEarthFrameProvider(((t_EstimatedEarthFrameProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::UT1Scale a0((jobject) NULL);
          EstimatedEarthFrameProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
          {
            INT_CALL(object = EstimatedEarthFrameProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::StaticTransform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::java::util::Map a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "KIK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0, a1, a2));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/gnss/DOP.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ElevationMask.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOPComputer::class$ = NULL;
      jmethodID *DOPComputer::mids$ = NULL;
      bool DOPComputer::live$ = false;
      jdouble DOPComputer::DOP_MIN_ELEVATION = (jdouble) 0;

      jclass DOPComputer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOPComputer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_41f2bc592159d036] = env->getMethodID(cls, "compute", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/gnss/DOP;");
          mids$[mid_create_ebe106ca9111f890] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_getElevationMask_ff9e909fac3867c7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
          mids$[mid_getMinElevation_b74f83833fdad017] = env->getMethodID(cls, "getMinElevation", "()D");
          mids$[mid_withElevationMask_f274aee01d896fe8] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_withMinElevation_2ff824698bb07c27] = env->getMethodID(cls, "withMinElevation", "(D)Lorg/orekit/gnss/DOPComputer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DOP_MIN_ELEVATION = env->getStaticDoubleField(cls, "DOP_MIN_ELEVATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::DOP DOPComputer::compute(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::List & a1) const
      {
        return ::org::orekit::gnss::DOP(env->callObjectMethod(this$, mids$[mid_compute_41f2bc592159d036], a0.this$, a1.this$));
      }

      DOPComputer DOPComputer::create(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::bodies::GeodeticPoint & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DOPComputer(env->callStaticObjectMethod(cls, mids$[mid_create_ebe106ca9111f890], a0.this$, a1.this$));
      }

      ::org::orekit::utils::ElevationMask DOPComputer::getElevationMask() const
      {
        return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_ff9e909fac3867c7]));
      }

      jdouble DOPComputer::getMinElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinElevation_b74f83833fdad017]);
      }

      DOPComputer DOPComputer::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withElevationMask_f274aee01d896fe8], a0.this$));
      }

      DOPComputer DOPComputer::withMinElevation(jdouble a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withMinElevation_2ff824698bb07c27], a0));
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
      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args);
      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self);
      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self);
      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data);
      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data);
      static PyGetSetDef t_DOPComputer__fields_[] = {
        DECLARE_GET_FIELD(t_DOPComputer, elevationMask),
        DECLARE_GET_FIELD(t_DOPComputer, minElevation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOPComputer__methods_[] = {
        DECLARE_METHOD(t_DOPComputer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, compute, METH_VARARGS),
        DECLARE_METHOD(t_DOPComputer, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, getElevationMask, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, getMinElevation, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, withElevationMask, METH_O),
        DECLARE_METHOD(t_DOPComputer, withMinElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOPComputer)[] = {
        { Py_tp_methods, t_DOPComputer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DOPComputer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOPComputer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOPComputer, t_DOPComputer, DOPComputer);

      void t_DOPComputer::install(PyObject *module)
      {
        installType(&PY_TYPE(DOPComputer), &PY_TYPE_DEF(DOPComputer), module, "DOPComputer", 0);
      }

      void t_DOPComputer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "class_", make_descriptor(DOPComputer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "wrapfn_", make_descriptor(t_DOPComputer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "boxfn_", make_descriptor(boxObject));
        env->getClass(DOPComputer::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "DOP_MIN_ELEVATION", make_descriptor(DOPComputer::DOP_MIN_ELEVATION));
      }

      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOPComputer::initializeClass, 1)))
          return NULL;
        return t_DOPComputer::wrap_Object(DOPComputer(((t_DOPComputer *) arg)->object.this$));
      }
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOPComputer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::gnss::DOP result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0, a1));
          return ::org::orekit::gnss::t_DOP::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::gnss::DOPComputer::create(a0, a1));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self)
      {
        ::org::orekit::utils::ElevationMask result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
      }

      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg)
      {
        ::org::orekit::utils::ElevationMask a0((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withElevationMask(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg)
      {
        jdouble a0;
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.withMinElevation(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMinElevation", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data)
      {
        ::org::orekit::utils::ElevationMask value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
      }

      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinElevation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *SingleParameterFitter::class$ = NULL;
      jmethodID *SingleParameterFitter::mids$ = NULL;
      bool SingleParameterFitter::live$ = false;
      jdouble SingleParameterFitter::MOON_DRACONIC_PULSATION = (jdouble) 0;
      jdouble SingleParameterFitter::SUN_PULSATION = (jdouble) 0;

      jclass SingleParameterFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/SingleParameterFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_214d4c524920bcdf] = env->getMethodID(cls, "<init>", "(DDDI[D)V");
          mids$[mid_createDefaultDut1FitterLongTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultDut1FitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultDut1FitterShortTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultDut1FitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterLongTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultNutationFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterShortTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultNutationFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterLongTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultPoleFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterShortTermPrediction_ebdd2597d89397de] = env->getStaticMethodID(cls, "createDefaultPoleFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MOON_DRACONIC_PULSATION = env->getStaticDoubleField(cls, "MOON_DRACONIC_PULSATION");
          SUN_PULSATION = env->getStaticDoubleField(cls, "SUN_PULSATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jdouble a2, jint a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_214d4c524920bcdf, a0, a1, a2, a3, a4.this$)) {}

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterLongTermPrediction_ebdd2597d89397de]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterShortTermPrediction_ebdd2597d89397de]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterLongTermPrediction_ebdd2597d89397de]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterShortTermPrediction_ebdd2597d89397de]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterLongTermPrediction_ebdd2597d89397de]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterShortTermPrediction_ebdd2597d89397de]));
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
      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type);

      static PyMethodDef t_SingleParameterFitter__methods_[] = {
        DECLARE_METHOD(t_SingleParameterFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingleParameterFitter)[] = {
        { Py_tp_methods, t_SingleParameterFitter__methods_ },
        { Py_tp_init, (void *) t_SingleParameterFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingleParameterFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingleParameterFitter, t_SingleParameterFitter, SingleParameterFitter);

      void t_SingleParameterFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SingleParameterFitter), &PY_TYPE_DEF(SingleParameterFitter), module, "SingleParameterFitter", 0);
      }

      void t_SingleParameterFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "class_", make_descriptor(SingleParameterFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "wrapfn_", make_descriptor(t_SingleParameterFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "boxfn_", make_descriptor(boxObject));
        env->getClass(SingleParameterFitter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "MOON_DRACONIC_PULSATION", make_descriptor(SingleParameterFitter::MOON_DRACONIC_PULSATION));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "SUN_PULSATION", make_descriptor(SingleParameterFitter::SUN_PULSATION));
      }

      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingleParameterFitter::initializeClass, 1)))
          return NULL;
        return t_SingleParameterFitter::wrap_Object(SingleParameterFitter(((t_SingleParameterFitter *) arg)->object.this$));
      }
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingleParameterFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > a4((jobject) NULL);
        SingleParameterFitter object((jobject) NULL);

        if (!parseArgs(args, "DDDI[D", &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEFixedStepHandler::class$ = NULL;
        jmethodID *FieldODEFixedStepHandler::mids$ = NULL;
        bool FieldODEFixedStepHandler::live$ = false;

        jclass FieldODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_5d5877f785eb24c9] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)V");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_5d5877f785eb24c9], a0.this$, a1);
        }

        void FieldODEFixedStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEFixedStepHandler, t_FieldODEFixedStepHandler, FieldODEFixedStepHandler);
        PyObject *t_FieldODEFixedStepHandler::wrap_Object(const FieldODEFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEFixedStepHandler), &PY_TYPE_DEF(FieldODEFixedStepHandler), module, "FieldODEFixedStepHandler", 0);
        }

        void t_FieldODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "class_", make_descriptor(FieldODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "wrapfn_", make_descriptor(t_FieldODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEFixedStepHandler::wrap_Object(FieldODEFixedStepHandler(((t_FieldODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args)
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
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data)
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
            mids$[mid_getIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_getRangeType_94090b97b11a7e8d] = env->getStaticMethodID(cls, "getRangeType", "(I)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_valueOf_e43c0ff1ffdcab1b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_values_816f771cae762eb3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$RangeType;");

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
          return env->callIntMethod(this$, mids$[mid_getIndicator_55546ef6a647f39b]);
        }

        CRDHeader$RangeType CRDHeader$RangeType::getRangeType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_getRangeType_94090b97b11a7e8d], a0));
        }

        CRDHeader$RangeType CRDHeader$RangeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e43c0ff1ffdcab1b], a0.this$));
        }

        JArray< CRDHeader$RangeType > CRDHeader$RangeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$RangeType >(env->callStaticObjectMethod(cls, mids$[mid_values_816f771cae762eb3]));
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
          mids$[mid_valueOf_f2c0970f35abbe16] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$Position;");
          mids$[mid_values_26e408c56d27dee3] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$Position;");

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
        return MathArrays$Position(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f2c0970f35abbe16], a0.this$));
      }

      JArray< MathArrays$Position > MathArrays$Position::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$Position >(env->callStaticObjectMethod(cls, mids$[mid_values_26e408c56d27dee3]));
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
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *RealMatrixPreservingVisitor::mids$ = NULL;
      bool RealMatrixPreservingVisitor::live$ = false;

      jclass RealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_94fe8d9ffeb50676] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void RealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      void RealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_94fe8d9ffeb50676], a0, a1, a2);
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
      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self);
      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixPreservingVisitor, t_RealMatrixPreservingVisitor, RealMatrixPreservingVisitor);

      void t_RealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixPreservingVisitor), &PY_TYPE_DEF(RealMatrixPreservingVisitor), module, "RealMatrixPreservingVisitor", 0);
      }

      void t_RealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "class_", make_descriptor(RealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_RealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixPreservingVisitor::wrap_Object(RealMatrixPreservingVisitor(((t_RealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger$FieldLoggedEvent::class$ = NULL;
        jmethodID *FieldEventsLogger$FieldLoggedEvent::mids$ = NULL;
        bool FieldEventsLogger$FieldLoggedEvent::live$ = false;

        jclass FieldEventsLogger$FieldLoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventsLogger$FieldLoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_e78af9d734a5fbe1]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventsLogger$FieldLoggedEvent::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_fba6d56f8dbc98d0]));
        }

        jboolean FieldEventsLogger$FieldLoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_9ab94ac1dc23b105]);
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
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyGetSetDef t_FieldEventsLogger$FieldLoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, increasing),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, state),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger$FieldLoggedEvent__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger$FieldLoggedEvent)[] = {
          { Py_tp_methods, t_FieldEventsLogger$FieldLoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventsLogger$FieldLoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger$FieldLoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger$FieldLoggedEvent, t_FieldEventsLogger$FieldLoggedEvent, FieldEventsLogger$FieldLoggedEvent);
        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(const FieldEventsLogger$FieldLoggedEvent& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger$FieldLoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger$FieldLoggedEvent), &PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent), module, "FieldEventsLogger$FieldLoggedEvent", 0);
        }

        void t_FieldEventsLogger$FieldLoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "class_", make_descriptor(FieldEventsLogger$FieldLoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "wrapfn_", make_descriptor(t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(FieldEventsLogger$FieldLoggedEvent(((t_FieldEventsLogger$FieldLoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/inertia/InertialForces.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        ::java::lang::Class *InertialForces::class$ = NULL;
        jmethodID *InertialForces::mids$ = NULL;
        bool InertialForces::live$ = false;

        jclass InertialForces::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/inertia/InertialForces");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialForces::InertialForces(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D InertialForces::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D InertialForces::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean InertialForces::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List InertialForces::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
      namespace inertia {
        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args);
        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self);
        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self);
        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data);
        static PyGetSetDef t_InertialForces__fields_[] = {
          DECLARE_GET_FIELD(t_InertialForces, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialForces__methods_[] = {
          DECLARE_METHOD(t_InertialForces, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_InertialForces, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_InertialForces, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialForces)[] = {
          { Py_tp_methods, t_InertialForces__methods_ },
          { Py_tp_init, (void *) t_InertialForces_init_ },
          { Py_tp_getset, t_InertialForces__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialForces)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InertialForces, t_InertialForces, InertialForces);

        void t_InertialForces::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialForces), &PY_TYPE_DEF(InertialForces), module, "InertialForces", 0);
        }

        void t_InertialForces::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "class_", make_descriptor(InertialForces::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "wrapfn_", make_descriptor(t_InertialForces::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialForces::initializeClass, 1)))
            return NULL;
          return t_InertialForces::wrap_Object(InertialForces(((t_InertialForces *) arg)->object.this$));
        }
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialForces::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          InertialForces object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            INT_CALL(object = InertialForces(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderProcessingState::class$ = NULL;
            jmethodID *CdmHeaderProcessingState::mids$ = NULL;
            bool CdmHeaderProcessingState::live$ = false;

            jclass CdmHeaderProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5be5a4e9ded7e572] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)V");
                mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeaderProcessingState::CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5be5a4e9ded7e572, a0.this$)) {}

            jboolean CdmHeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
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
            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg);

            static PyMethodDef t_CdmHeaderProcessingState__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderProcessingState)[] = {
              { Py_tp_methods, t_CdmHeaderProcessingState__methods_ },
              { Py_tp_init, (void *) t_CdmHeaderProcessingState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmHeaderProcessingState, t_CdmHeaderProcessingState, CdmHeaderProcessingState);

            void t_CdmHeaderProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderProcessingState), &PY_TYPE_DEF(CdmHeaderProcessingState), module, "CdmHeaderProcessingState", 0);
            }

            void t_CdmHeaderProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "class_", make_descriptor(CdmHeaderProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "wrapfn_", make_descriptor(t_CdmHeaderProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderProcessingState::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderProcessingState::wrap_Object(CdmHeaderProcessingState(((t_CdmHeaderProcessingState *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a0((jobject) NULL);
              PyTypeObject **p0;
              CdmHeaderProcessingState object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                INT_CALL(object = CdmHeaderProcessingState(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *AbstractUnscentedTransform::class$ = NULL;
      jmethodID *AbstractUnscentedTransform::mids$ = NULL;
      bool AbstractUnscentedTransform::live$ = false;

      jclass AbstractUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/AbstractUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_unscentedTransform_d7f36cdbc321d4e6] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_b74f83833fdad017] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractUnscentedTransform::AbstractUnscentedTransform(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      JArray< ::org::hipparchus::linear::RealVector > AbstractUnscentedTransform::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_d7f36cdbc321d4e6], a0.this$, a1.this$));
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
      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args);

      static PyMethodDef t_AbstractUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_AbstractUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractUnscentedTransform)[] = {
        { Py_tp_methods, t_AbstractUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_AbstractUnscentedTransform_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractUnscentedTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractUnscentedTransform, t_AbstractUnscentedTransform, AbstractUnscentedTransform);

      void t_AbstractUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractUnscentedTransform), &PY_TYPE_DEF(AbstractUnscentedTransform), module, "AbstractUnscentedTransform", 0);
      }

      void t_AbstractUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "class_", make_descriptor(AbstractUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "wrapfn_", make_descriptor(t_AbstractUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_AbstractUnscentedTransform::wrap_Object(AbstractUnscentedTransform(((t_AbstractUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        AbstractUnscentedTransform object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = AbstractUnscentedTransform(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmWriter::class$ = NULL;
            jmethodID *TdmWriter::mids$ = NULL;
            bool TdmWriter::live$ = false;
            jdouble TdmWriter::CCSDS_TDM_VERS = (jdouble) 0;
            jint TdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass TdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5db2abcfa66883ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
                mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_TDM_VERS = env->getStaticDoubleField(cls, "CCSDS_TDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmWriter::TdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_5db2abcfa66883ef, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args);
            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data);
            static PyGetSetDef t_TdmWriter__fields_[] = {
              DECLARE_GET_FIELD(t_TdmWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmWriter__methods_[] = {
              DECLARE_METHOD(t_TdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmWriter)[] = {
              { Py_tp_methods, t_TdmWriter__methods_ },
              { Py_tp_init, (void *) t_TdmWriter_init_ },
              { Py_tp_getset, t_TdmWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(TdmWriter, t_TdmWriter, TdmWriter);
            PyObject *t_TdmWriter::wrap_Object(const TdmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmWriter), &PY_TYPE_DEF(TdmWriter), module, "TdmWriter", 0);
            }

            void t_TdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "class_", make_descriptor(TdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "wrapfn_", make_descriptor(t_TdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "CCSDS_TDM_VERS", make_descriptor(TdmWriter::CCSDS_TDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "KVN_PADDING_WIDTH", make_descriptor(TdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmWriter::initializeClass, 1)))
                return NULL;
              return t_TdmWriter::wrap_Object(TdmWriter(((t_TdmWriter *) arg)->object.this$));
            }
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              TdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
              {
                INT_CALL(object = TdmWriter(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
                self->parameters[2] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Tdm);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenTesseralLinear::class$ = NULL;
              jmethodID *FieldHansenTesseralLinear::mids$ = NULL;
              bool FieldHansenTesseralLinear::live$ = false;

              jclass FieldHansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_67ad229e9005c233] = env->getMethodID(cls, "<init>", "(IIIIILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_baa1ed35ace5d036] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_23984a6e38b0b1f2] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_23984a6e38b0b1f2] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenTesseralLinear::FieldHansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67ad229e9005c233, a0, a1, a2, a3, a4, a5.this$)) {}

              void FieldHansenTesseralLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_baa1ed35ace5d036], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_23984a6e38b0b1f2], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_23984a6e38b0b1f2], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args);
              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data);
              static PyGetSetDef t_FieldHansenTesseralLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenTesseralLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenTesseralLinear)[] = {
                { Py_tp_methods, t_FieldHansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenTesseralLinear_init_ },
                { Py_tp_getset, t_FieldHansenTesseralLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenTesseralLinear, t_FieldHansenTesseralLinear, FieldHansenTesseralLinear);
              PyObject *t_FieldHansenTesseralLinear::wrap_Object(const FieldHansenTesseralLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenTesseralLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenTesseralLinear), &PY_TYPE_DEF(FieldHansenTesseralLinear), module, "FieldHansenTesseralLinear", 0);
              }

              void t_FieldHansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "class_", make_descriptor(FieldHansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "wrapfn_", make_descriptor(t_FieldHansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenTesseralLinear::wrap_Object(FieldHansenTesseralLinear(((t_FieldHansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                ::org::hipparchus::Field a5((jobject) NULL);
                PyTypeObject **p5;
                FieldHansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIIIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenTesseralLinear(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data)
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
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *TimeStampedCacheException::class$ = NULL;
      jmethodID *TimeStampedCacheException::mids$ = NULL;
      bool TimeStampedCacheException::live$ = false;

      jclass TimeStampedCacheException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/TimeStampedCacheException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5156a99a29d65d29] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_554667b9a6ae8d23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/errors/OrekitException;)V");
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_unwrap_a5feb75f1014fda3] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/TimeStampedCacheException;");
          mids$[mid_unwrap_4b6b5735a3621a84] = env->getStaticMethodID(cls, "unwrap", "(Lorg/orekit/errors/OrekitException;)Lorg/orekit/errors/TimeStampedCacheException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_5156a99a29d65d29, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::orekit::errors::OrekitException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_554667b9a6ae8d23, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_a5feb75f1014fda3], a0.this$));
      }

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::orekit::errors::OrekitException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_4b6b5735a3621a84], a0.this$));
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
      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_TimeStampedCacheException__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCacheException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, unwrap, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCacheException)[] = {
        { Py_tp_methods, t_TimeStampedCacheException__methods_ },
        { Py_tp_init, (void *) t_TimeStampedCacheException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCacheException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(TimeStampedCacheException, t_TimeStampedCacheException, TimeStampedCacheException);

      void t_TimeStampedCacheException::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCacheException), &PY_TYPE_DEF(TimeStampedCacheException), module, "TimeStampedCacheException", 0);
      }

      void t_TimeStampedCacheException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "class_", make_descriptor(TimeStampedCacheException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "wrapfn_", make_descriptor(t_TimeStampedCacheException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCacheException::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCacheException::wrap_Object(TimeStampedCacheException(((t_TimeStampedCacheException *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCacheException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1));
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
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1, a2));
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

      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
        }

        return callSuper(type, "unwrap", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid::class$ = NULL;
        jmethodID *Sigmoid::mids$ = NULL;
        bool Sigmoid::live$ = false;

        jclass Sigmoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid::Sigmoid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        Sigmoid::Sigmoid(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble Sigmoid::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sigmoid::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args);

        static PyMethodDef t_Sigmoid__methods_[] = {
          DECLARE_METHOD(t_Sigmoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid)[] = {
          { Py_tp_methods, t_Sigmoid__methods_ },
          { Py_tp_init, (void *) t_Sigmoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid, t_Sigmoid, Sigmoid);

        void t_Sigmoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid), &PY_TYPE_DEF(Sigmoid), module, "Sigmoid", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "Parametric", make_descriptor(&PY_TYPE_DEF(Sigmoid$Parametric)));
        }

        void t_Sigmoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "class_", make_descriptor(Sigmoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "wrapfn_", make_descriptor(t_Sigmoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid::initializeClass, 1)))
            return NULL;
          return t_Sigmoid::wrap_Object(Sigmoid(((t_Sigmoid *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sigmoid object((jobject) NULL);

              INT_CALL(object = Sigmoid());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Sigmoid object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Sigmoid(a0, a1));
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

        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args)
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
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
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
            mids$[mid_init$_c7e835482ba4bd87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
            mids$[mid_doEvent_0f4d16424f907056] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_ebd2aaa9f3eddd1a] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_81520b552cb3fa26] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_0906310a3530dddd] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEStepEndHandler;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setStepEnd_f2b4bfa0af1007e8] = env->getMethodID(cls, "setStepEnd", "(Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepEndEventState::FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7e835482ba4bd87, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldStepEndEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0f4d16424f907056], a0.this$));
        }

        jboolean FieldStepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_ebd2aaa9f3eddd1a], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldStepEndEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_81520b552cb3fa26]));
        }

        ::org::hipparchus::ode::events::FieldODEStepEndHandler FieldStepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0906310a3530dddd]));
        }

        void FieldStepEndEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
        }

        void FieldStepEndEventState::setStepEnd(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_f2b4bfa0af1007e8], a0.this$);
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
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *GeometricMean::class$ = NULL;
          jmethodID *GeometricMean::mids$ = NULL;
          bool GeometricMean::live$ = false;

          jclass GeometricMean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/GeometricMean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_2f567ea6ff0bfe8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_aggregate_5166cc86b987c86c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/GeometricMean;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_eb837c17e27d7de9] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/GeometricMean;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometricMean::GeometricMean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          GeometricMean::GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_2f567ea6ff0bfe8c, a0.this$)) {}

          void GeometricMean::aggregate(const GeometricMean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_5166cc86b987c86c], a0.this$);
          }

          void GeometricMean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          GeometricMean GeometricMean::copy() const
          {
            return GeometricMean(env->callObjectMethod(this$, mids$[mid_copy_eb837c17e27d7de9]));
          }

          jdouble GeometricMean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong GeometricMean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble GeometricMean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void GeometricMean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
        namespace moment {
          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg);
          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data);
          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data);
          static PyGetSetDef t_GeometricMean__fields_[] = {
            DECLARE_GET_FIELD(t_GeometricMean, n),
            DECLARE_GET_FIELD(t_GeometricMean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GeometricMean__methods_[] = {
            DECLARE_METHOD(t_GeometricMean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, aggregate, METH_O),
            DECLARE_METHOD(t_GeometricMean, clear, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, copy, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getN, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometricMean)[] = {
            { Py_tp_methods, t_GeometricMean__methods_ },
            { Py_tp_init, (void *) t_GeometricMean_init_ },
            { Py_tp_getset, t_GeometricMean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometricMean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(GeometricMean, t_GeometricMean, GeometricMean);

          void t_GeometricMean::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometricMean), &PY_TYPE_DEF(GeometricMean), module, "GeometricMean", 0);
          }

          void t_GeometricMean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "class_", make_descriptor(GeometricMean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "wrapfn_", make_descriptor(t_GeometricMean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometricMean::initializeClass, 1)))
              return NULL;
            return t_GeometricMean::wrap_Object(GeometricMean(((t_GeometricMean *) arg)->object.this$));
          }
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometricMean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GeometricMean object((jobject) NULL);

                INT_CALL(object = GeometricMean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::summary::SumOfLogs a0((jobject) NULL);
                GeometricMean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::summary::SumOfLogs::initializeClass, &a0))
                {
                  INT_CALL(object = GeometricMean(a0));
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

          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg)
          {
            GeometricMean a0((jobject) NULL);

            if (!parseArg(arg, "k", GeometricMean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args)
          {
            GeometricMean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_GeometricMean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args)
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

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data)
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
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIA::class$ = NULL;
        jmethodID *GPSBlockIIA::mids$ = NULL;
        bool GPSBlockIIA::live$ = false;
        jdouble GPSBlockIIA::DEFAULT_YAW_BIAS = (jdouble) 0;

        jclass GPSBlockIIA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6b8ff91f4322d951] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_getDefaultYawRate_2afcbc21f4e57ab2] = env->getStaticMethodID(cls, "getDefaultYawRate", "(I)D");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIA::GPSBlockIIA(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_6b8ff91f4322d951, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jdouble GPSBlockIIA::getDefaultYawRate(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDefaultYawRate_2afcbc21f4e57ab2], a0);
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
        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_GPSBlockIIA__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, getDefaultYawRate, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIA)[] = {
          { Py_tp_methods, t_GPSBlockIIA__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIA_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIA)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIA, t_GPSBlockIIA, GPSBlockIIA);

        void t_GPSBlockIIA::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIA), &PY_TYPE_DEF(GPSBlockIIA), module, "GPSBlockIIA", 0);
        }

        void t_GPSBlockIIA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "class_", make_descriptor(GPSBlockIIA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "wrapfn_", make_descriptor(t_GPSBlockIIA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIA::DEFAULT_YAW_BIAS));
        }

        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIA::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIA::wrap_Object(GPSBlockIIA(((t_GPSBlockIIA *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIA object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIA(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::attitude::GPSBlockIIA::getDefaultYawRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDefaultYawRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2Field::mids$ = NULL;
        bool FieldUnivariateDerivative2Field::live$ = false;

        jclass FieldUnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_43add0d5ea3aedb5] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative2Field_e3d78b0a9f58caf1] = env->getStaticMethodID(cls, "getUnivariateDerivative2Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getZero_43add0d5ea3aedb5] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_43add0d5ea3aedb5]));
        }

        ::java::lang::Class FieldUnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        FieldUnivariateDerivative2Field FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative2Field_e3d78b0a9f58caf1], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_43add0d5ea3aedb5]));
        }

        jint FieldUnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getUnivariateDerivative2Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2Field, t_FieldUnivariateDerivative2Field, FieldUnivariateDerivative2Field);
        PyObject *t_FieldUnivariateDerivative2Field::wrap_Object(const FieldUnivariateDerivative2Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2Field), &PY_TYPE_DEF(FieldUnivariateDerivative2Field), module, "FieldUnivariateDerivative2Field", 0);
        }

        void t_FieldUnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "class_", make_descriptor(FieldUnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2Field::wrap_Object(FieldUnivariateDerivative2Field(((t_FieldUnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(a0));
            return t_FieldUnivariateDerivative2Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative2Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
